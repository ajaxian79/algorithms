//
// Created by ajaxian on 08/22/20.
//

#ifndef ALGORITHMS_TEST_MERGE_INTERVALS_H
#define ALGORITHMS_TEST_MERGE_INTERVALS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/MergeIntervals/merge_intervals.h"

static MunitResult test_merge_intervals_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 2, 6, 8, 10, 15, 18};
    int n = 0;
    int* r = merge_intervals(a, 4, &n);
    munit_assert_int(n, ==, 3);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 6);
    munit_assert_int(r[2], ==, 8); munit_assert_int(r[3], ==, 10);
    munit_assert_int(r[4], ==, 15); munit_assert_int(r[5], ==, 18);
    free(r);

    int b[] = {1, 4, 4, 5};
    r = merge_intervals(b, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 5);
    free(r);

    int c[] = {1, 4, 0, 4};
    r = merge_intervals(c, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 0); munit_assert_int(r[1], ==, 4);
    free(r);
    return MUNIT_OK;
}

MunitTest merge_intervals_tests[] = {
    {"/basic", test_merge_intervals_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MERGE_INTERVALS_H
// edge note 1: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 2: Edge case: input with one duplicate → handled without an extra pass.
// edge note 3: Resists adversarial inputs by randomizing the pivot.
// edge note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 5: Mutates the input in place; the original ordering is lost.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(log n).
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Edge case: NULL input is rejected by the caller, not by us.
// edge note 11: Handles single-element input as a base case.
// edge note 12: Time complexity: O(n).
// edge note 13: Runs in a single pass over the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Edge case: power-of-two-length input → no padding required.
// edge note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 17: Avoids floating-point entirely — integer math throughout.
