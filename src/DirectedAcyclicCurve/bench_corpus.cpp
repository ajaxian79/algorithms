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
#include <sstream>
#include <stdexcept>
#include <string>
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
    double baseline_raw = 0.0;
    double baseline_codec = 0.0;
    std::size_t optimized_curves = 0;
    std::size_t optimized_overrides = 0;
    std::uint64_t optimized_bytes = 0;
    double optimized_raw = 0.0;
    double optimized_codec = 0.0;
    std::size_t best_attempt = 0;
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
    std::printf("| %-22s | %8s | %5s | %5s | %9s | %9s | %10s | %10s | %9s | %9s | %10s | %10s | %7s |\n",
                "file", "prefix", "mult", "|Y|", "base_cur", "opt_cur",
                "base/raw", "opt/raw", "base/codec", "opt/codec",
                "base_bytes", "opt_bytes", "best");
    std::printf("|------------------------|----------|-------|-------|-----------|-----------|------------|------------|-----------|-----------|------------|------------|---------|\n");
}

void print_row(const Row& r) {
    std::printf("| %-22s | %8zu | %5zu | %5zu | %9zu | %9zu | %9.3fx | %9.3fx | %8.3fx | %8.3fx | %10llu | %10llu | %7zu |\n",
                r.file.c_str(), r.prefix, r.multiplicity, r.y_len,
                r.baseline_curves, r.optimized_curves,
                r.baseline_raw, r.optimized_raw,
                r.baseline_codec, r.optimized_codec,
                static_cast<unsigned long long>(r.baseline_bytes),
                static_cast<unsigned long long>(r.optimized_bytes),
                r.best_attempt);
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
        out << "      \"baseline_ratio_vs_raw\": " << r.baseline_raw << ",\n";
        out << "      \"baseline_ratio_vs_codec\": " << r.baseline_codec << ",\n";
        out << "      \"optimized_curves\": " << r.optimized_curves << ",\n";
        out << "      \"optimized_overrides\": " << r.optimized_overrides << ",\n";
        out << "      \"optimized_bytes\": " << r.optimized_bytes << ",\n";
        out << "      \"optimized_ratio_vs_raw\": " << r.optimized_raw << ",\n";
        out << "      \"optimized_ratio_vs_codec\": " << r.optimized_codec << ",\n";
        out << "      \"best_attempt\": " << r.best_attempt << ",\n";
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
    yp.seed = 0xC0FFEEULL;
    yp.multiplicity = multiplicity;
    yp.policy = cfg.policy;
    auto y = dac::DeterministicYBuilder::build(yp);

    dac::LayeredPickOptimizer::Options baseline_opts;
    baseline_opts.attempts = 1;
    baseline_opts.noise_radius = 0;
    baseline_opts.seed = 0xA11CEULL;

    dac::LayeredPickOptimizer::Options optimized_opts = baseline_opts;
    optimized_opts.attempts = cfg.attempts;
    optimized_opts.noise_radius = cfg.noise;
    optimized_opts.block_greedy = true;

    const auto start = std::chrono::steady_clock::now();
    auto baseline = dac::LayeredPickOptimizer::optimize(bytes, y, baseline_opts);
    auto optimized = dac::LayeredPickOptimizer::optimize(bytes, y, optimized_opts);
    const auto stop = std::chrono::steady_clock::now();

    Row r;
    r.file = path.filename().string();
    r.file_size = file_size;
    r.prefix = prefix;
    r.multiplicity = y.size() / 256u;
    r.y_len = y.size();
    r.codec_bytes = dac::CurveCodec::persisted_size(bytes.size(), y.size());
    r.baseline_curves = baseline.cover.curves.size();
    r.baseline_overrides = baseline.cover.overrides.size();
    r.baseline_bytes = baseline.layered_bytes;
    r.baseline_raw = bytes.empty() ? 0.0
        : static_cast<double>(r.baseline_bytes) / static_cast<double>(bytes.size());
    r.baseline_codec = r.codec_bytes == 0 ? 0.0
        : static_cast<double>(r.baseline_bytes) / static_cast<double>(r.codec_bytes);
    r.optimized_curves = optimized.cover.curves.size();
    r.optimized_overrides = optimized.cover.overrides.size();
    r.optimized_bytes = optimized.layered_bytes;
    r.optimized_raw = bytes.empty() ? 0.0
        : static_cast<double>(r.optimized_bytes) / static_cast<double>(bytes.size());
    r.optimized_codec = r.codec_bytes == 0 ? 0.0
        : static_cast<double>(r.optimized_bytes) / static_cast<double>(r.codec_bytes);
    r.best_attempt = optimized.best_attempt;
    r.elapsed_ms = std::chrono::duration<double, std::milli>(stop - start).count();
    r.baseline_verify = dac::CurveLocator::verify(baseline.curve, bytes, y);
    r.optimized_verify = dac::CurveLocator::verify(optimized.curve, bytes, y);
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
