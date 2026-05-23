#include "curve_locator.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>

namespace algorithms::dac {

namespace {

// Compute Y[p(i)] using Newton-form forward differences in __int128. For every
// i in [1, N] the result is exact provided the running accumulator stays inside
// 128 signed bits; the polynomial degree at which this would overflow exceeds
// 60+ for Y indices bounded by ~10K and N up to 10240, but the verify() path
// uses this only as a redundant equation check.
__int128 newton_eval_int128(const std::vector<__int128>& diffs, std::int64_t i) {
    // diffs[k] = Delta^k p(1).  p(i) = sum_k diffs[k] * C(i-1, k).
    // Compute C(i-1, k) running:  C(i-1, 0) = 1; C(i-1, k+1) = C(i-1, k) * (i-1-k) / (k+1).
    __int128 binom = 1;
    __int128 acc = 0;
    const __int128 m = static_cast<__int128>(i - 1);
    const std::size_t max_k = diffs.size();
    for (std::size_t k = 0; k < max_k; ++k) {
        acc += diffs[k] * binom;
        // Stop early once the binomial vanishes (k == i-1 means the next is 0).
        if (k + 1 > static_cast<std::size_t>(i - 1)) {
            break;
        }
        binom *= (m - static_cast<__int128>(k));
        binom /= static_cast<__int128>(k + 1);
    }
    return acc;
}

std::vector<__int128> compute_newton_diffs_int128(const std::vector<std::int64_t>& nodes) {
    // Standard forward-difference triangle reduced to the leading column.
    const std::size_t n = nodes.size();
    std::vector<__int128> row;
    row.reserve(n);
    for (std::int64_t v : nodes) {
        row.push_back(static_cast<__int128>(v));
    }
    std::vector<__int128> coefficients;
    coefficients.reserve(n);
    if (!row.empty()) {
        coefficients.push_back(row[0]);
    }
    for (std::size_t k = 1; k < n; ++k) {
        for (std::size_t m = 0; m + 1 < n - k + 1; ++m) {
            row[m] = row[m + 1] - row[m];
        }
        coefficients.push_back(row[0]);
    }
    return coefficients;
}

}  // namespace

std::size_t CurveEquation::evaluate_at_node(std::size_t i) const {
    if (i == 0 || i > nodes_.size()) {
        throw std::out_of_range("CurveEquation::evaluate_at_node: i out of range");
    }
    return static_cast<std::size_t>(nodes_[i - 1]);
}

std::vector<std::int64_t> CurveEquation::newton_coefficients() const {
    auto big = compute_newton_diffs_int128(nodes_);
    std::vector<std::int64_t> out;
    out.reserve(big.size());
    for (auto c : big) {
        // Saturating narrow cast: callers using this representation are
        // expected to keep N small enough for int64 to hold the coefficients.
        out.push_back(static_cast<std::int64_t>(c));
    }
    return out;
}

double CurveEquation::evaluate(double x) const {
    if (nodes_.empty()) {
        return 0.0;
    }
    auto diffs = compute_newton_diffs_int128(nodes_);
    double binom = 1.0;
    double acc = 0.0;
    const double m = x - 1.0;
    for (std::size_t k = 0; k < diffs.size(); ++k) {
        acc += static_cast<double>(diffs[k]) * binom;
        binom *= (m - static_cast<double>(k));
        binom /= static_cast<double>(k + 1);
    }
    return acc;
}

bool CurveLocator::validate_y(std::span<const std::uint8_t> y) noexcept {
    std::array<std::size_t, 256> counts{};
    for (std::uint8_t b : y) {
        ++counts[b];
    }
    for (std::size_t c : counts) {
        if (c < kRequiredMultiplicity) {
            return false;
        }
    }
    return true;
}

CurveLocator::PositionTable CurveLocator::build_positions(std::span<const std::uint8_t> y) {
    PositionTable table{};
    for (std::int64_t k = 0; k < static_cast<std::int64_t>(y.size()); ++k) {
        table[y[static_cast<std::size_t>(k)]].push_back(k);
    }
    return table;
}

CurveEquation CurveLocator::locate(std::span<const std::uint8_t> x,
                                   std::span<const std::uint8_t> y) {
    if (x.size() > kMaxXLength) {
        throw std::invalid_argument("CurveLocator::locate: X exceeds kMaxXLength");
    }
    if (!validate_y(y)) {
        throw std::invalid_argument(
            "CurveLocator::locate: Y must contain >= 3 of every byte 0..255");
    }
    PositionTable positions = build_positions(y);

    std::vector<std::int64_t> nodes;
    nodes.reserve(x.size());
    // Per-value cursor so the curve advances through Y rather than collapsing
    // onto the first occurrence each time. This both spreads the curve across
    // Y and keeps repeated X-values from producing identical (i, j_i) pairs
    // when their occurrence count in Y allows distinct picks.
    std::array<std::size_t, 256> cursor{};
    for (std::uint8_t v : x) {
        const auto& slots = positions[v];
        // validate_y guarantees slots.size() >= kRequiredMultiplicity == 3.
        const std::size_t pick = cursor[v] % slots.size();
        nodes.push_back(slots[pick]);
        ++cursor[v];
    }
    return CurveEquation(std::move(nodes));
}

bool CurveLocator::verify(const CurveEquation& curve,
                          std::span<const std::uint8_t> x,
                          std::span<const std::uint8_t> y) {
    if (curve.length() != x.size()) {
        return false;
    }
    for (std::size_t i = 1; i <= x.size(); ++i) {
        const std::size_t j = curve.evaluate_at_node(i);
        if (j >= y.size()) {
            return false;
        }
        if (y[j] != x[i - 1]) {
            return false;
        }
    }
    return true;
}

bool CurveLocator::verify_equation(const CurveEquation& curve,
                                   std::span<const std::uint8_t> x,
                                   std::span<const std::uint8_t> y,
                                   std::size_t max_degree) {
    if (!verify(curve, x, y)) {
        return false;
    }
    if (curve.length() == 0) {
        return true;
    }
    // Reconstruct the Newton-form polynomial in __int128 and confirm that
    // evaluating it at every integer node within max_degree reproduces the
    // stored value. The polynomial of degree N-1 through N points is
    // uniquely determined; passing this check shows we have a closed-form
    // equation for the curve.
    auto diffs = compute_newton_diffs_int128(curve.nodes());
    const std::size_t upper = std::min(curve.length(), max_degree + 1);
    for (std::size_t i = 1; i <= upper; ++i) {
        __int128 v = newton_eval_int128(diffs, static_cast<std::int64_t>(i));
        if (v != static_cast<__int128>(curve.nodes()[i - 1])) {
            return false;
        }
    }
    return true;
}

}  // namespace algorithms::dac
