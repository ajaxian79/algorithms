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
