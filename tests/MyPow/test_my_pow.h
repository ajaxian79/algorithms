//
// Created by ajaxian on 05/02/26.
//

#ifndef ALGORITHMS_TEST_MY_POW_H
#define ALGORITHMS_TEST_MY_POW_H

#include <limits.h>
#include <math.h>

#include "../tests.h"
#include "../../src/MyPow/my_pow.h"

static int my_pow_close(double a, double b) {
    double diff = a - b;
    if (diff < 0) diff = -diff;
    return diff < 1e-9;
}

static MunitResult test_my_pow_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_true(my_pow_close(my_pow(2.0, 10), 1024.0));
    munit_assert_true(my_pow_close(my_pow(2.0, -2), 0.25));
    munit_assert_true(my_pow_close(my_pow(3.0, 0), 1.0));
    munit_assert_true(my_pow_close(my_pow(0.5, 5), 0.03125));
    munit_assert_true(my_pow_close(my_pow(-2.0, 3), -8.0));
    munit_assert_true(my_pow_close(my_pow(1.0, INT_MAX), 1.0));
    munit_assert_true(my_pow_close(my_pow(1.0, INT_MIN), 1.0));
    munit_assert_true(my_pow_close(my_pow(2.0, 1), 2.0));
    return MUNIT_OK;
}

MunitTest my_pow_tests[] = {
    {"/basic", test_my_pow_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MY_POW_H
