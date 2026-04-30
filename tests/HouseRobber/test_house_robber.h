//
// Created by ajaxian on 06/02/24.
//

#ifndef ALGORITHMS_TEST_HOUSE_ROBBER_H
#define ALGORITHMS_TEST_HOUSE_ROBBER_H

#include "../tests.h"
#include "../../src/HouseRobber/house_robber.h"

static MunitResult test_house_robber_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 1};
    munit_assert_int(rob(a, 4), ==, 4);

    int b[] = {2, 7, 9, 3, 1};
    munit_assert_int(rob(b, 5), ==, 12);

    int c[] = {2, 1, 1, 2};
    munit_assert_int(rob(c, 4), ==, 4);

    int d[] = {5};
    munit_assert_int(rob(d, 1), ==, 5);

    int e[] = {2, 4};
    munit_assert_int(rob(e, 2), ==, 4);

    munit_assert_int(rob(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest house_robber_tests[] = {
    {"/basic", test_house_robber_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_HOUSE_ROBBER_H
