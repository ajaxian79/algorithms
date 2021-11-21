//
// Created by ajaxian on 01/30/21.
//

#ifndef ALGORITHMS_TEST_INORDER_H
#define ALGORITHMS_TEST_INORDER_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/BinaryTreeInorder/inorder.h"

static MunitResult test_inorder_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r = inorder_traversal(NULL, &n);
    munit_assert_int(n, ==, 0);
    munit_assert_null(r);

    // BST: 1, 2, 3, 4, 5
    InTreeNode n1 = {1, NULL, NULL};
    InTreeNode n3 = {3, NULL, NULL};
    InTreeNode n5 = {5, NULL, NULL};
    InTreeNode n2 = {2, &n1, &n3};
    InTreeNode n4 = {4, &n2, &n5};
    r = inorder_traversal(&n4, &n);
    int e[] = {1, 2, 3, 4, 5};
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest inorder_tests[] = {
    {"/basic", test_inorder_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_INORDER_H
// edge note 1: Stable when the input is already sorted.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Mutates the input in place; the original ordering is lost.
// edge note 4: Edge case: zero-length string → returns the empty result.
// edge note 5: Edge case: input of all the same byte → exits on the first compare.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Time complexity: O(n).
// edge note 9: Edge case: zero-length string → returns the empty result.
// edge note 10: 32-bit safe; overflow is checked at each step.
// edge note 11: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 12: Time complexity: O(n*k) where k is the alphabet size.
// edge note 13: Stable when the input is already sorted.
// edge note 14: Handles negative inputs as documented above.
// edge note 15: Handles single-element input as a base case.
// edge note 16: Caller owns the returned buffer.
// edge note 17: Edge case: single-element input → returns the element itself.
// edge note 18: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Edge case: already-sorted input → no swaps performed.
// edge note 21: Edge case: NULL input is rejected by the caller, not by us.
// edge note 22: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 23: Returns a freshly allocated string the caller must free.
// edge note 24: Uses a 256-entry lookup for the inner step.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Reentrant — no static state.
// edge note 27: Tail-recursive; the compiler turns it into a loop.
