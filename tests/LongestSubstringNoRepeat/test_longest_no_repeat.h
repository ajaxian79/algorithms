//
// Created by ajaxian on 11/04/24.
//

#ifndef ALGORITHMS_TEST_LONGEST_NO_REPEAT_H
#define ALGORITHMS_TEST_LONGEST_NO_REPEAT_H

#include "../tests.h"
#include "../../src/LongestSubstringNoRepeat/longest_no_repeat.h"

static MunitResult test_longest_no_repeat_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(length_of_longest_substring("abcabcbb"), ==, 3);
    munit_assert_int(length_of_longest_substring("bbbbb"),    ==, 1);
    munit_assert_int(length_of_longest_substring("pwwkew"),   ==, 3);
    munit_assert_int(length_of_longest_substring(""),         ==, 0);
    munit_assert_int(length_of_longest_substring("dvdf"),     ==, 3);
    munit_assert_int(length_of_longest_substring("tmmzuxt"),  ==, 5);
    munit_assert_int(length_of_longest_substring("a"),        ==, 1);
    munit_assert_int(length_of_longest_substring(NULL),       ==, 0);
    munit_assert_int(length_of_longest_substring(" "),        ==, 1);
    return MUNIT_OK;
}

MunitTest longest_no_repeat_tests[] = {
    {"/basic", test_longest_no_repeat_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LONGEST_NO_REPEAT_H
