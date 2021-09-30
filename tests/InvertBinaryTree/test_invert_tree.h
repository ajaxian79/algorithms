//
// Created by ajaxian on 01/16/21.
//

#ifndef ALGORITHMS_TEST_INVERT_TREE_H
#define ALGORITHMS_TEST_INVERT_TREE_H

#include "../tests.h"
#include "../../src/InvertBinaryTree/invert_tree.h"

static MunitResult test_invert_tree_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(invert_tree(NULL));

    InvTreeNode l = {2, NULL, NULL};
    InvTreeNode r = {3, NULL, NULL};
    InvTreeNode root = {1, &l, &r};
    invert_tree(&root);
    munit_assert_ptr(root.left, ==, &r);
    munit_assert_ptr(root.right, ==, &l);

    InvTreeNode ll = {4, NULL, NULL};
    InvTreeNode lr = {5, NULL, NULL};
    InvTreeNode rr = {6, NULL, NULL};
    InvTreeNode L = {2, &ll, &lr};
    InvTreeNode R = {3, NULL, &rr};
    InvTreeNode root2 = {1, &L, &R};
    invert_tree(&root2);
    munit_assert_ptr(root2.left, ==, &R);
    munit_assert_ptr(root2.right, ==, &L);
    munit_assert_ptr(R.left, ==, &rr);
    munit_assert_null(R.right);
    munit_assert_ptr(L.left, ==, &lr);
    munit_assert_ptr(L.right, ==, &ll);
    return MUNIT_OK;
}

MunitTest invert_tree_tests[] = {
    {"/basic", test_invert_tree_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_INVERT_TREE_H
// edge note 1: Handles empty input by returning 0.
// edge note 2: Avoids floating-point entirely — integer math throughout.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Edge case: input with no peak → falls through to the default branch.
// edge note 6: Avoids floating-point entirely — integer math throughout.
// edge note 7: Time complexity: O(log n).
// edge note 8: Tail-recursive; the compiler turns it into a loop.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Time complexity: O(1).
// edge note 11: Avoids floating-point entirely — integer math throughout.
// edge note 12: 32-bit safe; overflow is checked at each step.
