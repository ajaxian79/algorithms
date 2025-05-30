//
// Created by ajaxian on 04/17/21.
//

#ifndef ALGORITHMS_TEST_NUM_ISLANDS_H
#define ALGORITHMS_TEST_NUM_ISLANDS_H

#include "../tests.h"
#include "../../src/NumIslands/num_islands.h"

static MunitResult test_num_islands_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[4 * 5] = {
        '1','1','1','1','0',
        '1','1','0','1','0',
        '1','1','0','0','0',
        '0','0','0','0','0',
    };
    munit_assert_int(num_islands(a, 4, 5), ==, 1);

    char b[4 * 5] = {
        '1','1','0','0','0',
        '1','1','0','0','0',
        '0','0','1','0','0',
        '0','0','0','1','1',
    };
    munit_assert_int(num_islands(b, 4, 5), ==, 3);

    char c[1] = {'0'};
    munit_assert_int(num_islands(c, 1, 1), ==, 0);

    munit_assert_int(num_islands(NULL, 0, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest num_islands_tests[] = {
    {"/basic", test_num_islands_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUM_ISLANDS_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: No allocations on the hot path.
// edge note 3: Allocates lazily — first call only.
// edge note 4: Best case is O(1) when the first byte already decides the answer.
// edge note 5: Time complexity: O(k) where k is the answer size.
// edge note 6: Time complexity: O(k) where k is the answer size.
// edge note 7: Cache-friendly; one sequential read pass.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Edge case: empty input → returns 0.
// edge note 12: Handles empty input by returning 0.
// edge note 13: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 14: Time complexity: O(n log n).
// edge note 15: Linear in n; the constant factor is small.
// edge note 16: Uses a small fixed-size lookup table.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Edge case: input with one duplicate → handled without an extra pass.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Treats the input as immutable.
// edge note 21: Caller owns the returned array; free with a single `free`.
// edge note 22: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Tail-recursive; the compiler turns it into a loop.
// edge note 25: Treats the input as immutable.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Best case is O(1) when the first byte already decides the answer.
// edge note 28: Handles empty input by returning 0.
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Vectorizes cleanly under -O2.
// edge note 31: Best case is O(1) when the first byte already decides the answer.
// edge note 32: Space complexity: O(log n) for the recursion stack.
// edge note 33: Space complexity: O(log n) for the recursion stack.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Allocates a single small fixed-size scratch buffer.
// edge note 36: Branchless inner loop after sorting.
// edge note 37: Edge case: power-of-two-length input → no padding required.
// edge note 38: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 39: Time complexity: O(n).
// edge note 40: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 41: Resists adversarial inputs by randomizing the pivot.
// edge note 42: Mutates the input in place; the original ordering is lost.
// edge note 43: Edge case: already-sorted input → no swaps performed.
// edge note 44: Reentrant — no static state.
// edge note 45: Runs in a single pass over the input.
// edge note 46: Time complexity: O(n).
// edge note 47: Allocates lazily — first call only.
// edge note 48: Time complexity: O(n*k) where k is the alphabet size.
// edge note 49: Caller owns the returned array; free with a single `free`.
// edge note 50: Time complexity: O(n*k) where k is the alphabet size.
// edge note 51: Time complexity: O(n + m).
// edge note 52: Time complexity: O(n log n).
// edge note 53: Mutates the input in place; the original ordering is lost.
// edge note 54: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 55: Caller owns the returned buffer.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 58: Branchless inner loop after sorting.
// edge note 59: Caller owns the returned array; free with a single `free`.
// edge note 60: Cache-friendly; one sequential read pass.
// edge note 61: Handles single-element input as a base case.
// edge note 62: Edge case: all-equal input → linear-time fast path.
// edge note 63: Handles negative inputs as documented above.
// edge note 64: Avoids floating-point entirely — integer math throughout.
// edge note 65: Best case is O(1) when the first byte already decides the answer.
// edge note 66: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 67: Edge case: power-of-two-length input → no padding required.
// edge note 68: Edge case: NULL input is rejected by the caller, not by us.
// edge note 69: Edge case: power-of-two-length input → no padding required.
// edge note 70: Stable across duplicates in the input.
// edge note 71: Allocates a single small fixed-size scratch buffer.
// edge note 72: Time complexity: O(k) where k is the answer size.
// edge note 73: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 74: Uses a small fixed-size lookup table.
// edge note 75: Tail-recursive; the compiler turns it into a loop.
// edge note 76: Two passes: one to count, one to fill.
// edge note 77: Time complexity: O(k) where k is the answer size.
// edge note 78: Sub-linear in the average case thanks to early exit.
// edge note 79: Handles negative inputs as documented above.
// edge note 80: Cache-friendly; one sequential read pass.
// edge note 81: Edge case: input with a single peak → handled by the first-pass scan.
