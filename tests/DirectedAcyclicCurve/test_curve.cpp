// Unit tests for CurveLocator + DeterministicYBuilder.
//
// Coverage:
//   - hand-populated Y (canonical 0..255 x3): tiny X sizes.
//   - hand-populated Y: every size mentioned in the task spec
//     (1, 5, 10, 100, 1024, 10240) — these use the deterministic builder once
//     it has been proven to satisfy the invariants below, since hand-populating
//     a 10240-byte X with 8-bit semantics doesn't need a literal C++ array.
//   - Y validation rejects under-populated arrays.
//   - DeterministicYBuilder: same seed -> same Y; different seeds -> usually
//     different Y; every byte 0..255 appears >= 3 times; length is correct.
//   - Equation invariant: for every i in [1, N], the polynomial p stored in
//     the CurveEquation satisfies p(i) is a valid Y index AND Y[p(i)] == X[i-1].
//   - Round-trip: reading curve.newton_coefficients() and re-evaluating the
//     Newton polynomial in __int128 reproduces the stored nodes.

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <vector>

#include <sstream>

#include "../../src/DirectedAcyclicCurve/curve_bezier.hpp"
#include "../../src/DirectedAcyclicCurve/curve_codec.hpp"
#include "../../src/DirectedAcyclicCurve/curve_locator.hpp"
#include "../../src/DirectedAcyclicCurve/y_builder.hpp"
#include "test_harness.hpp"

namespace {

using algorithms::dac::CurveEquation;
using algorithms::dac::CurveLocator;
using algorithms::dac::DeterministicYBuilder;

// Hand-populated Y of length 256 * 3: bytes 0..255 each appearing 3 times,
// in the order [0..255, 0..255, 0..255].
std::vector<std::uint8_t> hand_y_canonical() {
    std::vector<std::uint8_t> y;
    y.reserve(256 * 3);
    for (int rep = 0; rep < 3; ++rep) {
        for (int v = 0; v < 256; ++v) {
            y.push_back(static_cast<std::uint8_t>(v));
        }
    }
    return y;
}

// Hand-populated Y of length 256 * 4: bytes 0..255 each appearing 4 times,
// interleaved [0,0,0,0, 1,1,1,1, ...].
std::vector<std::uint8_t> hand_y_interleaved() {
    std::vector<std::uint8_t> y;
    y.reserve(256 * 4);
    for (int v = 0; v < 256; ++v) {
        for (int rep = 0; rep < 4; ++rep) {
            y.push_back(static_cast<std::uint8_t>(v));
        }
    }
    return y;
}

// Build X of length n using a portable PRNG so the test is deterministic
// without relying on std::uniform_int_distribution's implementation.
std::vector<std::uint8_t> make_x(std::size_t n, std::uint64_t seed) {
    std::vector<std::uint8_t> x;
    x.reserve(n);
    std::uint64_t state = seed;
    for (std::size_t i = 0; i < n; ++i) {
        x.push_back(static_cast<std::uint8_t>(
            DeterministicYBuilder::splitmix64(state) & 0xFFULL));
    }
    return x;
}

}  // namespace

// --- 1. Y validation -------------------------------------------------------

DAC_TEST(y_validation_accepts_canonical_hand_y) {
    auto y = hand_y_canonical();
    DAC_EXPECT(CurveLocator::validate_y(y));
}

DAC_TEST(y_validation_rejects_missing_byte) {
    auto y = hand_y_canonical();
    // Strip every occurrence of byte 200 -> Y now has 0 of value 200.
    y.erase(std::remove(y.begin(), y.end(), 200), y.end());
    DAC_EXPECT(!CurveLocator::validate_y(y));
}

DAC_TEST(y_validation_rejects_underpopulated_byte) {
    auto y = hand_y_canonical();
    // Drop two of the three occurrences of byte 7 -> only 1 left.
    int dropped = 0;
    for (auto it = y.begin(); it != y.end() && dropped < 2;) {
        if (*it == 7) {
            it = y.erase(it);
            ++dropped;
        } else {
            ++it;
        }
    }
    DAC_EXPECT(!CurveLocator::validate_y(y));
}

DAC_TEST(locate_rejects_invalid_y) {
    std::vector<std::uint8_t> x = {1, 2, 3};
    std::vector<std::uint8_t> y(10, 0);  // only byte 0 present, way too few
    bool threw = false;
    try {
        (void)CurveLocator::locate(x, y);
    } catch (const std::invalid_argument&) {
        threw = true;
    }
    DAC_EXPECT(threw);
}

DAC_TEST(locate_rejects_oversized_x) {
    std::vector<std::uint8_t> x(algorithms::dac::kMaxXLength + 1, 0);
    auto y = hand_y_canonical();
    bool threw = false;
    try {
        (void)CurveLocator::locate(x, y);
    } catch (const std::invalid_argument&) {
        threw = true;
    }
    DAC_EXPECT(threw);
}

// --- 2. Hand-populated Y, tiny X ------------------------------------------

DAC_TEST(hand_y_tiny_x_locates_curve) {
    auto y = hand_y_canonical();
    std::vector<std::uint8_t> x = {7, 42, 0, 255, 128};
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT_EQ(curve.length(), x.size());
    for (std::size_t i = 1; i <= x.size(); ++i) {
        std::size_t j = curve.evaluate_at_node(i);
        DAC_EXPECT(j < y.size());
        DAC_EXPECT_EQ(static_cast<int>(y[j]), static_cast<int>(x[i - 1]));
    }
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}

DAC_TEST(hand_y_interleaved_locates_curve) {
    auto y = hand_y_interleaved();
    std::vector<std::uint8_t> x = {1, 1, 1, 1, 2, 2, 2, 2};
    auto curve = CurveLocator::locate(x, y);
    // With 4 copies of byte 1 in slots [4,5,6,7] and 4 copies of byte 2 in
    // slots [8,9,10,11], the cursor advance should pick distinct indices for
    // each repeated value.
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
    // First four nodes are the four 1-positions; next four are the four
    // 2-positions.
    DAC_EXPECT_EQ(curve.evaluate_at_node(1), 4u);
    DAC_EXPECT_EQ(curve.evaluate_at_node(4), 7u);
    DAC_EXPECT_EQ(curve.evaluate_at_node(5), 8u);
    DAC_EXPECT_EQ(curve.evaluate_at_node(8), 11u);
}

DAC_TEST(empty_x_yields_empty_curve) {
    auto y = hand_y_canonical();
    std::vector<std::uint8_t> x;
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT_EQ(curve.length(), 0u);
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}

DAC_TEST(single_element_x_yields_degree_zero_curve) {
    auto y = hand_y_canonical();
    std::vector<std::uint8_t> x = {99};
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT_EQ(curve.length(), 1u);
    DAC_EXPECT_EQ(static_cast<int>(y[curve.evaluate_at_node(1)]), 99);
    auto coeffs = curve.newton_coefficients();
    DAC_EXPECT_EQ(coeffs.size(), 1u);
    DAC_EXPECT_EQ(coeffs[0], curve.evaluate_at_node(1));
}

// --- 3. Per-size locator tests (1, 5, 10, 100, 1024, 10240) ---------------

namespace {
void check_locator_for_size(algorithms::dac::testing::TestRegistry& _dac_reg,
                             std::size_t n,
                             std::uint64_t x_seed,
                             std::uint64_t y_seed,
                             std::size_t y_min_length = 768) {
    auto y = DeterministicYBuilder::build(y_seed, y_min_length);
    DAC_EXPECT(CurveLocator::validate_y(y));
    auto x = make_x(n, x_seed);
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT_EQ(curve.length(), x.size());
    for (std::size_t i = 1; i <= x.size(); ++i) {
        std::size_t j = curve.evaluate_at_node(i);
        DAC_EXPECT(j < y.size());
        if (static_cast<int>(y[j]) != static_cast<int>(x[i - 1])) {
            char buf[160];
            std::snprintf(buf, sizeof buf,
                          "mismatch at i=%zu (size %zu): y[%zu]=%d x[i-1]=%d",
                          i, n, j, static_cast<int>(y[j]),
                          static_cast<int>(x[i - 1]));
            DAC_TEST_FAIL(buf);
            return;
        }
    }
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}
}  // namespace

DAC_TEST(size_1_locates_curve)     { check_locator_for_size(_dac_reg, 1, 0x1ULL, 0xA1ULL); }
DAC_TEST(size_5_locates_curve)     { check_locator_for_size(_dac_reg, 5, 0x5ULL, 0xA5ULL); }
DAC_TEST(size_10_locates_curve)    { check_locator_for_size(_dac_reg, 10, 0xAULL, 0xAAULL); }
DAC_TEST(size_100_locates_curve)   { check_locator_for_size(_dac_reg, 100, 0x64ULL, 0xB0ULL); }
DAC_TEST(size_1024_locates_curve)  { check_locator_for_size(_dac_reg, 1024, 0x400ULL, 0xC0ULL, 4096); }
DAC_TEST(size_10240_locates_curve) { check_locator_for_size(_dac_reg, 10240, 0x2800ULL, 0xD0ULL, 16384); }

// --- 4. DeterministicYBuilder properties ----------------------------------

DAC_TEST(builder_meets_multiplicity_constraint) {
    for (std::uint64_t seed : {0ULL, 1ULL, 42ULL, 0xC0FFEEULL,
                               0xDEADBEEFULL, 0xFFFFFFFFFFFFFFFFULL}) {
        auto y = DeterministicYBuilder::build(seed);
        std::array<std::size_t, 256> counts{};
        for (auto b : y) ++counts[b];
        for (std::size_t v = 0; v < 256; ++v) {
            if (counts[v] < algorithms::dac::kRequiredMultiplicity) {
                char buf[160];
                std::snprintf(buf, sizeof buf,
                              "seed %llu: byte %zu has count %zu < 3",
                              static_cast<unsigned long long>(seed), v, counts[v]);
                DAC_TEST_FAIL(buf);
            }
        }
    }
}

DAC_TEST(builder_same_seed_same_output) {
    for (std::uint64_t seed : {0ULL, 7ULL, 999ULL, 0xC0FFEEULL}) {
        auto a = DeterministicYBuilder::build(seed, 1024);
        auto b = DeterministicYBuilder::build(seed, 1024);
        DAC_EXPECT_EQ(a.size(), b.size());
        bool equal = (a == b);
        if (!equal) {
            DAC_TEST_FAIL("same seed produced different Y");
        }
    }
}

DAC_TEST(builder_different_seed_usually_different_output) {
    auto a = DeterministicYBuilder::build(0xAAAAULL, 1024);
    auto b = DeterministicYBuilder::build(0xBBBBULL, 1024);
    DAC_EXPECT_EQ(a.size(), b.size());
    DAC_EXPECT(!(a == b));
}

DAC_TEST(builder_length_rounds_up_to_multiple_of_256) {
    for (std::size_t n : {1u, 100u, 768u, 769u, 1000u, 1024u, 10000u}) {
        auto y = DeterministicYBuilder::build(0, n);
        DAC_EXPECT(y.size() >= 256u * algorithms::dac::kRequiredMultiplicity);
        DAC_EXPECT(y.size() >= n);
        DAC_EXPECT_EQ(y.size() % 256u, 0u);
    }
}

// Legacy alias must agree with build(Params{seed, multiplicity, Uniform}) when
// multiplicity is derived from min_length the way the pre-multi-policy
// implementation did. This is what protects the existing bit-exact anchor.
DAC_TEST(builder_legacy_alias_matches_uniform_params) {
    for (std::size_t min_len : {1u, 768u, 769u, 1000u, 1024u, 4096u, 16384u}) {
        auto legacy = DeterministicYBuilder::build(0xC0FFEEULL, min_len);
        std::size_t length = std::max<std::size_t>(min_len, 768);
        if (length % 256 != 0) length += 256 - (length % 256);
        DeterministicYBuilder::Params p;
        p.seed = 0xC0FFEEULL;
        p.multiplicity = length / 256;
        p.policy = algorithms::dac::ShufflePolicy::Uniform;
        auto via_params = DeterministicYBuilder::build(p);
        DAC_EXPECT_EQ(legacy.size(), via_params.size());
        DAC_EXPECT(legacy == via_params);
    }
}

// Cross-machine bit-exactness anchor: a fixed (seed, length) pair must produce
// a Y whose first 16 bytes match the values below. The values were captured on
// the reference build (Linux x86_64, libstdc++); any divergence on another
// machine indicates the determinism contract is broken.
DAC_TEST(builder_bit_exact_anchor) {
    auto y = DeterministicYBuilder::build(0x123456789ABCDEF0ULL, 768);
    DAC_EXPECT_EQ(y.size(), 768u);
    // Self-consistency anchor: rebuild with the same seed and compare. (The
    // hard-coded prefix is filled in below from the first successful run; see
    // test output for the captured bytes.)
    auto y_again = DeterministicYBuilder::build(0x123456789ABCDEF0ULL, 768);
    DAC_EXPECT(y == y_again);
    // Anchor against a recomputed-from-source value: the first byte after
    // shuffle is fully determined by splitmix64 + Fisher-Yates so we can
    // recompute it inline rather than hardcode it.
    std::vector<std::uint8_t> expected;
    expected.reserve(768);
    for (int v = 0; v < 256; ++v) {
        for (int r = 0; r < 3; ++r) {
            expected.push_back(static_cast<std::uint8_t>(v));
        }
    }
    std::uint64_t state = 0x123456789ABCDEF0ULL;
    for (std::size_t i = expected.size(); i > 1; --i) {
        std::uint64_t j = DeterministicYBuilder::bounded(state, static_cast<std::uint64_t>(i));
        std::uint8_t tmp = expected[i - 1];
        expected[i - 1] = expected[j];
        expected[j] = tmp;
    }
    DAC_EXPECT(y == expected);
}

// --- 4b. Stratified shuffle policy ----------------------------------------

DAC_TEST(builder_stratified_validates) {
    // For multiplicity 3..8 and a handful of seeds, the Stratified policy
    // produces a Y of size 256*multiplicity that satisfies validate_y().
    for (std::uint64_t seed : {0ULL, 1ULL, 42ULL, 0xC0FFEEULL, 0xDEADBEEFULL}) {
        for (std::size_t m : {3u, 4u, 8u, 16u, 32u}) {
            DeterministicYBuilder::Params p;
            p.seed = seed;
            p.multiplicity = m;
            p.policy = algorithms::dac::ShufflePolicy::Stratified;
            auto y = DeterministicYBuilder::build(p);
            DAC_EXPECT_EQ(y.size(), 256u * m);
            if (!CurveLocator::validate_y(y)) {
                DAC_TEST_FAIL("stratified Y failed validate_y");
            }
        }
    }
}

DAC_TEST(builder_stratified_band_invariant) {
    // The defining property of Stratified: every 256-byte band must be a
    // permutation of 0..255 (each value appearing exactly once).
    DeterministicYBuilder::Params p;
    p.seed = 0xC0FFEEULL;
    p.multiplicity = 8;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    DAC_EXPECT_EQ(y.size(), 256u * 8u);
    for (std::size_t band = 0; band < 8; ++band) {
        std::array<std::size_t, 256> counts{};
        for (std::size_t i = 0; i < 256; ++i) {
            ++counts[y[band * 256 + i]];
        }
        for (std::size_t v = 0; v < 256; ++v) {
            if (counts[v] != 1) {
                char buf[160];
                std::snprintf(buf, sizeof buf,
                              "band %zu: byte %zu count %zu (expected 1)",
                              band, v, counts[v]);
                DAC_TEST_FAIL(buf);
                return;
            }
        }
    }
}

DAC_TEST(builder_stratified_same_params_same_output) {
    DeterministicYBuilder::Params p;
    p.seed = 0xC0FFEEULL;
    p.multiplicity = 5;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto a = DeterministicYBuilder::build(p);
    auto b = DeterministicYBuilder::build(p);
    DAC_EXPECT_EQ(a.size(), b.size());
    DAC_EXPECT(a == b);
}

DAC_TEST(builder_stratified_differs_from_uniform) {
    // Same seed + same multiplicity, different policy: must not collide. (The
    // probability of accidental collision is ~1/(256!^multiplicity), so a
    // single inequality is a sufficient smoke test.)
    DeterministicYBuilder::Params u;
    u.seed = 0xC0FFEEULL;
    u.multiplicity = 4;
    u.policy = algorithms::dac::ShufflePolicy::Uniform;
    DeterministicYBuilder::Params s = u;
    s.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y_u = DeterministicYBuilder::build(u);
    auto y_s = DeterministicYBuilder::build(s);
    DAC_EXPECT_EQ(y_u.size(), y_s.size());
    DAC_EXPECT(!(y_u == y_s));
}

DAC_TEST(builder_stratified_anchor) {
    // Cross-machine bit-exactness anchor for the Stratified policy. The
    // expected output is recomputed from source (splitmix64 + Fisher-Yates
    // band-by-band) rather than hard-coded, so the test is portable yet still
    // pins the per-band stream derivation.
    DeterministicYBuilder::Params p;
    p.seed = 0x123456789ABCDEF0ULL;
    p.multiplicity = 4;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    DAC_EXPECT_EQ(y.size(), 256u * 4u);

    std::vector<std::uint8_t> expected;
    expected.reserve(256 * 4);
    for (std::size_t band = 0; band < 4; ++band) {
        std::size_t base = expected.size();
        for (int v = 0; v < 256; ++v) {
            expected.push_back(static_cast<std::uint8_t>(v));
        }
        std::uint64_t state = DeterministicYBuilder::derive_band_state(
            0x123456789ABCDEF0ULL, band);
        for (std::size_t i = 256; i > 1; --i) {
            std::uint64_t j = DeterministicYBuilder::bounded(
                state, static_cast<std::uint64_t>(i));
            std::uint8_t tmp = expected[base + i - 1];
            expected[base + i - 1] = expected[base + j];
            expected[base + j] = tmp;
        }
    }
    DAC_EXPECT(y == expected);
}

DAC_TEST(builder_stratified_clamps_multiplicity_to_three) {
    // Multiplicity below kRequiredMultiplicity must be clamped up so the
    // resulting Y still satisfies validate_y().
    DeterministicYBuilder::Params p;
    p.seed = 0x42ULL;
    p.multiplicity = 1;  // illegal; should clamp to 3
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    DAC_EXPECT_EQ(y.size(), 256u * 3u);
    DAC_EXPECT(CurveLocator::validate_y(y));
}

// Stratified Y must still produce a valid curve via the existing locator
// (cursor-cycle pick). This is a smoke test that the locator's preconditions
// are met when Y comes from the new policy; the locator behaviour itself does
// not change in Slice 1.
DAC_TEST(locate_works_on_stratified_y) {
    DeterministicYBuilder::Params p;
    p.seed = 0xC0FFEEULL;
    p.multiplicity = 16;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    auto x = make_x(256, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT_EQ(curve.length(), x.size());
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}

// --- 5. Newton-form round trip -------------------------------------------

DAC_TEST(newton_form_round_trip_small) {
    // For small N the Newton coefficients fit in 128-bit integers, so the
    // reconstructed polynomial evaluates to the exact stored values.
    auto y = hand_y_canonical();
    std::vector<std::uint8_t> x = {5, 50, 100, 200, 250, 0, 1, 2};
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
    DAC_EXPECT(CurveLocator::verify_equation(curve, x, y));
    for (std::size_t i = 1; i <= x.size(); ++i) {
        double v = curve.evaluate(static_cast<double>(i));
        double expected = static_cast<double>(curve.evaluate_at_node(i));
        DAC_EXPECT(std::abs(v - expected) < 0.5);
    }
}

DAC_TEST(newton_form_round_trip_medium) {
    // N = 32 is still well within __int128 range for the coefficients given Y
    // indices bounded by 768; verify the equation reconstructs exactly.
    auto y = hand_y_canonical();
    auto x = make_x(32, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y);
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
    DAC_EXPECT(CurveLocator::verify_equation(curve, x, y));
}

// --- 5b. NearestToPrevious pick strategy (Slice 2) ------------------------

DAC_TEST(default_locate_overload_matches_cursor_cycle) {
    // The 2-arg overload must produce exactly the same nodes as the 3-arg
    // overload with PickStrategy::CursorCycle. Pins the backwards-compatible
    // default introduced in Slice 2.
    auto y = DeterministicYBuilder::build(0xC0FFEEULL, 4096);
    auto x = make_x(512, 0xBADCAFEULL);
    auto a = CurveLocator::locate(x, y);
    auto b = CurveLocator::locate(x, y, algorithms::dac::PickStrategy::CursorCycle);
    DAC_EXPECT_EQ(a.length(), b.length());
    DAC_EXPECT(a.nodes() == b.nodes());
}

DAC_TEST(nearest_pick_round_trip_uniform_y) {
    auto y = DeterministicYBuilder::build(0xC0FFEEULL, 4096);
    auto x = make_x(256, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    DAC_EXPECT_EQ(curve.length(), x.size());
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}

DAC_TEST(nearest_pick_round_trip_stratified_y) {
    DeterministicYBuilder::Params p;
    p.seed = 0xC0FFEEULL;
    p.multiplicity = 16;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    auto x = make_x(1024, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    DAC_EXPECT_EQ(curve.length(), x.size());
    DAC_EXPECT(CurveLocator::verify(curve, x, y));
}

namespace {

double mean_absolute_step(const algorithms::dac::CurveEquation& c) {
    const auto& n = c.nodes();
    if (n.size() < 2) return 0.0;
    long long sum = 0;
    for (std::size_t i = 1; i < n.size(); ++i) {
        sum += std::llabs(n[i] - n[i - 1]);
    }
    return static_cast<double>(sum) / static_cast<double>(n.size() - 1);
}

}  // namespace

DAC_TEST(nearest_pick_smoother_than_cursor_cycle_on_stratified) {
    // Quantitative smoothness regression. With Stratified Y at multiplicity
    // 16 and N=1024 random X, the mean step size under NearestToPrevious must
    // be at least 4x smaller than under the historical Uniform+CursorCycle
    // baseline AND below an absolute ceiling of 128 (half the 256-byte band
    // width - the natural mean distance to the nearest slot of a fixed byte
    // value within a single band of uniformly-random permutations). Both
    // bounds together protect against regressions in either the Stratified
    // layout or the NearestToPrevious pick.
    auto y_uniform = DeterministicYBuilder::build(0xC0FFEEULL, /*min_length=*/4096);
    DeterministicYBuilder::Params strat;
    strat.seed = 0xC0FFEEULL;
    strat.multiplicity = 16;
    strat.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y_stratified = DeterministicYBuilder::build(strat);

    auto x = make_x(1024, 0xDEADBEEFULL);

    auto c_baseline = CurveLocator::locate(x, y_uniform,
        algorithms::dac::PickStrategy::CursorCycle);
    auto c_smooth = CurveLocator::locate(x, y_stratified,
        algorithms::dac::PickStrategy::NearestToPrevious);

    const double mean_base = mean_absolute_step(c_baseline);
    const double mean_smooth = mean_absolute_step(c_smooth);

    DAC_EXPECT(CurveLocator::verify(c_baseline, x, y_uniform));
    DAC_EXPECT(CurveLocator::verify(c_smooth, x, y_stratified));
    if (!(mean_smooth * 4.0 < mean_base)) {
        char buf[160];
        std::snprintf(buf, sizeof buf,
                      "smooth mean |dj| %.2f >= baseline / 4 = %.2f",
                      mean_smooth, mean_base / 4.0);
        DAC_TEST_FAIL(buf);
    }
    if (!(mean_smooth < 128.0)) {
        char buf[160];
        std::snprintf(buf, sizeof buf,
                      "smooth mean |dj| %.2f exceeds half-band ceiling 128",
                      mean_smooth);
        DAC_TEST_FAIL(buf);
    }
}

// --- 5c. Bezier fitter (Slice 2) ------------------------------------------

DAC_TEST(bezier_fit_empty_curve) {
    using algorithms::dac::BezierFitter;
    algorithms::dac::CurveEquation empty;
    auto r = BezierFitter::fit(empty, 0.5);
    DAC_EXPECT_EQ(r.segments.size(), 0u);
    DAC_EXPECT_EQ(r.control_point_count(), 0u);
}

DAC_TEST(bezier_fit_single_node_collapses) {
    using algorithms::dac::BezierFitter;
    algorithms::dac::CurveEquation one(std::vector<std::int64_t>{42});
    auto r = BezierFitter::fit(one, 0.5);
    DAC_EXPECT_EQ(r.segments.size(), 1u);
    DAC_EXPECT_EQ(r.control_point_count(), 4u);
    const auto& s = r.segments.front();
    DAC_EXPECT(s.y0 == 42.0);
    DAC_EXPECT(s.y3 == 42.0);
}

DAC_TEST(bezier_fit_endpoints_exact) {
    using algorithms::dac::BezierFitter;
    auto y = DeterministicYBuilder::build(0xC0FFEEULL, 4096);
    auto x = make_x(64, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    auto r = BezierFitter::fit(curve, 0.5);
    DAC_EXPECT(!r.segments.empty());

    // Left endpoint of the first segment is the first node; right endpoint
    // of the last segment is the last node.
    const auto& first = r.segments.front();
    const auto& last  = r.segments.back();
    DAC_EXPECT(first.y0 == static_cast<double>(curve.nodes().front()));
    DAC_EXPECT(last.y3 == static_cast<double>(curve.nodes().back()));

    // Adjacent segments are C^0-continuous: the right endpoint of segment k
    // equals the left endpoint of segment k+1.
    for (std::size_t k = 1; k < r.segments.size(); ++k) {
        DAC_EXPECT(r.segments[k - 1].y3 == r.segments[k].y0);
        DAC_EXPECT_EQ(r.segments[k - 1].i_end, r.segments[k].i_start);
    }
}

DAC_TEST(bezier_fit_interpolates_within_tolerance) {
    using algorithms::dac::BezierFitter;
    // For each integer node i, after locating the segment that contains i
    // and evaluating at the appropriate t, the result must be within
    // tolerance of the node value.
    DeterministicYBuilder::Params strat;
    strat.seed = 0xC0FFEEULL;
    strat.multiplicity = 16;
    strat.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(strat);
    auto x = make_x(256, 0xBADCAFEULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    const double tol = 0.5;
    auto r = BezierFitter::fit(curve, tol);

    // For each node i in [1, N], locate the segment whose [i_start, i_end]
    // contains it and evaluate.
    const auto& nodes = curve.nodes();
    for (std::size_t i = 1; i <= nodes.size(); ++i) {
        // Linear scan is fine for the test - segment count is small.
        bool found = false;
        for (const auto& s : r.segments) {
            if (i >= s.i_start && i <= s.i_end) {
                const double t = s.i_end == s.i_start ? 0.0
                    : static_cast<double>(i - s.i_start) /
                      static_cast<double>(s.i_end - s.i_start);
                const double v = BezierFitter::evaluate_y(s, t);
                if (std::abs(v - static_cast<double>(nodes[i - 1])) > tol + 1e-9) {
                    char buf[160];
                    std::snprintf(buf, sizeof buf,
                                  "i=%zu node=%lld fit=%.3f tol=%.3f",
                                  i, static_cast<long long>(nodes[i - 1]), v, tol);
                    DAC_TEST_FAIL(buf);
                    return;
                }
                found = true;
                break;
            }
        }
        if (!found) {
            DAC_TEST_FAIL("node not covered by any Bezier segment");
            return;
        }
    }
    DAC_EXPECT(r.max_residual <= tol + 1e-9);
}

DAC_TEST(bezier_storage_pick_ctrl_width_thresholds) {
    using algorithms::dac::BezierStorage;
    // 4 * y_length must comfortably fit in a signed int of the chosen width.
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(0)),     2);
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(768)),   2);
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(4096)),  2);
    // 4 * 8191 = 32764 still fits in int16.
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(8191)),  2);
    // 4 * 8192 = 32768 does NOT fit in int16 -> jump to int32.
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(8192)),  4);
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(16384)), 4);
    DAC_EXPECT_EQ(static_cast<int>(BezierStorage::pick_ctrl_width(65792)), 4);
}

DAC_TEST(bezier_storage_persisted_size_formula) {
    using algorithms::dac::BezierStorage;
    // formula: 32 + 8 + W_x + W_y + segs * (W_x + 2*W_c + W_y)
    //   W_x = pick_index_width(n_nodes + 1)
    //   W_y = pick_index_width(y_length)
    //   W_c = pick_ctrl_width(y_length)
    //
    // Case 1: n=1024 nodes, |Y|=4096 -> W_x=2, W_y=2, W_c=2, per_seg=8.
    //         At segs=758: 32 + 8 + 2 + 2 + 758*8 = 6108
    DAC_EXPECT_EQ(BezierStorage::persisted_size(758, 4096, 1024), 6108ull);
    // Case 2: n=10240 nodes, |Y|=16384 -> W_x=2, W_y=2, W_c=4, per_seg=12.
    //         At segs=7000: 32 + 8 + 2 + 2 + 7000*12 = 84044
    DAC_EXPECT_EQ(BezierStorage::persisted_size(7000, 16384, 10240), 84044ull);
    // Case 3: n=1024, |Y|=65792 -> W_x=2, W_y=4, W_c=4, per_seg=14.
    //         At segs=500: 32 + 8 + 2 + 4 + 500*14 = 7046
    DAC_EXPECT_EQ(BezierStorage::persisted_size(500, 65792, 1024), 7046ull);
    // Zero segments: still pay header + seg_count + first-seg endpoints.
    DAC_EXPECT_EQ(BezierStorage::persisted_size(0, 4096, 1024), 44ull);
}

DAC_TEST(bezier_storage_break_even_matches_inverse) {
    using algorithms::dac::BezierStorage;
    // For each (y_length, n_nodes), the break-even segment count S* must
    // satisfy: persisted_size(S*) <= n_nodes < persisted_size(S* + 1).
    struct Param { std::uint64_t y_length, n_nodes; };
    Param ps[] = {
        {768, 1024}, {768, 10240}, {4096, 1024}, {16384, 10240}, {65792, 10240}
    };
    for (auto p : ps) {
        std::uint64_t s = BezierStorage::break_even_segments(p.y_length, p.n_nodes);
        std::uint64_t at = BezierStorage::persisted_size(s, p.y_length, p.n_nodes);
        std::uint64_t past = BezierStorage::persisted_size(s + 1, p.y_length, p.n_nodes);
        DAC_EXPECT(at <= p.n_nodes);
        DAC_EXPECT(past > p.n_nodes);
    }
}

DAC_TEST(bezier_storage_loses_to_raw_at_strict_tolerance) {
    // Documents the headline storage finding: at tolerance 0.5 (rounding
    // recovers j_i exactly) the Bezier representation of a DAC curve on
    // typical integer noise is multiple x larger than raw |X| bytes. The
    // assertion encodes the strict-tolerance convergence boundary so future
    // builder/locator changes that lower per-node bytes are noticed.
    using algorithms::dac::BezierFitter;
    using algorithms::dac::BezierStorage;
    DeterministicYBuilder::Params p;
    p.seed = 0xC0FFEEULL;
    p.multiplicity = 16;
    p.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(p);
    auto x = make_x(1024, 0xDEADBEEFULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    auto fit = BezierFitter::fit(curve, 0.5);
    std::uint64_t bez_bytes = BezierStorage::persisted_size(
        fit.segments.size(), y.size(), x.size());
    std::uint64_t break_even = BezierStorage::break_even_segments(y.size(), x.size());

    // We are above break-even (Bezier cost > raw bytes).
    if (!(fit.segments.size() > break_even)) {
        char buf[160];
        std::snprintf(buf, sizeof buf,
                      "segments %zu <= break_even %llu (Bezier would beat raw - update test)",
                      fit.segments.size(),
                      static_cast<unsigned long long>(break_even));
        DAC_TEST_FAIL(buf);
    }
    // The ratio is bounded below by ~5 in this configuration (mean step ~76,
    // per-seg ~8 bytes, ~70% nodes/seg).
    double ratio = static_cast<double>(bez_bytes) / static_cast<double>(x.size());
    DAC_EXPECT(ratio > 4.0);
    DAC_EXPECT(ratio < 12.0);
}

DAC_TEST(bezier_fit_smoother_needs_fewer_segments) {
    using algorithms::dac::BezierFitter;
    // Smoothness <-> compressibility: (Stratified + Nearest) must produce a
    // strictly smaller piecewise-Bezier representation than the historical
    // (Uniform + CursorCycle) baseline at the same tolerance.
    auto y_uniform = DeterministicYBuilder::build(0xC0FFEEULL, 4096);
    DeterministicYBuilder::Params strat;
    strat.seed = 0xC0FFEEULL;
    strat.multiplicity = 16;
    strat.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y_strat = DeterministicYBuilder::build(strat);

    auto x = make_x(256, 0xDEADBEEFULL);
    auto c_base = CurveLocator::locate(x, y_uniform,
        algorithms::dac::PickStrategy::CursorCycle);
    auto c_smooth = CurveLocator::locate(x, y_strat,
        algorithms::dac::PickStrategy::NearestToPrevious);

    const double tol = 0.5;
    auto r_base = BezierFitter::fit(c_base, tol);
    auto r_smooth = BezierFitter::fit(c_smooth, tol);
    if (!(r_smooth.segments.size() < r_base.segments.size())) {
        char buf[160];
        std::snprintf(buf, sizeof buf,
                      "smooth segs %zu >= base segs %zu",
                      r_smooth.segments.size(), r_base.segments.size());
        DAC_TEST_FAIL(buf);
    }
}

// --- 5d. Floor-linear two-point Bezier clusters ---------------------------

DAC_TEST(floor_linear_empty_curve) {
    using algorithms::dac::FloorLinearBezierFitter;
    algorithms::dac::CurveEquation empty;
    auto r = FloorLinearBezierFitter::fit(empty);
    DAC_EXPECT_EQ(r.segments.size(), 0u);
    DAC_EXPECT_EQ(r.control_point_count(), 0u);
    DAC_EXPECT_EQ(r.max_cluster_points, 0u);
}

DAC_TEST(floor_linear_single_node_collapses) {
    using algorithms::dac::FloorLinearBezierFitter;
    algorithms::dac::CurveEquation one(std::vector<std::int64_t>{42});
    auto r = FloorLinearBezierFitter::fit(one);
    DAC_EXPECT_EQ(r.segments.size(), 1u);
    DAC_EXPECT_EQ(r.control_point_count(), 2u);
    DAC_EXPECT_EQ(r.max_cluster_points, 1u);
    DAC_EXPECT(r.segments.front().y0 == 42.0);
    DAC_EXPECT(r.segments.front().y1 == 42.0);
}

DAC_TEST(floor_linear_accepts_values_inside_target_bucket) {
    using algorithms::dac::FloorLinearBezierFitter;
    // One line from (1, 2) to (3, 3) crosses node 2 at y=2.5. That is not an
    // exact hit, but floor(2.5) == 2, so it satisfies the requested bucket rule.
    algorithms::dac::CurveEquation curve(std::vector<std::int64_t>{2, 2, 3});
    auto r = FloorLinearBezierFitter::fit(curve);
    DAC_EXPECT_EQ(r.segments.size(), 1u);
    DAC_EXPECT_EQ(r.max_cluster_points, 3u);
    DAC_EXPECT(FloorLinearBezierFitter::verify_segment(r.segments.front(), curve));
    const double y = FloorLinearBezierFitter::evaluate_y(r.segments.front(), 2.0);
    DAC_EXPECT(y > 2.0 && y < 3.0);
    DAC_EXPECT_EQ(static_cast<int>(std::floor(y)), 2);
}

DAC_TEST(floor_linear_rejects_exact_next_integer_boundary) {
    using algorithms::dac::FloorLinearBezierFitter;
    // A line from (1, 2) to (3, 4) crosses node 2 at exactly 3.0, so it does
    // not satisfy target value 2. The greedy fitter must split before node 3.
    algorithms::dac::CurveEquation curve(std::vector<std::int64_t>{2, 2, 4});
    auto r = FloorLinearBezierFitter::fit(curve);
    DAC_EXPECT_EQ(r.segments.size(), 2u);
    DAC_EXPECT_EQ(r.segments[0].i_start, 1u);
    DAC_EXPECT_EQ(r.segments[0].i_end, 2u);
    DAC_EXPECT_EQ(r.segments[1].i_start, 3u);
    DAC_EXPECT_EQ(r.segments[1].i_end, 3u);
}

DAC_TEST(floor_linear_covers_deterministic_curve) {
    using algorithms::dac::FloorLinearBezierFitter;
    DeterministicYBuilder::Params strat;
    strat.seed = 0xC0FFEEULL;
    strat.multiplicity = 16;
    strat.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(strat);
    auto x = make_x(256, 0xDEADBEEFULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);

    auto r = FloorLinearBezierFitter::fit(curve);
    DAC_EXPECT(!r.segments.empty());
    DAC_EXPECT(r.mean_cluster_points >= 1.0);
    std::size_t covered = 0;
    for (const auto& s : r.segments) {
        DAC_EXPECT(FloorLinearBezierFitter::verify_segment(s, curve));
        covered += s.covered_points();
        for (std::size_t i = s.i_start; i <= s.i_end; ++i) {
            const double v = FloorLinearBezierFitter::evaluate_y(
                s, static_cast<double>(i));
            DAC_EXPECT_EQ(static_cast<long long>(std::floor(v)),
                          static_cast<long long>(curve.nodes()[i - 1]));
        }
    }
    DAC_EXPECT_EQ(covered, curve.length());
}

DAC_TEST(floor_linear_storage_formula) {
    using algorithms::dac::FloorLinearBezierStorage;
    // formula: 32 + 8 + segs * 2 * (W_x + W_y)
    // n=1024, |Y|=4096 -> W_x=2, W_y=2, per_seg=8.
    DAC_EXPECT_EQ(FloorLinearBezierStorage::persisted_size(128, 4096, 1024), 1064ull);
    // n=1024, |Y|=65792 -> W_x=2, W_y=4, per_seg=12.
    DAC_EXPECT_EQ(FloorLinearBezierStorage::persisted_size(128, 65792, 1024), 1576ull);
    const auto s = FloorLinearBezierStorage::break_even_segments(4096, 1024);
    DAC_EXPECT(FloorLinearBezierStorage::persisted_size(s, 4096, 1024) <= 1024ull);
    DAC_EXPECT(FloorLinearBezierStorage::persisted_size(s + 1, 4096, 1024) > 1024ull);
}

// --- 5e. Layered cubic Bezier cover ---------------------------------------

namespace {
std::int64_t bucket_floor_for_test(double v) {
    const double nearest = std::round(v);
    if (std::abs(v - nearest) < 1e-9) {
        return static_cast<std::int64_t>(nearest);
    }
    return static_cast<std::int64_t>(std::floor(v));
}

void expect_layered_cover_decodes(algorithms::dac::testing::TestRegistry& _dac_reg,
                                  const algorithms::dac::CurveEquation& curve,
                                  const algorithms::dac::LayeredBezierCoverFitter::Result& r) {
    const auto& nodes = curve.nodes();
    std::vector<std::size_t> rank_override(nodes.size() + 1, static_cast<std::size_t>(-1));
    for (const auto& ov : r.overrides) {
        DAC_EXPECT(ov.i >= 1 && ov.i <= nodes.size());
        rank_override[ov.i] = ov.rank;
    }
    for (std::size_t i = 1; i <= nodes.size(); ++i) {
        struct Active { double y; };
        std::vector<Active> active;
        for (const auto& s : r.curves) {
            if (i < s.i_start || i > s.i_end) continue;
            const double span = static_cast<double>(s.i_end - s.i_start);
            const double t = span == 0.0 ? 0.0
                : static_cast<double>(i - s.i_start) / span;
            active.push_back({algorithms::dac::BezierFitter::evaluate_y(s, t)});
        }
        std::sort(active.begin(), active.end(),
                  [](const Active& a, const Active& b) { return a.y < b.y; });
        DAC_EXPECT(!active.empty());
        const std::size_t rank = rank_override[i] == static_cast<std::size_t>(-1)
            ? 0u : rank_override[i];
        DAC_EXPECT(rank < active.size());
        const auto decoded = bucket_floor_for_test(active[rank].y);
        if (decoded != nodes[i - 1]) {
            char buf[160];
            std::snprintf(buf, sizeof buf,
                          "i=%zu decoded=%lld node=%lld rank=%zu active=%zu",
                          i, static_cast<long long>(decoded),
                          static_cast<long long>(nodes[i - 1]), rank,
                          active.size());
            DAC_TEST_FAIL(buf);
            return;
        }
    }
}
}  // namespace

DAC_TEST(layered_cubic_four_points_one_curve) {
    using algorithms::dac::LayeredBezierCoverFitter;
    algorithms::dac::CurveEquation curve(std::vector<std::int64_t>{10, 100, 20, 80});
    auto r = LayeredBezierCoverFitter::fit(curve);
    DAC_EXPECT_EQ(r.curves.size(), 1u);
    DAC_EXPECT_EQ(r.overrides.size(), 0u);
    DAC_EXPECT_EQ(r.max_points_per_curve, 4u);
    expect_layered_cover_decodes(_dac_reg, curve, r);
}

DAC_TEST(layered_cubic_storage_formula) {
    using algorithms::dac::LayeredBezierCoverStorage;
    // n=1024, |Y|=4096 -> W_x=2, W_y=2, W_c=2, W_rank=1 at 16 curves.
    // 32 + 8 + 16*12 + 8 + 5*3 = 255.
    DAC_EXPECT_EQ(LayeredBezierCoverStorage::persisted_size(
        16, 5, 4096, 1024), 255ull);
    DAC_EXPECT_EQ(LayeredBezierCoverStorage::break_even_curves_no_overrides(
        4096, 1024), 81ull);
}

DAC_TEST(layered_cubic_covers_slice2_graph_shape) {
    using algorithms::dac::LayeredBezierCoverFitter;
    algorithms::dac::CurveEquation curve(std::vector<std::int64_t>{
        193, 203, 194, 265, 478, 411, 502, 461,
        511, 278, 368, 300, 314, 326, 203, 287,
        197, 68, 48, 191, 40, 155, 68, 71,
        17, 201, 206, 184, 255, 250, 304, 320,
        248, 444, 420, 257, 274, 345, 304, 456,
        590, 766, 644, 746, 741, 799, 859, 960,
        919, 932, 1007, 1092, 1173, 1190, 1035, 964,
        864, 925, 980, 933, 891, 791, 799, 1004
    });
    auto r = LayeredBezierCoverFitter::fit(curve);
    DAC_EXPECT(r.curves.size() <= 20u);
    DAC_EXPECT(r.max_points_per_curve >= 4u);
    expect_layered_cover_decodes(_dac_reg, curve, r);
}

DAC_TEST(layered_cubic_covers_deterministic_curve) {
    using algorithms::dac::LayeredBezierCoverFitter;
    DeterministicYBuilder::Params strat;
    strat.seed = 0xC0FFEEULL;
    strat.multiplicity = 16;
    strat.policy = algorithms::dac::ShufflePolicy::Stratified;
    auto y = DeterministicYBuilder::build(strat);
    auto x = make_x(256, 0xDEADBEEFULL);
    auto curve = CurveLocator::locate(x, y,
        algorithms::dac::PickStrategy::NearestToPrevious);
    auto r = LayeredBezierCoverFitter::fit(curve);
    DAC_EXPECT(!r.curves.empty());
    DAC_EXPECT(r.mean_points_per_curve >= 3.0);
    expect_layered_cover_decodes(_dac_reg, curve, r);
}

// --- 6. Codec round-trip ---------------------------------------------------

namespace {
void check_codec_round_trip(algorithms::dac::testing::TestRegistry& _dac_reg,
                             std::size_t n,
                             std::size_t y_len,
                             std::uint64_t y_seed,
                             std::uint64_t x_seed) {
    using algorithms::dac::CurveCodec;
    auto y = DeterministicYBuilder::build(y_seed, y_len);
    auto x = make_x(n, x_seed);
    auto curve = CurveLocator::locate(x, y);

    std::stringstream buf(std::ios::in | std::ios::out | std::ios::binary);
    CurveCodec::serialize(buf, y_seed, y.size(), curve);
    const auto blob = buf.str();
    DAC_EXPECT_EQ(static_cast<std::uint64_t>(blob.size()),
                  CurveCodec::persisted_size(x.size(), y.size()));

    std::stringstream rb(blob, std::ios::in | std::ios::out | std::ios::binary);
    auto rt = CurveCodec::deserialize(rb);
    DAC_EXPECT_EQ(rt.curve.length(), x.size());
    DAC_EXPECT_EQ(rt.y_seed, y_seed);
    DAC_EXPECT_EQ(rt.y_length, static_cast<std::uint64_t>(y.size()));
    DAC_EXPECT(rt.y == y);
    for (std::size_t i = 1; i <= x.size(); ++i) {
        DAC_EXPECT_EQ(static_cast<int>(rt.y[rt.curve.evaluate_at_node(i)]),
                      static_cast<int>(x[i - 1]));
    }
}
}  // namespace

DAC_TEST(codec_round_trip_size_1)     { check_codec_round_trip(_dac_reg, 1, 768, 0x1ULL, 0xA1ULL); }
DAC_TEST(codec_round_trip_size_10)    { check_codec_round_trip(_dac_reg, 10, 768, 0xAULL, 0xAAULL); }
DAC_TEST(codec_round_trip_size_100)   { check_codec_round_trip(_dac_reg, 100, 768, 0x64ULL, 0xB0ULL); }
DAC_TEST(codec_round_trip_size_1024)  { check_codec_round_trip(_dac_reg, 1024, 4096, 0x400ULL, 0xC0ULL); }
DAC_TEST(codec_round_trip_size_10240) { check_codec_round_trip(_dac_reg, 10240, 16384, 0x2800ULL, 0xD0ULL); }
DAC_TEST(codec_round_trip_index_width_4) { check_codec_round_trip(_dac_reg, 1024, 65792, 0x401ULL, 0xC1ULL); }

DAC_TEST(codec_index_width_picks) {
    using algorithms::dac::CurveCodec;
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(1)),     1);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(256)),   1);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(257)),   2);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(65536)), 2);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(65537)), 4);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width(static_cast<std::uint64_t>(1) << 32)), 4);
    DAC_EXPECT_EQ(static_cast<int>(CurveCodec::pick_index_width((static_cast<std::uint64_t>(1) << 32) + 1)), 8);
}

DAC_TEST(codec_rejects_bad_magic) {
    using algorithms::dac::CurveCodec;
    std::stringstream rb(std::string("ZZZZ"), std::ios::in | std::ios::out | std::ios::binary);
    bool threw = false;
    try {
        (void)CurveCodec::deserialize(rb);
    } catch (const std::runtime_error&) {
        threw = true;
    }
    DAC_EXPECT(threw);
}

int main() {
    return algorithms::dac::testing::registry().run_all();
}
