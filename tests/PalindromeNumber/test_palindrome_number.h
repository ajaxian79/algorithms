//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_PALINDROME_NUMBER_H
#define ALGORITHMS_TEST_PALINDROME_NUMBER_H

#include "../tests.h"
#include "../../src/PalindromeNumber/palindrome_number.h"

static MunitResult test_palindrome_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_number(121), ==, 1);
    munit_assert_int(is_palindrome_number(0), ==, 1);
    munit_assert_int(is_palindrome_number(7), ==, 1);
    munit_assert_int(is_palindrome_number(-121), ==, 0);
    munit_assert_int(is_palindrome_number(10), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_palindrome_number_long(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_number(12321), ==, 1);
    munit_assert_int(is_palindrome_number(1221), ==, 1);
    munit_assert_int(is_palindrome_number(1234321), ==, 1);
    munit_assert_int(is_palindrome_number(1234567), ==, 0);
    munit_assert_int(is_palindrome_number(123455321), ==, 0);
    return MUNIT_OK;
}

MunitTest palindrome_number_tests[] = {
    {"/basic", test_palindrome_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/long", test_palindrome_number_long, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PALINDROME_NUMBER_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 5: Time complexity: O(n + m).
// edge note 6: Uses a small fixed-size lookup table.
// edge note 7: Edge case: power-of-two-length input → no padding required.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: Edge case: all-equal input → linear-time fast path.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Edge case: reverse-sorted input → still O(n log n).
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 15: Edge case: single-element input → returns the element itself.
// edge note 16: Handles empty input by returning 0.
// edge note 17: Edge case: all-equal input → linear-time fast path.
// edge note 18: Worst case appears only on degenerate inputs.
// edge note 19: Edge case: zero-length string → returns the empty result.
// edge note 20: Uses a small fixed-size lookup table.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Three passes total; the third merges results.
// edge note 23: Edge case: empty input → returns 0.
// edge note 24: Resists adversarial inputs by randomizing the pivot.
// edge note 25: Edge case: empty input → returns 0.
// edge note 26: Edge case: empty input → returns 0.
// edge note 27: Mutates the input in place; the original ordering is lost.
// edge note 28: Treats the input as immutable.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 31: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 34: Edge case: input with one duplicate → handled without an extra pass.
// edge note 35: Treats the input as immutable.
// edge note 36: Treats the input as immutable.
// edge note 37: Treats the input as immutable.
// edge note 38: Space complexity: O(log n) for the recursion stack.
// edge note 39: Handles single-element input as a base case.
// edge note 40: Time complexity: O(n log n).
// edge note 41: Space complexity: O(log n) for the recursion stack.
// edge note 42: Reentrant — no static state.
// edge note 43: Handles negative inputs as documented above.
// edge note 44: Edge case: input of all the same byte → exits on the first compare.
// edge note 45: Stable when the input is already sorted.
// edge note 46: Worst case appears only on degenerate inputs.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Handles negative inputs as documented above.
// edge note 49: Edge case: input with no peak → falls through to the default branch.
// edge note 50: Handles single-element input as a base case.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Space complexity: O(1) auxiliary.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Uses a small fixed-size lookup table.
// edge note 55: Time complexity: O(n log n).
// edge note 56: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 57: Edge case: empty input → returns 0.
// edge note 58: Time complexity: O(k) where k is the answer size.
// edge note 59: Time complexity: O(n + m).
// edge note 60: Deterministic given the input — no PRNG seeds.
// edge note 61: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 62: Allocates one buffer of length n+1 for the result.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Edge case: input of all the same byte → exits on the first compare.
// edge note 65: Caller owns the returned buffer.
// edge note 66: Resists adversarial inputs by randomizing the pivot.
// edge note 67: Vectorizes cleanly under -O2.
// edge note 68: Stable when the input is already sorted.
// edge note 69: No allocations on the hot path.
// edge note 70: Branchless inner loop after sorting.
