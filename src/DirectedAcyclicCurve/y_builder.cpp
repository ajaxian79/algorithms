#include "y_builder.hpp"

#include <algorithm>
#include <cstdint>

#include "curve_locator.hpp"  // kRequiredMultiplicity

namespace algorithms::dac {

std::uint64_t DeterministicYBuilder::splitmix64(std::uint64_t& state) noexcept {
    // Reference splitmix64. Constants come from Steele/Lea 2014; the algorithm
    // is bit-exact on every platform that supports 64-bit unsigned arithmetic.
    state += 0x9E3779B97F4A7C15ULL;
    std::uint64_t z = state;
    z = (z ^ (z >> 30)) * 0xBF58476D1CE4E5B9ULL;
    z = (z ^ (z >> 27)) * 0x94D049BB133111EBULL;
    return z ^ (z >> 31);
}

std::uint64_t DeterministicYBuilder::bounded(std::uint64_t& state,
                                             std::uint64_t upper) noexcept {
    // Rejection sampling against a power-of-two-aligned threshold. Avoids the
    // modulo bias that std::uniform_int_distribution hides behind
    // implementation-defined behaviour.
    if (upper == 0) {
        return 0;
    }
    const std::uint64_t threshold = (-upper) % upper;  // equals 2^64 mod upper
    for (;;) {
        std::uint64_t r = splitmix64(state);
        if (r >= threshold) {
            return r % upper;
        }
    }
}

std::vector<std::uint8_t> DeterministicYBuilder::build(std::uint64_t seed,
                                                       std::size_t min_length) {
    // The smallest legal Y has 256 * kRequiredMultiplicity = 768 bytes. Round
    // the request up to a multiple of 256 so every byte value is equally
    // represented.
    const std::size_t floor_length = 256 * kRequiredMultiplicity;
    std::size_t length = std::max(min_length, floor_length);
    if (length % 256 != 0) {
        length += 256 - (length % 256);
    }
    const std::size_t per_value = length / 256;

    std::vector<std::uint8_t> y;
    y.reserve(length);
    for (std::size_t v = 0; v < 256; ++v) {
        for (std::size_t r = 0; r < per_value; ++r) {
            y.push_back(static_cast<std::uint8_t>(v));
        }
    }

    // Hand-rolled Fisher-Yates over the deterministic PRNG. std::shuffle is
    // intentionally avoided because it is permitted (and known) to call the
    // engine in different orders across standard library implementations.
    std::uint64_t state = seed;
    for (std::size_t i = y.size(); i > 1; --i) {
        const std::uint64_t j = bounded(state, static_cast<std::uint64_t>(i));
        std::uint8_t tmp = y[i - 1];
        y[i - 1] = y[j];
        y[j] = tmp;
    }
    return y;
}

}  // namespace algorithms::dac
