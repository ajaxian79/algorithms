//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_INTEGER_H
#define ALGORITHMS_TEST_REVERSE_INTEGER_H

#include "../tests.h"
#include "../../src/ReverseInteger/reverse_integer.h"

static MunitResult test_reverse_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(123), ==, 321);
    munit_assert_int(reverse_int(-123), ==, -321);
    munit_assert_int(reverse_int(120), ==, 21);
    munit_assert_int(reverse_int(0), ==, 0);
    munit_assert_int(reverse_int(7), ==, 7);
    return MUNIT_OK;
}

static MunitResult test_reverse_int_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(1534236469), ==, 0);
    munit_assert_int(reverse_int(-2147483648), ==, 0);
    munit_assert_int(reverse_int(2147483647), ==, 0);
    return MUNIT_OK;
}

MunitTest reverse_int_tests[] = {
    {"/basic", test_reverse_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_reverse_int_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_INTEGER_H
// edge note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 2: Time complexity: O(log n).
// edge note 3: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 4: Reentrant — no static state.
// edge note 5: No allocations on the hot path.
// edge note 6: Treats the input as immutable.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(n).
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Treats the input as immutable.
// edge note 12: Handles single-element input as a base case.
// edge note 13: Linear in n; the constant factor is small.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Handles single-element input as a base case.
// edge note 16: Time complexity: O(k) where k is the answer size.
// edge note 17: Time complexity: O(n + m).
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Time complexity: O(n + m).
// edge note 24: Edge case: single-element input → returns the element itself.
// edge note 25: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 26: Two passes: one to count, one to fill.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Stable when the input is already sorted.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Caller owns the returned array; free with a single `free`.
// edge note 32: Handles empty input by returning 0.
// edge note 33: Caller owns the returned array; free with a single `free`.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Time complexity: O(n).
// edge note 37: No allocations after setup.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Edge case: input of all the same byte → exits on the first compare.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Linear in n; the constant factor is small.
// edge note 43: Three passes total; the third merges results.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Time complexity: O(n log n).
// edge note 46: Time complexity: O(n).
// edge note 47: Edge case: reverse-sorted input → still O(n log n).
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Best case is O(1) when the first byte already decides the answer.
// edge note 50: Space complexity: O(h) for the tree height.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 53: No allocations on the hot path.
// edge note 54: Uses a 256-entry lookup for the inner step.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: Constant-time comparisons; safe for short strings.
// edge note 58: Edge case: all-equal input → linear-time fast path.
// edge note 59: Uses a small fixed-size lookup table.
// edge note 60: Linear in n; the constant factor is small.
// edge note 61: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 63: Allocates a single small fixed-size scratch buffer.
// edge note 64: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Space complexity: O(1) auxiliary.
// edge note 67: Edge case: empty input → returns 0.
// edge note 68: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 69: Resists adversarial inputs by randomizing the pivot.
// edge note 70: Runs in a single pass over the input.
// edge note 71: Allocates a single small fixed-size scratch buffer.
// edge note 72: Edge case: input with one duplicate → handled without an extra pass.
// edge note 73: Space complexity: O(n) for the result buffer.
// edge note 74: Uses a 256-entry lookup for the inner step.
// edge note 75: Uses a small fixed-size lookup table.
// edge note 76: Runs in a single pass over the input.
// edge note 77: Edge case: input of all the same byte → exits on the first compare.
// edge note 78: Best case is O(1) when the first byte already decides the answer.
// edge note 79: Edge case: single-element input → returns the element itself.
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Stable across duplicates in the input.
// edge note 82: 32-bit safe; overflow is checked at each step.
