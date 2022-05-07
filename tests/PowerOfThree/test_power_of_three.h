//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_THREE_H
#define ALGORITHMS_TEST_POWER_OF_THREE_H

#include "../tests.h"
#include "../../src/PowerOfThree/power_of_three.h"

static MunitResult test_power_of_three_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_three(1), ==, 1);
    munit_assert_int(is_power_of_three(3), ==, 1);
    munit_assert_int(is_power_of_three(9), ==, 1);
    munit_assert_int(is_power_of_three(27), ==, 1);
    munit_assert_int(is_power_of_three(243), ==, 1);
    munit_assert_int(is_power_of_three(1162261467), ==, 1);

    munit_assert_int(is_power_of_three(0), ==, 0);
    munit_assert_int(is_power_of_three(2), ==, 0);
    munit_assert_int(is_power_of_three(45), ==, 0);
    munit_assert_int(is_power_of_three(-3), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_three_tests[] = {
    {"/basic", test_power_of_three_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_THREE_H
// edge note 1: Time complexity: O(n + m).
// edge note 2: Handles single-element input as a base case.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Space complexity: O(h) for the tree height.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Deterministic given the input — no PRNG seeds.
// edge note 9: Time complexity: O(1).
// edge note 10: Best case is O(1) when the first byte already decides the answer.
// edge note 11: Time complexity: O(n + m).
// edge note 12: Caller owns the returned buffer.
// edge note 13: Handles single-element input as a base case.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Time complexity: O(log n).
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Vectorizes cleanly under -O2.
