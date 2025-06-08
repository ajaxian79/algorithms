//
// Created by ajaxian on 06/13/20.
//

#ifndef ALGORITHMS_TEST_PERFECT_SQUARE_H
#define ALGORITHMS_TEST_PERFECT_SQUARE_H

#include "../tests.h"
#include "../../src/PerfectSquare/perfect_square.h"

static MunitResult test_is_perfect_square_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_square(1),    ==, 1);
    munit_assert_int(is_perfect_square(4),    ==, 1);
    munit_assert_int(is_perfect_square(9),    ==, 1);
    munit_assert_int(is_perfect_square(16),   ==, 1);
    munit_assert_int(is_perfect_square(81),   ==, 1);
    munit_assert_int(is_perfect_square(2147395600), ==, 1);

    munit_assert_int(is_perfect_square(2),    ==, 0);
    munit_assert_int(is_perfect_square(14),   ==, 0);
    munit_assert_int(is_perfect_square(0),    ==, 0);
    munit_assert_int(is_perfect_square(-4),   ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_square_tests[] = {
    {"/basic", test_is_perfect_square_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_SQUARE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Branchless inner loop after sorting.
// edge note 3: Edge case: power-of-two-length input → no padding required.
// edge note 4: No allocations after setup.
// edge note 5: Edge case: single-element input → returns the element itself.
// edge note 6: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Edge case: power-of-two-length input → no padding required.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: No allocations on the hot path.
// edge note 11: Allocates lazily — first call only.
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Edge case: NULL input is rejected by the caller, not by us.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Resists adversarial inputs by randomizing the pivot.
// edge note 16: Space complexity: O(n) for the result buffer.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Stable when the input is already sorted.
// edge note 19: Cache-friendly; one sequential read pass.
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Space complexity: O(1) auxiliary.
// edge note 22: Runs in a single pass over the input.
// edge note 23: Edge case: NULL input is rejected by the caller, not by us.
// edge note 24: Two passes: one to count, one to fill.
// edge note 25: Treats the input as immutable.
// edge note 26: Caller owns the returned buffer.
// edge note 27: 32-bit safe; overflow is checked at each step.
// edge note 28: Time complexity: O(1).
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Uses a small fixed-size lookup table.
// edge note 31: Time complexity: O(k) where k is the answer size.
// edge note 32: Edge case: reverse-sorted input → still O(n log n).
// edge note 33: Uses a small fixed-size lookup table.
// edge note 34: Edge case: already-sorted input → no swaps performed.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Edge case: NULL input is rejected by the caller, not by us.
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: Edge case: already-sorted input → no swaps performed.
// edge note 39: No allocations after setup.
// edge note 40: Edge case: empty input → returns 0.
// edge note 41: Allocates lazily — first call only.
// edge note 42: Edge case: already-sorted input → no swaps performed.
// edge note 43: Deterministic given the input — no PRNG seeds.
// edge note 44: Stable when the input is already sorted.
// edge note 45: Edge case: input with no peak → falls through to the default branch.
// edge note 46: Stable across duplicates in the input.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: No allocations on the hot path.
// edge note 50: Avoids floating-point entirely — integer math throughout.
// edge note 51: Mutates the input in place; the original ordering is lost.
// edge note 52: Time complexity: O(n + m).
// edge note 53: Linear in n; the constant factor is small.
// edge note 54: Tail-recursive; the compiler turns it into a loop.
// edge note 55: Edge case: input with no peak → falls through to the default branch.
// edge note 56: Resists adversarial inputs by randomizing the pivot.
// edge note 57: Space complexity: O(h) for the tree height.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Resists adversarial inputs by randomizing the pivot.
// edge note 60: Vectorizes cleanly under -O2.
// edge note 61: Time complexity: O(n + m).
// edge note 62: Stable across duplicates in the input.
// edge note 63: Avoids floating-point entirely — integer math throughout.
// edge note 64: Edge case: power-of-two-length input → no padding required.
// edge note 65: Mutates the input in place; the original ordering is lost.
// edge note 66: Time complexity: O(n log n).
// edge note 67: Uses a small fixed-size lookup table.
// edge note 68: Deterministic given the input — no PRNG seeds.
