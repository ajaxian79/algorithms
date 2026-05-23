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

std::uint64_t FloorLinearBezierStorage::persisted_size(std::uint64_t n_segments,
                                                        std::uint64_t y_length,
                                                        std::uint64_t n_nodes) noexcept {
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint64_t header = 32u;
    const std::uint64_t seg_count_field = 8u;
    const std::uint64_t per_seg = 2u *
        (static_cast<std::uint64_t>(w_x) + static_cast<std::uint64_t>(w_y));
    return header + seg_count_field + n_segments * per_seg;
}

std::uint64_t FloorLinearBezierStorage::break_even_segments(
        std::uint64_t y_length,
        std::uint64_t n_nodes) noexcept {
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint64_t per_seg = 2u *
        (static_cast<std::uint64_t>(w_x) + static_cast<std::uint64_t>(w_y));
    const std::uint64_t overhead = 40u;
    if (n_nodes <= overhead) return 0;
    return (n_nodes - overhead) / per_seg;
}

std::uint64_t LayeredBezierCoverStorage::persisted_size(
        std::uint64_t n_curves,
        std::uint64_t n_overrides,
        std::uint64_t y_length,
        std::uint64_t n_nodes) noexcept {
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint8_t w_c = BezierStorage::pick_ctrl_width(y_length);
    const std::uint8_t w_r = CurveCodec::pick_index_width(n_curves + 1);
    const std::uint64_t header = 32u;
    const std::uint64_t curve_count_field = 8u;
    const std::uint64_t override_count_field = 8u;
    const std::uint64_t per_curve = 2u * static_cast<std::uint64_t>(w_x) +
                                    2u * static_cast<std::uint64_t>(w_y) +
                                    2u * static_cast<std::uint64_t>(w_c);
    const std::uint64_t per_override = static_cast<std::uint64_t>(w_x) +
                                       static_cast<std::uint64_t>(w_r);
    return header + curve_count_field + n_curves * per_curve +
           override_count_field + n_overrides * per_override;
}

std::uint64_t LayeredBezierCoverStorage::break_even_curves_no_overrides(
        std::uint64_t y_length,
        std::uint64_t n_nodes) noexcept {
    const std::uint8_t w_x = CurveCodec::pick_index_width(n_nodes + 1);
    const std::uint8_t w_y = CurveCodec::pick_index_width(y_length);
    const std::uint8_t w_c = BezierStorage::pick_ctrl_width(y_length);
    const std::uint64_t per_curve = 2u * static_cast<std::uint64_t>(w_x) +
                                    2u * static_cast<std::uint64_t>(w_y) +
                                    2u * static_cast<std::uint64_t>(w_c);
    const std::uint64_t overhead = 48u;
    if (n_nodes <= overhead) return 0;
    return (n_nodes - overhead) / per_curve;
}

namespace {

double bezier_basis_y(double y0, double y1, double y2, double y3, double t) {
    const double u = 1.0 - t;
    return u * u * u * y0
         + 3.0 * u * u * t * y1
         + 3.0 * u * t * t * y2
         + t * t * t * y3;
}

std::int64_t bucket_floor(double v) noexcept {
    const double nearest = std::round(v);
    if (std::fabs(v - nearest) < 1e-9) {
        return static_cast<std::int64_t>(nearest);
    }
    return static_cast<std::int64_t>(std::floor(v));
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

std::int64_t floor_div_i128(__int128 numerator, __int128 denominator) noexcept {
    __int128 q = numerator / denominator;
    const __int128 r = numerator % denominator;
    if (r != 0 && ((r > 0) != (denominator > 0))) {
        --q;
    }
    return static_cast<std::int64_t>(q);
}

std::int64_t floor_linear_at_node(const std::vector<std::int64_t>& nodes,
                                  std::size_t a, std::size_t b,
                                  std::size_t i) noexcept {
    if (a == b) return nodes[a - 1];
    const __int128 dx = static_cast<__int128>(b - a);
    const __int128 dy = static_cast<__int128>(nodes[b - 1] - nodes[a - 1]);
    const __int128 numerator =
        static_cast<__int128>(nodes[a - 1]) * dx +
        dy * static_cast<__int128>(i - a);
    return floor_div_i128(numerator, dx);
}

bool floor_line_hits_range(const std::vector<std::int64_t>& nodes,
                           std::size_t a, std::size_t b) noexcept {
    if (a >= b) return true;
    for (std::size_t i = a + 1; i <= b - 1; ++i) {
        if (floor_linear_at_node(nodes, a, b, i) != nodes[i - 1]) {
            return false;
        }
    }
    return true;
}

LinearBezierSegment make_linear_segment(const std::vector<std::int64_t>& nodes,
                                        std::size_t a, std::size_t b) noexcept {
    LinearBezierSegment seg;
    seg.x0 = static_cast<double>(a);
    seg.y0 = static_cast<double>(nodes[a - 1]);
    seg.x1 = static_cast<double>(b);
    seg.y1 = static_cast<double>(nodes[b - 1]);
    seg.i_start = a;
    seg.i_end = b;
    return seg;
}

bool cubic_floor_hits_range(const std::vector<std::int64_t>& nodes,
                            const BezierSegment& seg) noexcept {
    for (std::size_t i = seg.i_start; i <= seg.i_end; ++i) {
        const double span = static_cast<double>(seg.i_end - seg.i_start);
        const double t = span == 0.0 ? 0.0
            : static_cast<double>(i - seg.i_start) / span;
        const double v = bezier_basis_y(seg.y0, seg.y1, seg.y2, seg.y3, t);
        if (bucket_floor(v) != nodes[i - 1]) {
            return false;
        }
    }
    return true;
}

std::vector<std::size_t> cubic_floor_hits(const std::vector<std::int64_t>& nodes,
                                          const BezierSegment& seg) {
    std::vector<std::size_t> hits;
    hits.reserve(seg.i_end - seg.i_start + 1u);
    for (std::size_t i = seg.i_start; i <= seg.i_end; ++i) {
        const double span = static_cast<double>(seg.i_end - seg.i_start);
        const double t = span == 0.0 ? 0.0
            : static_cast<double>(i - seg.i_start) / span;
        const double v = bezier_basis_y(seg.y0, seg.y1, seg.y2, seg.y3, t);
        if (bucket_floor(v) == nodes[i - 1]) {
            hits.push_back(i);
        }
    }
    return hits;
}

struct CoverCandidate {
    BezierSegment curve;
    std::vector<std::size_t> hits;
};

CoverCandidate make_cubic_candidate(const std::vector<std::int64_t>& nodes,
                                    std::size_t a, std::size_t b) {
    double ignored = 0.0;
    CoverCandidate c;
    c.curve = fit_segment(nodes, a, b, ignored);
    c.hits = cubic_floor_hits(nodes, c.curve);
    return c;
}

void compute_layer_overrides(const std::vector<std::int64_t>& nodes,
                             LayeredBezierCoverFitter::Result& result) {
    struct Active {
        double y;
        bool hit;
    };
    std::vector<std::vector<Active>> active_by_node(nodes.size() + 1);
    for (const auto& curve : result.curves) {
        const std::size_t start = std::max<std::size_t>(1, curve.i_start);
        const std::size_t end = std::min(nodes.size(), curve.i_end);
        for (std::size_t i = start; i <= end; ++i) {
            const double span = static_cast<double>(curve.i_end - curve.i_start);
            const double t = span == 0.0 ? 0.0
                : static_cast<double>(i - curve.i_start) / span;
            const double y = bezier_basis_y(curve.y0, curve.y1, curve.y2, curve.y3, t);
            active_by_node[i].push_back({y, bucket_floor(y) == nodes[i - 1]});
        }
    }

    result.overrides.clear();
    result.max_rank = 0;
    for (std::size_t i = 1; i <= nodes.size(); ++i) {
        auto& active = active_by_node[i];
        std::sort(active.begin(), active.end(),
                  [](const Active& a, const Active& b) { return a.y < b.y; });
        for (std::size_t rank = 0; rank < active.size(); ++rank) {
            if (!active[rank].hit) continue;
            if (rank != 0) {
                result.overrides.push_back({i, rank});
                result.max_rank = std::max(result.max_rank, rank);
            }
            break;
        }
    }
}

void observe_curve_points(LayeredBezierCoverFitter::Result& result,
                          std::size_t points,
                          std::size_t& hit_total) noexcept {
    result.min_points_per_curve = result.curves.size() == 1
        ? points
        : std::min(result.min_points_per_curve, points);
    result.max_points_per_curve =
        std::max(result.max_points_per_curve, points);
    hit_total += points;
}

bool allowed_candidate_points(std::size_t points,
                              std::size_t n,
                              const LayeredBezierCoverFitter::Options& options) noexcept {
    if (n == 1) return points == 1;
    return points >= options.min_points_per_curve &&
           points <= options.max_points_per_curve;
}

LayeredBezierCoverFitter::Result fit_layered_exact(
        const std::vector<std::int64_t>& nodes,
        const LayeredBezierCoverFitter::Options& options) {
    LayeredBezierCoverFitter::Result result;
    const std::size_t n = nodes.size();
    std::vector<CoverCandidate> candidates;
    candidates.reserve(n * std::min(n, options.max_span));
    for (std::size_t a = 1; a <= n; ++a) {
        const std::size_t upper = std::min(n, a + options.max_span);
        for (std::size_t b = a; b <= upper; ++b) {
            auto c = make_cubic_candidate(nodes, a, b);
            if (allowed_candidate_points(c.hits.size(), n, options)) {
                candidates.push_back(std::move(c));
            }
        }
    }

    std::vector<bool> covered(n + 1, false);
    std::size_t covered_count = 0;
    std::size_t hit_total = 0;
    while (covered_count < n) {
        const CoverCandidate* best = nullptr;
        std::size_t best_new = 0;
        for (const auto& c : candidates) {
            std::size_t fresh = 0;
            for (std::size_t i : c.hits) {
                if (!covered[i]) ++fresh;
            }
            if (fresh > best_new ||
                (fresh == best_new && best &&
                 c.hits.size() > best->hits.size())) {
                best = &c;
                best_new = fresh;
            }
        }
        if (!best || best_new == 0) break;
        result.curves.push_back(best->curve);
        observe_curve_points(result, best->hits.size(), hit_total);
        for (std::size_t i : best->hits) {
            if (!covered[i]) {
                covered[i] = true;
                ++covered_count;
            }
        }
    }

    for (std::size_t i = 1; i <= n; ++i) {
        if (covered[i]) continue;
        double ignored = 0.0;
        if (n == 1) {
            result.curves.push_back(fit_segment(nodes, i, i, ignored));
            observe_curve_points(result, 1u, hit_total);
        } else {
            const std::size_t a = i == 1 ? 1u : i - 1u;
            const std::size_t b = i == 1 ? 2u : i;
            result.curves.push_back(fit_segment(nodes, a, b, ignored));
            observe_curve_points(result, 2u, hit_total);
        }
    }

    result.mean_points_per_curve = result.curves.empty() ? 0.0
        : static_cast<double>(hit_total) /
          static_cast<double>(result.curves.size());
    compute_layer_overrides(nodes, result);
    return result;
}

LayeredBezierCoverFitter::Result fit_layered_contiguous(
        const std::vector<std::int64_t>& nodes,
        const LayeredBezierCoverFitter::Options& options) {
    LayeredBezierCoverFitter::Result result;
    const std::size_t n = nodes.size();
    std::size_t hit_total = 0;
    for (std::size_t start = 1; start <= n; ) {
        if (start == n && n > 1) {
            double ignored = 0.0;
            result.curves.push_back(fit_segment(nodes, n - 1u, n, ignored));
            observe_curve_points(result, 2u, hit_total);
            break;
        }
        const std::size_t upper = std::min(
            n, start + options.max_points_per_curve - 1u);
        const std::size_t lower = std::min(
            upper, start + options.min_points_per_curve - 1u);
        BezierSegment best{};
        std::size_t best_end = start;
        for (std::size_t end = upper; end >= lower; --end) {
            double ignored = 0.0;
            auto candidate = fit_segment(nodes, start, end, ignored);
            if (cubic_floor_hits_range(nodes, candidate)) {
                best = candidate;
                best_end = end;
                break;
            }
            if (end == lower) break;
        }
        if (best_end == start) {
            double ignored = 0.0;
            best = fit_segment(nodes, start, start, ignored);
        }
        result.curves.push_back(best);
        const std::size_t count = best_end - start + 1u;
        observe_curve_points(result, count, hit_total);
        start = best_end + 1u;
    }
    result.mean_points_per_curve = result.curves.empty() ? 0.0
        : static_cast<double>(hit_total) /
          static_cast<double>(result.curves.size());
    compute_layer_overrides(nodes, result);
    return result;
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

double FloorLinearBezierFitter::evaluate_y(const LinearBezierSegment& s,
                                           double x) noexcept {
    if (s.i_start == s.i_end) return s.y0;
    const double span = s.x1 - s.x0;
    if (span == 0.0) return s.y0;
    const double t = (x - s.x0) / span;
    return s.y0 + (s.y1 - s.y0) * t;
}

bool FloorLinearBezierFitter::verify_segment(const LinearBezierSegment& s,
                                             const CurveEquation& curve) noexcept {
    const auto& nodes = curve.nodes();
    if (s.i_start == 0 || s.i_end == 0 ||
        s.i_start > s.i_end || s.i_end > nodes.size()) {
        return false;
    }
    if (s.y0 != static_cast<double>(nodes[s.i_start - 1]) ||
        s.y1 != static_cast<double>(nodes[s.i_end - 1])) {
        return false;
    }
    return floor_line_hits_range(nodes, s.i_start, s.i_end);
}

FloorLinearBezierFitter::Result FloorLinearBezierFitter::fit(
        const CurveEquation& curve) {
    Result result;
    const auto& nodes = curve.nodes();
    const std::size_t n = nodes.size();
    if (n == 0) return result;

    std::size_t covered = 0;
    for (std::size_t start = 1; start <= n; ) {
        std::size_t best = start;
        for (std::size_t end = n; end > start; --end) {
            if (floor_line_hits_range(nodes, start, end)) {
                best = end;
                break;
            }
        }

        auto seg = make_linear_segment(nodes, start, best);
        const std::size_t count = seg.covered_points();
        covered += count;
        result.max_cluster_points = std::max(result.max_cluster_points, count);
        result.segments.push_back(seg);
        start = best + 1;
    }

    result.mean_cluster_points = result.segments.empty() ? 0.0
        : static_cast<double>(covered) /
          static_cast<double>(result.segments.size());
    return result;
}

LayeredBezierCoverFitter::Result LayeredBezierCoverFitter::fit(
        const CurveEquation& curve) {
    return fit(curve, Options{});
}

LayeredBezierCoverFitter::Result LayeredBezierCoverFitter::fit(
        const CurveEquation& curve,
        Options options) {
    if (options.max_span == 0) options.max_span = 1;
    if (options.min_points_per_curve == 0) options.min_points_per_curve = 1;
    if (options.max_points_per_curve < options.min_points_per_curve) {
        options.max_points_per_curve = options.min_points_per_curve;
    }
    const auto& nodes = curve.nodes();
    if (nodes.empty()) return {};
    if (nodes.size() <= options.exact_cover_node_limit) {
        return fit_layered_exact(nodes, options);
    }
    return fit_layered_contiguous(nodes, options);
}

}  // namespace algorithms::dac
