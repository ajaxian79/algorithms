// Deterministic Y array builder.
//
// Produces a std::vector<std::uint8_t> Y such that every byte value 0..255
// appears at least kRequiredMultiplicity (= 3) times. The same parameters
// always yield the same Y on any machine, any compiler, any standard library,
// because the implementation hardcodes a portable splitmix64 PRNG and a
// Fisher-Yates shuffle - neither depends on std::shuffle,
// std::uniform_int_distribution, or any other implementation-defined behaviour.
//
// Shuffle policy controls how byte positions are arranged inside Y:
//
//   ShufflePolicy::Uniform     A single global Fisher-Yates pass over the
//                              concatenated [0..255]*multiplicity array. Each
//                              byte value's `multiplicity` copies are spread
//                              uniformly at random across the whole Y. This is
//                              the historical default and the curve p(i) it
//                              produces is maximally rough.
//
//   ShufflePolicy::Stratified  Y is laid out as `multiplicity` contiguous bands
//                              of 256 bytes. Each band starts as the identity
//                              permutation 0..255 and is Fisher-Yates-shuffled
//                              with a per-band sub-stream derived from
//                              (seed, band_index). Every byte value therefore
//                              has exactly one occurrence in every band,
//                              guaranteeing the locator can always find a slot
//                              within `256` of any target index in Y. This is
//                              the substrate for smoother curves; on its own
//                              with the default cursor-cycle pick strategy the
//                              curve is still locally arbitrary but the
//                              candidate slots are stratified.

#ifndef ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP
#define ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP

#include <cstddef>
#include <cstdint>
#include <vector>

namespace algorithms::dac {

enum class ShufflePolicy : std::uint8_t {
    Uniform = 0,
    Stratified = 1,
};

class DeterministicYBuilder {
public:
    // Knobs for building Y. `multiplicity` is the number of times every byte
    // 0..255 appears in the result (so |Y| = 256 * multiplicity). It is
    // clamped to at least kRequiredMultiplicity.
    struct Params {
        std::uint64_t seed = 0;
        std::size_t multiplicity = 3;  // kRequiredMultiplicity
        ShufflePolicy policy = ShufflePolicy::Uniform;
    };

    // Build a Y array per the supplied Params. Determinism: given the same
    // Params the function returns the exact same bytes on any two's complement
    // machine regardless of OS, compiler, or libc++/libstdc++.
    static std::vector<std::uint8_t> build(const Params& params);

    // Legacy alias kept for the existing call sites (locator demo, codec, prior
    // tests). Equivalent to build({seed, ceil(max(min_length, 768) / 256),
    // ShufflePolicy::Uniform}); the result is bit-exact-identical to the
    // pre-multi-policy implementation, which is what the cross-machine anchor
    // test pins.
    static std::vector<std::uint8_t> build(std::uint64_t seed,
                                            std::size_t min_length = 768);

    // Pure splitmix64 step. Exposed for tests that want to assert a fixed
    // value/seed pairing.
    static std::uint64_t splitmix64(std::uint64_t& state) noexcept;

    // Portable bounded random integer in [0, upper) using rejection sampling
    // on top of splitmix64. Exposed for tests.
    static std::uint64_t bounded(std::uint64_t& state, std::uint64_t upper) noexcept;

    // Derive a per-band PRNG state from (seed, band_index) for the Stratified
    // policy. Exposed for tests that recompute the expected per-band shuffle
    // from source so the anchor doesn't have to hardcode 256 bytes.
    static std::uint64_t derive_band_state(std::uint64_t seed,
                                            std::size_t band_index) noexcept;
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP
