// Directed Acyclic Curve locator.
//
// Problem statement
// -----------------
// Given two byte arrays X (1..10240 bytes) and Y (any length, but containing at
// least three instances of every byte value 0..255) find a directed acyclic
// curve, expressible as a single polynomial equation p(x), such that for every
// i in [1, |X|] the value p(i) is an index in Y and Y[p(i)] == X[i-1].
//
// The returned object stores the unique polynomial of degree at most N-1
// (N = |X|) that interpolates the chosen indices at the integer nodes
// 1, 2, ..., N. The polynomial can be expressed in Newton's forward-difference
// form
//
//     p(x) = sum_{k=0..N-1} d_k * C(x-1, k)
//          = d_0 + d_1*(x-1) + d_2*(x-1)(x-2)/2 + ...
//
// where d_k = Delta^k p(1) is the k-th forward difference at the first node,
// and C(m, k) = m*(m-1)*...*(m-k+1) / k! is the falling-factorial binomial.
// Storing the node values is mathematically equivalent to storing the Newton
// coefficients (one set is recoverable from the other), but is exact and bounded
// in size; the Newton coefficients are exposed for callers that want the
// closed-form equation explicitly.

#ifndef ALGORITHMS_DIRECTED_ACYCLIC_CURVE_HPP
#define ALGORITHMS_DIRECTED_ACYCLIC_CURVE_HPP

#include <array>
#include <cstdint>
#include <span>
#include <stdexcept>
#include <vector>

namespace algorithms::dac {

// Maximum length of X accepted by the locator.
inline constexpr std::size_t kMaxXLength = 10240;

// Minimum multiplicity of every byte value required to be present in Y.
inline constexpr std::size_t kRequiredMultiplicity = 3;

// The polynomial returned by CurveLocator::locate().
class CurveEquation {
public:
    CurveEquation() = default;
    explicit CurveEquation(std::vector<std::int64_t> nodes) : nodes_(std::move(nodes)) {}

    // Number of interpolation nodes (= length of X).
    std::size_t length() const noexcept { return nodes_.size(); }

    // Evaluate the polynomial at integer i in [1, length()]. Returns the Y index
    // chosen for X[i-1]. This is the exact equation value; for nodes inside the
    // interpolation range this is the polynomial's value with no rounding.
    std::size_t evaluate_at_node(std::size_t i) const;

    // Forward-difference Newton coefficients d_0..d_{N-1} computed with
    // saturating __int128 accumulators. Returns an empty vector for an empty
    // curve. May overflow std::int64_t reporting for very large N (degree
    // > ~64); callers should treat the result as informational.
    std::vector<std::int64_t> newton_coefficients() const;

    // Evaluate the Newton-form polynomial at any real x using doubles.
    // Numerically reliable only for small N; the exact answer at integer i in
    // [1, N] is given by evaluate_at_node(i).
    double evaluate(double x) const;

    // The raw chosen Y indices, j_1..j_N.
    const std::vector<std::int64_t>& nodes() const noexcept { return nodes_; }

private:
    std::vector<std::int64_t> nodes_{};
};

// Stateless locator for the directed-acyclic curve.
class CurveLocator {
public:
    // Locate the curve for (X, Y). Throws std::invalid_argument if X exceeds
    // kMaxXLength, if Y has fewer than kRequiredMultiplicity occurrences of any
    // byte value, or if Y is otherwise malformed.
    static CurveEquation locate(std::span<const std::uint8_t> x,
                                std::span<const std::uint8_t> y);

    // Validate that Y contains every byte value 0..255 at least
    // kRequiredMultiplicity times.
    static bool validate_y(std::span<const std::uint8_t> y) noexcept;

    // Verify that a curve (presumably returned by locate()) is correct for the
    // given (X, Y). Returns true iff for every i in [1, |X|] the index
    // curve.evaluate_at_node(i) is in range and Y at that index equals X[i-1].
    static bool verify(const CurveEquation& curve,
                       std::span<const std::uint8_t> x,
                       std::span<const std::uint8_t> y);

    // Stronger check: in addition to verify(), reconstruct the polynomial in
    // Newton's forward-difference form using 128-bit integer arithmetic and
    // confirm that evaluating it at integer i in [1, N] reproduces the stored
    // nodes. The Newton coefficients grow factorially with degree, so this
    // overflows __int128 once N is larger than ~60; pass a non-zero
    // max_degree to skip the polynomial check above that threshold.
    // Returns true iff verify() returns true AND the Newton round trip holds
    // for every i that falls within max_degree.
    static bool verify_equation(const CurveEquation& curve,
                                std::span<const std::uint8_t> x,
                                std::span<const std::uint8_t> y,
                                std::size_t max_degree = 60);

private:
    using PositionTable = std::array<std::vector<std::int64_t>, 256>;
    static PositionTable build_positions(std::span<const std::uint8_t> y);
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DIRECTED_ACYCLIC_CURVE_HPP
