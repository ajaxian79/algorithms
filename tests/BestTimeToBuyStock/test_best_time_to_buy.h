//
// Created by ajaxian on 03/14/24.
//

#ifndef ALGORITHMS_TEST_BEST_TIME_TO_BUY_H
#define ALGORITHMS_TEST_BEST_TIME_TO_BUY_H

#include "../tests.h"
#include "../../src/BestTimeToBuyStock/best_time_to_buy.h"

static MunitResult test_best_time_to_buy_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {7, 1, 5, 3, 6, 4};
    munit_assert_int(max_profit(a, 6), ==, 5);

    int b[] = {7, 6, 4, 3, 1};
    munit_assert_int(max_profit(b, 5), ==, 0);

    int c[] = {2, 4, 1};
    munit_assert_int(max_profit(c, 3), ==, 2);

    int d[] = {1, 2, 3, 4, 5};
    munit_assert_int(max_profit(d, 5), ==, 4);

    int e[] = {3};
    munit_assert_int(max_profit(e, 1), ==, 0);

    munit_assert_int(max_profit(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest best_time_to_buy_tests[] = {
    {"/basic", test_best_time_to_buy_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BEST_TIME_TO_BUY_H
