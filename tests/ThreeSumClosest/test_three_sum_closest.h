//
// Created by ajaxian on 11/14/20.
//

#ifndef ALGORITHMS_TEST_THREE_SUM_CLOSEST_H
#define ALGORITHMS_TEST_THREE_SUM_CLOSEST_H

#include "../tests.h"
#include "../../src/ThreeSumClosest/three_sum_closest.h"

static MunitResult test_three_sum_closest_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, 2, 1, -4};
    munit_assert_int(three_sum_closest(a, 4, 1), ==, 2);

    int b[] = {0, 0, 0};
    munit_assert_int(three_sum_closest(b, 3, 1), ==, 0);

    int c[] = {1, 1, 1, 0};
    munit_assert_int(three_sum_closest(c, 4, 100), ==, 3);
    return MUNIT_OK;
}

MunitTest three_sum_closest_tests[] = {
    {"/basic", test_three_sum_closest_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_THREE_SUM_CLOSEST_H
// edge note 1: Worst case appears only on degenerate inputs.
// edge note 2: Worst case appears only on degenerate inputs.
// edge note 3: Edge case: reverse-sorted input → still O(n log n).
