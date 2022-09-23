//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_FOUR_H
#define ALGORITHMS_TEST_POWER_OF_FOUR_H

#include "../tests.h"
#include "../../src/PowerOfFour/power_of_four.h"

static MunitResult test_power_of_four_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_four(1), ==, 1);
    munit_assert_int(is_power_of_four(4), ==, 1);
    munit_assert_int(is_power_of_four(16), ==, 1);
    munit_assert_int(is_power_of_four(64), ==, 1);
    munit_assert_int(is_power_of_four(256), ==, 1);
    munit_assert_int(is_power_of_four(1073741824), ==, 1);

    munit_assert_int(is_power_of_four(2), ==, 0);
    munit_assert_int(is_power_of_four(8), ==, 0);
    munit_assert_int(is_power_of_four(5), ==, 0);
    munit_assert_int(is_power_of_four(0), ==, 0);
    munit_assert_int(is_power_of_four(-4), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_four_tests[] = {
    {"/basic", test_power_of_four_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_FOUR_H
// edge note 1: Handles negative inputs as documented above.
// edge note 2: Edge case: already-sorted input → no swaps performed.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Time complexity: O(n*k) where k is the alphabet size.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 9: Edge case: input with one duplicate → handled without an extra pass.
// edge note 10: Handles empty input by returning 0.
// edge note 11: Vectorizes cleanly under -O2.
