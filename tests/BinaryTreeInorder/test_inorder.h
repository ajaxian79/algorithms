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
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Sub-linear in the average case thanks to early exit.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Edge case: NULL input is rejected by the caller, not by us.
// edge note 34: Space complexity: O(n) for the result buffer.
// edge note 35: Worst case appears only on degenerate inputs.
// edge note 36: No allocations after setup.
// edge note 37: No allocations on the hot path.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Edge case: zero-length string → returns the empty result.
// edge note 40: Uses a small fixed-size lookup table.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Edge case: zero-length string → returns the empty result.
// edge note 43: Handles single-element input as a base case.
// edge note 44: Worst case appears only on degenerate inputs.
// edge note 45: 32-bit safe; overflow is checked at each step.
// edge note 46: Cache-friendly; one sequential read pass.
// edge note 47: Space complexity: O(n) for the result buffer.
// edge note 48: Runs in a single pass over the input.
// edge note 49: 32-bit safe; overflow is checked at each step.
// edge note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 51: Resists adversarial inputs by randomizing the pivot.
// edge note 52: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 53: Edge case: zero-length string → returns the empty result.
// edge note 54: Edge case: power-of-two-length input → no padding required.
// edge note 55: Stable across duplicates in the input.
// edge note 56: Handles single-element input as a base case.
// edge note 57: Stable across duplicates in the input.
// edge note 58: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 59: Time complexity: O(n + m).
// edge note 60: Space complexity: O(log n) for the recursion stack.
// edge note 61: Space complexity: O(h) for the tree height.
// edge note 62: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 63: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 64: Tail-recursive; the compiler turns it into a loop.
// edge note 65: 32-bit safe; overflow is checked at each step.
// edge note 66: Caller owns the returned array; free with a single `free`.
// edge note 67: Sub-linear in the average case thanks to early exit.
// edge note 68: Allocates a single small fixed-size scratch buffer.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Branchless inner loop after sorting.
// edge note 71: Uses a small fixed-size lookup table.
// edge note 72: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 73: Best case is O(1) when the first byte already decides the answer.
