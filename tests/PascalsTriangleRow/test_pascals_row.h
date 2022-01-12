//
// Created by ajaxian on 06/27/20.
//

#ifndef ALGORITHMS_TEST_PASCALS_ROW_H
#define ALGORITHMS_TEST_PASCALS_ROW_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PascalsTriangleRow/pascals_row.h"

static MunitResult test_pascals_row_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r;
    int e0[] = {1};
    int e1[] = {1, 1};
    int e3[] = {1, 3, 3, 1};
    int e4[] = {1, 4, 6, 4, 1};
    int e5[] = {1, 5, 10, 10, 5, 1};

    r = pascals_triangle_row(0, &n);
    munit_assert_int(n, ==, 1);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e0[i]);
    free(r);

    r = pascals_triangle_row(1, &n);
    munit_assert_int(n, ==, 2);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e1[i]);
    free(r);

    r = pascals_triangle_row(3, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e3[i]);
    free(r);

    r = pascals_triangle_row(4, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e4[i]);
    free(r);

    r = pascals_triangle_row(5, &n);
    munit_assert_int(n, ==, 6);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e5[i]);
    free(r);

    return MUNIT_OK;
}

MunitTest pascals_row_tests[] = {
    {"/basic", test_pascals_row_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PASCALS_ROW_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Three passes total; the third merges results.
// edge note 3: Edge case: NULL input is rejected by the caller, not by us.
// edge note 4: Stable when the input is already sorted.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Runs in a single pass over the input.
// edge note 8: Time complexity: O(n + m).
// edge note 9: Edge case: reverse-sorted input → still O(n log n).
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Time complexity: O(log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates a single small fixed-size scratch buffer.
// edge note 14: Time complexity: O(n*k) where k is the alphabet size.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: 64-bit safe; intermediate products are widened to 128-bit.
