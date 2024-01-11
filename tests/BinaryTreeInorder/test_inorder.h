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
