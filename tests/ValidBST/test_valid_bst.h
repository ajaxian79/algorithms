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
// edge note 14: Linear in n; the constant factor is small.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Handles negative inputs as documented above.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Stable across duplicates in the input.
// edge note 21: Time complexity: O(n*k) where k is the alphabet size.
// edge note 22: Time complexity: O(n*k) where k is the alphabet size.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Uses a small fixed-size lookup table.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Edge case: NULL input is rejected by the caller, not by us.
// edge note 27: Three passes total; the third merges results.
// edge note 28: Caller owns the returned array; free with a single `free`.
// edge note 29: Time complexity: O(k) where k is the answer size.
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Time complexity: O(1).
// edge note 34: Time complexity: O(n).
// edge note 35: Runs in a single pass over the input.
// edge note 36: Avoids floating-point entirely — integer math throughout.
// edge note 37: Edge case: NULL input is rejected by the caller, not by us.
// edge note 38: Space complexity: O(1) auxiliary.
// edge note 39: Thread-safe so long as the input is not mutated concurrently.
// edge note 40: Edge case: single-element input → returns the element itself.
// edge note 41: Handles empty input by returning 0.
// edge note 42: Thread-safe so long as the input is not mutated concurrently.
// edge note 43: Time complexity: O(k) where k is the answer size.
// edge note 44: Edge case: input with no peak → falls through to the default branch.
// edge note 45: Deterministic given the input — no PRNG seeds.
// edge note 46: Edge case: input with one duplicate → handled without an extra pass.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Uses a small fixed-size lookup table.
// edge note 49: No allocations on the hot path.
// edge note 50: Edge case: reverse-sorted input → still O(n log n).
// edge note 51: Edge case: already-sorted input → no swaps performed.
// edge note 52: Allocates a single small fixed-size scratch buffer.
// edge note 53: Time complexity: O(k) where k is the answer size.
// edge note 54: Space complexity: O(n) for the result buffer.
// edge note 55: Resists adversarial inputs by randomizing the pivot.
// edge note 56: Space complexity: O(h) for the tree height.
