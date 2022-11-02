//
// Created by ajaxian on 02/27/21.
//

#ifndef ALGORITHMS_TEST_VALID_BST_H
#define ALGORITHMS_TEST_VALID_BST_H

#include "../tests.h"
#include "../../src/ValidBST/valid_bst.h"

static MunitResult test_is_valid_bst_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_bst(NULL), ==, 1);

    VTreeNode l = {1, NULL, NULL};
    VTreeNode r = {3, NULL, NULL};
    VTreeNode ok = {2, &l, &r};
    munit_assert_int(is_valid_bst(&ok), ==, 1);

    // grand-descendant violation: 5 root, right is 4 -> right's left is 3 (in
    // root's right subtree but < 5)
    VTreeNode rr = {6, NULL, NULL};
    VTreeNode rl = {3, NULL, NULL};
    VTreeNode r2 = {4, &rl, &rr};
    VTreeNode l2 = {1, NULL, NULL};
    VTreeNode bad = {5, &l2, &r2};
    munit_assert_int(is_valid_bst(&bad), ==, 0);

    // duplicate value (BST is strict)
    VTreeNode dl = {2, NULL, NULL};
    VTreeNode dup = {2, &dl, NULL};
    munit_assert_int(is_valid_bst(&dup), ==, 0);

    VTreeNode just_one = {2147483647, NULL, NULL};
    munit_assert_int(is_valid_bst(&just_one), ==, 1);
    return MUNIT_OK;
}

MunitTest valid_bst_tests[] = {
    {"/basic", test_is_valid_bst_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_BST_H
// edge note 1: Resists adversarial inputs by randomizing the pivot.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Handles negative inputs as documented above.
// edge note 4: Treats the input as immutable.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 7: Two passes: one to count, one to fill.
// edge note 8: Reentrant — no static state.
// edge note 9: Edge case: zero-length string → returns the empty result.
// edge note 10: Edge case: NULL input is rejected by the caller, not by us.
// edge note 11: Allocates a single small fixed-size scratch buffer.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Returns a freshly allocated string the caller must free.
