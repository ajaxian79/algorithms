//
// Created by ajaxian on 10/24/20.
//

#ifndef ALGORITHMS_TEST_MOST_WATER_H
#define ALGORITHMS_TEST_MOST_WATER_H

#include "../tests.h"
#include "../../src/ContainerWithMostWater/most_water.h"

static MunitResult test_max_area_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    munit_assert_int(max_area(a, 9), ==, 49);

    int b[] = {1, 1};
    munit_assert_int(max_area(b, 2), ==, 1);

    int c[] = {4, 3, 2, 1, 4};
    munit_assert_int(max_area(c, 5), ==, 16);

    int d[] = {1};
    munit_assert_int(max_area(d, 1), ==, 0);
    return MUNIT_OK;
}

MunitTest most_water_tests[] = {
    {"/basic", test_max_area_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MOST_WATER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Two passes: one to count, one to fill.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Allocates one buffer of length n+1 for the result.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Caller owns the returned buffer.
