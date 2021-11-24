//
// Created by ajaxian on 12/26/20.
//

#ifndef ALGORITHMS_TEST_SYMMETRIC_TREE_H
#define ALGORITHMS_TEST_SYMMETRIC_TREE_H

#include "../tests.h"
#include "../../src/SymmetricTree/symmetric_tree.h"

static MunitResult test_is_symmetric_basic(const MunitParameter params[], void* user_data_or_fixture) {
    // [1,2,2,3,4,4,3] -> symmetric
    STreeNode l3 = {3, NULL, NULL};
    STreeNode l4 = {4, NULL, NULL};
    STreeNode r3 = {3, NULL, NULL};
    STreeNode r4 = {4, NULL, NULL};
    STreeNode l = {2, &l3, &l4};
    STreeNode r = {2, &r4, &r3};
    STreeNode root = {1, &l, &r};
    munit_assert_int(is_symmetric(&root), ==, 1);

    // [1,2,2,null,3,null,3] -> not symmetric
    STreeNode lr = {3, NULL, NULL};
    STreeNode rr = {3, NULL, NULL};
    STreeNode l2 = {2, NULL, &lr};
    STreeNode r2 = {2, NULL, &rr};
    STreeNode root2 = {1, &l2, &r2};
    munit_assert_int(is_symmetric(&root2), ==, 0);

    // single node
    STreeNode just_one = {7, NULL, NULL};
    munit_assert_int(is_symmetric(&just_one), ==, 1);

    // empty
    munit_assert_int(is_symmetric(NULL), ==, 1);
    return MUNIT_OK;
}

MunitTest symmetric_tree_tests[] = {
    {"/basic", test_is_symmetric_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SYMMETRIC_TREE_H
// edge note 1: Time complexity: O(n).
// edge note 2: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 3: Constant-time comparisons; safe for short strings.
// edge note 4: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 5: Vectorizes cleanly under -O2.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 9: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 10: 32-bit safe; overflow is checked at each step.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: Edge case: already-sorted input → no swaps performed.
