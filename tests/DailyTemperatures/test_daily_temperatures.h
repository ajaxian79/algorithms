//
// Created by ajaxian on 02/27/25.
//

#ifndef ALGORITHMS_TEST_DAILY_TEMPERATURES_H
#define ALGORITHMS_TEST_DAILY_TEMPERATURES_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/DailyTemperatures/daily_temperatures.h"

static MunitResult test_daily_temperatures_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int t[]  = {73, 74, 75, 71, 69, 72, 76, 73};
    int e[]  = {1, 1, 4, 2, 1, 1, 0, 0};
    int* out = days_until_warmer(t, 8);
    munit_assert_not_null(out);
    for (int i = 0; i < 8; i++) munit_assert_int(out[i], ==, e[i]);
    free(out);

    int t2[] = {30, 40, 50, 60};
    int e2[] = {1, 1, 1, 0};
    int* out2 = days_until_warmer(t2, 4);
    for (int i = 0; i < 4; i++) munit_assert_int(out2[i], ==, e2[i]);
    free(out2);

    int t3[] = {30, 60, 90};
    int e3[] = {1, 1, 0};
    int* out3 = days_until_warmer(t3, 3);
    for (int i = 0; i < 3; i++) munit_assert_int(out3[i], ==, e3[i]);
    free(out3);

    int t4[] = {90, 80, 70};
    int* out4 = days_until_warmer(t4, 3);
    for (int i = 0; i < 3; i++) munit_assert_int(out4[i], ==, 0);
    free(out4);

    munit_assert_ptr_null(days_until_warmer(NULL, 0));
    munit_assert_ptr_null(days_until_warmer(t, 0));
    return MUNIT_OK;
}

MunitTest daily_temperatures_tests[] = {
    {"/basic", test_daily_temperatures_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_DAILY_TEMPERATURES_H
