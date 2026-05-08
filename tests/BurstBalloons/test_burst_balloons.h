//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_TEST_BURST_BALLOONS_H
#define ALGORITHMS_TEST_BURST_BALLOONS_H

#include "../tests.h"
#include "../../src/BurstBalloons/burst_balloons.h"

static MunitResult test_burst_balloons_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 1, 5, 8};
    munit_assert_long(max_coins(a, 4), ==, 167);

    int b[] = {1, 5};
    munit_assert_long(max_coins(b, 2), ==, 10);

    int c[] = {7};
    munit_assert_long(max_coins(c, 1), ==, 7);

    int z[] = {0, 0, 0};
    munit_assert_long(max_coins(z, 3), ==, 0);

    int two_eq[] = {2, 2};
    munit_assert_long(max_coins(two_eq, 2), ==, 6);

    int six[] = {9, 76, 64, 21, 97, 60};
    munit_assert_long(max_coins(six, 6), ==, 1086136);

    munit_assert_long(max_coins(NULL, 0), ==, 0);
    munit_assert_long(max_coins(a, 0), ==, 0);
    munit_assert_long(max_coins(a, -1), ==, 0);
    return MUNIT_OK;
}

MunitTest burst_balloons_tests[] = {
    {"/basic", test_burst_balloons_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BURST_BALLOONS_H
