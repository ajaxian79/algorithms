#include "curve_pick_optimizer.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <tuple>
#include <utility>
#include <vector>

#include "curve_codec.hpp"
#include "y_builder.hpp"

namespace algorithms::dac {

namespace {

using PositionTable = std::array<std::vector<std::int64_t>, 256>;

PositionTable build_positions(std::span<const std::uint8_t> y) {
    PositionTable table{};
    for (std::int64_t k = 0; k < static_cast<std::int64_t>(y.size()); ++k) {
        table[y[static_cast<std::size_t>(k)]].push_back(k);
    }
    return table;
}

std::size_t nearest_slot_index(const std::vector<std::int64_t>& slots,
                               std::int64_t target) noexcept {
    auto it = std::lower_bound(slots.begin(), slots.end(), target);
    if (it == slots.end()) return slots.size() - 1u;
    if (it == slots.begin()) return 0u;
    const std::size_t hi_index = static_cast<std::size_t>(it - slots.begin());
    const std::int64_t hi = *it;
    const std::int64_t lo = *(it - 1);
    return (hi - target) <= (target - lo) ? hi_index : hi_index - 1u;
}

std::int64_t pick_slot(const std::vector<std::int64_t>& slots,
                       std::int64_t target,
                       bool have_target,
                       std::size_t attempt,
                       const LayeredPickOptimizer::Options& options,
                       std::uint64_t& rng) noexcept {
    if (slots.empty()) return 0;
    const std::size_t center = have_target
        ? nearest_slot_index(slots, target)
        : 0u;
    if (attempt == 0 || options.noise_radius == 0 || slots.size() == 1) {
        return slots[center];
    }

    const std::size_t lo = center > options.noise_radius
        ? center - options.noise_radius
        : 0u;
    const std::size_t hi = std::min(slots.size() - 1u,
                                    center + options.noise_radius);
    const std::size_t width = hi - lo + 1u;
    const std::size_t offset = static_cast<std::size_t>(
        DeterministicYBuilder::bounded(rng, static_cast<std::uint64_t>(width)));
    return slots[lo + offset];
}

std::vector<std::int64_t> nearby_slots(const std::vector<std::int64_t>& slots,
                                       std::int64_t target,
                                       bool have_target,
                                       std::size_t radius) {
    std::vector<std::int64_t> out;
    if (slots.empty()) return out;
    const std::size_t center = have_target
        ? nearest_slot_index(slots, target)
        : 0u;
    const std::size_t lo = center > radius ? center - radius : 0u;
    const std::size_t hi = std::min(slots.size() - 1u, center + radius);
    out.reserve(hi - lo + 1u);
    for (std::size_t i = lo; i <= hi; ++i) {
        out.push_back(slots[i]);
    }
    return out;
}

double cubic_y(double y0, double y1, double y2, double y3, double t) noexcept {
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

bool one_curve_covers(const std::vector<std::int64_t>& nodes,
                      const LayeredBezierCoverFitter::Options&) {
    const std::size_t n = nodes.size();
    if (n <= 1) return n == 1;
    const double y0 = static_cast<double>(nodes.front());
    const double y3 = static_cast<double>(nodes.back());
    const double dx = static_cast<double>(n - 1u);

    double a11 = 0.0, a12 = 0.0, a22 = 0.0;
    double r1 = 0.0, r2 = 0.0;
    if (n > 2) {
        for (std::size_t k = 1; k + 1 < n; ++k) {
            const double t = static_cast<double>(k) / dx;
            const double u = 1.0 - t;
            const double b1 = 3.0 * u * u * t;
            const double b2 = 3.0 * u * t * t;
            const double endpoints = u * u * u * y0 + t * t * t * y3;
            const double rhs = static_cast<double>(nodes[k]) - endpoints;
            a11 += b1 * b1;
            a12 += b1 * b2;
            a22 += b2 * b2;
            r1 += b1 * rhs;
            r2 += b2 * rhs;
        }
    }

    double y1 = y0 + (y3 - y0) / 3.0;
    double y2 = y0 + 2.0 * (y3 - y0) / 3.0;
    const double det = a11 * a22 - a12 * a12;
    if (n > 2 && std::fabs(det) >= 1e-18) {
        y1 = (a22 * r1 - a12 * r2) / det;
        y2 = (a11 * r2 - a12 * r1) / det;
    }

    for (std::size_t k = 0; k < n; ++k) {
        const double t = dx == 0.0 ? 0.0 : static_cast<double>(k) / dx;
        if (bucket_floor(cubic_y(y0, y1, y2, y3, t)) != nodes[k]) {
            return false;
        }
    }
    return true;
}

bool try_block(const PositionTable& positions,
               std::span<const std::uint8_t> x,
               std::size_t start,
               std::size_t len,
               std::int64_t prev,
               bool have_prev,
               const LayeredPickOptimizer::Options& options,
               std::vector<std::int64_t>& out) {
    const std::size_t first = start;
    const std::size_t last = start + len - 1u;
    const auto starts = nearby_slots(positions[x[first]], prev, have_prev,
                                     options.noise_radius);
    for (std::int64_t y0 : starts) {
        const auto ends = nearby_slots(positions[x[last]], y0, true,
                                       options.noise_radius + len);
        for (std::int64_t y_last : ends) {
            std::vector<std::int64_t> nodes(len);
            nodes.front() = y0;
            nodes.back() = y_last;
            for (std::size_t k = 1; k + 1 < len; ++k) {
                const double t = static_cast<double>(k) /
                                 static_cast<double>(len - 1u);
                const auto target = static_cast<std::int64_t>(
                    std::llround(static_cast<double>(y0) +
                                 (static_cast<double>(y_last - y0) * t)));
                const auto& slots = positions[x[start + k]];
                nodes[k] = slots[nearest_slot_index(slots, target)];
            }
            if (one_curve_covers(nodes, options.cover_options)) {
                out = std::move(nodes);
                return true;
            }
        }
    }
    return false;
}

CurveEquation locate_block_greedy(std::span<const std::uint8_t> x,
                                  const PositionTable& positions,
                                  const LayeredPickOptimizer::Options& options) {
    std::vector<std::int64_t> nodes;
    nodes.reserve(x.size());

    std::int64_t prev = 0;
    bool have_prev = false;
    for (std::size_t start = 0; start < x.size(); ) {
        std::vector<std::int64_t> block;
        const std::size_t remaining = x.size() - start;
        bool accepted = false;
        for (std::size_t len = std::min<std::size_t>(5u, remaining);
             len >= 2u; --len) {
            if (try_block(positions, x, start, len, prev, have_prev,
                          options, block)) {
                accepted = true;
                break;
            }
            if (len == 2u) break;
        }
        if (!accepted) {
            const auto& slots = positions[x[start]];
            block = {slots[have_prev ? nearest_slot_index(slots, prev) : 0u]};
        }
        nodes.insert(nodes.end(), block.begin(), block.end());
        prev = nodes.back();
        have_prev = true;
        start += block.size();
    }
    return CurveEquation(std::move(nodes));
}

CurveEquation locate_noisy(std::span<const std::uint8_t> x,
                           const PositionTable& positions,
                           std::size_t attempt,
                           const LayeredPickOptimizer::Options& options) {
    std::vector<std::int64_t> nodes;
    nodes.reserve(x.size());

    std::uint64_t rng = options.seed ^
        (0x9E3779B97F4A7C15ULL * static_cast<std::uint64_t>(attempt + 1u));
    (void)DeterministicYBuilder::splitmix64(rng);

    std::int64_t prev = 0;
    bool have_prev = false;
    for (std::uint8_t v : x) {
        const auto& slots = positions[v];
        const std::int64_t pick =
            pick_slot(slots, prev, have_prev, attempt, options, rng);
        nodes.push_back(pick);
        prev = pick;
        have_prev = true;
    }
    return CurveEquation(std::move(nodes));
}

auto score_cover(const LayeredBezierCoverFitter::Result& cover,
                 std::uint64_t bytes) noexcept {
    return std::tuple<std::size_t, std::size_t, std::uint64_t>{
        cover.curves.size(), cover.overrides.size(), bytes};
}

}  // namespace

LayeredPickOptimizer::Result LayeredPickOptimizer::optimize(
        std::span<const std::uint8_t> x,
        std::span<const std::uint8_t> y) {
    return optimize(x, y, Options{});
}

LayeredPickOptimizer::Result LayeredPickOptimizer::optimize(
        std::span<const std::uint8_t> x,
        std::span<const std::uint8_t> y,
        const Options& options) {
    if (!CurveLocator::validate_y(y)) {
        throw std::invalid_argument(
            "LayeredPickOptimizer::optimize: Y must contain >= 3 of every byte");
    }

    const PositionTable positions = build_positions(y);
    const std::size_t attempts = std::max<std::size_t>(1u, options.attempts);

    Result best;
    auto best_score = std::tuple<std::size_t, std::size_t, std::uint64_t>{
        std::numeric_limits<std::size_t>::max(),
        std::numeric_limits<std::size_t>::max(),
        std::numeric_limits<std::uint64_t>::max()};

    auto score_candidate = [&](CurveEquation curve, std::size_t attempt) {
        auto cover = LayeredBezierCoverFitter::fit(curve, options.cover_options);
        const std::uint64_t bytes = LayeredBezierCoverStorage::persisted_size(
            cover.curves.size(), cover.overrides.size(), y.size(), x.size());
        const auto score = score_cover(cover, bytes);
        if (score < best_score) {
            best.curve = std::move(curve);
            best.cover = std::move(cover);
            best.best_attempt = attempt;
            best.layered_bytes = bytes;
            best_score = score;
        }
    };

    for (std::size_t attempt = 0; attempt < attempts; ++attempt) {
        score_candidate(locate_noisy(x, positions, attempt, options), attempt);
    }
    if (options.block_greedy && !x.empty()) {
        score_candidate(locate_block_greedy(x, positions, options), attempts);
    }

    best.attempts_run = attempts;
    best.noise_radius = options.noise_radius;
    return best;
}

}  // namespace algorithms::dac
