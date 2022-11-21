//
// Created by ajaxian on 11/21/20.
//

#ifndef ALGORITHMS_TEST_FOUR_SUM_H
#define ALGORITHMS_TEST_FOUR_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/FourSum/four_sum.h"

static MunitResult test_four_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 0, -1, 0, -2, 2};
    int n = 0;
    int* r = four_sum(a, 6, 0, &n);
    munit_assert_int(n, ==, 3);
    free(r);

    int b[] = {2, 2, 2, 2, 2};
    r = four_sum(b, 5, 8, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 2);
    munit_assert_int(r[3], ==, 2);
    free(r);

    int c[] = {1, 2, 3};
    r = four_sum(c, 3, 6, &n);
    munit_assert_int(n, ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest four_sum_tests[] = {
    {"/basic", test_four_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FOUR_SUM_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Time complexity: O(k) where k is the answer size.
// edge note 3: Space complexity: O(h) for the tree height.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Handles empty input by returning 0.
// edge note 6: Mutates the input in place; the original ordering is lost.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Edge case: input of all the same byte → exits on the first compare.
// edge note 9: Deterministic given the input — no PRNG seeds.
// edge note 10: Tail-recursive; the compiler turns it into a loop.
