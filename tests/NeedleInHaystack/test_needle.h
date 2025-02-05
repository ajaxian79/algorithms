//
// Created by ajaxian on 11/28/20.
//

#ifndef ALGORITHMS_TEST_NEEDLE_H
#define ALGORITHMS_TEST_NEEDLE_H

#include "../tests.h"
#include "../../src/NeedleInHaystack/needle.h"

static MunitResult test_str_str_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(str_str("sadbutsad", "sad"),    ==, 0);
    munit_assert_int(str_str("leetcode", "leeto"),    ==, -1);
    munit_assert_int(str_str("hello", ""),            ==, 0);
    munit_assert_int(str_str("aaaaab", "aab"),        ==, 3);
    munit_assert_int(str_str("mississippi", "issip"), ==, 4);
    munit_assert_int(str_str("a", "a"),               ==, 0);
    munit_assert_int(str_str("a", "ab"),              ==, -1);
    return MUNIT_OK;
}

MunitTest needle_tests[] = {
    {"/basic", test_str_str_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NEEDLE_H
// edge note 1: Two passes: one to count, one to fill.
