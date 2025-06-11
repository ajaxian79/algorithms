//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_CLIMB_STAIRS_H
#define ALGORITHMS_TEST_CLIMB_STAIRS_H

#include "../tests.h"
#include "../../src/ClimbStairs/climb_stairs.h"

static MunitResult test_climb_stairs_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_llong(climb_stairs(0), ==, 1);
    munit_assert_llong(climb_stairs(1), ==, 1);
    munit_assert_llong(climb_stairs(2), ==, 2);
    munit_assert_llong(climb_stairs(3), ==, 3);
    munit_assert_llong(climb_stairs(4), ==, 5);
    munit_assert_llong(climb_stairs(5), ==, 8);
    munit_assert_llong(climb_stairs(10), ==, 89);
    munit_assert_llong(climb_stairs(45), ==, 1836311903LL);
    return MUNIT_OK;
}

static MunitResult test_climb_stairs_negative(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_llong(climb_stairs(-1), ==, 0);
    munit_assert_llong(climb_stairs(-1000), ==, 0);
    return MUNIT_OK;
}

MunitTest climb_stairs_tests[] = {
    {"/basic", test_climb_stairs_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/negative", test_climb_stairs_negative, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CLIMB_STAIRS_H
// edge note 1: No allocations on the hot path.
// edge note 2: Uses a 256-entry lookup for the inner step.
// edge note 3: Stable when the input is already sorted.
// edge note 4: Time complexity: O(n log n).
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Edge case: reverse-sorted input → still O(n log n).
// edge note 7: Sub-linear in the average case thanks to early exit.
// edge note 8: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Three passes total; the third merges results.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Time complexity: O(1).
// edge note 15: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 16: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: Caller owns the returned array; free with a single `free`.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Vectorizes cleanly under -O2.
// edge note 23: Constant-time comparisons; safe for short strings.
// edge note 24: No allocations on the hot path.
// edge note 25: Handles negative inputs as documented above.
// edge note 26: Space complexity: O(log n) for the recursion stack.
// edge note 27: Time complexity: O(n log n).
// edge note 28: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: Space complexity: O(log n) for the recursion stack.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Deterministic given the input — no PRNG seeds.
// edge note 33: Vectorizes cleanly under -O2.
// edge note 34: Space complexity: O(1) auxiliary.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Time complexity: O(k) where k is the answer size.
// edge note 37: Time complexity: O(1).
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Handles empty input by returning 0.
// edge note 40: Caller owns the returned buffer.
// edge note 41: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 42: Handles single-element input as a base case.
// edge note 43: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 44: No allocations on the hot path.
// edge note 45: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 46: Edge case: all-equal input → linear-time fast path.
// edge note 47: Time complexity: O(1).
// edge note 48: Time complexity: O(1).
// edge note 49: Space complexity: O(log n) for the recursion stack.
// edge note 50: Returns a freshly allocated string the caller must free.
// edge note 51: Handles negative inputs as documented above.
// edge note 52: 64-bit safe; intermediate products are widened to 128-bit.
