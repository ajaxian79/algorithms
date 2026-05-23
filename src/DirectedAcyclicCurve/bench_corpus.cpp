// bench_corpus: run DAC Bezier-cover experiments on real byte corpora.
//
// Example:
//   dac_bench_corpus --file alice29.txt --prefix 10240 --prefix 65536 \
//       --multiplicity 16 --attempts 16 --noise 4 --out-json out.json

#include <algorithm>
#include <chrono>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "curve_codec.hpp"
#include "curve_locator.hpp"
#include "curve_pick_optimizer.hpp"
#include "y_builder.hpp"

namespace dac = algorithms::dac;

namespace {

struct Config {
    std::vector<std::filesystem::path> files;
    std::vector<std::size_t> prefixes;
    std::vector<std::size_t> multiplicities{3, 16, 64};
    std::size_t attempts = 8;
    std::size_t noise = 4;
    std::size_t y_seed_attempts = 1;
    std::size_t sort_seed_attempts = 1;
    std::uint64_t y_seed = 0xC0FFEEULL;
    std::uint64_t sort_seed = 0x50175EEDULL;
    std::vector<dac::SlotSortMode> sort_modes{dac::SlotSortMode::Distance};
    std::size_t candidate_limit = 0;
    std::size_t block_endpoint_limit = 0;
    std::size_t block_interior_limit = 3;
    std::size_t max_points_per_curve = 5;
    std::size_t quadratic_max_points = 9;
    dac::ShufflePolicy policy = dac::ShufflePolicy::Stratified;
    std::string policy_label = "stratified";
    std::string json_path;
};

struct Row {
    std::string file;
    std::uint64_t file_size = 0;
    std::size_t prefix = 0;
    std::size_t multiplicity = 0;
    std::size_t y_len = 0;
    std::uint64_t codec_bytes = 0;
    std::size_t baseline_curves = 0;
    std::size_t baseline_overrides = 0;
    std::uint64_t baseline_bytes = 0;
    std::int64_t baseline_delta_vs_raw = 0;
    std::int64_t baseline_delta_vs_codec = 0;
    double baseline_raw = 0.0;
    double baseline_codec = 0.0;
    std::size_t optimized_curves = 0;
    std::size_t optimized_overrides = 0;
    std::uint64_t optimized_bytes = 0;
    std::int64_t optimized_delta_vs_raw = 0;
    std::int64_t optimized_delta_vs_codec = 0;
    double optimized_raw = 0.0;
    double optimized_codec = 0.0;
    std::size_t quadratic_segments = 0;
    std::uint64_t quadratic_bytes = 0;
    std::int64_t quadratic_delta_vs_raw = 0;
    std::int64_t quadratic_delta_vs_codec = 0;
    double quadratic_raw = 0.0;
    double quadratic_codec = 0.0;
    std::size_t quadratic_max_cluster_points = 0;
    double quadratic_mean_cluster_points = 0.0;
    std::size_t best_attempt = 0;
    std::size_t best_y_seed_attempt = 0;
    std::uint64_t best_y_seed = 0;
    std::size_t best_sort_seed_attempt = 0;
    std::uint64_t best_sort_seed = 0;
    dac::SlotSortMode best_sort_mode = dac::SlotSortMode::Distance;
    double elapsed_ms = 0.0;
    bool baseline_verify = false;
    bool optimized_verify = false;
};

std::size_t parse_size(const std::string& s) {
    if (s.empty()) return 0;
    char* end = nullptr;
    const unsigned long long base = std::strtoull(s.c_str(), &end, 10);
    std::uint64_t mul = 1;
    if (end && *end) {
        const char unit = static_cast<char>(
            std::tolower(static_cast<unsigned char>(*end)));
        if (unit == 'k') mul = 1024ull;
        else if (unit == 'm') mul = 1024ull * 1024ull;
        else if (unit == 'g') mul = 1024ull * 1024ull * 1024ull;
    }
    return static_cast<std::size_t>(base * mul);
}

std::uint64_t parse_u64(const std::string& s) {
    char* end = nullptr;
    const unsigned long long v = std::strtoull(s.c_str(), &end, 0);
    if (end == s.c_str()) {
        throw std::runtime_error("bad integer " + s);
    }
    return static_cast<std::uint64_t>(v);
}

std::int64_t signed_delta(std::uint64_t reference,
                          std::uint64_t encoded) noexcept {
    if (reference >= encoded) {
        return static_cast<std::int64_t>(reference - encoded);
    }
    return -static_cast<std::int64_t>(encoded - reference);
}

std::uint64_t derive_seed(std::uint64_t base, std::size_t attempt) noexcept {
    if (attempt == 0) return base;
    std::uint64_t state = base ^
        (0x9E3779B97F4A7C15ULL * static_cast<std::uint64_t>(attempt + 1u));
    return dac::DeterministicYBuilder::splitmix64(state);
}

const char* sort_mode_label(dac::SlotSortMode mode) noexcept {
    switch (mode) {
        case dac::SlotSortMode::Distance: return "distance";
        case dac::SlotSortMode::Hash: return "hash";
        case dac::SlotSortMode::DistanceHash: return "distance-hash";
        case dac::SlotSortMode::HashDistance: return "hash-distance";
    }
    return "unknown";
}

std::vector<dac::SlotSortMode> parse_sort_modes(const std::string& s) {
    if (s == "all") {
        return {dac::SlotSortMode::Distance,
                dac::SlotSortMode::Hash,
                dac::SlotSortMode::DistanceHash,
                dac::SlotSortMode::HashDistance};
    }
    if (s == "distance") return {dac::SlotSortMode::Distance};
    if (s == "hash") return {dac::SlotSortMode::Hash};
    if (s == "distance-hash") return {dac::SlotSortMode::DistanceHash};
    if (s == "hash-distance") return {dac::SlotSortMode::HashDistance};
    throw std::runtime_error("unknown --sort-mode " + s);
}

std::string json_escape(const std::string& s) {
    std::string out;
    out.reserve(s.size() + 8);
    for (char ch : s) {
        switch (ch) {
            case '\\': out += "\\\\"; break;
            case '"': out += "\\\""; break;
            case '\n': out += "\\n"; break;
            case '\r': out += "\\r"; break;
            case '\t': out += "\\t"; break;
            default: out += ch; break;
        }
    }
    return out;
}

std::vector<std::uint8_t> read_prefix(const std::filesystem::path& path,
                                      std::size_t max_bytes) {
    std::ifstream in(path, std::ios::binary);
    if (!in) {
        throw std::runtime_error("cannot open " + path.string());
    }
    std::vector<std::uint8_t> bytes(max_bytes);
    in.read(reinterpret_cast<char*>(bytes.data()),
            static_cast<std::streamsize>(bytes.size()));
    bytes.resize(static_cast<std::size_t>(in.gcount()));
    return bytes;
}

std::vector<std::size_t> default_prefixes_for(std::uint64_t file_size) {
    std::vector<std::size_t> out;
    for (std::size_t n : {10240u, 65536u, 262144u, 1048576u}) {
        if (file_size >= n) out.push_back(n);
    }
    if (out.empty() && file_size > 0) {
        out.push_back(static_cast<std::size_t>(file_size));
    } else if (file_size > 0 && file_size <= 1048576ull &&
               std::find(out.begin(), out.end(),
                         static_cast<std::size_t>(file_size)) == out.end()) {
        out.push_back(static_cast<std::size_t>(file_size));
    }
    return out;
}

void print_header() {
    std::printf("| %-22s | %8s | %5s | %5s | %9s | %9s | %11s | %11s | %11s | %11s | %9s | %7s | %-13s |\n",
                "file", "prefix", "mult", "|Y|", "base_cur", "opt_cur",
                "base_d_raw", "opt_d_raw", "opt_d_codec", "quad_d_raw",
                "opt_bytes", "best", "sort");
    std::printf("|------------------------|----------|-------|-------|-----------|-----------|-------------|-------------|-------------|-------------|-----------|---------|---------------|\n");
}

void print_row(const Row& r) {
    std::printf("| %-22s | %8zu | %5zu | %5zu | %9zu | %9zu | %11lld | %11lld | %11lld | %11lld | %9llu | %7zu | %-13s |\n",
                r.file.c_str(), r.prefix, r.multiplicity, r.y_len,
                r.baseline_curves, r.optimized_curves,
                static_cast<long long>(r.baseline_delta_vs_raw),
                static_cast<long long>(r.optimized_delta_vs_raw),
                static_cast<long long>(r.optimized_delta_vs_codec),
                static_cast<long long>(r.quadratic_delta_vs_raw),
                static_cast<unsigned long long>(r.optimized_bytes),
                r.best_attempt,
                sort_mode_label(r.best_sort_mode));
}

void emit_json(const std::string& path,
               const Config& cfg,
               const std::vector<Row>& rows) {
    std::ofstream out(path);
    if (!out) throw std::runtime_error("cannot open json output " + path);
    out << "{\n";
    out << "  \"policy\": \"" << cfg.policy_label << "\",\n";
    out << "  \"attempts\": " << cfg.attempts << ",\n";
    out << "  \"noise_radius\": " << cfg.noise << ",\n";
    out << "  \"y_seed_attempts\": " << cfg.y_seed_attempts << ",\n";
    out << "  \"sort_seed_attempts\": " << cfg.sort_seed_attempts << ",\n";
    out << "  \"candidate_limit\": " << cfg.candidate_limit << ",\n";
    out << "  \"block_endpoint_limit\": " << cfg.block_endpoint_limit << ",\n";
    out << "  \"block_interior_limit\": " << cfg.block_interior_limit << ",\n";
    out << "  \"max_points_per_curve\": " << cfg.max_points_per_curve << ",\n";
    out << "  \"quadratic_max_points\": " << cfg.quadratic_max_points << ",\n";
    out << "  \"sort_modes\": [";
    for (std::size_t i = 0; i < cfg.sort_modes.size(); ++i) {
        if (i) out << ", ";
        out << "\"" << sort_mode_label(cfg.sort_modes[i]) << "\"";
    }
    out << "],\n";
    out << "  \"rows\": [\n";
    for (std::size_t i = 0; i < rows.size(); ++i) {
        const auto& r = rows[i];
        out << "    {\n";
        out << "      \"file\": \"" << json_escape(r.file) << "\",\n";
        out << "      \"file_size\": " << r.file_size << ",\n";
        out << "      \"prefix\": " << r.prefix << ",\n";
        out << "      \"multiplicity\": " << r.multiplicity << ",\n";
        out << "      \"y_len\": " << r.y_len << ",\n";
        out << "      \"codec_bytes\": " << r.codec_bytes << ",\n";
        out << "      \"baseline_curves\": " << r.baseline_curves << ",\n";
        out << "      \"baseline_overrides\": " << r.baseline_overrides << ",\n";
        out << "      \"baseline_bytes\": " << r.baseline_bytes << ",\n";
        out << "      \"baseline_delta_vs_raw\": " << r.baseline_delta_vs_raw << ",\n";
        out << "      \"baseline_delta_vs_codec\": " << r.baseline_delta_vs_codec << ",\n";
        out << "      \"baseline_ratio_vs_raw\": " << r.baseline_raw << ",\n";
        out << "      \"baseline_ratio_vs_codec\": " << r.baseline_codec << ",\n";
        out << "      \"optimized_curves\": " << r.optimized_curves << ",\n";
        out << "      \"optimized_overrides\": " << r.optimized_overrides << ",\n";
        out << "      \"optimized_bytes\": " << r.optimized_bytes << ",\n";
        out << "      \"optimized_delta_vs_raw\": " << r.optimized_delta_vs_raw << ",\n";
        out << "      \"optimized_delta_vs_codec\": " << r.optimized_delta_vs_codec << ",\n";
        out << "      \"optimized_ratio_vs_raw\": " << r.optimized_raw << ",\n";
        out << "      \"optimized_ratio_vs_codec\": " << r.optimized_codec << ",\n";
        out << "      \"quadratic_segments\": " << r.quadratic_segments << ",\n";
        out << "      \"quadratic_bytes\": " << r.quadratic_bytes << ",\n";
        out << "      \"quadratic_delta_vs_raw\": " << r.quadratic_delta_vs_raw << ",\n";
        out << "      \"quadratic_delta_vs_codec\": " << r.quadratic_delta_vs_codec << ",\n";
        out << "      \"quadratic_ratio_vs_raw\": " << r.quadratic_raw << ",\n";
        out << "      \"quadratic_ratio_vs_codec\": " << r.quadratic_codec << ",\n";
        out << "      \"quadratic_max_cluster_points\": " << r.quadratic_max_cluster_points << ",\n";
        out << "      \"quadratic_mean_cluster_points\": " << r.quadratic_mean_cluster_points << ",\n";
        out << "      \"best_attempt\": " << r.best_attempt << ",\n";
        out << "      \"best_y_seed_attempt\": " << r.best_y_seed_attempt << ",\n";
        out << "      \"best_y_seed\": " << r.best_y_seed << ",\n";
        out << "      \"best_sort_seed_attempt\": " << r.best_sort_seed_attempt << ",\n";
        out << "      \"best_sort_seed\": " << r.best_sort_seed << ",\n";
        out << "      \"best_sort_mode\": \"" << sort_mode_label(r.best_sort_mode) << "\",\n";
        out << "      \"elapsed_ms\": " << r.elapsed_ms << ",\n";
        out << "      \"baseline_verify\": " << (r.baseline_verify ? "true" : "false") << ",\n";
        out << "      \"optimized_verify\": " << (r.optimized_verify ? "true" : "false") << "\n";
        out << "    }" << (i + 1 < rows.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";
}

Config parse_args(int argc, char** argv) {
    Config cfg;
    cfg.prefixes.clear();
    cfg.multiplicities.clear();
    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];
        if (arg == "--file" && i + 1 < argc) {
            cfg.files.emplace_back(argv[++i]);
        } else if (arg == "--prefix" && i + 1 < argc) {
            cfg.prefixes.push_back(parse_size(argv[++i]));
        } else if (arg == "--multiplicity" && i + 1 < argc) {
            cfg.multiplicities.push_back(parse_size(argv[++i]));
        } else if (arg == "--attempts" && i + 1 < argc) {
            cfg.attempts = parse_size(argv[++i]);
        } else if (arg == "--noise" && i + 1 < argc) {
            cfg.noise = parse_size(argv[++i]);
        } else if (arg == "--y-seed" && i + 1 < argc) {
            cfg.y_seed = parse_u64(argv[++i]);
        } else if (arg == "--sort-seed" && i + 1 < argc) {
            cfg.sort_seed = parse_u64(argv[++i]);
        } else if (arg == "--y-seed-attempts" && i + 1 < argc) {
            cfg.y_seed_attempts = parse_size(argv[++i]);
        } else if (arg == "--sort-seed-attempts" && i + 1 < argc) {
            cfg.sort_seed_attempts = parse_size(argv[++i]);
        } else if (arg == "--sort-mode" && i + 1 < argc) {
            cfg.sort_modes = parse_sort_modes(argv[++i]);
        } else if (arg == "--candidate-limit" && i + 1 < argc) {
            cfg.candidate_limit = parse_size(argv[++i]);
        } else if (arg == "--block-endpoint-limit" && i + 1 < argc) {
            cfg.block_endpoint_limit = parse_size(argv[++i]);
        } else if (arg == "--block-interior-limit" && i + 1 < argc) {
            cfg.block_interior_limit = parse_size(argv[++i]);
        } else if (arg == "--max-points-per-curve" && i + 1 < argc) {
            cfg.max_points_per_curve = parse_size(argv[++i]);
        } else if (arg == "--quadratic-max-points" && i + 1 < argc) {
            cfg.quadratic_max_points = parse_size(argv[++i]);
        } else if (arg == "--policy" && i + 1 < argc) {
            const std::string v = argv[++i];
            if (v == "uniform") {
                cfg.policy = dac::ShufflePolicy::Uniform;
                cfg.policy_label = "uniform";
            } else if (v == "stratified") {
                cfg.policy = dac::ShufflePolicy::Stratified;
                cfg.policy_label = "stratified";
            } else {
                throw std::runtime_error("unknown --policy " + v);
            }
        } else if (arg == "--out-json" && i + 1 < argc) {
            cfg.json_path = argv[++i];
        } else {
            throw std::runtime_error("unknown or incomplete arg " + arg);
        }
    }
    if (cfg.multiplicities.empty()) cfg.multiplicities = {3, 16, 64};
    if (cfg.y_seed_attempts == 0) cfg.y_seed_attempts = 1;
    if (cfg.sort_seed_attempts == 0) cfg.sort_seed_attempts = 1;
    if (cfg.sort_modes.empty()) cfg.sort_modes = {dac::SlotSortMode::Distance};
    if (cfg.max_points_per_curve < 2) cfg.max_points_per_curve = 2;
    if (cfg.quadratic_max_points < 2) cfg.quadratic_max_points = 2;
    if (cfg.files.empty()) {
        throw std::runtime_error("bench_corpus requires at least one --file");
    }
    return cfg;
}

Row run_one(const std::filesystem::path& path,
            std::uint64_t file_size,
            const std::vector<std::uint8_t>& bytes,
            std::size_t prefix,
            std::size_t multiplicity,
            const Config& cfg) {
    dac::DeterministicYBuilder::Params yp;
    yp.seed = cfg.y_seed;
    yp.multiplicity = multiplicity;
    yp.policy = cfg.policy;
    const auto baseline_y = dac::DeterministicYBuilder::build(yp);

    dac::LayeredPickOptimizer::Options baseline_opts;
    baseline_opts.cover_options.max_points_per_curve = cfg.max_points_per_curve;
    baseline_opts.attempts = 1;
    baseline_opts.noise_radius = 0;
    baseline_opts.seed = 0xA11CEULL;

    dac::LayeredPickOptimizer::Options optimized_opts = baseline_opts;
    optimized_opts.attempts = cfg.attempts;
    optimized_opts.noise_radius = cfg.noise;
    optimized_opts.block_greedy = true;
    optimized_opts.candidate_limit = cfg.candidate_limit;
    optimized_opts.block_endpoint_limit = cfg.block_endpoint_limit;
    optimized_opts.block_interior_limit = cfg.block_interior_limit;

    const auto start = std::chrono::steady_clock::now();
    auto baseline = dac::LayeredPickOptimizer::optimize(bytes, baseline_y, baseline_opts);

    dac::LayeredPickOptimizer::Result optimized;
    std::vector<std::uint8_t> optimized_y = baseline_y;
    std::size_t best_y_seed_attempt = 0;
    std::uint64_t best_y_seed = cfg.y_seed;
    std::size_t best_sort_seed_attempt = 0;
    std::uint64_t best_sort_seed = cfg.sort_seed;
    dac::SlotSortMode best_sort_mode = dac::SlotSortMode::Distance;
    auto best_score = std::tuple<std::size_t, std::size_t, std::uint64_t>{
        std::numeric_limits<std::size_t>::max(),
        std::numeric_limits<std::size_t>::max(),
        std::numeric_limits<std::uint64_t>::max()};

    for (std::size_t y_attempt = 0; y_attempt < cfg.y_seed_attempts; ++y_attempt) {
        yp.seed = derive_seed(cfg.y_seed, y_attempt);
        auto y = dac::DeterministicYBuilder::build(yp);
        for (dac::SlotSortMode mode : cfg.sort_modes) {
            for (std::size_t sort_attempt = 0;
                 sort_attempt < cfg.sort_seed_attempts;
                 ++sort_attempt) {
                optimized_opts.sort_seed = derive_seed(cfg.sort_seed, sort_attempt);
                optimized_opts.slot_sort_mode = mode;
                auto candidate = dac::LayeredPickOptimizer::optimize(
                    bytes, y, optimized_opts);
                const auto score =
                    std::tuple<std::size_t, std::size_t, std::uint64_t>{
                        candidate.cover.curves.size(),
                        candidate.cover.overrides.size(),
                        candidate.layered_bytes};
                if (score < best_score) {
                    optimized = std::move(candidate);
                    optimized_y = y;
                    best_y_seed_attempt = y_attempt;
                    best_y_seed = yp.seed;
                    best_sort_seed_attempt = sort_attempt;
                    best_sort_seed = optimized_opts.sort_seed;
                    best_sort_mode = mode;
                    best_score = score;
                }
            }
        }
    }
    const auto stop = std::chrono::steady_clock::now();

    Row r;
    r.file = path.filename().string();
    r.file_size = file_size;
    r.prefix = prefix;
    r.multiplicity = baseline_y.size() / 256u;
    r.y_len = baseline_y.size();
    r.codec_bytes = dac::CurveCodec::persisted_size(bytes.size(), baseline_y.size());
    r.baseline_curves = baseline.cover.curves.size();
    r.baseline_overrides = baseline.cover.overrides.size();
    r.baseline_bytes = baseline.layered_bytes;
    r.baseline_delta_vs_raw =
        signed_delta(static_cast<std::uint64_t>(bytes.size()), r.baseline_bytes);
    r.baseline_delta_vs_codec =
        signed_delta(r.codec_bytes, r.baseline_bytes);
    r.baseline_raw = bytes.empty() ? 0.0
        : static_cast<double>(r.baseline_bytes) / static_cast<double>(bytes.size());
    r.baseline_codec = r.codec_bytes == 0 ? 0.0
        : static_cast<double>(r.baseline_bytes) / static_cast<double>(r.codec_bytes);
    r.optimized_curves = optimized.cover.curves.size();
    r.optimized_overrides = optimized.cover.overrides.size();
    r.optimized_bytes = optimized.layered_bytes;
    r.optimized_delta_vs_raw =
        signed_delta(static_cast<std::uint64_t>(bytes.size()), r.optimized_bytes);
    r.optimized_delta_vs_codec =
        signed_delta(r.codec_bytes, r.optimized_bytes);
    r.optimized_raw = bytes.empty() ? 0.0
        : static_cast<double>(r.optimized_bytes) / static_cast<double>(bytes.size());
    r.optimized_codec = r.codec_bytes == 0 ? 0.0
        : static_cast<double>(r.optimized_bytes) / static_cast<double>(r.codec_bytes);
    dac::FloorQuadraticBezierFitter::Options qopts;
    qopts.max_cluster_points = cfg.quadratic_max_points;
    auto quadratic = dac::FloorQuadraticBezierFitter::fit(optimized.curve, qopts);
    r.quadratic_segments = quadratic.segments.size();
    r.quadratic_bytes = dac::FloorQuadraticBezierStorage::persisted_size(
        quadratic.segments.size(), optimized_y.size(), bytes.size());
    r.quadratic_delta_vs_raw =
        signed_delta(static_cast<std::uint64_t>(bytes.size()), r.quadratic_bytes);
    r.quadratic_delta_vs_codec =
        signed_delta(r.codec_bytes, r.quadratic_bytes);
    r.quadratic_raw = bytes.empty() ? 0.0
        : static_cast<double>(r.quadratic_bytes) / static_cast<double>(bytes.size());
    r.quadratic_codec = r.codec_bytes == 0 ? 0.0
        : static_cast<double>(r.quadratic_bytes) / static_cast<double>(r.codec_bytes);
    r.quadratic_max_cluster_points = quadratic.max_cluster_points;
    r.quadratic_mean_cluster_points = quadratic.mean_cluster_points;
    r.best_attempt = optimized.best_attempt;
    r.best_y_seed_attempt = best_y_seed_attempt;
    r.best_y_seed = best_y_seed;
    r.best_sort_seed_attempt = best_sort_seed_attempt;
    r.best_sort_seed = best_sort_seed;
    r.best_sort_mode = best_sort_mode;
    r.elapsed_ms = std::chrono::duration<double, std::milli>(stop - start).count();
    r.baseline_verify = dac::CurveLocator::verify(baseline.curve, bytes, baseline_y);
    r.optimized_verify = dac::CurveLocator::verify(optimized.curve, bytes, optimized_y);
    return r;
}

}  // namespace

int main(int argc, char** argv) {
    try {
        const Config cfg = parse_args(argc, argv);
        std::vector<Row> rows;
        print_header();
        for (const auto& path : cfg.files) {
            const std::uint64_t file_size = std::filesystem::file_size(path);
            std::vector<std::size_t> prefixes = cfg.prefixes.empty()
                ? default_prefixes_for(file_size)
                : cfg.prefixes;
            prefixes.erase(std::remove_if(prefixes.begin(), prefixes.end(),
                [file_size](std::size_t n) { return n == 0 || n > file_size; }),
                prefixes.end());
            if (prefixes.empty()) continue;

            const std::size_t max_prefix =
                *std::max_element(prefixes.begin(), prefixes.end());
            const auto all_bytes = read_prefix(path, max_prefix);
            for (std::size_t prefix : prefixes) {
                std::vector<std::uint8_t> bytes(
                    all_bytes.begin(), all_bytes.begin() +
                    static_cast<std::ptrdiff_t>(prefix));
                for (std::size_t multiplicity : cfg.multiplicities) {
                    auto row = run_one(path, file_size, bytes, prefix,
                                       multiplicity, cfg);
                    print_row(row);
                    rows.push_back(std::move(row));
                }
            }
        }
        if (!cfg.json_path.empty()) {
            emit_json(cfg.json_path, cfg, rows);
            std::fprintf(stderr, "bench_corpus: wrote %s (%zu rows)\n",
                         cfg.json_path.c_str(), rows.size());
        }
        return 0;
    } catch (const std::exception& e) {
        std::fprintf(stderr, "bench_corpus: %s\n", e.what());
        return 1;
    }
}
