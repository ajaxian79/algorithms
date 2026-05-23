// Deterministic Y array builder.
//
// Produces a std::vector<std::uint8_t> Y such that every byte value 0..255
// appears at least kRequiredMultiplicity (= 3) times. The same seed always
// yields the same Y on any machine, any compiler, any standard library, because
// the implementation hardcodes a portable splitmix64 PRNG and a Fisher-Yates
// shuffle - neither depends on std::shuffle, std::uniform_int_distribution, or
// any other implementation-defined behaviour.

#ifndef ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP
#define ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP

#include <cstdint>
#include <vector>

namespace algorithms::dac {

class DeterministicYBuilder {
public:
    // Build a Y array. The result has length max(min_length, 256 * 3) rounded
    // up to a multiple of 256, with every byte value appearing the same number
    // of times (>= kRequiredMultiplicity), then shuffled deterministically by
    // seed.
    //
    // Determinism: every step is portable. Given the same (seed, min_length)
    // the function returns the exact same bytes on any IEEE-754 + two's
    // complement machine regardless of OS, compiler, or libc++/libstdc++.
    static std::vector<std::uint8_t> build(std::uint64_t seed,
                                            std::size_t min_length = 768);

    // Pure splitmix64 step. Exposed for tests that want to assert a fixed
    // value/seed pairing.
    static std::uint64_t splitmix64(std::uint64_t& state) noexcept;

    // Portable bounded random integer in [0, upper) using rejection sampling
    // on top of splitmix64. Exposed for tests.
    static std::uint64_t bounded(std::uint64_t& state, std::uint64_t upper) noexcept;
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DIRECTED_ACYCLIC_CURVE_Y_BUILDER_HPP
