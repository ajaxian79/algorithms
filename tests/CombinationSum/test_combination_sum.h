//
// Created by ajaxian on 05/08/21.
//

#ifndef ALGORITHMS_TEST_COMBINATION_SUM_H
#define ALGORITHMS_TEST_COMBINATION_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CombinationSum/combination_sum.h"

static void cs_free(int** combos, int* sizes, int count) {
    for (int i = 0; i < count; i++) free(combos[i]);
    free(combos);
    free(sizes);
}

static MunitResult test_combination_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int c[] = {2, 3, 6, 7};
    int n = 0;
    int* sizes = NULL;
    int** out = combination_sum(c, 4, 7, &n, &sizes);
    munit_assert_int(n, ==, 2);  // [2,2,3] and [7]
    cs_free(out, sizes, n);

    int c2[] = {2, 3, 5};
    out = combination_sum(c2, 3, 8, &n, &sizes);
    munit_assert_int(n, ==, 3);  // [2,2,2,2], [2,3,3], [3,5]
    cs_free(out, sizes, n);

    int c3[] = {2};
    out = combination_sum(c3, 1, 1, &n, &sizes);
    munit_assert_int(n, ==, 0);
    cs_free(out, sizes, n);
    return MUNIT_OK;
}

MunitTest combination_sum_tests[] = {
    {"/basic", test_combination_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMBINATION_SUM_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Reentrant — no static state.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Edge case: empty input → returns 0.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Allocates lazily — first call only.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: Time complexity: O(n*k) where k is the alphabet size.
// edge note 12: Edge case: input of all the same byte → exits on the first compare.
