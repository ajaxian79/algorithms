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

class LayeredPickOptimizer {
public:
    struct Options {
        LayeredBezierCoverFitter::Options cover_options{};
        // Attempt 0 is deterministic nearest-to-previous. Later attempts use
        // a deterministic PRNG and `noise_radius` to choose among nearby legal
        // Y slots for the same byte value.
        std::size_t attempts = 1;
        std::size_t noise_radius = 0;
        std::uint64_t seed = 0xDACBEE5ULL;
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
