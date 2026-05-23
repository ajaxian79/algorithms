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

std::uint64_t DeterministicYBuilder::derive_band_state(std::uint64_t seed,
                                                       std::size_t band_index) noexcept {
    // Mix (seed, band_index) into a per-band state. We XOR a band-indexed
    // multiple of the splitmix64 increment (Steele/Lea 2014's golden-ratio
    // odd constant) into the seed so adjacent bands get well-separated
    // streams, then run one splitmix64 step to diffuse before any consumer
    // calls splitmix64() again. O(1) per band, fully portable.
    std::uint64_t state = seed ^
        (0x9E3779B97F4A7C15ULL * static_cast<std::uint64_t>(band_index + 1));
    (void)splitmix64(state);
    return state;
}

std::vector<std::uint8_t> DeterministicYBuilder::build(const Params& params) {
    const std::size_t multiplicity =
        std::max(params.multiplicity, kRequiredMultiplicity);
    const std::size_t length = 256 * multiplicity;

    std::vector<std::uint8_t> y;
    y.reserve(length);

    switch (params.policy) {
        case ShufflePolicy::Uniform: {
            // Bit-exact reproduction of the pre-multi-policy implementation:
            // lay out [0..255 repeated `multiplicity` times] in value-major
            // order, then a single global Fisher-Yates pass with the seed.
            for (std::size_t v = 0; v < 256; ++v) {
                for (std::size_t r = 0; r < multiplicity; ++r) {
                    y.push_back(static_cast<std::uint8_t>(v));
                }
            }
            std::uint64_t state = params.seed;
            for (std::size_t i = y.size(); i > 1; --i) {
                const std::uint64_t j = bounded(state, static_cast<std::uint64_t>(i));
                std::uint8_t tmp = y[i - 1];
                y[i - 1] = y[j];
                y[j] = tmp;
            }
            break;
        }
        case ShufflePolicy::Stratified: {
            // Lay out Y as `multiplicity` bands of 256 bytes. Each band starts
            // as the identity permutation 0..255 and is Fisher-Yates-shuffled
            // with its own derived state, so every byte value appears in every
            // band exactly once. The bands are concatenated in band order.
            for (std::size_t band = 0; band < multiplicity; ++band) {
                const std::size_t base = y.size();
                for (std::size_t v = 0; v < 256; ++v) {
                    y.push_back(static_cast<std::uint8_t>(v));
                }
                std::uint64_t state = derive_band_state(params.seed, band);
                for (std::size_t i = 256; i > 1; --i) {
                    const std::uint64_t j = bounded(state, static_cast<std::uint64_t>(i));
                    std::uint8_t tmp = y[base + i - 1];
                    y[base + i - 1] = y[base + j];
                    y[base + j] = tmp;
                }
            }
            break;
        }
    }
    return y;
}

std::vector<std::uint8_t> DeterministicYBuilder::build(std::uint64_t seed,
                                                       std::size_t min_length) {
    // Legacy entry point: derive multiplicity from min_length the same way
    // the pre-multi-policy implementation did - the floor is 256*3 = 768
    // bytes, otherwise round min_length up to a multiple of 256 and divide.
    const std::size_t floor_length = 256 * kRequiredMultiplicity;
    std::size_t length = std::max(min_length, floor_length);
    if (length % 256 != 0) {
        length += 256 - (length % 256);
    }
    Params p;
    p.seed = seed;
    p.multiplicity = length / 256;
    p.policy = ShufflePolicy::Uniform;
    return build(p);
}

}  // namespace algorithms::dac
