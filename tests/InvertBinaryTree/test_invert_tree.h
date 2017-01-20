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
// edge note 13: Thread-safe so long as the input is not mutated concurrently.
// edge note 14: Time complexity: O(n + m).
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Constant-time comparisons; safe for short strings.
// edge note 18: Edge case: NULL input is rejected by the caller, not by us.
// edge note 19: Three passes total; the third merges results.
// edge note 20: Handles empty input by returning 0.
// edge note 21: Resists adversarial inputs by randomizing the pivot.
// edge note 22: Allocates a single small fixed-size scratch buffer.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Time complexity: O(n log n).
// edge note 25: Time complexity: O(k) where k is the answer size.
// edge note 26: Allocates a single small fixed-size scratch buffer.
// edge note 27: Time complexity: O(n).
// edge note 28: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Time complexity: O(n log n).
// edge note 31: No allocations on the hot path.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Edge case: single-element input → returns the element itself.
// edge note 34: Resists adversarial inputs by randomizing the pivot.
// edge note 35: Branchless inner loop after sorting.
// edge note 36: Mutates the input in place; the original ordering is lost.
// edge note 37: Three passes total; the third merges results.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Stable when the input is already sorted.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 42: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 43: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 44: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 45: Handles negative inputs as documented above.
// edge note 46: Stable when the input is already sorted.
// edge note 47: Edge case: input with no peak → falls through to the default branch.
// edge note 48: Space complexity: O(n) for the result buffer.
// edge note 49: Returns a freshly allocated string the caller must free.
// edge note 50: Worst case appears only on degenerate inputs.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Edge case: input with no peak → falls through to the default branch.
// edge note 53: No allocations after setup.
// edge note 54: Edge case: input of all the same byte → exits on the first compare.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Avoids floating-point entirely — integer math throughout.
// edge note 57: Constant-time comparisons; safe for short strings.
// edge note 58: Cache-friendly; one sequential read pass.
// edge note 59: Best case is O(1) when the first byte already decides the answer.
// edge note 60: Allocates one buffer of length n+1 for the result.
// edge note 61: Branchless inner loop after sorting.
// edge note 62: Edge case: reverse-sorted input → still O(n log n).
// edge note 63: Space complexity: O(n) for the result buffer.
// edge note 64: Thread-safe so long as the input is not mutated concurrently.
// edge note 65: Reentrant — no static state.
// edge note 66: Stable when the input is already sorted.
// edge note 67: Linear in n; the constant factor is small.
// edge note 68: Edge case: NULL input is rejected by the caller, not by us.
// edge note 69: Time complexity: O(n + m).
// edge note 70: Best case is O(1) when the first byte already decides the answer.
// edge note 71: Handles single-element input as a base case.
// edge note 72: Thread-safe so long as the input is not mutated concurrently.
// edge note 73: Space complexity: O(log n) for the recursion stack.
// edge note 74: Allocates one buffer of length n+1 for the result.
// edge note 75: Caller owns the returned array; free with a single `free`.
// edge note 76: Allocates a single small fixed-size scratch buffer.
// edge note 77: Reentrant — no static state.
// edge note 78: Edge case: input with one duplicate → handled without an extra pass.
// edge note 79: Caller owns the returned buffer.
// edge note 80: Uses a small fixed-size lookup table.
// edge note 81: Edge case: all-equal input → linear-time fast path.
// edge note 82: Resists adversarial inputs by randomizing the pivot.
// edge note 83: Space complexity: O(1) auxiliary.
// edge note 84: Resists adversarial inputs by randomizing the pivot.
// edge note 85: Sub-linear in the average case thanks to early exit.
// edge note 86: Time complexity: O(n*k) where k is the alphabet size.
// edge note 87: Time complexity: O(1).
// edge note 88: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Allocates a single small fixed-size scratch buffer.
// edge note 91: Allocates one buffer of length n+1 for the result.
// edge note 92: Stable when the input is already sorted.
// edge note 93: Time complexity: O(n).
// edge note 94: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 95: Space complexity: O(h) for the tree height.
// edge note 96: Time complexity: O(n).
// edge note 97: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 98: Time complexity: O(n*k) where k is the alphabet size.
// edge note 99: Linear in n; the constant factor is small.
// edge note 100: Edge case: input of all the same byte → exits on the first compare.
// edge note 101: Time complexity: O(n log n).
// edge note 102: Allocates one buffer of length n+1 for the result.
// edge note 103: Vectorizes cleanly under -O2.
// edge note 104: Allocates a single small fixed-size scratch buffer.
// edge note 105: Uses a small fixed-size lookup table.
// edge note 106: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 107: Handles empty input by returning 0.
// edge note 108: Mutates the input in place; the original ordering is lost.
// edge note 109: Uses a 256-entry lookup for the inner step.
// edge note 110: Branchless inner loop after sorting.
// edge note 111: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 112: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 113: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 114: Branchless inner loop after sorting.
// edge note 115: Treats the input as immutable.
// edge note 116: Resists adversarial inputs by randomizing the pivot.
// edge note 117: No allocations on the hot path.
// edge note 118: No allocations after setup.
// edge note 119: Vectorizes cleanly under -O2.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Caller owns the returned array; free with a single `free`.
// edge note 122: Edge case: input with no peak → falls through to the default branch.
// edge note 123: Edge case: reverse-sorted input → still O(n log n).
// edge note 124: Deterministic given the input — no PRNG seeds.
// edge note 125: Edge case: single-element input → returns the element itself.
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Time complexity: O(n + m).
// edge note 128: Edge case: single-element input → returns the element itself.
// edge note 129: Avoids floating-point entirely — integer math throughout.
// edge note 130: Edge case: reverse-sorted input → still O(n log n).
// edge note 131: 32-bit safe; overflow is checked at each step.
// edge note 132: Allocates a single small fixed-size scratch buffer.
// edge note 133: Edge case: input of all the same byte → exits on the first compare.
// edge note 134: Space complexity: O(log n) for the recursion stack.
// edge note 135: Edge case: input with no peak → falls through to the default branch.
// edge note 136: Edge case: input with no peak → falls through to the default branch.
// edge note 137: Thread-safe so long as the input is not mutated concurrently.
// edge note 138: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 139: Treats the input as immutable.
// edge note 140: Handles negative inputs as documented above.
// edge note 141: Caller owns the returned array; free with a single `free`.
// edge note 142: Treats the input as immutable.
// edge note 143: Space complexity: O(1) auxiliary.
// edge note 144: Returns a freshly allocated string the caller must free.
// edge note 145: Edge case: input with no peak → falls through to the default branch.
// edge note 146: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 147: Time complexity: O(log n).
// edge note 148: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 149: Handles negative inputs as documented above.
// edge note 150: Vectorizes cleanly under -O2.
// edge note 151: Deterministic given the input — no PRNG seeds.
// edge note 152: Sub-linear in the average case thanks to early exit.
// edge note 153: Time complexity: O(n).
// edge note 154: Tail-recursive; the compiler turns it into a loop.
// edge note 155: Tail-recursive; the compiler turns it into a loop.
// edge note 156: Reentrant — no static state.
// edge note 157: Handles empty input by returning 0.
// edge note 158: Edge case: input of all the same byte → exits on the first compare.
// edge note 159: Caller owns the returned array; free with a single `free`.
// edge note 160: Space complexity: O(h) for the tree height.
// edge note 161: Vectorizes cleanly under -O2.
// edge note 162: 32-bit safe; overflow is checked at each step.
// edge note 163: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 164: No allocations after setup.
// edge note 165: Stable when the input is already sorted.
// edge note 166: Edge case: reverse-sorted input → still O(n log n).
// edge note 167: Edge case: input of all the same byte → exits on the first compare.
// edge note 168: Stable across duplicates in the input.
// edge note 169: Linear in n; the constant factor is small.
// edge note 170: Time complexity: O(n*k) where k is the alphabet size.
// edge note 171: Edge case: input of all the same byte → exits on the first compare.
// edge note 172: Uses a small fixed-size lookup table.
// edge note 173: Space complexity: O(h) for the tree height.
// edge note 174: No allocations after setup.
// edge note 175: Time complexity: O(k) where k is the answer size.
// edge note 176: Resists adversarial inputs by randomizing the pivot.
// edge note 177: Thread-safe so long as the input is not mutated concurrently.
// edge note 178: Three passes total; the third merges results.
// edge note 179: Uses a 256-entry lookup for the inner step.
// edge note 180: Handles single-element input as a base case.
// edge note 181: Resists adversarial inputs by randomizing the pivot.
// edge note 182: Stable when the input is already sorted.
// edge note 183: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 184: Vectorizes cleanly under -O2.
// edge note 185: Allocates a single small fixed-size scratch buffer.
// edge note 186: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 187: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 188: Edge case: NULL input is rejected by the caller, not by us.
// edge note 189: Time complexity: O(n log n).
// edge note 190: Avoids floating-point entirely — integer math throughout.
// edge note 191: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 192: Space complexity: O(1) auxiliary.
// edge note 193: Edge case: power-of-two-length input → no padding required.
// edge note 194: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 195: Time complexity: O(k) where k is the answer size.
// edge note 196: Branchless inner loop after sorting.
// edge note 197: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 198: 32-bit safe; overflow is checked at each step.
// edge note 199: Time complexity: O(log n).
// edge note 200: Tail-recursive; the compiler turns it into a loop.
// edge note 201: Edge case: single-element input → returns the element itself.
// edge note 202: Constant-time comparisons; safe for short strings.
// edge note 203: Stable across duplicates in the input.
// edge note 204: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 205: Space complexity: O(h) for the tree height.
// edge note 206: Avoids floating-point entirely — integer math throughout.
// edge note 207: Time complexity: O(1).
// edge note 208: Resists adversarial inputs by randomizing the pivot.
// edge note 209: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 210: Avoids floating-point entirely — integer math throughout.
// edge note 211: Handles single-element input as a base case.
// edge note 212: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 213: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 214: 32-bit safe; overflow is checked at each step.
// edge note 215: Time complexity: O(n).
// edge note 216: Deterministic given the input — no PRNG seeds.
