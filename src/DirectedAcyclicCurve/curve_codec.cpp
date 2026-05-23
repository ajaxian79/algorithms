#include "curve_codec.hpp"

#include <array>
#include <cstring>
#include <istream>
#include <ostream>
#include <stdexcept>

#include "y_builder.hpp"

namespace algorithms::dac {

namespace {

constexpr std::array<std::uint8_t, 4> kMagic = {'D', 'A', 'C', '1'};
constexpr std::uint8_t kVersion = 0x01;
constexpr std::size_t kHeaderSize = 32;

void write_u8(std::ostream& out, std::uint8_t v) {
    out.put(static_cast<char>(v));
}

void write_le(std::ostream& out, std::uint64_t v, std::uint8_t width) {
    for (std::uint8_t i = 0; i < width; ++i) {
        write_u8(out, static_cast<std::uint8_t>((v >> (8 * i)) & 0xFFu));
    }
}

std::uint64_t read_le(std::istream& in, std::uint8_t width) {
    std::uint64_t v = 0;
    for (std::uint8_t i = 0; i < width; ++i) {
        int c = in.get();
        if (c == EOF) {
            throw std::runtime_error("CurveCodec::deserialize: truncated stream");
        }
        v |= static_cast<std::uint64_t>(static_cast<std::uint8_t>(c)) << (8 * i);
    }
    return v;
}

}  // namespace

std::uint8_t CurveCodec::pick_index_width(std::uint64_t y_length) noexcept {
    if (y_length == 0) {
        return 1;  // degenerate; no real indices to encode
    }
    const std::uint64_t max_index = y_length - 1;
    if (max_index <= 0xFFull) return 1;
    if (max_index <= 0xFFFFull) return 2;
    if (max_index <= 0xFFFFFFFFull) return 4;
    return 8;
}

std::uint64_t CurveCodec::persisted_size(std::uint64_t n_nodes,
                                          std::uint64_t y_length) noexcept {
    return kHeaderSize + n_nodes * pick_index_width(y_length);
}

void CurveCodec::serialize(std::ostream& out,
                           std::uint64_t y_seed,
                           std::uint64_t y_length,
                           const CurveEquation& curve) {
    const std::uint8_t width = pick_index_width(y_length);
    const std::uint64_t max_index = y_length == 0 ? 0 : (y_length - 1);
    for (auto j : curve.nodes()) {
        if (j < 0 || static_cast<std::uint64_t>(j) > max_index) {
            throw std::invalid_argument(
                "CurveCodec::serialize: curve node out of range for declared Y length");
        }
    }

    out.write(reinterpret_cast<const char*>(kMagic.data()),
              static_cast<std::streamsize>(kMagic.size()));
    write_u8(out, kVersion);
    write_u8(out, width);
    write_le(out, 0, 2);  // flags reserved
    write_le(out, y_seed, 8);
    write_le(out, y_length, 8);
    write_le(out, static_cast<std::uint64_t>(curve.length()), 8);
    for (auto j : curve.nodes()) {
        write_le(out, static_cast<std::uint64_t>(j), width);
    }
    if (!out) {
        throw std::runtime_error("CurveCodec::serialize: stream write failed");
    }
}

PersistedCurve CurveCodec::deserialize(std::istream& in) {
    std::array<std::uint8_t, 4> magic{};
    in.read(reinterpret_cast<char*>(magic.data()), 4);
    if (!in || magic != kMagic) {
        throw std::runtime_error("CurveCodec::deserialize: magic mismatch");
    }
    const std::uint8_t version = static_cast<std::uint8_t>(read_le(in, 1));
    if (version != kVersion) {
        throw std::runtime_error("CurveCodec::deserialize: unsupported version");
    }
    const std::uint8_t width = static_cast<std::uint8_t>(read_le(in, 1));
    if (width != 1 && width != 2 && width != 4 && width != 8) {
        throw std::runtime_error("CurveCodec::deserialize: invalid index_width");
    }
    const std::uint16_t flags = static_cast<std::uint16_t>(read_le(in, 2));
    if (flags != 0) {
        throw std::runtime_error("CurveCodec::deserialize: nonzero flags reserved");
    }
    const std::uint64_t y_seed = read_le(in, 8);
    const std::uint64_t y_length = read_le(in, 8);
    const std::uint64_t x_length = read_le(in, 8);

    std::vector<std::int64_t> nodes;
    nodes.reserve(static_cast<std::size_t>(x_length));
    for (std::uint64_t i = 0; i < x_length; ++i) {
        const std::uint64_t j = read_le(in, width);
        if (y_length > 0 && j >= y_length) {
            throw std::runtime_error(
                "CurveCodec::deserialize: index out of range for declared Y length");
        }
        nodes.push_back(static_cast<std::int64_t>(j));
    }

    PersistedCurve out;
    out.y_seed = y_seed;
    out.y_length = y_length;
    out.curve = CurveEquation(std::move(nodes));
    out.y = DeterministicYBuilder::build(y_seed, static_cast<std::size_t>(y_length));
    if (out.y.size() != y_length) {
        // The builder rounds up to a multiple of 256. If the persisted
        // length doesn't agree, the recipient asked for a Y the encoder
        // never produced; fail rather than silently mismatch.
        throw std::runtime_error(
            "CurveCodec::deserialize: builder length does not match persisted y_length");
    }
    return out;
}

}  // namespace algorithms::dac
