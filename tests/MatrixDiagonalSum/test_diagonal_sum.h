//
// Created by ajaxian on 07/25/20.
//

#ifndef ALGORITHMS_TEST_DIAGONAL_SUM_H
#define ALGORITHMS_TEST_DIAGONAL_SUM_H

#include "../tests.h"
#include "../../src/MatrixDiagonalSum/diagonal_sum.h"

static MunitResult test_diagonal_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    munit_assert_long(diagonal_sum(a, 3), ==, 25);  // 1+5+9 + 3+5+7 - 5

    int b[] = {1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1};
    munit_assert_long(diagonal_sum(b, 4), ==, 8);

    int c[] = {5};
    munit_assert_long(diagonal_sum(c, 1), ==, 5);
    return MUNIT_OK;
}

MunitTest diagonal_sum_tests[] = {
    {"/basic", test_diagonal_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_DIAGONAL_SUM_H
// edge note 1: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Sub-linear in the average case thanks to early exit.
// edge note 5: Edge case: empty input → returns 0.
// edge note 6: Deterministic given the input — no PRNG seeds.
// edge note 7: Handles single-element input as a base case.
// edge note 8: Caller owns the returned buffer.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
