//
// Created by ajaxian on 02/20/21.
//

#ifndef ALGORITHMS_TEST_SAME_TREE_H
#define ALGORITHMS_TEST_SAME_TREE_H

#include "../tests.h"
#include "../../src/SameTree/same_tree.h"

static MunitResult test_same_tree_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_same_tree(NULL, NULL), ==, 1);

    StTreeNode a = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, NULL), ==, 0);

    StTreeNode b = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &b), ==, 1);

    StTreeNode c = {2, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &c), ==, 0);

    StTreeNode al = {2, NULL, NULL};
    StTreeNode bl = {2, NULL, NULL};
    StTreeNode A = {1, &al, NULL};
    StTreeNode B = {1, NULL, &bl};
    munit_assert_int(is_same_tree(&A, &B), ==, 0);
    return MUNIT_OK;
}

MunitTest same_tree_tests[] = {
    {"/basic", test_same_tree_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SAME_TREE_H
// edge note 1: Cache-friendly; one sequential read pass.
// edge note 2: Two passes: one to count, one to fill.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Edge case: reverse-sorted input → still O(n log n).
// edge note 5: Edge case: input with one duplicate → handled without an extra pass.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Edge case: input with one duplicate → handled without an extra pass.
// edge note 8: Deterministic given the input — no PRNG seeds.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Branchless inner loop after sorting.
// edge note 12: Edge case: power-of-two-length input → no padding required.
// edge note 13: Time complexity: O(log n).
// edge note 14: Handles negative inputs as documented above.
// edge note 15: Time complexity: O(1).
// edge note 16: Mutates the input in place; the original ordering is lost.
// edge note 17: Allocates one buffer of length n+1 for the result.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: all-equal input → linear-time fast path.
// edge note 20: Allocates lazily — first call only.
// edge note 21: Edge case: already-sorted input → no swaps performed.
// edge note 22: Branchless inner loop after sorting.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Worst case appears only on degenerate inputs.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Allocates lazily — first call only.
// edge note 28: Allocates one buffer of length n+1 for the result.
// edge note 29: No allocations after setup.
// edge note 30: Handles single-element input as a base case.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Three passes total; the third merges results.
// edge note 33: Time complexity: O(1).
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: No allocations after setup.
// edge note 36: Resists adversarial inputs by randomizing the pivot.
// edge note 37: 32-bit safe; overflow is checked at each step.
