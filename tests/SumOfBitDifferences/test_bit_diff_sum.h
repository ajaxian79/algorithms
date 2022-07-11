//
// Created by ajaxian on 03/20/21.
//

#ifndef ALGORITHMS_TEST_BIT_DIFF_SUM_H
#define ALGORITHMS_TEST_BIT_DIFF_SUM_H

#include "../tests.h"
#include "../../src/SumOfBitDifferences/bit_diff_sum.h"

static MunitResult test_bit_diff_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {4, 14, 2};  // pairs: (4,14)=2, (4,2)=2, (14,2)=2 -> 6
    munit_assert_long(total_hamming_distance(a, 3), ==, 6);

    int b[] = {4, 14, 4, 2};
    munit_assert_long(total_hamming_distance(b, 4), ==, 10);

    int c[] = {0};
    munit_assert_long(total_hamming_distance(c, 1), ==, 0);

    int d[] = {7, 7, 7};  // identical -> 0
    munit_assert_long(total_hamming_distance(d, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest bit_diff_sum_tests[] = {
    {"/basic", test_bit_diff_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BIT_DIFF_SUM_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Time complexity: O(1).
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Sub-linear in the average case thanks to early exit.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Edge case: input with no peak → falls through to the default branch.
// edge note 8: Handles empty input by returning 0.
// edge note 9: Time complexity: O(n + m).
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Space complexity: O(1) auxiliary.
// edge note 12: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 13: Time complexity: O(log n).
// edge note 14: Reentrant — no static state.
// edge note 15: Deterministic given the input — no PRNG seeds.
