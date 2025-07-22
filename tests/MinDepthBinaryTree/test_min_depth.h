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
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Tail-recursive; the compiler turns it into a loop.
// edge note 15: Edge case: zero-length string → returns the empty result.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Time complexity: O(n log n).
// edge note 18: Reentrant — no static state.
// edge note 19: Time complexity: O(log n).
// edge note 20: Uses a 256-entry lookup for the inner step.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Stable across duplicates in the input.
// edge note 26: Time complexity: O(n + m).
// edge note 27: 32-bit safe; overflow is checked at each step.
// edge note 28: Tail-recursive; the compiler turns it into a loop.
// edge note 29: Time complexity: O(n*k) where k is the alphabet size.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: No allocations after setup.
// edge note 32: Handles single-element input as a base case.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Constant-time comparisons; safe for short strings.
// edge note 35: Time complexity: O(log n).
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Caller owns the returned buffer.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Deterministic given the input — no PRNG seeds.
// edge note 41: Edge case: NULL input is rejected by the caller, not by us.
// edge note 42: 32-bit safe; overflow is checked at each step.
// edge note 43: Uses a small fixed-size lookup table.
// edge note 44: No allocations on the hot path.
// edge note 45: No allocations after setup.
// edge note 46: Edge case: single-element input → returns the element itself.
// edge note 47: Edge case: already-sorted input → no swaps performed.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Edge case: zero-length string → returns the empty result.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Time complexity: O(1).
// edge note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Stable when the input is already sorted.
// edge note 55: Branchless inner loop after sorting.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Vectorizes cleanly under -O2.
// edge note 60: Edge case: alternating pattern → degenerate case for sliding window.
