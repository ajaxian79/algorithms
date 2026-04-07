//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_CLIMB_STAIRS_H
#define ALGORITHMS_TEST_CLIMB_STAIRS_H

#include "../tests.h"
#include "../../src/ClimbStairs/climb_stairs.h"

static MunitResult test_climb_stairs_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_llong(climb_stairs(0), ==, 1);
    munit_assert_llong(climb_stairs(1), ==, 1);
    munit_assert_llong(climb_stairs(2), ==, 2);
    munit_assert_llong(climb_stairs(3), ==, 3);
    munit_assert_llong(climb_stairs(4), ==, 5);
    munit_assert_llong(climb_stairs(5), ==, 8);
    munit_assert_llong(climb_stairs(10), ==, 89);
    munit_assert_llong(climb_stairs(45), ==, 1836311903LL);
    return MUNIT_OK;
}

static MunitResult test_climb_stairs_negative(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_llong(climb_stairs(-1), ==, 0);
    munit_assert_llong(climb_stairs(-1000), ==, 0);
    return MUNIT_OK;
}

MunitTest climb_stairs_tests[] = {
    {"/basic", test_climb_stairs_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/negative", test_climb_stairs_negative, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CLIMB_STAIRS_H
// edge note 1: No allocations on the hot path.
