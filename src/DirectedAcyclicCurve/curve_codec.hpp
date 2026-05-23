// Codec for persisting a (Y, CurveEquation) pair to a binary stream.
//
// File format (all little-endian; total = 32 + N * W bytes):
//
//   offset  size  field
//   ------  ----  ----------------------------------------------------------
//        0     4  magic       'D' 'A' 'C' '1'  (0x31434144 read LE u32)
//        4     1  version     0x01
//        5     1  index_width N_bytes per index; one of {1,2,4,8}, auto-sized
//                              from y_length so every index fits without bias
//        6     2  flags       reserved, must be 0 in v1
//        8     8  y_seed      splitmix64 seed handed to DeterministicYBuilder
//       16     8  y_length    length of Y the builder was asked for
//       24     8  x_length    N (the number of curve nodes)
//       32  N*W  indices     j_1, j_2, ..., j_N, each W=index_width bytes LE
//
// Y is NOT stored bytewise. Instead, deserialize() re-runs
// DeterministicYBuilder::build(y_seed, y_length) to reproduce the exact same
// Y, then attaches the deserialised CurveEquation. The Y reproduction is
// bit-exact across machines because the builder is hand-rolled (see
// y_builder.cpp), so this format is portable.
//
// Persisted size vs raw X:
//   raw_x_bytes = N
//   file_bytes  = 32 + N * W
//   ratio       = 32/N + W
//   - With y_length <= 65,536 (W=2) this asymptotes to 2.0 * |X|.
//   - With y_length <=    256 (W=1) this asymptotes to 1.0 * |X|, but the
//     minimum legal Y is 768 bytes so W=1 only happens if the caller passes
//     a hand-trimmed Y of exactly 256 indices (not produced by the builder).

#ifndef ALGORITHMS_DAC_CURVE_CODEC_HPP
#define ALGORITHMS_DAC_CURVE_CODEC_HPP

#include <cstdint>
#include <iosfwd>
#include <vector>

#include "curve_locator.hpp"

namespace algorithms::dac {

struct PersistedCurve {
    std::uint64_t y_seed = 0;
    std::uint64_t y_length = 0;
    CurveEquation curve{};
    std::vector<std::uint8_t> y{};  // reproduced via DeterministicYBuilder
};

class CurveCodec {
public:
    // Pick the smallest fixed-width slot (1, 2, 4, or 8 bytes) that holds
    // every index 0..y_length-1.
    static std::uint8_t pick_index_width(std::uint64_t y_length) noexcept;

    // Persisted size in bytes without actually serializing. Useful for
    // benchmarking / reporting.
    static std::uint64_t persisted_size(std::uint64_t n_nodes,
                                         std::uint64_t y_length) noexcept;

    // Serialize the curve plus the seed-and-length pair needed to reproduce Y.
    // Throws std::invalid_argument if any node index exceeds y_length.
    static void serialize(std::ostream& out,
                          std::uint64_t y_seed,
                          std::uint64_t y_length,
                          const CurveEquation& curve);

    // Inverse of serialize(). Reproduces Y by re-running
    // DeterministicYBuilder::build(y_seed, y_length). Throws on malformed
    // input.
    static PersistedCurve deserialize(std::istream& in);
};

}  // namespace algorithms::dac

#endif  // ALGORITHMS_DAC_CURVE_CODEC_HPP
