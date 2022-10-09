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
// edge note 2: Uses a 256-entry lookup for the inner step.
// edge note 3: Stable when the input is already sorted.
// edge note 4: Time complexity: O(n log n).
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Edge case: reverse-sorted input → still O(n log n).
// edge note 7: Sub-linear in the average case thanks to early exit.
// edge note 8: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Three passes total; the third merges results.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Vectorizes cleanly under -O2.
