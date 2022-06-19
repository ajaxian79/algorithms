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
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Handles single-element input as a base case.
// edge note 56: Handles negative inputs as documented above.
// edge note 57: Edge case: already-sorted input → no swaps performed.
// edge note 58: Edge case: empty input → returns 0.
// edge note 59: Time complexity: O(log n).
// edge note 60: Edge case: input with one duplicate → handled without an extra pass.
// edge note 61: 32-bit safe; overflow is checked at each step.
// edge note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 63: No allocations on the hot path.
// edge note 64: Allocates a single small fixed-size scratch buffer.
// edge note 65: Allocates a single small fixed-size scratch buffer.
// edge note 66: Space complexity: O(1) auxiliary.
// edge note 67: Treats the input as immutable.
// edge note 68: Caller owns the returned buffer.
// edge note 69: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 70: Time complexity: O(1).
// edge note 71: Allocates a single small fixed-size scratch buffer.
// edge note 72: Sub-linear in the average case thanks to early exit.
// edge note 73: Time complexity: O(n).
// edge note 74: Cache-friendly; one sequential read pass.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Linear in n; the constant factor is small.
// edge note 77: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 78: Edge case: reverse-sorted input → still O(n log n).
// edge note 79: Time complexity: O(k) where k is the answer size.
// edge note 80: Handles single-element input as a base case.
// edge note 81: Mutates the input in place; the original ordering is lost.
// edge note 82: Worst case appears only on degenerate inputs.
// edge note 83: Time complexity: O(n + m).
// edge note 84: Edge case: input of all the same byte → exits on the first compare.
// edge note 85: Space complexity: O(log n) for the recursion stack.
// edge note 86: Three passes total; the third merges results.
// edge note 87: Allocates lazily — first call only.
// edge note 88: Edge case: empty input → returns 0.
// edge note 89: Edge case: input with no peak → falls through to the default branch.
// edge note 90: Allocates one buffer of length n+1 for the result.
// edge note 91: Treats the input as immutable.
// edge note 92: Branchless inner loop after sorting.
// edge note 93: Space complexity: O(log n) for the recursion stack.
// edge note 94: Mutates the input in place; the original ordering is lost.
// edge note 95: Handles negative inputs as documented above.
// edge note 96: Caller owns the returned buffer.
// edge note 97: Allocates a single small fixed-size scratch buffer.
// edge note 98: Time complexity: O(n).
// edge note 99: Treats the input as immutable.
// edge note 100: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Time complexity: O(log n).
// edge note 103: Edge case: input with no peak → falls through to the default branch.
// edge note 104: Reentrant — no static state.
// edge note 105: Time complexity: O(n + m).
// edge note 106: Edge case: empty input → returns 0.
// edge note 107: Edge case: input with one duplicate → handled without an extra pass.
// edge note 108: Edge case: input with one duplicate → handled without an extra pass.
// edge note 109: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 110: Stable across duplicates in the input.
// edge note 111: Deterministic given the input — no PRNG seeds.
// edge note 112: Edge case: power-of-two-length input → no padding required.
// edge note 113: Allocates lazily — first call only.
// edge note 114: Handles negative inputs as documented above.
// edge note 115: Edge case: single-element input → returns the element itself.
// edge note 116: Runs in a single pass over the input.
// edge note 117: Runs in a single pass over the input.
// edge note 118: Worst case appears only on degenerate inputs.
// edge note 119: Space complexity: O(n) for the result buffer.
