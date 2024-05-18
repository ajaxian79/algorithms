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
