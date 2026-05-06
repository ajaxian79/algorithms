//
// Created by ajaxian on 05/05/26.
//

#ifndef ALGORITHMS_TEST_LCS_H
#define ALGORITHMS_TEST_LCS_H

#include "../tests.h"
#include "../../src/LongestCommonSubsequence/lcs.h"

static MunitResult test_lcs_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(lcs_length("abcde", "ace"), ==, 3);
    munit_assert_int(lcs_length("abc", "abc"), ==, 3);
    munit_assert_int(lcs_length("abc", "def"), ==, 0);
    munit_assert_int(lcs_length("AGCAT", "GAC"), ==, 2);
    munit_assert_int(lcs_length("", "abc"), ==, 0);
    munit_assert_int(lcs_length("abc", ""), ==, 0);
    munit_assert_int(lcs_length("ABCBDAB", "BDCAB"), ==, 4);
    munit_assert_int(lcs_length(NULL, NULL), ==, 0);
    munit_assert_int(lcs_length("a", "a"), ==, 1);
    munit_assert_int(lcs_length("aaaa", "aa"), ==, 2);
    return MUNIT_OK;
}

MunitTest lcs_tests[] = {
    {"/basic", test_lcs_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LCS_H
