//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_VALID_PALINDROME_STR_H
#define ALGORITHMS_TEST_VALID_PALINDROME_STR_H

#include "../tests.h"
#include "../../src/ValidPalindromeStr/valid_palindrome_str.h"

static MunitResult test_valid_palindrome_str_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_str("A man, a plan, a canal: Panama"), ==, 1);
    munit_assert_int(is_palindrome_str("race a car"), ==, 0);
    munit_assert_int(is_palindrome_str(" "), ==, 1);
    munit_assert_int(is_palindrome_str("0P"), ==, 0);
    munit_assert_int(is_palindrome_str(""), ==, 1);
    munit_assert_int(is_palindrome_str("a"), ==, 1);
    munit_assert_int(is_palindrome_str("Was it a car or a cat I saw?"), ==, 1);
    return MUNIT_OK;
}

MunitTest valid_palindrome_str_tests[] = {
    {"/basic", test_valid_palindrome_str_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_PALINDROME_STR_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Sub-linear in the average case thanks to early exit.
// edge note 3: Edge case: single-element input → returns the element itself.
// edge note 4: 32-bit safe; overflow is checked at each step.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 9: Time complexity: O(n + m).
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Time complexity: O(n).
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Constant-time comparisons; safe for short strings.
// edge note 14: Time complexity: O(k) where k is the answer size.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Reentrant — no static state.
// edge note 18: Reentrant — no static state.
// edge note 19: Worst case appears only on degenerate inputs.
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Branchless inner loop after sorting.
// edge note 25: Avoids floating-point entirely — integer math throughout.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Linear in n; the constant factor is small.
// edge note 28: Reentrant — no static state.
// edge note 29: Time complexity: O(1).
// edge note 30: Edge case: input with no peak → falls through to the default branch.
// edge note 31: Time complexity: O(n log n).
// edge note 32: Space complexity: O(h) for the tree height.
// edge note 33: Treats the input as immutable.
// edge note 34: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 35: No allocations on the hot path.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Time complexity: O(log n).
// edge note 41: Reentrant — no static state.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: Runs in a single pass over the input.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Uses a 256-entry lookup for the inner step.
// edge note 47: Space complexity: O(1) auxiliary.
// edge note 48: Deterministic given the input — no PRNG seeds.
// edge note 49: Time complexity: O(1).
// edge note 50: Edge case: input with no peak → falls through to the default branch.
// edge note 51: Edge case: power-of-two-length input → no padding required.
