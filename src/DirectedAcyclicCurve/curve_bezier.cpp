#include "curve_bezier.hpp"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <vector>

#include "curve_codec.hpp"  // CurveCodec::pick_index_width

namespace algorithms::dac {

std::uint8_t BezierStorage::pick_ctrl_width(std::uint64_t y_length) noexcept {
    // Smallest signed power-of-two byte width whose representable range
    // [-2^(8w-1), 2^(8w-1)) covers 4 * y_length. 4x leaves headroom for
    // least-squares overshoot beyond the [0, y_length) interval.
    const std::uint64_t need = (y_length == 0) ? 1 : (y_length * 4);
    if (need <= 0x7FFFu) return 2;                       // int16
    if (need <= 0x7FFFFFFFull) return 4;                 // int32
    return 8;                                            // int64
}

std::uint64_t BezierStorage::persisted_size(std::uint64_t n_segments,
                                             std::uint64_t y_length,
                                             std::uint64_t n_nodes) noexcept {
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint8_t w_c = pick_ctrl_width(y_length);
    const std::uint64_t header = 32u;
    const std::uint64_t seg_count_field = 8u;
    const std::uint64_t first_seg_extra = static_cast<std::uint64_t>(w_x) +
                                          static_cast<std::uint64_t>(w_y);
    const std::uint64_t per_seg = static_cast<std::uint64_t>(w_x) +
                                  2u * static_cast<std::uint64_t>(w_c) +
                                  static_cast<std::uint64_t>(w_y);
    return header + seg_count_field + first_seg_extra + n_segments * per_seg;
}

std::uint64_t BezierStorage::break_even_segments(std::uint64_t y_length,
                                                  std::uint64_t n_nodes) noexcept {
    // Solve: persisted_size(S, y_length, n_nodes) = n_nodes
    // n_nodes = 40 + W_x + W_y + S * per_seg
    // S = max(0, (n_nodes - 40 - W_x - W_y) / per_seg)
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint8_t w_c = pick_ctrl_width(y_length);
    const std::uint64_t per_seg = static_cast<std::uint64_t>(w_x) +
                                  2u * static_cast<std::uint64_t>(w_c) +
                                  static_cast<std::uint64_t>(w_y);
    const std::uint64_t overhead = 40u + static_cast<std::uint64_t>(w_x) +
                                   static_cast<std::uint64_t>(w_y);
    if (n_nodes <= overhead) return 0;
    return (n_nodes - overhead) / per_seg;
}

namespace {

double bezier_basis_y(double y0, double y1, double y2, double y3, double t) {
    const double u = 1.0 - t;
    return u * u * u * y0
         + 3.0 * u * u * t * y1
         + 3.0 * u * t * t * y2
         + t * t * t * y3;
}

// Fit y1, y2 (the inner control point y-values) for a segment spanning nodes
// [a..b] (inclusive, 1-based) of `nodes`. Returns the segment plus the max
// |B(t_k) - j_k| residual observed over interior nodes k in (a, b).
BezierSegment fit_segment(const std::vector<std::int64_t>& nodes,
                          std::size_t a, std::size_t b,
                          double& max_residual_out) {
    const double y0 = static_cast<double>(nodes[a - 1]);
    const double y3 = static_cast<double>(nodes[b - 1]);
    const double dx = static_cast<double>(b - a);

    // Build the 2x2 normal equations for least-squares fit of (y1, y2) given
    // the endpoint y0, y3 and the interior samples (t_k, j_k).
    double a11 = 0.0, a12 = 0.0, a22 = 0.0;
    double r1 = 0.0, r2 = 0.0;
    if (b > a + 1) {
        for (std::size_t k = a + 1; k <= b - 1; ++k) {
            const double t = static_cast<double>(k - a) / dx;
            const double u = 1.0 - t;
            const double b1 = 3.0 * u * u * t;
            const double b2 = 3.0 * u * t * t;
            const double endpoint_contrib = u * u * u * y0 + t * t * t * y3;
            const double rhs = static_cast<double>(nodes[k - 1]) - endpoint_contrib;
            a11 += b1 * b1;
            a12 += b1 * b2;
            a22 += b2 * b2;
            r1  += b1 * rhs;
            r2  += b2 * rhs;
        }
    }

    double y1, y2;
    const double det = a11 * a22 - a12 * a12;
    if (b <= a + 1 || std::fabs(det) < 1e-18) {
        // No interior samples (or degenerate normal equations): place the
        // inner controls along the chord. This is exact when there are no
        // interior nodes to satisfy and keeps tangent direction continuous.
        y1 = y0 + (y3 - y0) * (1.0 / 3.0);
        y2 = y0 + (y3 - y0) * (2.0 / 3.0);
    } else {
        y1 = (a22 * r1 - a12 * r2) / det;
        y2 = (a11 * r2 - a12 * r1) / det;
    }

    // Score residuals at every interior node.
    double max_resid = 0.0;
    if (b > a + 1) {
        for (std::size_t k = a + 1; k <= b - 1; ++k) {
            const double t = static_cast<double>(k - a) / dx;
            const double v = bezier_basis_y(y0, y1, y2, y3, t);
            const double err = std::fabs(v - static_cast<double>(nodes[k - 1]));
            if (err > max_resid) max_resid = err;
        }
    }
    max_residual_out = max_resid;

    BezierSegment seg;
    seg.x0 = static_cast<double>(a);
    seg.y0 = y0;
    seg.x1 = static_cast<double>(a) + dx * (1.0 / 3.0);
    seg.y1 = y1;
    seg.x2 = static_cast<double>(a) + dx * (2.0 / 3.0);
    seg.y2 = y2;
    seg.x3 = static_cast<double>(b);
    seg.y3 = y3;
    seg.i_start = a;
    seg.i_end = b;
    return seg;
}

// Recursive Schneider-style fit. Appends to `out`. Returns the max residual
// observed within this subrange (after subdivision).
double fit_recursive(const std::vector<std::int64_t>& nodes,
                     std::size_t a, std::size_t b, double tolerance,
                     std::vector<BezierSegment>& out) {
    double max_resid = 0.0;
    BezierSegment seg = fit_segment(nodes, a, b, max_resid);
    if (max_resid <= tolerance || b <= a + 1) {
        out.push_back(seg);
        return max_resid;
    }

    // Find the node with maximum error and split there.
    const double y0 = static_cast<double>(nodes[a - 1]);
    const double y3 = static_cast<double>(nodes[b - 1]);
    const double dx = static_cast<double>(b - a);
    std::size_t split = a + (b - a) / 2;
    double worst = -1.0;
    for (std::size_t k = a + 1; k <= b - 1; ++k) {
        const double t = static_cast<double>(k - a) / dx;
        const double v = bezier_basis_y(y0, seg.y1, seg.y2, y3, t);
        const double err = std::fabs(v - static_cast<double>(nodes[k - 1]));
        if (err > worst) {
            worst = err;
            split = k;
        }
    }
    if (split == a) split = a + 1;
    if (split == b) split = b - 1;

    const double left_resid  = fit_recursive(nodes, a, split, tolerance, out);
    const double right_resid = fit_recursive(nodes, split, b, tolerance, out);
    return std::max(left_resid, right_resid);
}

}  // namespace

double BezierFitter::evaluate_y(const BezierSegment& s, double t) noexcept {
    return bezier_basis_y(s.y0, s.y1, s.y2, s.y3, t);
}

BezierFitter::Result BezierFitter::fit(const CurveEquation& curve, double tolerance) {
    Result result;
    const auto& nodes = curve.nodes();
    const std::size_t n = nodes.size();
    if (n == 0) return result;
    if (n == 1) {
        BezierSegment seg;
        seg.x0 = seg.x1 = seg.x2 = seg.x3 = 1.0;
        seg.y0 = seg.y1 = seg.y2 = seg.y3 = static_cast<double>(nodes[0]);
        seg.i_start = seg.i_end = 1;
        result.segments.push_back(seg);
        return result;
    }
    const double t = tolerance < 0.0 ? 0.0 : tolerance;
    result.max_residual = fit_recursive(nodes, 1, n, t, result.segments);
    return result;
}

}  // namespace algorithms::dac
