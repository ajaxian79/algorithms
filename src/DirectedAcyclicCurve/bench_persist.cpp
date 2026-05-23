// bench_persist: sweep over a range of |X| sizes, serialize each (Y, curve)
// pair, and print a table comparing persisted bytes vs raw |X|.
//
// Default behaviour (no flags) reproduces the original report exactly: one
// row per case, Uniform Y, CursorCycle pick, no Bezier measurement.
//
// New flags (Slice 3):
//   --policy {uniform|stratified}     Y builder policy (default uniform)
//   --pick {cursor|nearest}           locator pick strategy (default cursor)
//   --bezier-tolerance <T>            enable Bezier fit + storage column
//                                     (default disabled; tolerance must be >= 0)
//   --floor-linear                    enable two-point Bezier clusters whose
//                                     interior nodes pass when
//                                     floor(line_y(i)) == j_i
//   --layered-cubic                   enable two-anchor cubic Bezier layer
//                                     cover + sparse curve-rank overrides
//   --compare-all-combos              run all 4 (policy x pick) combos per
//                                     case; bezier-tolerance also enabled
//                                     so the comparison includes Bezier
//                                     storage. Overrides --policy/--pick.
//   --out-json <path>                 emit per-case JSON sidecar; under
//                                     --compare-all-combos this becomes
//                                     per-case per-combo.
//
// Output: a human-readable table on stdout. With --compare-all-combos there
// is one row per (case, combo) tuple; otherwise one row per case.

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "curve_bezier.hpp"
#include "curve_codec.hpp"
#include "curve_locator.hpp"
#include "y_builder.hpp"

namespace dac = algorithms::dac;

namespace {

std::vector<std::uint8_t> make_x(std::size_t n, std::uint64_t seed) {
    std::vector<std::uint8_t> x;
    x.reserve(n);
    std::uint64_t state = seed;
    for (std::size_t i = 0; i < n; ++i) {
        x.push_back(static_cast<std::uint8_t>(
            dac::DeterministicYBuilder::splitmix64(state) & 0xFFULL));
    }
    return x;
}

struct Case {
    std::size_t x_len;
    std::size_t y_min_length;  // passed to legacy build(seed, min_length)
    std::uint64_t y_seed;
    std::uint64_t x_seed;
};

struct ComboKey {
    dac::ShufflePolicy policy;
    dac::PickStrategy  pick;
    const char* label;
};

const ComboKey kComboAll[4] = {
    {dac::ShufflePolicy::Uniform,    dac::PickStrategy::CursorCycle,       "uniform/cursor"},
    {dac::ShufflePolicy::Uniform,    dac::PickStrategy::NearestToPrevious, "uniform/nearest"},
    {dac::ShufflePolicy::Stratified, dac::PickStrategy::CursorCycle,       "stratified/cursor"},
    {dac::ShufflePolicy::Stratified, dac::PickStrategy::NearestToPrevious, "stratified/nearest"},
};

struct CombineResult {
    std::size_t x_len = 0;
    std::size_t y_len = 0;
    std::uint8_t index_width = 0;
    std::uint64_t file_bytes = 0;
    double codec_ratio = 0.0;
    bool round_trip_ok = false;
    double mean_abs_step = 0.0;
    std::int64_t max_abs_step = 0;
    // Bezier measurement (only populated if bezier_enabled).
    bool bezier_enabled = false;
    double bezier_tolerance = 0.0;
    std::size_t bezier_segments = 0;
    std::uint64_t bezier_bytes = 0;
    std::uint64_t bezier_break_even_segs = 0;
    double bezier_ratio_vs_raw = 0.0;
    double bezier_ratio_vs_codec = 0.0;
    bool floor_linear_enabled = false;
    std::size_t floor_linear_segments = 0;
    std::uint64_t floor_linear_bytes = 0;
    std::uint64_t floor_linear_break_even_segs = 0;
    double floor_linear_ratio_vs_raw = 0.0;
    double floor_linear_ratio_vs_codec = 0.0;
    std::size_t floor_linear_max_cluster_points = 0;
    double floor_linear_mean_cluster_points = 0.0;
    bool layered_cubic_enabled = false;
    std::size_t layered_cubic_curves = 0;
    std::size_t layered_cubic_overrides = 0;
    std::uint64_t layered_cubic_bytes = 0;
    std::uint64_t layered_cubic_break_even_curves = 0;
    double layered_cubic_ratio_vs_raw = 0.0;
    double layered_cubic_ratio_vs_codec = 0.0;
    std::size_t layered_cubic_max_points_per_curve = 0;
    double layered_cubic_mean_points_per_curve = 0.0;
    std::size_t layered_cubic_max_rank = 0;
    std::vector<std::pair<std::size_t, std::int64_t>> sampled_points;  // raw nodes
    std::vector<std::pair<double, double>> bezier_samples;            // for chart
    std::vector<std::pair<double, double>> floor_linear_samples;       // for chart
    std::vector<std::pair<double, double>> layered_cubic_samples;      // selected layer for chart
    const char* combo_label = "";
};

constexpr std::size_t kPointBudget = 512;

std::vector<std::pair<std::size_t, std::int64_t>>
subsample_nodes(const std::vector<std::int64_t>& nodes) {
    std::vector<std::pair<std::size_t, std::int64_t>> out;
    const std::size_t n = nodes.size();
    if (n == 0) return out;
    if (n <= kPointBudget) {
        out.reserve(n);
        for (std::size_t k = 0; k < n; ++k) {
            out.emplace_back(k + 1, nodes[k]);
        }
        return out;
    }
    out.reserve(kPointBudget);
    for (std::size_t s = 0; s < kPointBudget; ++s) {
        const std::size_t k = (s * (n - 1)) / (kPointBudget - 1);
        out.emplace_back(k + 1, nodes[k]);
    }
    return out;
}

CombineResult run_combo(const Case& c, dac::ShufflePolicy policy,
                        dac::PickStrategy pick, const char* label,
                        bool bezier_enabled, double bezier_tolerance,
                        bool floor_linear_enabled,
                        bool layered_cubic_enabled) {
    dac::DeterministicYBuilder::Params yp;
    yp.seed = c.y_seed;
    yp.policy = policy;
    // Convert legacy y_min_length to multiplicity (rounded up to 256).
    std::size_t length = std::max<std::size_t>(c.y_min_length, 768);
    if (length % 256 != 0) length += 256 - (length % 256);
    yp.multiplicity = length / 256;
    const auto y = dac::DeterministicYBuilder::build(yp);
    const auto x = make_x(c.x_len, c.x_seed);

    const auto curve = dac::CurveLocator::locate(x, y, pick);

    std::stringstream buf(std::ios::in | std::ios::out | std::ios::binary);
    dac::CurveCodec::serialize(buf, c.y_seed, y.size(), curve);
    const std::string blob = buf.str();
    const std::uint64_t file_bytes = blob.size();

    std::stringstream readback(blob, std::ios::in | std::ios::out | std::ios::binary);
    const auto rt = dac::CurveCodec::deserialize(readback);
    bool ok = (rt.curve.length() == x.size()) && (rt.y == y);
    if (ok) {
        for (std::size_t i = 1; i <= x.size(); ++i) {
            if (rt.y[rt.curve.evaluate_at_node(i)] != x[i - 1]) {
                ok = false; break;
            }
        }
    }

    const auto& nodes = curve.nodes();
    long long sum_d = 0;
    std::int64_t max_d = 0;
    for (std::size_t i = 1; i < nodes.size(); ++i) {
        std::int64_t d = std::llabs(nodes[i] - nodes[i - 1]);
        sum_d += d;
        if (d > max_d) max_d = d;
    }

    CombineResult cr;
    cr.x_len = x.size();
    cr.y_len = y.size();
    cr.index_width = dac::CurveCodec::pick_index_width(y.size());
    cr.file_bytes = file_bytes;
    cr.codec_ratio = x.size() == 0 ? 0.0
        : static_cast<double>(file_bytes) / static_cast<double>(x.size());
    cr.round_trip_ok = ok;
    cr.mean_abs_step = nodes.size() > 1
        ? static_cast<double>(sum_d) / static_cast<double>(nodes.size() - 1)
        : 0.0;
    cr.max_abs_step = max_d;
    cr.combo_label = label;
    cr.sampled_points = subsample_nodes(nodes);

    if (bezier_enabled) {
        cr.bezier_enabled = true;
        cr.bezier_tolerance = bezier_tolerance;
        auto fit = dac::BezierFitter::fit(curve, bezier_tolerance);
        cr.bezier_segments = fit.segments.size();
        cr.bezier_bytes = dac::BezierStorage::persisted_size(
            cr.bezier_segments, y.size(), x.size());
        cr.bezier_break_even_segs =
            dac::BezierStorage::break_even_segments(y.size(), x.size());
        cr.bezier_ratio_vs_raw = x.size() == 0 ? 0.0
            : static_cast<double>(cr.bezier_bytes) /
              static_cast<double>(x.size());
        cr.bezier_ratio_vs_codec = file_bytes == 0 ? 0.0
            : static_cast<double>(cr.bezier_bytes) /
              static_cast<double>(file_bytes);

        // Subsample Bezier curve for chart: at most kPointBudget points along
        // the whole composite curve, evenly spaced in i.
        const std::size_t n = nodes.size();
        if (n >= 2 && !fit.segments.empty()) {
            const std::size_t pts = std::min(kPointBudget, n);
            cr.bezier_samples.reserve(pts);
            // Build a lookup of segment by i_start ordering (segments are
            // already in node order from the recursive fit).
            for (std::size_t s = 0; s < pts; ++s) {
                const double i_real = 1.0 + static_cast<double>(s) *
                    (static_cast<double>(n - 1)) /
                    static_cast<double>(pts - 1);
                const std::size_t i_int = static_cast<std::size_t>(i_real);
                // Find the segment whose [i_start, i_end] brackets i_int.
                const dac::BezierSegment* hit = nullptr;
                for (const auto& seg : fit.segments) {
                    if (i_int >= seg.i_start && i_int <= seg.i_end) {
                        hit = &seg; break;
                    }
                }
                if (!hit) continue;
                const double span = static_cast<double>(hit->i_end - hit->i_start);
                const double t = span == 0.0 ? 0.0
                    : (i_real - static_cast<double>(hit->i_start)) / span;
                cr.bezier_samples.emplace_back(
                    i_real, dac::BezierFitter::evaluate_y(*hit, t));
            }
        }
    }

    if (floor_linear_enabled) {
        cr.floor_linear_enabled = true;
        auto fit = dac::FloorLinearBezierFitter::fit(curve);
        cr.floor_linear_segments = fit.segments.size();
        cr.floor_linear_bytes = dac::FloorLinearBezierStorage::persisted_size(
            cr.floor_linear_segments, y.size(), x.size());
        cr.floor_linear_break_even_segs =
            dac::FloorLinearBezierStorage::break_even_segments(y.size(), x.size());
        cr.floor_linear_ratio_vs_raw = x.size() == 0 ? 0.0
            : static_cast<double>(cr.floor_linear_bytes) /
              static_cast<double>(x.size());
        cr.floor_linear_ratio_vs_codec = file_bytes == 0 ? 0.0
            : static_cast<double>(cr.floor_linear_bytes) /
              static_cast<double>(file_bytes);
        cr.floor_linear_max_cluster_points = fit.max_cluster_points;
        cr.floor_linear_mean_cluster_points = fit.mean_cluster_points;

        cr.floor_linear_samples.reserve(cr.sampled_points.size());
        for (const auto& p : cr.sampled_points) {
            const std::size_t i = p.first;
            const dac::LinearBezierSegment* hit = nullptr;
            for (const auto& seg : fit.segments) {
                if (i >= seg.i_start && i <= seg.i_end) {
                    hit = &seg; break;
                }
            }
            if (!hit) continue;
            cr.floor_linear_samples.emplace_back(
                static_cast<double>(i),
                dac::FloorLinearBezierFitter::evaluate_y(
                    *hit, static_cast<double>(i)));
        }
    }

    if (layered_cubic_enabled) {
        cr.layered_cubic_enabled = true;
        auto cover = dac::LayeredBezierCoverFitter::fit(curve);
        cr.layered_cubic_curves = cover.curves.size();
        cr.layered_cubic_overrides = cover.overrides.size();
        cr.layered_cubic_bytes = dac::LayeredBezierCoverStorage::persisted_size(
            cover.curves.size(), cover.overrides.size(), y.size(), x.size());
        cr.layered_cubic_break_even_curves =
            dac::LayeredBezierCoverStorage::break_even_curves_no_overrides(
                y.size(), x.size());
        cr.layered_cubic_ratio_vs_raw = x.size() == 0 ? 0.0
            : static_cast<double>(cr.layered_cubic_bytes) /
              static_cast<double>(x.size());
        cr.layered_cubic_ratio_vs_codec = file_bytes == 0 ? 0.0
            : static_cast<double>(cr.layered_cubic_bytes) /
              static_cast<double>(file_bytes);
        cr.layered_cubic_max_points_per_curve = cover.max_points_per_curve;
        cr.layered_cubic_mean_points_per_curve = cover.mean_points_per_curve;
        cr.layered_cubic_max_rank = cover.max_rank;

        std::vector<std::size_t> rank_override(x.size() + 1,
                                               static_cast<std::size_t>(-1));
        for (const auto& ov : cover.overrides) {
            if (ov.i <= x.size()) rank_override[ov.i] = ov.rank;
        }
        cr.layered_cubic_samples.reserve(cr.sampled_points.size());
        for (const auto& p : cr.sampled_points) {
            const std::size_t i = p.first;
            std::vector<double> active;
            for (const auto& s : cover.curves) {
                if (i >= s.i_start && i <= s.i_end) {
                    const double span = static_cast<double>(s.i_end - s.i_start);
                    const double t = span == 0.0 ? 0.0
                        : static_cast<double>(i - s.i_start) / span;
                    active.push_back(dac::BezierFitter::evaluate_y(s, t));
                }
            }
            if (active.empty()) continue;
            std::sort(active.begin(), active.end());
            const std::size_t rank =
                rank_override[i] == static_cast<std::size_t>(-1)
                    ? 0u : rank_override[i];
            if (rank >= active.size()) continue;
            cr.layered_cubic_samples.emplace_back(
                static_cast<double>(i), active[rank]);
        }
    }

    return cr;
}

void print_header_simple() {
    std::printf("| %8s | %8s | %s | %12s | %12s | %7s | %s |\n",
                "|X|", "|Y|", "W", "file_bytes", "predicted", "ratio", "round-trip");
    std::printf("|----------|----------|---|--------------|--------------|---------|------------|\n");
}

void print_row_simple(const CombineResult& r, std::uint64_t predicted) {
    std::printf("| %8zu | %8zu | %u | %12llu | %12llu | %6.3fx | %s |\n",
                r.x_len, r.y_len, static_cast<unsigned>(r.index_width),
                static_cast<unsigned long long>(r.file_bytes),
                static_cast<unsigned long long>(predicted),
                r.codec_ratio,
                r.round_trip_ok ? "ok" : "ROUND-TRIP FAILED");
}

void print_header_compare() {
    std::printf("| %5s | %5s | %-18s | %9s | %9s | %5s | %10s | %10s | %12s | %10s | %10s |\n",
                "|X|", "|Y|", "policy/pick",
                "mean|dj|", "max|dj|",
                "W",
                "file_bytes", "raw|X|",
                "bezier_bytes", "bez/raw", "bez/codec");
    std::printf("|-------|-------|--------------------|-----------|-----------|-------|------------|------------|--------------|------------|------------|\n");
}

void print_row_compare(const CombineResult& r) {
    std::printf("| %5zu | %5zu | %-18s | %9.2f | %9lld | %5u | %10llu | %10zu | %12llu | %9.3fx | %9.3fx |\n",
                r.x_len, r.y_len, r.combo_label,
                r.mean_abs_step, static_cast<long long>(r.max_abs_step),
                static_cast<unsigned>(r.index_width),
                static_cast<unsigned long long>(r.file_bytes),
                r.x_len,
                static_cast<unsigned long long>(r.bezier_bytes),
                r.bezier_ratio_vs_raw, r.bezier_ratio_vs_codec);
}

void print_header_floor_linear() {
    std::printf("| %5s | %5s | %-18s | %9s | %7s | %8s | %12s | %10s | %10s | %12s |\n",
                "|X|", "|Y|", "policy/pick",
                "mean|dj|", "segs", "max_run",
                "floor_bytes", "floor/raw", "floor/codec", "break_even");
    std::printf("|-------|-------|--------------------|-----------|---------|----------|--------------|------------|------------|--------------|\n");
}

void print_row_floor_linear(const CombineResult& r) {
    std::printf("| %5zu | %5zu | %-18s | %9.2f | %7zu | %8zu | %12llu | %9.3fx | %9.3fx | %12llu |\n",
                r.x_len, r.y_len, r.combo_label,
                r.mean_abs_step,
                r.floor_linear_segments,
                r.floor_linear_max_cluster_points,
                static_cast<unsigned long long>(r.floor_linear_bytes),
                r.floor_linear_ratio_vs_raw,
                r.floor_linear_ratio_vs_codec,
                static_cast<unsigned long long>(r.floor_linear_break_even_segs));
}

void print_header_layered_cubic() {
    std::printf("| %5s | %5s | %-18s | %9s | %7s | %9s | %7s | %8s | %12s | %10s | %10s |\n",
                "|X|", "|Y|", "policy/pick",
                "mean|dj|", "curves", "overrides", "max_pts", "max_rank",
                "layer_bytes", "layer/raw", "layer/codec");
    std::printf("|-------|-------|--------------------|-----------|---------|-----------|---------|----------|--------------|------------|------------|\n");
}

void print_row_layered_cubic(const CombineResult& r) {
    std::printf("| %5zu | %5zu | %-18s | %9.2f | %7zu | %9zu | %7zu | %8zu | %12llu | %9.3fx | %9.3fx |\n",
                r.x_len, r.y_len, r.combo_label,
                r.mean_abs_step,
                r.layered_cubic_curves,
                r.layered_cubic_overrides,
                r.layered_cubic_max_points_per_curve,
                r.layered_cubic_max_rank,
                static_cast<unsigned long long>(r.layered_cubic_bytes),
                r.layered_cubic_ratio_vs_raw,
                r.layered_cubic_ratio_vs_codec);
}

void emit_json_compare(std::ostream& out,
                        const std::vector<std::vector<CombineResult>>& results,
                        double bezier_tolerance) {
    out << "{\n";
    out << "  \"point_budget\": " << kPointBudget << ",\n";
    out << "  \"bezier_tolerance\": " << bezier_tolerance << ",\n";
    out << "  \"cases\": [\n";
    for (std::size_t i = 0; i < results.size(); ++i) {
        const auto& combos = results[i];
        out << "    {\n";
        out << "      \"x_len\": " << combos.front().x_len << ",\n";
        out << "      \"y_len\": " << combos.front().y_len << ",\n";
        out << "      \"index_width\": "
            << static_cast<int>(combos.front().index_width) << ",\n";
        out << "      \"codec_file_bytes\": " << combos.front().file_bytes << ",\n";
        out << "      \"combos\": [\n";
        for (std::size_t k = 0; k < combos.size(); ++k) {
            const auto& r = combos[k];
            out << "        {\n";
            out << "          \"label\": \"" << r.combo_label << "\",\n";
            out << "          \"mean_abs_step\": " << r.mean_abs_step << ",\n";
            out << "          \"max_abs_step\": " << r.max_abs_step << ",\n";
            out << "          \"bezier_segments\": " << r.bezier_segments << ",\n";
            out << "          \"bezier_bytes\": " << r.bezier_bytes << ",\n";
            out << "          \"bezier_break_even_segs\": "
                << r.bezier_break_even_segs << ",\n";
            out << "          \"bezier_ratio_vs_raw\": "
                << r.bezier_ratio_vs_raw << ",\n";
            out << "          \"bezier_ratio_vs_codec\": "
                << r.bezier_ratio_vs_codec << ",\n";
            out << "          \"floor_linear_segments\": "
                << r.floor_linear_segments << ",\n";
            out << "          \"floor_linear_bytes\": "
                << r.floor_linear_bytes << ",\n";
            out << "          \"floor_linear_break_even_segs\": "
                << r.floor_linear_break_even_segs << ",\n";
            out << "          \"floor_linear_ratio_vs_raw\": "
                << r.floor_linear_ratio_vs_raw << ",\n";
            out << "          \"floor_linear_ratio_vs_codec\": "
                << r.floor_linear_ratio_vs_codec << ",\n";
            out << "          \"floor_linear_max_cluster_points\": "
                << r.floor_linear_max_cluster_points << ",\n";
            out << "          \"floor_linear_mean_cluster_points\": "
                << r.floor_linear_mean_cluster_points << ",\n";
            out << "          \"layered_cubic_curves\": "
                << r.layered_cubic_curves << ",\n";
            out << "          \"layered_cubic_overrides\": "
                << r.layered_cubic_overrides << ",\n";
            out << "          \"layered_cubic_bytes\": "
                << r.layered_cubic_bytes << ",\n";
            out << "          \"layered_cubic_break_even_curves\": "
                << r.layered_cubic_break_even_curves << ",\n";
            out << "          \"layered_cubic_ratio_vs_raw\": "
                << r.layered_cubic_ratio_vs_raw << ",\n";
            out << "          \"layered_cubic_ratio_vs_codec\": "
                << r.layered_cubic_ratio_vs_codec << ",\n";
            out << "          \"layered_cubic_max_points_per_curve\": "
                << r.layered_cubic_max_points_per_curve << ",\n";
            out << "          \"layered_cubic_mean_points_per_curve\": "
                << r.layered_cubic_mean_points_per_curve << ",\n";
            out << "          \"layered_cubic_max_rank\": "
                << r.layered_cubic_max_rank << ",\n";
            out << "          \"nodes\": [";
            for (std::size_t p = 0; p < r.sampled_points.size(); ++p) {
                if (p) out << ", ";
                out << "[" << r.sampled_points[p].first << ", "
                    << r.sampled_points[p].second << "]";
            }
            out << "],\n";
            out << "          \"bezier\": [";
            for (std::size_t p = 0; p < r.bezier_samples.size(); ++p) {
                if (p) out << ", ";
                out << "[" << r.bezier_samples[p].first << ", "
                    << r.bezier_samples[p].second << "]";
            }
            out << "],\n";
            out << "          \"floor_linear\": [";
            for (std::size_t p = 0; p < r.floor_linear_samples.size(); ++p) {
                if (p) out << ", ";
                out << "[" << r.floor_linear_samples[p].first << ", "
                    << r.floor_linear_samples[p].second << "]";
            }
            out << "],\n";
            out << "          \"layered_cubic\": [";
            for (std::size_t p = 0; p < r.layered_cubic_samples.size(); ++p) {
                if (p) out << ", ";
                out << "[" << r.layered_cubic_samples[p].first << ", "
                    << r.layered_cubic_samples[p].second << "]";
            }
            out << "]\n        }";
            if (k + 1 < combos.size()) out << ",";
            out << "\n";
        }
        out << "      ]\n    }";
        if (i + 1 < results.size()) out << ",";
        out << "\n";
    }
    out << "  ]\n}\n";
}

const std::vector<Case>& default_cases() {
    static const std::vector<Case> cases = []{
        std::vector<Case> v;
        // Fixed minimum Y (768 = 256*3): the asymptote is index_width=2 -> 2.0x.
        for (std::size_t n : {1u, 5u, 10u, 100u, 1024u, 4096u, 10240u}) {
            v.push_back({n, 768u, 0xC0FFEEULL, 0xDEADBEEFULL ^ n});
        }
        // Larger Y, still within W=2 budget.
        for (std::size_t n : {1024u, 4096u, 10240u}) {
            v.push_back({n, 16384u, 0xC0FFEEULL, 0xDEADBEEFULL ^ n ^ 0x1u});
        }
        // Y just above the W=2 threshold.
        for (std::size_t n : {1024u, 4096u, 10240u}) {
            v.push_back({n, 65792u, 0xC0FFEEULL, 0xDEADBEEFULL ^ n ^ 0x2u});
        }
        return v;
    }();
    return cases;
}

}  // namespace

int main(int argc, char** argv) {
    std::string json_path;
    dac::ShufflePolicy policy = dac::ShufflePolicy::Uniform;
    dac::PickStrategy  pick   = dac::PickStrategy::CursorCycle;
    bool bezier_enabled = false;
    double bezier_tolerance = 0.5;
    bool floor_linear_enabled = false;
    bool layered_cubic_enabled = false;
    bool compare_all = false;
    const char* policy_label = "uniform";
    const char* pick_label   = "cursor";

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--out-json" && i + 1 < argc) {
            json_path = argv[++i];
        } else if (arg == "--policy" && i + 1 < argc) {
            std::string v = argv[++i];
            if (v == "uniform")          { policy = dac::ShufflePolicy::Uniform;    policy_label = "uniform"; }
            else if (v == "stratified")  { policy = dac::ShufflePolicy::Stratified; policy_label = "stratified"; }
            else {
                std::fprintf(stderr, "bench_persist: unknown --policy %s\n", v.c_str());
                return 2;
            }
        } else if (arg == "--pick" && i + 1 < argc) {
            std::string v = argv[++i];
            if (v == "cursor")           { pick = dac::PickStrategy::CursorCycle;       pick_label = "cursor"; }
            else if (v == "nearest")     { pick = dac::PickStrategy::NearestToPrevious; pick_label = "nearest"; }
            else {
                std::fprintf(stderr, "bench_persist: unknown --pick %s\n", v.c_str());
                return 2;
            }
        } else if (arg == "--bezier-tolerance" && i + 1 < argc) {
            bezier_tolerance = std::atof(argv[++i]);
            bezier_enabled = true;
        } else if (arg == "--compare-all-combos") {
            compare_all = true;
            bezier_enabled = true;
        } else if (arg == "--floor-linear") {
            floor_linear_enabled = true;
        } else if (arg == "--layered-cubic") {
            layered_cubic_enabled = true;
        } else {
            std::fprintf(stderr, "bench_persist: unknown arg %s\n", arg.c_str());
            return 2;
        }
    }

    const auto& cases = default_cases();

    if (!compare_all) {
        char combo_label[64];
        std::snprintf(combo_label, sizeof combo_label, "%s/%s",
                      policy_label, pick_label);
        print_header_simple();
        std::vector<CombineResult> results;
        results.reserve(cases.size());
        for (const auto& c : cases) {
            auto r = run_combo(c, policy, pick, combo_label,
                               bezier_enabled, bezier_tolerance,
                               floor_linear_enabled,
                               layered_cubic_enabled);
            const std::uint64_t predicted = dac::CurveCodec::persisted_size(
                c.x_len, r.y_len);
            print_row_simple(r, predicted);
            results.push_back(std::move(r));
        }
        if (bezier_enabled) {
            std::printf("\nBezier columns (tolerance=%.3f, policy=%s, pick=%s):\n",
                        bezier_tolerance, policy_label, pick_label);
            std::printf("| %5s | %5s | %9s | %5s | %12s | %10s | %10s | %12s |\n",
                        "|X|", "|Y|", "mean|dj|", "segs", "bezier_bytes",
                        "bez/raw", "bez/codec", "break_even");
            std::printf("|-------|-------|-----------|-------|--------------|------------|------------|--------------|\n");
            for (const auto& r : results) {
                std::printf("| %5zu | %5zu | %9.2f | %5zu | %12llu | %9.3fx | %9.3fx | %12llu |\n",
                            r.x_len, r.y_len, r.mean_abs_step,
                            r.bezier_segments,
                            static_cast<unsigned long long>(r.bezier_bytes),
                            r.bezier_ratio_vs_raw, r.bezier_ratio_vs_codec,
                            static_cast<unsigned long long>(r.bezier_break_even_segs));
            }
        }
        if (floor_linear_enabled) {
            std::printf("\nFloor-linear two-point Bezier clusters:\n");
            print_header_floor_linear();
            for (const auto& r : results) {
                print_row_floor_linear(r);
            }
        }
        if (layered_cubic_enabled) {
            std::printf("\nLayered cubic Bezier cover:\n");
            print_header_layered_cubic();
            for (const auto& r : results) {
                print_row_layered_cubic(r);
            }
        }
        if (!json_path.empty()) {
            std::vector<std::vector<CombineResult>> wrapped;
            wrapped.reserve(results.size());
            for (auto& r : results) wrapped.push_back({std::move(r)});
            std::ofstream out(json_path);
            if (!out) {
                std::fprintf(stderr, "bench_persist: cannot open %s\n",
                             json_path.c_str());
                return 1;
            }
            emit_json_compare(out, wrapped, bezier_tolerance);
            std::fprintf(stderr, "bench_persist: wrote %s (%zu cases)\n",
                         json_path.c_str(), wrapped.size());
        }
        return 0;
    }

    // --compare-all-combos: run all 4 combos per case, print a wider table.
    print_header_compare();
    std::vector<std::vector<CombineResult>> all_results;
    all_results.reserve(cases.size());
    for (const auto& c : cases) {
        std::vector<CombineResult> combos;
        combos.reserve(4);
        for (const auto& ck : kComboAll) {
            auto r = run_combo(c, ck.policy, ck.pick, ck.label,
                               true, bezier_tolerance,
                               floor_linear_enabled,
                               layered_cubic_enabled);
            print_row_compare(r);
            combos.push_back(std::move(r));
        }
        std::printf("|-------|-------|--------------------|-----------|-----------|-------|------------|------------|--------------|------------|------------|\n");
        all_results.push_back(std::move(combos));
    }

    std::printf("\nNotes\n");
    std::printf("  * mean|dj|, max|dj| = step statistics on p(i) - lower means smoother curve\n");
    std::printf("  * bezier_bytes      = 32 + 8 + W_x + W_y + segs * (W_x + 2*W_c + W_y), W_c via BezierStorage::pick_ctrl_width\n");
    std::printf("  * bez/raw           = bezier_bytes / |X|; ratio < 1.0 means Bezier beats raw bytes\n");
    std::printf("  * bez/codec         = bezier_bytes / file_bytes; ratio < 1.0 means Bezier beats the existing codec\n");
    std::printf("  * tolerance         = %.3f (rounding the Bezier at integer i recovers j_i)\n",
                bezier_tolerance);

    if (floor_linear_enabled) {
        std::printf("\nFloor-linear two-point Bezier clusters\n");
        print_header_floor_linear();
        for (const auto& combos : all_results) {
            for (const auto& r : combos) {
                print_row_floor_linear(r);
            }
            std::printf("|-------|-------|--------------------|-----------|---------|----------|--------------|------------|------------|--------------|\n");
        }
        std::printf("\n");
        std::printf("  * floor-linear accepts a cluster iff floor(line_y(i)) == j_i at every covered integer node\n");
        std::printf("  * floor_bytes = 32 + 8 + segs * 2 * (W_x + W_y); each segment stores first+last cluster point\n");
    }

    if (layered_cubic_enabled) {
        std::printf("\nLayered cubic Bezier cover\n");
        print_header_layered_cubic();
        for (const auto& combos : all_results) {
            for (const auto& r : combos) {
                print_row_layered_cubic(r);
            }
            std::printf("|-------|-------|--------------------|-----------|---------|-----------|---------|----------|--------------|------------|------------|\n");
        }
        std::printf("\n");
        std::printf("  * layer decode uses floor(lowest active curve) unless an override stores the rank above the lowest curve\n");
        std::printf("  * layer_bytes = 32 + 8 + curves*(2W_x + 2W_y + 2W_c) + 8 + overrides*(W_x + W_rank)\n");
    }

    if (!json_path.empty()) {
        std::ofstream out(json_path);
        if (!out) {
            std::fprintf(stderr, "bench_persist: cannot open %s\n",
                         json_path.c_str());
            return 1;
        }
        emit_json_compare(out, all_results, bezier_tolerance);
        std::fprintf(stderr, "bench_persist: wrote %s (%zu cases x 4 combos)\n",
                     json_path.c_str(), all_results.size());
    }
    return 0;
}
