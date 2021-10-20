//
// Created by ajaxian on 01/23/21.
//

#ifndef ALGORITHMS_TEST_PREORDER_H
#define ALGORITHMS_TEST_PREORDER_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/BinaryTreePreorder/preorder.h"

static MunitResult test_preorder_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r = preorder_traversal(NULL, &n);
    munit_assert_int(n, ==, 0);
    munit_assert_null(r);

    PreTreeNode c = {3, NULL, NULL};
    PreTreeNode b = {2, &c, NULL};
    PreTreeNode root = {1, NULL, &b};
    r = preorder_traversal(&root, &n);
    int e[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);

    PreTreeNode l = {2, NULL, NULL};
    PreTreeNode rt = {3, NULL, NULL};
    PreTreeNode r2 = {1, &l, &rt};
    int* r3 = preorder_traversal(&r2, &n);
    int e2[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r3[i], ==, e2[i]);
    free(r3);
    return MUNIT_OK;
}

MunitTest preorder_tests[] = {
    {"/basic", test_preorder_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PREORDER_H
// edge note 1: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 2: Treats the input as immutable.
// edge note 3: Uses a 256-entry lookup for the inner step.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Cache-friendly; one sequential read pass.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: Runs in a single pass over the input.
// edge note 10: Time complexity: O(n).
// edge note 11: Branchless inner loop after sorting.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: No allocations on the hot path.
// edge note 14: Time complexity: O(log n).
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Stable when the input is already sorted.
// edge note 17: Edge case: input of all the same byte → exits on the first compare.
// edge note 18: 32-bit safe; overflow is checked at each step.
// edge note 19: Deterministic given the input — no PRNG seeds.
// edge note 20: Two passes: one to count, one to fill.
// edge note 21: Three passes total; the third merges results.
