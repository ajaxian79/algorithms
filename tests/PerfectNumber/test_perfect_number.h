//
// Created by ajaxian on 06/19/21.
//

#ifndef ALGORITHMS_TEST_PERFECT_NUMBER_H
#define ALGORITHMS_TEST_PERFECT_NUMBER_H

#include "../tests.h"
#include "../../src/PerfectNumber/perfect_number.h"

static MunitResult test_is_perfect_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_number(6),       ==, 1);
    munit_assert_int(is_perfect_number(28),      ==, 1);
    munit_assert_int(is_perfect_number(496),     ==, 1);
    munit_assert_int(is_perfect_number(8128),    ==, 1);
    munit_assert_int(is_perfect_number(33550336),==, 1);

    munit_assert_int(is_perfect_number(12),      ==, 0);
    munit_assert_int(is_perfect_number(1),       ==, 0);
    munit_assert_int(is_perfect_number(0),       ==, 0);
    munit_assert_int(is_perfect_number(-6),      ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_number_tests[] = {
    {"/basic", test_is_perfect_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_NUMBER_H
