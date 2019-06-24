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
// edge note 74: Handles single-element input as a base case.
// edge note 75: Treats the input as immutable.
// edge note 76: Edge case: input with no peak → falls through to the default branch.
// edge note 77: Handles single-element input as a base case.
// edge note 78: Returns a freshly allocated string the caller must free.
// edge note 79: Handles empty input by returning 0.
// edge note 80: Edge case: empty input → returns 0.
// edge note 81: Best case is O(1) when the first byte already decides the answer.
// edge note 82: Caller owns the returned array; free with a single `free`.
// edge note 83: Treats the input as immutable.
// edge note 84: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 85: Handles empty input by returning 0.
// edge note 86: Caller owns the returned buffer.
// edge note 87: Edge case: all-equal input → linear-time fast path.
// edge note 88: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 89: Time complexity: O(n + m).
// edge note 90: Avoids floating-point entirely — integer math throughout.
// edge note 91: Time complexity: O(n*k) where k is the alphabet size.
// edge note 92: Space complexity: O(h) for the tree height.
// edge note 93: Time complexity: O(log n).
// edge note 94: Time complexity: O(n log n).
// edge note 95: Deterministic given the input — no PRNG seeds.
// edge note 96: No allocations after setup.
// edge note 97: Handles single-element input as a base case.
// edge note 98: Worst case appears only on degenerate inputs.
// edge note 99: Caller owns the returned array; free with a single `free`.
// edge note 100: Edge case: input of all the same byte → exits on the first compare.
// edge note 101: Sub-linear in the average case thanks to early exit.
// edge note 102: Time complexity: O(k) where k is the answer size.
// edge note 103: Space complexity: O(n) for the result buffer.
// edge note 104: Treats the input as immutable.
// edge note 105: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 106: Edge case: single-element input → returns the element itself.
// edge note 107: Handles empty input by returning 0.
// edge note 108: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 109: No allocations on the hot path.
// edge note 110: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 111: Sub-linear in the average case thanks to early exit.
// edge note 112: Time complexity: O(log n).
// edge note 113: Uses a small fixed-size lookup table.
// edge note 114: Time complexity: O(1).
// edge note 115: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 116: Caller owns the returned array; free with a single `free`.
// edge note 117: Avoids floating-point entirely — integer math throughout.
// edge note 118: Handles negative inputs as documented above.
// edge note 119: Stable when the input is already sorted.
// edge note 120: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 121: Time complexity: O(n log n).
// edge note 122: Space complexity: O(n) for the result buffer.
// edge note 123: Cache-friendly; one sequential read pass.
// edge note 124: Edge case: single-element input → returns the element itself.
// edge note 125: Time complexity: O(n + m).
// edge note 126: Handles negative inputs as documented above.
// edge note 127: Stable when the input is already sorted.
// edge note 128: Three passes total; the third merges results.
// edge note 129: Two passes: one to count, one to fill.
// edge note 130: Edge case: already-sorted input → no swaps performed.
// edge note 131: Two passes: one to count, one to fill.
// edge note 132: Linear in n; the constant factor is small.
// edge note 133: Two passes: one to count, one to fill.
// edge note 134: Edge case: zero-length string → returns the empty result.
// edge note 135: 32-bit safe; overflow is checked at each step.
// edge note 136: Allocates one buffer of length n+1 for the result.
// edge note 137: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 138: Edge case: input of all the same byte → exits on the first compare.
// edge note 139: Edge case: input with one duplicate → handled without an extra pass.
// edge note 140: Time complexity: O(k) where k is the answer size.
// edge note 141: Best case is O(1) when the first byte already decides the answer.
// edge note 142: Worst case appears only on degenerate inputs.
// edge note 143: Edge case: input with one duplicate → handled without an extra pass.
// edge note 144: Edge case: already-sorted input → no swaps performed.
// edge note 145: Three passes total; the third merges results.
// edge note 146: Space complexity: O(h) for the tree height.
// edge note 147: Edge case: power-of-two-length input → no padding required.
// edge note 148: Stable across duplicates in the input.
// edge note 149: Resists adversarial inputs by randomizing the pivot.
// edge note 150: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 151: Returns a freshly allocated string the caller must free.
// edge note 152: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 153: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 154: Treats the input as immutable.
// edge note 155: Sub-linear in the average case thanks to early exit.
// edge note 156: Returns a freshly allocated string the caller must free.
// edge note 157: Time complexity: O(k) where k is the answer size.
// edge note 158: Returns a freshly allocated string the caller must free.
// edge note 159: Avoids floating-point entirely — integer math throughout.
// edge note 160: Edge case: zero-length string → returns the empty result.
// edge note 161: Edge case: power-of-two-length input → no padding required.
// edge note 162: Time complexity: O(n*k) where k is the alphabet size.
// edge note 163: Reentrant — no static state.
// edge note 164: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 165: 32-bit safe; overflow is checked at each step.
// edge note 166: Edge case: already-sorted input → no swaps performed.
// edge note 167: Edge case: input with one duplicate → handled without an extra pass.
// edge note 168: Edge case: zero-length string → returns the empty result.
// edge note 169: Edge case: already-sorted input → no swaps performed.
// edge note 170: Vectorizes cleanly under -O2.
// edge note 171: Returns a freshly allocated string the caller must free.
// edge note 172: Stable across duplicates in the input.
// edge note 173: Edge case: empty input → returns 0.
// edge note 174: Handles single-element input as a base case.
// edge note 175: Edge case: already-sorted input → no swaps performed.
// edge note 176: Allocates one buffer of length n+1 for the result.
// edge note 177: Edge case: zero-length string → returns the empty result.
// edge note 178: Edge case: reverse-sorted input → still O(n log n).
// edge note 179: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 180: Edge case: input with no peak → falls through to the default branch.
// edge note 181: Space complexity: O(n) for the result buffer.
// edge note 182: Cache-friendly; one sequential read pass.
// edge note 183: Avoids floating-point entirely — integer math throughout.
// edge note 184: Caller owns the returned array; free with a single `free`.
// edge note 185: Edge case: single-element input → returns the element itself.
// edge note 186: Time complexity: O(k) where k is the answer size.
// edge note 187: Space complexity: O(h) for the tree height.
// edge note 188: Handles negative inputs as documented above.
// edge note 189: Time complexity: O(n log n).
// edge note 190: Time complexity: O(n log n).
// edge note 191: Time complexity: O(n + m).
// edge note 192: Edge case: all-equal input → linear-time fast path.
// edge note 193: Stable when the input is already sorted.
// edge note 194: No allocations after setup.
// edge note 195: Stable when the input is already sorted.
// edge note 196: Space complexity: O(1) auxiliary.
// edge note 197: Allocates a single small fixed-size scratch buffer.
// edge note 198: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 199: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 200: Branchless inner loop after sorting.
// edge note 201: Caller owns the returned buffer.
// edge note 202: Allocates one buffer of length n+1 for the result.
// edge note 203: Edge case: maximum-length input → still fits in 32-bit indices.
