//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_INTEGER_H
#define ALGORITHMS_TEST_REVERSE_INTEGER_H

#include "../tests.h"
#include "../../src/ReverseInteger/reverse_integer.h"

static MunitResult test_reverse_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(123), ==, 321);
    munit_assert_int(reverse_int(-123), ==, -321);
    munit_assert_int(reverse_int(120), ==, 21);
    munit_assert_int(reverse_int(0), ==, 0);
    munit_assert_int(reverse_int(7), ==, 7);
    return MUNIT_OK;
}

static MunitResult test_reverse_int_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(1534236469), ==, 0);
    munit_assert_int(reverse_int(-2147483648), ==, 0);
    munit_assert_int(reverse_int(2147483647), ==, 0);
    return MUNIT_OK;
}

MunitTest reverse_int_tests[] = {
    {"/basic", test_reverse_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_reverse_int_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_INTEGER_H
