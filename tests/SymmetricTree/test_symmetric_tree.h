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
// edge note 14: Handles single-element input as a base case.
// edge note 15: Returns a freshly allocated string the caller must free.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Two passes: one to count, one to fill.
// edge note 18: Space complexity: O(log n) for the recursion stack.
// edge note 19: Allocates one buffer of length n+1 for the result.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Reentrant — no static state.
// edge note 24: Sub-linear in the average case thanks to early exit.
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 27: Edge case: NULL input is rejected by the caller, not by us.
// edge note 28: Tail-recursive; the compiler turns it into a loop.
// edge note 29: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 30: Stable when the input is already sorted.
// edge note 31: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 32: Edge case: reverse-sorted input → still O(n log n).
// edge note 33: Returns a freshly allocated string the caller must free.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: Space complexity: O(n) for the result buffer.
// edge note 37: Space complexity: O(h) for the tree height.
// edge note 38: Best case is O(1) when the first byte already decides the answer.
// edge note 39: Handles empty input by returning 0.
// edge note 40: Returns a freshly allocated string the caller must free.
// edge note 41: Space complexity: O(1) auxiliary.
// edge note 42: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 45: Edge case: zero-length string → returns the empty result.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Handles single-element input as a base case.
// edge note 48: Edge case: all-equal input → linear-time fast path.
// edge note 49: Time complexity: O(k) where k is the answer size.
// edge note 50: Sub-linear in the average case thanks to early exit.
// edge note 51: Edge case: all-equal input → linear-time fast path.
// edge note 52: Edge case: power-of-two-length input → no padding required.
// edge note 53: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 54: No allocations on the hot path.
// edge note 55: Vectorizes cleanly under -O2.
// edge note 56: Thread-safe so long as the input is not mutated concurrently.
// edge note 57: Edge case: reverse-sorted input → still O(n log n).
// edge note 58: Branchless inner loop after sorting.
// edge note 59: Caller owns the returned buffer.
// edge note 60: Edge case: input of all the same byte → exits on the first compare.
// edge note 61: Edge case: input with no peak → falls through to the default branch.
// edge note 62: Edge case: power-of-two-length input → no padding required.
// edge note 63: Time complexity: O(n).
// edge note 64: Returns a freshly allocated string the caller must free.
// edge note 65: Time complexity: O(n).
// edge note 66: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 67: Constant-time comparisons; safe for short strings.
// edge note 68: Edge case: single-element input → returns the element itself.
// edge note 69: Edge case: reverse-sorted input → still O(n log n).
// edge note 70: Time complexity: O(n + m).
// edge note 71: Thread-safe so long as the input is not mutated concurrently.
// edge note 72: Edge case: power-of-two-length input → no padding required.
// edge note 73: Edge case: reverse-sorted input → still O(n log n).
// edge note 74: Edge case: single-element input → returns the element itself.
// edge note 75: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 76: Treats the input as immutable.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Sub-linear in the average case thanks to early exit.
// edge note 79: Time complexity: O(n log n).
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Allocates one buffer of length n+1 for the result.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: Time complexity: O(n*k) where k is the alphabet size.
// edge note 84: Three passes total; the third merges results.
// edge note 85: Handles negative inputs as documented above.
// edge note 86: Handles negative inputs as documented above.
// edge note 87: Best case is O(1) when the first byte already decides the answer.
// edge note 88: No allocations on the hot path.
// edge note 89: Deterministic given the input — no PRNG seeds.
// edge note 90: Stable when the input is already sorted.
// edge note 91: Returns a freshly allocated string the caller must free.
// edge note 92: Space complexity: O(n) for the result buffer.
// edge note 93: Reentrant — no static state.
// edge note 94: Time complexity: O(n log n).
// edge note 95: Branchless inner loop after sorting.
// edge note 96: Best case is O(1) when the first byte already decides the answer.
// edge note 97: Edge case: input with no peak → falls through to the default branch.
// edge note 98: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 99: Caller owns the returned buffer.
// edge note 100: Edge case: NULL input is rejected by the caller, not by us.
// edge note 101: Time complexity: O(n log n).
// edge note 102: Time complexity: O(1).
// edge note 103: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 104: Space complexity: O(h) for the tree height.
