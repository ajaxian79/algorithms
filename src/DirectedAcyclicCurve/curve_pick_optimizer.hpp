// Experimental Y-index picker for Bezier-cover storage.
//
// Each byte in X has multiple legal Y indices. The normal locator commits to
// one index before curve fitting. This optimizer treats those choices as a
// search space: keep the byte value fixed, try noisier nearby legal indices,
// fit the constrained layered Bezier cover, and retain the candidate that uses
// the fewest curves.

#ifndef ALGORITHMS_DAC_CURVE_PICK_OPTIMIZER_HPP
#define ALGORITHMS_DAC_CURVE_PICK_OPTIMIZER_HPP

#include <cstddef>
#include <cstdint>
#include <span>

#include "curve_bezier.hpp"
#include "curve_locator.hpp"

namespace algorithms::dac {

enum class SlotSortMode : std::uint8_t {
    Distance = 0,
    Hash = 1,
    DistanceHash = 2,
    HashDistance = 3,
};

class LayeredPickOptimizer {
public:
    struct Options {
        LayeredBezierCoverFitter::Options cover_options{};
        // Attempt 0 is deterministic nearest-to-previous. Later attempts use
        // a deterministic PRNG and `noise_radius` to choose among nearby legal
        // Y slots for the same byte value.
        std::size_t attempts = 1;
        // Radius is measured in candidate-slot ranks around the nearest legal
        // slot. A value >= multiplicity considers every legal Y slot for each
        // byte, making the deterministic noise search effectively cost-free at
        // decode time because only the final curve cover is stored.
        std::size_t noise_radius = 0;
        std::uint64_t seed = 0xDACBEE5ULL;
        std::uint64_t sort_seed = 0x50175EEDULL;
        SlotSortMode slot_sort_mode = SlotSortMode::Distance;
        // 0 means no cap. These limits bound encoder search only; they do not
        // affect decode cost or the stored curve representation.
        std::size_t candidate_limit = 0;
        std::size_t block_endpoint_limit = 0;
        std::size_t block_interior_limit = 3;
        // Targeted mode: build candidate node values in 2-5 point blocks by
        // choosing alternate legal Y slots that make longer Bezier blocks
        // floor-hit. The noisy attempts remain available and are scored too.
        bool block_greedy = false;
    };

    struct Result {
        CurveEquation curve{};
        LayeredBezierCoverFitter::Result cover{};
        std::size_t attempts_run = 0;
        std::size_t best_attempt = 0;
        std::size_t noise_radius = 0;
        SlotSortMode slot_sort_mode = SlotSortMode::Distance;
        std::uint64_t sort_seed = 0;
        std::uint64_t layered_bytes = 0;
    };

    static Result optimize(std::span<const std::uint8_t> x,
                           std::span<const std::uint8_t> y);
    static Result optimize(std::span<const std::uint8_t> x,
                           std::span<const std::uint8_t> y,
                           const Options& options);
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DAC_CURVE_PICK_OPTIMIZER_HPP
