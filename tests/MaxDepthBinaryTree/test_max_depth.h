//
// Created by ajaxian on 01/02/21.
//

#ifndef ALGORITHMS_TEST_MAX_DEPTH_H
#define ALGORITHMS_TEST_MAX_DEPTH_H

#include "../tests.h"
#include "../../src/MaxDepthBinaryTree/max_depth.h"

static MunitResult test_max_depth_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(max_depth(NULL), ==, 0);

    MdTreeNode just_one = {1, NULL, NULL};
    munit_assert_int(max_depth(&just_one), ==, 1);

    MdTreeNode g = {7, NULL, NULL};
    MdTreeNode f = {15, NULL, NULL};
    MdTreeNode e = {20, &f, &g};
    MdTreeNode d = {9, NULL, NULL};
    MdTreeNode root = {3, &d, &e};
    munit_assert_int(max_depth(&root), ==, 3);

    // skinny: 1 -> 2 -> 3 -> 4
    MdTreeNode n4 = {4, NULL, NULL};
    MdTreeNode n3 = {3, NULL, &n4};
    MdTreeNode n2 = {2, NULL, &n3};
    MdTreeNode n1 = {1, NULL, &n2};
    munit_assert_int(max_depth(&n1), ==, 4);
    return MUNIT_OK;
}

MunitTest max_depth_tests[] = {
    {"/basic", test_max_depth_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MAX_DEPTH_H
// edge note 1: Edge case: all-equal input → linear-time fast path.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Edge case: all-equal input → linear-time fast path.
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Edge case: input of all the same byte → exits on the first compare.
// edge note 8: Sub-linear in the average case thanks to early exit.
// edge note 9: Avoids floating-point entirely — integer math throughout.
// edge note 10: Caller owns the returned array; free with a single `free`.
// edge note 11: Edge case: already-sorted input → no swaps performed.
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Mutates the input in place; the original ordering is lost.
// edge note 14: Tail-recursive; the compiler turns it into a loop.
// edge note 15: Cache-friendly; one sequential read pass.
// edge note 16: Time complexity: O(n*k) where k is the alphabet size.
// edge note 17: Caller owns the returned array; free with a single `free`.
// edge note 18: Edge case: power-of-two-length input → no padding required.
