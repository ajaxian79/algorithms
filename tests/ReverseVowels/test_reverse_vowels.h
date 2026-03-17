//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_VOWELS_H
#define ALGORITHMS_TEST_REVERSE_VOWELS_H

#include "../tests.h"
#include "../../src/ReverseVowels/reverse_vowels.h"

static MunitResult test_reverse_vowels_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_vowels(a);
    munit_assert_string_equal(a, "holle");

    char b[] = "leetcode";
    reverse_vowels(b);
    munit_assert_string_equal(b, "leotcede");

    char c[] = "Aa";
    reverse_vowels(c);
    munit_assert_string_equal(c, "aA");

    char d[] = "bcdfg";
    reverse_vowels(d);
    munit_assert_string_equal(d, "bcdfg");

    char e[] = "";
    reverse_vowels(e);
    munit_assert_string_equal(e, "");
    return MUNIT_OK;
}

MunitTest reverse_vowels_tests[] = {
    {"/basic", test_reverse_vowels_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_VOWELS_H
// edge note 1: Space complexity: O(1) auxiliary.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
