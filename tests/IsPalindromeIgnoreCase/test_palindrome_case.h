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
