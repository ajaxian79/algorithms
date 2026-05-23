#include "curve_pick_optimizer.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdlib>
#include <cstdint>
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

std::uint64_t mix64(std::uint64_t v) noexcept {
    v += 0x9E3779B97F4A7C15ULL;
    v = (v ^ (v >> 30)) * 0xBF58476D1CE4E5B9ULL;
    v = (v ^ (v >> 27)) * 0x94D049BB133111EBULL;
    return v ^ (v >> 31);
}

std::uint64_t slot_hash(std::uint64_t seed,
                        std::uint8_t value,
                        std::size_t node_index,
                        std::int64_t slot,
                        std::size_t attempt) noexcept {
    std::uint64_t h = seed;
    h ^= 0xA0761D6478BD642FULL * static_cast<std::uint64_t>(value + 1u);
    h ^= 0xE7037ED1A0B428DBULL * static_cast<std::uint64_t>(node_index + 1u);
    h ^= 0x8EBC6AF09C88C6E3ULL * static_cast<std::uint64_t>(attempt + 1u);
    h ^= static_cast<std::uint64_t>(slot) + 0x589965CC75374CC3ULL;
    return mix64(h);
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

struct CandidateSlot {
    std::int64_t slot = 0;
    std::uint64_t hash = 0;
    std::uint64_t distance = 0;
};

std::vector<std::int64_t> candidate_slots(const std::vector<std::int64_t>& slots,
                                          std::int64_t target,
                                          bool have_target,
                                          std::uint8_t value,
                                          std::size_t node_index,
                                          std::size_t attempt,
                                          std::size_t radius,
                                          std::size_t limit,
                                          const LayeredPickOptimizer::Options& options) {
    std::vector<std::int64_t> out;
    if (slots.empty()) return out;
    const std::size_t center = have_target
        ? nearest_slot_index(slots, target)
        : 0u;
    const std::size_t lo = center > radius
        ? center - radius
        : 0u;
    const std::size_t hi = std::min(slots.size() - 1u,
                                    center + radius);
    std::vector<CandidateSlot> tmp;
    tmp.reserve(hi - lo + 1u);
    for (std::size_t i = lo; i <= hi; ++i) {
        const std::int64_t slot = slots[i];
        const std::uint64_t d = have_target
            ? static_cast<std::uint64_t>(std::llabs(slot - target))
            : static_cast<std::uint64_t>(i);
        tmp.push_back({slot,
                       slot_hash(options.sort_seed, value, node_index, slot, attempt),
                       d});
    }

    switch (options.slot_sort_mode) {
        case SlotSortMode::Distance:
            std::sort(tmp.begin(), tmp.end(),
                      [](const CandidateSlot& a, const CandidateSlot& b) {
                          return std::tie(a.distance, a.slot) <
                                 std::tie(b.distance, b.slot);
                      });
            break;
        case SlotSortMode::Hash:
            std::sort(tmp.begin(), tmp.end(),
                      [](const CandidateSlot& a, const CandidateSlot& b) {
                          return std::tie(a.hash, a.slot) <
                                 std::tie(b.hash, b.slot);
                      });
            break;
        case SlotSortMode::DistanceHash:
            std::sort(tmp.begin(), tmp.end(),
                      [](const CandidateSlot& a, const CandidateSlot& b) {
                          return std::tie(a.distance, a.hash, a.slot) <
                                 std::tie(b.distance, b.hash, b.slot);
                      });
            break;
        case SlotSortMode::HashDistance:
            std::sort(tmp.begin(), tmp.end(),
                      [](const CandidateSlot& a, const CandidateSlot& b) {
                          return std::tie(a.hash, a.distance, a.slot) <
                                 std::tie(b.hash, b.distance, b.slot);
                      });
            break;
    }
    const std::size_t n = limit == 0 ? tmp.size() : std::min(limit, tmp.size());
    out.reserve(n);
    for (std::size_t i = 0; i < n; ++i) {
        out.push_back(tmp[i].slot);
    }
    return out;
}

std::int64_t pick_slot(const std::vector<std::int64_t>& slots,
                       std::int64_t target,
                       bool have_target,
                       std::uint8_t value,
                       std::size_t node_index,
                       std::size_t attempt,
                       const LayeredPickOptimizer::Options& options) {
    if (slots.empty()) return 0;
    const std::size_t radius = attempt == 0
        ? 0u
        : std::min(options.noise_radius, slots.size() - 1u);
    auto candidates = candidate_slots(slots, target, have_target, value,
                                      node_index, attempt, radius,
                                      options.candidate_limit, options);
    if (candidates.empty()) return 0;
    if (attempt == 0 || candidates.size() == 1) {
        return candidates.front();
    }
    const std::uint64_t h = slot_hash(options.seed ^ options.sort_seed,
                                      value, node_index, target, attempt);
    const std::size_t index = static_cast<std::size_t>(
        h % static_cast<std::uint64_t>(candidates.size()));
    return candidates[index];
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

bool fill_interiors(const std::vector<std::vector<std::int64_t>>& choices,
                    std::size_t k,
                    std::vector<std::int64_t>& nodes,
                    const LayeredBezierCoverFitter::Options& cover_options) {
    if (k == choices.size()) {
        return one_curve_covers(nodes, cover_options);
    }
    const std::size_t node_index = k + 1u;
    for (std::int64_t y : choices[k]) {
        nodes[node_index] = y;
        if (fill_interiors(choices, k + 1u, nodes, cover_options)) {
            return true;
        }
    }
    return false;
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
    const std::size_t radius = std::min(options.noise_radius,
        positions[x[first]].empty() ? 0u : positions[x[first]].size() - 1u);
    const auto starts = candidate_slots(
        positions[x[first]], prev, have_prev, x[first], first, 0u, radius,
        options.block_endpoint_limit == 0 ? options.candidate_limit
                                          : options.block_endpoint_limit,
        options);
    for (std::int64_t y0 : starts) {
        const auto ends = candidate_slots(
            positions[x[last]], y0, true, x[last], last, 0u,
            std::min(options.noise_radius + len,
                     positions[x[last]].empty() ? 0u
                                                : positions[x[last]].size() - 1u),
            options.block_endpoint_limit == 0 ? options.candidate_limit
                                              : options.block_endpoint_limit,
            options);
        for (std::int64_t y_last : ends) {
            std::vector<std::int64_t> nodes(len);
            nodes.front() = y0;
            nodes.back() = y_last;
            std::vector<std::vector<std::int64_t>> interior_choices;
            interior_choices.reserve(len > 2 ? len - 2u : 0u);
            for (std::size_t k = 1; k + 1 < len; ++k) {
                const double t = static_cast<double>(k) /
                                 static_cast<double>(len - 1u);
                const auto target = static_cast<std::int64_t>(
                    std::llround(static_cast<double>(y0) +
                                 (static_cast<double>(y_last - y0) * t)));
                const auto& slots = positions[x[start + k]];
                auto choices = candidate_slots(
                    slots, target, true, x[start + k], start + k, k,
                    std::min(options.noise_radius,
                             slots.empty() ? 0u : slots.size() - 1u),
                    options.block_interior_limit == 0
                        ? options.candidate_limit
                        : options.block_interior_limit,
                    options);
                if (choices.empty()) {
                    choices.push_back(slots[nearest_slot_index(slots, target)]);
                }
                interior_choices.push_back(std::move(choices));
            }
            if (fill_interiors(interior_choices, 0u, nodes,
                               options.cover_options)) {
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
        const std::size_t max_len = std::max<std::size_t>(
            2u, options.cover_options.max_points_per_curve);
        for (std::size_t len = std::min(max_len, remaining);
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
            block = {pick_slot(slots, prev, have_prev, x[start], start, 0u,
                               options)};
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

    std::int64_t prev = 0;
    bool have_prev = false;
    for (std::size_t node_index = 0; node_index < x.size(); ++node_index) {
        const std::uint8_t v = x[node_index];
        const auto& slots = positions[v];
        const std::int64_t pick =
            pick_slot(slots, prev, have_prev, v, node_index, attempt, options);
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
    best.slot_sort_mode = options.slot_sort_mode;
    best.sort_seed = options.sort_seed;
    return best;
}

}  // namespace algorithms::dac
