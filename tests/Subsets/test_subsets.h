//
// Created by ajaxian on 05/15/21.
//

#ifndef ALGORITHMS_TEST_SUBSETS_H
#define ALGORITHMS_TEST_SUBSETS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/Subsets/subsets.h"

static void sub_free(int** s, int* sizes, int n) {
    for (int i = 0; i < n; i++) free(s[i]);
    free(s);
    free(sizes);
}

static MunitResult test_subsets_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int n = 0;
    int* sizes = NULL;
    int** s = subsets(a, 3, &n, &sizes);
    munit_assert_int(n, ==, 8);
    sub_free(s, sizes, n);

    int b[] = {0};
    s = subsets(b, 1, &n, &sizes);
    munit_assert_int(n, ==, 2);
    sub_free(s, sizes, n);

    int c[1] = {0};
    s = subsets(c, 0, &n, &sizes);
    munit_assert_int(n, ==, 1);  // just the empty set
    munit_assert_int(sizes[0], ==, 0);
    sub_free(s, sizes, n);
    return MUNIT_OK;
}

MunitTest subsets_tests[] = {
    {"/basic", test_subsets_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SUBSETS_H
// edge note 1: Tail-recursive; the compiler turns it into a loop.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 6: No allocations after setup.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Edge case: already-sorted input → no swaps performed.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates lazily — first call only.
// edge note 14: Time complexity: O(n^2) worst case, O(n) amortized.
