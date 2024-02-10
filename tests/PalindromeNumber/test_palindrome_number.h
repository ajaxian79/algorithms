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
