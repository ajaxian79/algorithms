//
// Created by ajaxian on 01/09/21.
//

#ifndef ALGORITHMS_TEST_MIN_DEPTH_H
#define ALGORITHMS_TEST_MIN_DEPTH_H

#include "../tests.h"
#include "../../src/MinDepthBinaryTree/min_depth.h"

static MunitResult test_min_depth_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(min_depth(NULL), ==, 0);

    MnTreeNode g = {7, NULL, NULL};
    MnTreeNode f = {15, NULL, NULL};
    MnTreeNode e = {20, &f, &g};
    MnTreeNode d = {9, NULL, NULL};
    MnTreeNode root = {3, &d, &e};
    munit_assert_int(min_depth(&root), ==, 2);

    // Single skinny path should NOT short-circuit at root.
    MnTreeNode n5 = {5, NULL, NULL};
    MnTreeNode n4 = {4, NULL, &n5};
    MnTreeNode n3 = {3, NULL, &n4};
    MnTreeNode n2 = {2, NULL, &n3};
    MnTreeNode n1 = {1, NULL, &n2};
    munit_assert_int(min_depth(&n1), ==, 5);

    MnTreeNode just_one = {1, NULL, NULL};
    munit_assert_int(min_depth(&just_one), ==, 1);
    return MUNIT_OK;
}

MunitTest min_depth_tests[] = {
    {"/basic", test_min_depth_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIN_DEPTH_H
// edge note 1: Cache-friendly; one sequential read pass.
// edge note 2: Reentrant — no static state.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Time complexity: O(n).
// edge note 6: Allocates lazily — first call only.
// edge note 7: Stable when the input is already sorted.
// edge note 8: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 9: Best case is O(1) when the first byte already decides the answer.
// edge note 10: Edge case: input with no peak → falls through to the default branch.
// edge note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 12: Worst case appears only on degenerate inputs.
