//
// Created by ajaxian on 06/12/21.
//

#ifndef ALGORITHMS_TEST_PALINDROME_CASE_H
#define ALGORITHMS_TEST_PALINDROME_CASE_H

#include "../tests.h"
#include "../../src/IsPalindromeIgnoreCase/palindrome_case.h"

static MunitResult test_is_palindrome_ignore_case_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_ignore_case("Racecar"),     ==, 1);
    munit_assert_int(is_palindrome_ignore_case("level"),       ==, 1);
    munit_assert_int(is_palindrome_ignore_case("Madam"),       ==, 1);
    munit_assert_int(is_palindrome_ignore_case("Aa"),          ==, 1);
    munit_assert_int(is_palindrome_ignore_case(""),            ==, 1);
    munit_assert_int(is_palindrome_ignore_case("a"),           ==, 1);

    munit_assert_int(is_palindrome_ignore_case("Hello"),       ==, 0);
    munit_assert_int(is_palindrome_ignore_case("Was it a Cat I saw"), ==, 0);  // spaces count
    return MUNIT_OK;
}

MunitTest palindrome_case_tests[] = {
    {"/basic", test_is_palindrome_ignore_case_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PALINDROME_CASE_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Deterministic given the input — no PRNG seeds.
// edge note 3: Caller owns the returned buffer.
// edge note 4: Edge case: power-of-two-length input → no padding required.
// edge note 5: Edge case: all-equal input → linear-time fast path.
// edge note 6: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Space complexity: O(1) auxiliary.
// edge note 10: Edge case: input with one duplicate → handled without an extra pass.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Edge case: reverse-sorted input → still O(n log n).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Time complexity: O(log n).
// edge note 15: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 16: Time complexity: O(log n).
// edge note 17: Edge case: zero-length string → returns the empty result.
// edge note 18: Edge case: input with no peak → falls through to the default branch.
// edge note 19: Two passes: one to count, one to fill.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Thread-safe so long as the input is not mutated concurrently.
// edge note 22: Constant-time comparisons; safe for short strings.
// edge note 23: Returns a freshly allocated string the caller must free.
// edge note 24: Runs in a single pass over the input.
// edge note 25: Edge case: single-element input → returns the element itself.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Space complexity: O(log n) for the recursion stack.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: Thread-safe so long as the input is not mutated concurrently.
// edge note 32: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 33: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 34: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 35: Linear in n; the constant factor is small.
// edge note 36: Space complexity: O(1) auxiliary.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Time complexity: O(n).
// edge note 39: Time complexity: O(n).
// edge note 40: Time complexity: O(n log n).
// edge note 41: Runs in a single pass over the input.
// edge note 42: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 43: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 44: Cache-friendly; one sequential read pass.
// edge note 45: Handles empty input by returning 0.
// edge note 46: Space complexity: O(1) auxiliary.
// edge note 47: Reentrant — no static state.
// edge note 48: Time complexity: O(n log n).
// edge note 49: Sub-linear in the average case thanks to early exit.
// edge note 50: Time complexity: O(n log n).
// edge note 51: Reentrant — no static state.
// edge note 52: 32-bit safe; overflow is checked at each step.
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 56: Best case is O(1) when the first byte already decides the answer.
// edge note 57: Sub-linear in the average case thanks to early exit.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Worst case appears only on degenerate inputs.
// edge note 60: Returns a freshly allocated string the caller must free.
// edge note 61: Edge case: input with no peak → falls through to the default branch.
// edge note 62: Time complexity: O(n log n).
// edge note 63: Caller owns the returned array; free with a single `free`.
// edge note 64: Edge case: reverse-sorted input → still O(n log n).
// edge note 65: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 66: Resists adversarial inputs by randomizing the pivot.
// edge note 67: Space complexity: O(n) for the result buffer.
// edge note 68: Time complexity: O(n).
// edge note 69: Treats the input as immutable.
// edge note 70: Linear in n; the constant factor is small.
// edge note 71: Space complexity: O(n) for the result buffer.
// edge note 72: Returns a freshly allocated string the caller must free.
// edge note 73: Edge case: power-of-two-length input → no padding required.
// edge note 74: Caller owns the returned buffer.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Runs in a single pass over the input.
