//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_STRING_H
#define ALGORITHMS_TEST_REVERSE_STRING_H

#include <string.h>

#include "../tests.h"
#include "../../src/ReverseString/reverse_string.h"

static MunitResult test_reverse_string_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_string(a, 5);
    munit_assert_string_equal(a, "olleh");

    char b[] = "Hannah";
    reverse_string(b, 6);
    munit_assert_string_equal(b, "hannaH");

    char c[] = "a";
    reverse_string(c, 1);
    munit_assert_string_equal(c, "a");

    char d[] = "";
    reverse_string(d, 0);
    munit_assert_string_equal(d, "");

    return MUNIT_OK;
}

MunitTest reverse_string_tests[] = {
    {"/basic", test_reverse_string_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_STRING_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
