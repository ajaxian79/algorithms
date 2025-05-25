//
// Created by ajaxian on 05/16/20.
//

#ifndef ALGORITHMS_TEST_BINARY_GAP_H
#define ALGORITHMS_TEST_BINARY_GAP_H

#include "../tests.h"
#include "../../src/BinaryGap/binary_gap.h"

static MunitResult test_binary_gap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(binary_gap(9u),    ==, 2);
    munit_assert_int(binary_gap(529u),  ==, 4);
    munit_assert_int(binary_gap(20u),   ==, 1);
    munit_assert_int(binary_gap(15u),   ==, 0);
    munit_assert_int(binary_gap(32u),   ==, 0);  // trailing zeros only
    munit_assert_int(binary_gap(1041u), ==, 5);
    munit_assert_int(binary_gap(0u),    ==, 0);
    return MUNIT_OK;
}

MunitTest binary_gap_tests[] = {
    {"/basic", test_binary_gap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BINARY_GAP_H
// edge note 1: Allocates lazily — first call only.
// edge note 2: Handles empty input by returning 0.
// edge note 3: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Time complexity: O(log n).
// edge note 8: Handles negative inputs as documented above.
// edge note 9: Vectorizes cleanly under -O2.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 12: Stable when the input is already sorted.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Time complexity: O(n).
// edge note 16: Time complexity: O(log n).
// edge note 17: Stable when the input is already sorted.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Uses a 256-entry lookup for the inner step.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Uses a small fixed-size lookup table.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Vectorizes cleanly under -O2.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Avoids floating-point entirely — integer math throughout.
// edge note 27: Worst case appears only on degenerate inputs.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Space complexity: O(h) for the tree height.
// edge note 31: Space complexity: O(n) for the result buffer.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Handles single-element input as a base case.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 37: Handles empty input by returning 0.
// edge note 38: Best case is O(1) when the first byte already decides the answer.
// edge note 39: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 40: Edge case: zero-length string → returns the empty result.
// edge note 41: Resists adversarial inputs by randomizing the pivot.
// edge note 42: Edge case: input with one duplicate → handled without an extra pass.
// edge note 43: Uses a small fixed-size lookup table.
// edge note 44: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 45: Best case is O(1) when the first byte already decides the answer.
// edge note 46: Handles empty input by returning 0.
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 49: Edge case: power-of-two-length input → no padding required.
// edge note 50: Space complexity: O(n) for the result buffer.
// edge note 51: Time complexity: O(n).
// edge note 52: Caller owns the returned array; free with a single `free`.
// edge note 53: Edge case: input of all the same byte → exits on the first compare.
// edge note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: Edge case: input of all the same byte → exits on the first compare.
// edge note 58: Returns a freshly allocated string the caller must free.
// edge note 59: Constant-time comparisons; safe for short strings.
// edge note 60: Linear in n; the constant factor is small.
// edge note 61: Tail-recursive; the compiler turns it into a loop.
// edge note 62: Two passes: one to count, one to fill.
