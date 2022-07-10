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
