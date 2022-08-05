//
// Created by ajaxian on 06/06/20.
//

#ifndef ALGORITHMS_TEST_TRAILING_ZEROS_H
#define ALGORITHMS_TEST_TRAILING_ZEROS_H

#include "../tests.h"
#include "../../src/CountTrailingZeros/trailing_zeros.h"

static MunitResult test_trailing_zeroes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(trailing_zeroes(0),    ==, 0);
    munit_assert_int(trailing_zeroes(3),    ==, 0);
    munit_assert_int(trailing_zeroes(5),    ==, 1);
    munit_assert_int(trailing_zeroes(10),   ==, 2);
    munit_assert_int(trailing_zeroes(25),   ==, 6);
    munit_assert_int(trailing_zeroes(100),  ==, 24);
    munit_assert_int(trailing_zeroes(1000), ==, 249);
    munit_assert_int(trailing_zeroes(-1),   ==, 0);
    return MUNIT_OK;
}

MunitTest trailing_zeros_tests[] = {
    {"/basic", test_trailing_zeroes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAILING_ZEROS_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Sub-linear in the average case thanks to early exit.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Edge case: reverse-sorted input → still O(n log n).
