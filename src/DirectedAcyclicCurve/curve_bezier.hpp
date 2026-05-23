// Piecewise cubic Bezier fitter for a CurveEquation.
//
// The DAC curve is a vector of N integer nodes (i, j_i) with i = 1..N. This
// module finds the smallest piecewise cubic Bezier spline whose y(x) hits
// every integer node within `tolerance` (default 0.5, so rounding nearest
// recovers j_i exactly). Adjacent segments share their endpoint, so a k-
// segment fit has 3k+1 control points total - the minimisation target.
//
// Algorithm: Schneider 1990 specialised to a function y(x) (x is the integer
// index, monotone). For each candidate range [a, b]:
//   1. Endpoints P0 = (a, j_a), P3 = (b, j_b) are fixed.
//   2. The two inner control points have x-coordinates fixed at
//      a + (b-a)/3 and a + 2(b-a)/3, so we only solve for their y-values
//      (y1, y2). Parameterise each interior node by t_k = (k - a)/(b - a)
//      and solve the 2x2 normal equation min sum_k (B(t_k) - j_k)^2 for
//      (y1, y2). This is closed-form, O(b - a) per segment.
//   3. Measure max |B(t_k) - j_k| over interior nodes. If <= tolerance the
//      segment is accepted; otherwise split at the node of maximum error and
//      recurse on [a, split] and [split, b].
//
// The fit is exact at endpoints by construction; interior tolerance defaults
// to 0.5 because the originals are integers and the Vellum chart rounds to
// integer-step grid points.
//
// Output: a vector of BezierSegment {x0, y0, x1, y1, x2, y2, x3, y3}, with
// y_i in double precision; x_i are integer indices stored as doubles for
// chart-friendly emission. The total control-point count is exposed for the
// smoothness metric.

#ifndef ALGORITHMS_DAC_CURVE_BEZIER_HPP
#define ALGORITHMS_DAC_CURVE_BEZIER_HPP

#include <cstdint>
#include <vector>

#include "curve_locator.hpp"

namespace algorithms::dac {

struct BezierSegment {
    double x0, y0;  // P0 (left endpoint, on a node)
    double x1, y1;  // P1 (first inner control)
    double x2, y2;  // P2 (second inner control)
    double x3, y3;  // P3 (right endpoint, on a node)
    std::size_t i_start;  // 1-based node index of left endpoint
    std::size_t i_end;    // 1-based node index of right endpoint
};

// A two-control-point Bezier is a straight line segment. This form stores only
// the first and last DAC points in a cluster; every interior point in the
// cluster is accepted when floor(line_y(i)) == j_i. The segments are allowed to
// jump between clusters, so segment k+1 starts at the first point not covered
// by segment k instead of sharing the previous endpoint.
struct LinearBezierSegment {
    double x0, y0;  // P0 (cluster's first node)
    double x1, y1;  // P1 (cluster's last node)
    std::size_t i_start;  // 1-based node index of first covered point
    std::size_t i_end;    // 1-based node index of last covered point

    std::size_t covered_points() const noexcept {
        return i_end >= i_start ? (i_end - i_start + 1u) : 0u;
    }
};

// A three-point Bezier cluster: endpoints are the first/last DAC nodes and the
// middle point is a turn/control point. The x coordinate of the turn is fixed
// at the midpoint of the covered node range, so x(t) remains monotone and
// integer nodes can be evaluated with t = (i - start) / (end - start).
struct QuadraticBezierSegment {
    double x0, y0;  // P0 (cluster's first node)
    double x1, y1;  // P1 (turn/control point)
    double x2, y2;  // P2 (cluster's last node)
    std::size_t i_start;  // 1-based node index of first covered point
    std::size_t i_end;    // 1-based node index of last covered point

    std::size_t covered_points() const noexcept {
        return i_end >= i_start ? (i_end - i_start + 1u) : 0u;
    }
};

struct LayeredBezierOverride {
    std::size_t i;     // 1-based node index
    std::size_t rank;  // 0 = lowest active curve at i, 1 = one curve up, etc.
};

// Theoretical persisted-size accounting for a piecewise-cubic-Bezier
// representation of the DAC curve. The format we cost out is:
//
//   header        32 bytes  (matches the codec's DAC1 header)
//   seg_count     8 bytes   (uint64_t)
//   i_start_0     W_x bytes (first segment left endpoint, 1-based node index)
//   y0_0          W_y bytes (first segment left endpoint y-value)
//   per segment:
//     i_end       W_x bytes (right endpoint of this segment in node space)
//     y1          W_c bytes (first inner control y; signed)
//     y2          W_c bytes (second inner control y; signed)
//     y3          W_y bytes (right endpoint y-value)
//
// W_x = CurveCodec::pick_index_width(n_nodes + 1)   -- node index
// W_y = CurveCodec::pick_index_width(y_length)      -- Y index
// W_c = BezierStorage::pick_ctrl_width(y_length)    -- signed inner control
//
// The inner controls are solved by least squares and can range up to ~3*Y in
// magnitude, sometimes negative. W_c is sized conservatively as the smallest
// power-of-two width whose signed range covers 4*y_length.
//
// Storage = 32 + 8 + W_x + W_y + n_segments * (W_x + 2*W_c + W_y)
//
// This is a theoretical projection - we do not yet serialise. It exists so
// bench_persist + the curve report can compare the Bezier representation's
// bytes-on-the-wire against raw |X| and the existing CurveCodec output, and
// answer the convergence question: does the Bezier form ever cost less than
// raw bytes for this kind of curve?
class BezierStorage {
public:
    static std::uint8_t pick_ctrl_width(std::uint64_t y_length) noexcept;

    // Total persisted size in bytes for the described representation.
    static std::uint64_t persisted_size(std::uint64_t n_segments,
                                         std::uint64_t y_length,
                                         std::uint64_t n_nodes) noexcept;

    // Number of segments at which the Bezier representation would EXACTLY
    // match raw |X| bytes (n_nodes) on the wire. Useful as a break-even
    // signal: if a fit produces fewer segments than this, Bezier is cheaper
    // than raw; otherwise raw wins. Returns 0 if break-even is unreachable.
    static std::uint64_t break_even_segments(std::uint64_t y_length,
                                              std::uint64_t n_nodes) noexcept;
};

// Theoretical persisted-size accounting for floor-accepted, two-point Bezier
// clusters:
//
//   header        32 bytes  (matches the codec's DAC1 header)
//   seg_count     8 bytes   (uint64_t)
//   per segment:
//     i_start     W_x bytes (cluster first node index, 1-based)
//     y0          W_y bytes (cluster first Y index)
//     i_end       W_x bytes (cluster last node index, 1-based)
//     y1          W_y bytes (cluster last Y index)
//
// Storage = 32 + 8 + n_segments * 2 * (W_x + W_y)
class FloorLinearBezierStorage {
public:
    static std::uint64_t persisted_size(std::uint64_t n_segments,
                                         std::uint64_t y_length,
                                         std::uint64_t n_nodes) noexcept;

    static std::uint64_t break_even_segments(std::uint64_t y_length,
                                              std::uint64_t n_nodes) noexcept;
};

// Storage model for floor-accepted, three-point quadratic Bezier clusters:
//
//   header        32 bytes
//   seg_count      8 bytes
//   per segment:
//     i_start     W_x bytes
//     y0          W_y bytes
//     i_turn      W_x bytes
//     y1          W_c bytes (signed turn/control y)
//     i_end       W_x bytes
//     y2          W_y bytes
//
// This intentionally follows the user's point-cost framing: starting a curve
// costs two endpoint points; adding the turn/control point costs one point.
class FloorQuadraticBezierStorage {
public:
    static std::uint64_t persisted_size(std::uint64_t n_segments,
                                         std::uint64_t y_length,
                                         std::uint64_t n_nodes) noexcept;

    static std::uint64_t break_even_segments(std::uint64_t y_length,
                                              std::uint64_t n_nodes) noexcept;
};

// Storage model for a layered cubic Bezier cover:
//
//   header        32 bytes
//   curve_count    8 bytes
//   per curve:
//     i_start     W_x bytes
//     i_end       W_x bytes
//     y0          W_y bytes
//     y1          W_c bytes
//     y2          W_c bytes
//     y3          W_y bytes
//   override_count 8 bytes
//   per override:
//     i           W_x bytes
//     rank        W_r bytes  (number of curves up from the lowest active one)
//
// x1/x2 are implicit thirds between i_start and i_end. y1/y2 are signed
// controls, using the same conservative W_c as cubic Bezier storage.
class LayeredBezierCoverStorage {
public:
    static std::uint64_t persisted_size(std::uint64_t n_curves,
                                         std::uint64_t n_overrides,
                                         std::uint64_t y_length,
                                         std::uint64_t n_nodes) noexcept;

    static std::uint64_t break_even_curves_no_overrides(
        std::uint64_t y_length,
        std::uint64_t n_nodes) noexcept;
};

class BezierFitter {
public:
    struct Result {
        std::vector<BezierSegment> segments;
        // 3 * segments.size() + 1 when non-empty, 0 when empty.
        std::size_t control_point_count() const noexcept {
            return segments.empty() ? 0u : 3u * segments.size() + 1u;
        }
        // The largest |B(t_k) - j_k| observed across all interior nodes after
        // fitting. With the algorithm's tolerance gate this is <= tolerance.
        double max_residual = 0.0;
    };

    // Fit the curve with the given max per-node tolerance. Tolerance < 0 is
    // treated as 0 (forces interpolation; subdivides until every interior node
    // lies exactly on a Bezier - which for arbitrary integer noise means at
    // most one interior node per segment, so segments.size() <= N - 1 always).
    // A curve of length 0 returns an empty result; length 1 collapses to a
    // single segment with all four control points equal.
    static Result fit(const CurveEquation& curve, double tolerance = 0.5);

    // Evaluate a single segment's y at parameter t in [0, 1].
    static double evaluate_y(const BezierSegment& s, double t) noexcept;
};

class FloorLinearBezierFitter {
public:
    struct Result {
        std::vector<LinearBezierSegment> segments;
        std::size_t control_point_count() const noexcept {
            return 2u * segments.size();
        }
        std::size_t max_cluster_points = 0;
        double mean_cluster_points = 0.0;
    };

    // Greedy exact-longest clustering. From the first uncovered node, choose
    // the farthest endpoint whose straight line floor-hits every integer node
    // in the closed range [start, end], then continue at end + 1. This matches
    // the "jumps allowed between clusters" interpretation.
    static Result fit(const CurveEquation& curve);

    static double evaluate_y(const LinearBezierSegment& s, double x) noexcept;

    // True iff floor(line_y(i)) == j_i for every integer node in segment range.
    static bool verify_segment(const LinearBezierSegment& s,
                               const CurveEquation& curve) noexcept;
};

class FloorQuadraticBezierFitter {
public:
    struct Options {
        // Bound the greedy endpoint search. Quadratic turn clusters are meant
        // to test whether one extra stored point can cover more than the 2-5
        // point cubic windows without making corpus-scale runs quadratic.
        std::size_t max_cluster_points = 9;
    };

    struct Result {
        std::vector<QuadraticBezierSegment> segments;
        std::size_t control_point_count() const noexcept {
            return 3u * segments.size();
        }
        std::size_t max_cluster_points = 0;
        double mean_cluster_points = 0.0;
    };

    static Result fit(const CurveEquation& curve);
    static Result fit(const CurveEquation& curve, Options options);

    static double evaluate_y(const QuadraticBezierSegment& s,
                             double t) noexcept;

    // True iff floor(quadratic_y(i)) == j_i for every integer node in range.
    static bool verify_segment(const QuadraticBezierSegment& s,
                               const CurveEquation& curve) noexcept;
};

class LayeredBezierCoverFitter {
public:
    struct Result {
        std::vector<BezierSegment> curves;
        std::vector<LayeredBezierOverride> overrides;
        std::size_t min_points_per_curve = 0;
        std::size_t max_points_per_curve = 0;
        double mean_points_per_curve = 0.0;
        std::size_t max_rank = 0;
    };

    struct Options {
        // Candidate endpoint search window. Large enough to find visual chart
        // clusters; bounded so 10k-node benchmark cases stay tractable.
        std::size_t max_span = 64;
        // Count only target nodes whose floor bucket is hit by the candidate.
        // Except for the degenerate one-node curve, every stored curve is
        // constrained to hit between these bounds.
        std::size_t min_points_per_curve = 2;
        std::size_t max_points_per_curve = 5;
        // Use the overlapping greedy set-cover search for small curves. Larger
        // curves fall back to a contiguous greedy search using the same bucket
        // rule; the storage model still supports overrides.
        std::size_t exact_cover_node_limit = 512;
    };

    // Cover the curve with two-anchor cubic Beziers. A candidate curve accepts
    // a node when floor(B(i)) == j_i. At decode time, rank 0 means the lowest
    // active curve at i; overrides store the rank above the lowest curve.
    static Result fit(const CurveEquation& curve);
    static Result fit(const CurveEquation& curve, Options options);
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DAC_CURVE_BEZIER_HPP
