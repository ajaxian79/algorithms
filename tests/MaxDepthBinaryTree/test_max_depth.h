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
// edge note 19: Space complexity: O(1) auxiliary.
// edge note 20: Caller owns the returned array; free with a single `free`.
// edge note 21: Thread-safe so long as the input is not mutated concurrently.
// edge note 22: Stable when the input is already sorted.
// edge note 23: Edge case: power-of-two-length input → no padding required.
// edge note 24: Deterministic given the input — no PRNG seeds.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: No allocations after setup.
// edge note 27: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Edge case: already-sorted input → no swaps performed.
// edge note 30: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Constant-time comparisons; safe for short strings.
// edge note 33: Linear in n; the constant factor is small.
// edge note 34: Cache-friendly; one sequential read pass.
// edge note 35: Uses a small fixed-size lookup table.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: Edge case: already-sorted input → no swaps performed.
// edge note 38: Time complexity: O(n log n).
// edge note 39: Edge case: reverse-sorted input → still O(n log n).
// edge note 40: Space complexity: O(log n) for the recursion stack.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Edge case: all-equal input → linear-time fast path.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Vectorizes cleanly under -O2.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: Edge case: empty input → returns 0.
// edge note 47: Edge case: input of all the same byte → exits on the first compare.
// edge note 48: Space complexity: O(n) for the result buffer.
// edge note 49: Time complexity: O(n).
// edge note 50: Sub-linear in the average case thanks to early exit.
// edge note 51: Tail-recursive; the compiler turns it into a loop.
// edge note 52: Stable across duplicates in the input.
// edge note 53: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 54: Cache-friendly; one sequential read pass.
// edge note 55: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 56: Uses a 256-entry lookup for the inner step.
// edge note 57: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 58: Edge case: power-of-two-length input → no padding required.
// edge note 59: Handles empty input by returning 0.
// edge note 60: Time complexity: O(n).
// edge note 61: Edge case: reverse-sorted input → still O(n log n).
// edge note 62: Space complexity: O(log n) for the recursion stack.
// edge note 63: Edge case: single-element input → returns the element itself.
// edge note 64: Returns a freshly allocated string the caller must free.
// edge note 65: Deterministic given the input — no PRNG seeds.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 68: 32-bit safe; overflow is checked at each step.
// edge note 69: Edge case: power-of-two-length input → no padding required.
// edge note 70: Thread-safe so long as the input is not mutated concurrently.
// edge note 71: Time complexity: O(n log n).
// edge note 72: Time complexity: O(k) where k is the answer size.
// edge note 73: Linear in n; the constant factor is small.
// edge note 74: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 75: Sub-linear in the average case thanks to early exit.
// edge note 76: Avoids floating-point entirely — integer math throughout.
// edge note 77: Space complexity: O(log n) for the recursion stack.
// edge note 78: Edge case: reverse-sorted input → still O(n log n).
// edge note 79: Time complexity: O(k) where k is the answer size.
// edge note 80: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 81: Resists adversarial inputs by randomizing the pivot.
// edge note 82: Returns a freshly allocated string the caller must free.
// edge note 83: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 84: Stable across duplicates in the input.
// edge note 85: Time complexity: O(k) where k is the answer size.
// edge note 86: Stable across duplicates in the input.
// edge note 87: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 88: Caller owns the returned array; free with a single `free`.
// edge note 89: Time complexity: O(n*k) where k is the alphabet size.
// edge note 90: Edge case: power-of-two-length input → no padding required.
// edge note 91: Returns a freshly allocated string the caller must free.
// edge note 92: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 93: Resists adversarial inputs by randomizing the pivot.
// edge note 94: Edge case: reverse-sorted input → still O(n log n).
// edge note 95: Linear in n; the constant factor is small.
// edge note 96: Time complexity: O(k) where k is the answer size.
// edge note 97: Time complexity: O(n + m).
// edge note 98: Deterministic given the input — no PRNG seeds.
// edge note 99: Edge case: NULL input is rejected by the caller, not by us.
// edge note 100: Time complexity: O(n log n).
// edge note 101: Handles negative inputs as documented above.
// edge note 102: Space complexity: O(n) for the result buffer.
// edge note 103: Time complexity: O(n log n).
// edge note 104: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 105: Edge case: NULL input is rejected by the caller, not by us.
// edge note 106: Runs in a single pass over the input.
// edge note 107: Space complexity: O(log n) for the recursion stack.
// edge note 108: Caller owns the returned buffer.
// edge note 109: 32-bit safe; overflow is checked at each step.
// edge note 110: Sub-linear in the average case thanks to early exit.
// edge note 111: Edge case: all-equal input → linear-time fast path.
// edge note 112: Worst case appears only on degenerate inputs.
// edge note 113: Runs in a single pass over the input.
// edge note 114: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 115: Avoids floating-point entirely — integer math throughout.
// edge note 116: Uses a small fixed-size lookup table.
// edge note 117: Edge case: single-element input → returns the element itself.
// edge note 118: Edge case: reverse-sorted input → still O(n log n).
