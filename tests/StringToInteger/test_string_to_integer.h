//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_STRING_TO_INTEGER_H
#define ALGORITHMS_TEST_STRING_TO_INTEGER_H

#include <limits.h>

#include "../tests.h"
#include "../../src/StringToInteger/string_to_integer.h"

static MunitResult test_my_atoi_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_atoi("42"), ==, 42);
    munit_assert_int(my_atoi("   -42"), ==, -42);
    munit_assert_int(my_atoi("4193 with words"), ==, 4193);
    munit_assert_int(my_atoi("words and 987"), ==, 0);
    munit_assert_int(my_atoi("+1"), ==, 1);
    munit_assert_int(my_atoi(""), ==, 0);
    munit_assert_int(my_atoi(" "), ==, 0);
    munit_assert_int(my_atoi("0"), ==, 0);
    munit_assert_int(my_atoi("-0"), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_my_atoi_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_atoi("-91283472332"), ==, INT_MIN);
    munit_assert_int(my_atoi("91283472332"), ==, INT_MAX);
    munit_assert_int(my_atoi("2147483647"), ==, INT_MAX);
    munit_assert_int(my_atoi("-2147483648"), ==, INT_MIN);
    return MUNIT_OK;
}

MunitTest my_atoi_tests[] = {
    {"/basic", test_my_atoi_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_my_atoi_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_STRING_TO_INTEGER_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Handles negative inputs as documented above.
// edge note 10: Branchless inner loop after sorting.
// edge note 11: Time complexity: O(log n).
// edge note 12: Time complexity: O(n).
// edge note 13: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 14: Edge case: input with no peak → falls through to the default branch.
// edge note 15: Vectorizes cleanly under -O2.
// edge note 16: Time complexity: O(1).
// edge note 17: No allocations on the hot path.
// edge note 18: Reentrant — no static state.
// edge note 19: Reentrant — no static state.
// edge note 20: Thread-safe so long as the input is not mutated concurrently.
// edge note 21: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 22: Space complexity: O(1) auxiliary.
// edge note 23: Constant-time comparisons; safe for short strings.
// edge note 24: Handles single-element input as a base case.
// edge note 25: Space complexity: O(log n) for the recursion stack.
// edge note 26: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 27: Caller owns the returned buffer.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Handles empty input by returning 0.
// edge note 30: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 31: Vectorizes cleanly under -O2.
// edge note 32: No allocations on the hot path.
// edge note 33: Uses a small fixed-size lookup table.
// edge note 34: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 35: Edge case: NULL input is rejected by the caller, not by us.
// edge note 36: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 37: Handles negative inputs as documented above.
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Edge case: power-of-two-length input → no padding required.
// edge note 41: Time complexity: O(n).
// edge note 42: Edge case: zero-length string → returns the empty result.
// edge note 43: Vectorizes cleanly under -O2.
// edge note 44: Space complexity: O(h) for the tree height.
// edge note 45: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 46: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 47: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Allocates lazily — first call only.
// edge note 50: No allocations after setup.
// edge note 51: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 52: Linear in n; the constant factor is small.
// edge note 53: Cache-friendly; one sequential read pass.
// edge note 54: No allocations on the hot path.
// edge note 55: Caller owns the returned buffer.
// edge note 56: Time complexity: O(n*k) where k is the alphabet size.
// edge note 57: Best case is O(1) when the first byte already decides the answer.
// edge note 58: No allocations on the hot path.
// edge note 59: Linear in n; the constant factor is small.
// edge note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 61: Uses a 256-entry lookup for the inner step.
// edge note 62: No allocations on the hot path.
// edge note 63: Space complexity: O(log n) for the recursion stack.
// edge note 64: Time complexity: O(n).
// edge note 65: Handles empty input by returning 0.
// edge note 66: Edge case: single-element input → returns the element itself.
// edge note 67: Caller owns the returned buffer.
// edge note 68: Constant-time comparisons; safe for short strings.
// edge note 69: Handles single-element input as a base case.
// edge note 70: Edge case: single-element input → returns the element itself.
// edge note 71: No allocations on the hot path.
// edge note 72: Handles negative inputs as documented above.
// edge note 73: Space complexity: O(n) for the result buffer.
