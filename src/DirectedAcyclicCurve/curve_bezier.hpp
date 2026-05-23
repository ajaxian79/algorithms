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

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DAC_CURVE_BEZIER_HPP
