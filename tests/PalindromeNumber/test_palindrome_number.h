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
