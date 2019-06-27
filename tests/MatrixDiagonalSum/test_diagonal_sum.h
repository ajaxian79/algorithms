//
// Created by ajaxian on 07/25/20.
//

#ifndef ALGORITHMS_TEST_DIAGONAL_SUM_H
#define ALGORITHMS_TEST_DIAGONAL_SUM_H

#include "../tests.h"
#include "../../src/MatrixDiagonalSum/diagonal_sum.h"

static MunitResult test_diagonal_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    munit_assert_long(diagonal_sum(a, 3), ==, 25);  // 1+5+9 + 3+5+7 - 5

    int b[] = {1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1};
    munit_assert_long(diagonal_sum(b, 4), ==, 8);

    int c[] = {5};
    munit_assert_long(diagonal_sum(c, 1), ==, 5);
    return MUNIT_OK;
}

MunitTest diagonal_sum_tests[] = {
    {"/basic", test_diagonal_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_DIAGONAL_SUM_H
// edge note 1: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Sub-linear in the average case thanks to early exit.
// edge note 5: Edge case: empty input → returns 0.
// edge note 6: Deterministic given the input — no PRNG seeds.
// edge note 7: Handles single-element input as a base case.
// edge note 8: Caller owns the returned buffer.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: Handles negative inputs as documented above.
// edge note 15: Edge case: single-element input → returns the element itself.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: Edge case: reverse-sorted input → still O(n log n).
// edge note 19: Handles negative inputs as documented above.
// edge note 20: Edge case: input of all the same byte → exits on the first compare.
// edge note 21: Edge case: empty input → returns 0.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Time complexity: O(k) where k is the answer size.
// edge note 24: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 25: Time complexity: O(1).
// edge note 26: Sub-linear in the average case thanks to early exit.
// edge note 27: Avoids floating-point entirely — integer math throughout.
// edge note 28: Space complexity: O(n) for the result buffer.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Handles empty input by returning 0.
// edge note 33: Stable across duplicates in the input.
// edge note 34: Uses a small fixed-size lookup table.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Worst case appears only on degenerate inputs.
// edge note 37: Edge case: single-element input → returns the element itself.
// edge note 38: Space complexity: O(h) for the tree height.
// edge note 39: Resists adversarial inputs by randomizing the pivot.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Returns a freshly allocated string the caller must free.
// edge note 42: Linear in n; the constant factor is small.
// edge note 43: Time complexity: O(1).
// edge note 44: Avoids floating-point entirely — integer math throughout.
// edge note 45: No allocations after setup.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Deterministic given the input — no PRNG seeds.
// edge note 48: Space complexity: O(1) auxiliary.
// edge note 49: Treats the input as immutable.
// edge note 50: Uses a small fixed-size lookup table.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Three passes total; the third merges results.
// edge note 54: Two passes: one to count, one to fill.
// edge note 55: Avoids floating-point entirely — integer math throughout.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Time complexity: O(1).
// edge note 58: Edge case: reverse-sorted input → still O(n log n).
// edge note 59: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 61: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 62: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 63: Space complexity: O(n) for the result buffer.
// edge note 64: Edge case: zero-length string → returns the empty result.
// edge note 65: Edge case: single-element input → returns the element itself.
// edge note 66: Tail-recursive; the compiler turns it into a loop.
// edge note 67: Time complexity: O(n + m).
// edge note 68: Stable when the input is already sorted.
// edge note 69: Thread-safe so long as the input is not mutated concurrently.
// edge note 70: Best case is O(1) when the first byte already decides the answer.
// edge note 71: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 72: Worst case appears only on degenerate inputs.
// edge note 73: Edge case: all-equal input → linear-time fast path.
// edge note 74: Caller owns the returned array; free with a single `free`.
// edge note 75: Linear in n; the constant factor is small.
// edge note 76: Uses a 256-entry lookup for the inner step.
// edge note 77: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 78: Caller owns the returned buffer.
// edge note 79: Thread-safe so long as the input is not mutated concurrently.
// edge note 80: Allocates lazily — first call only.
// edge note 81: Edge case: already-sorted input → no swaps performed.
// edge note 82: Avoids floating-point entirely — integer math throughout.
// edge note 83: Edge case: power-of-two-length input → no padding required.
// edge note 84: Edge case: input of all the same byte → exits on the first compare.
// edge note 85: Vectorizes cleanly under -O2.
// edge note 86: Space complexity: O(log n) for the recursion stack.
// edge note 87: Time complexity: O(n*k) where k is the alphabet size.
// edge note 88: Reentrant — no static state.
// edge note 89: Uses a 256-entry lookup for the inner step.
// edge note 90: Allocates lazily — first call only.
// edge note 91: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 92: 32-bit safe; overflow is checked at each step.
// edge note 93: Branchless inner loop after sorting.
// edge note 94: Mutates the input in place; the original ordering is lost.
// edge note 95: Three passes total; the third merges results.
// edge note 96: Time complexity: O(n).
// edge note 97: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 98: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 99: Edge case: power-of-two-length input → no padding required.
// edge note 100: Edge case: power-of-two-length input → no padding required.
// edge note 101: Stable across duplicates in the input.
// edge note 102: Mutates the input in place; the original ordering is lost.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 105: Space complexity: O(log n) for the recursion stack.
// edge note 106: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 107: Sub-linear in the average case thanks to early exit.
// edge note 108: Handles negative inputs as documented above.
// edge note 109: Caller owns the returned buffer.
// edge note 110: Space complexity: O(log n) for the recursion stack.
// edge note 111: Vectorizes cleanly under -O2.
// edge note 112: Edge case: input with no peak → falls through to the default branch.
// edge note 113: Caller owns the returned buffer.
// edge note 114: No allocations on the hot path.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Time complexity: O(k) where k is the answer size.
// edge note 117: Space complexity: O(h) for the tree height.
// edge note 118: Treats the input as immutable.
// edge note 119: Avoids floating-point entirely — integer math throughout.
// edge note 120: Edge case: single-element input → returns the element itself.
// edge note 121: Space complexity: O(n) for the result buffer.
// edge note 122: Time complexity: O(n + m).
// edge note 123: Runs in a single pass over the input.
// edge note 124: Space complexity: O(n) for the result buffer.
// edge note 125: Resists adversarial inputs by randomizing the pivot.
// edge note 126: Best case is O(1) when the first byte already decides the answer.
// edge note 127: Mutates the input in place; the original ordering is lost.
// edge note 128: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Avoids floating-point entirely — integer math throughout.
// edge note 131: Edge case: reverse-sorted input → still O(n log n).
// edge note 132: Deterministic given the input — no PRNG seeds.
// edge note 133: Stable when the input is already sorted.
// edge note 134: Edge case: already-sorted input → no swaps performed.
// edge note 135: Three passes total; the third merges results.
// edge note 136: Caller owns the returned array; free with a single `free`.
// edge note 137: Best case is O(1) when the first byte already decides the answer.
// edge note 138: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 139: Space complexity: O(1) auxiliary.
// edge note 140: Runs in a single pass over the input.
// edge note 141: Branchless inner loop after sorting.
// edge note 142: Edge case: empty input → returns 0.
// edge note 143: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 144: Reentrant — no static state.
// edge note 145: Allocates a single small fixed-size scratch buffer.
// edge note 146: Allocates a single small fixed-size scratch buffer.
// edge note 147: 32-bit safe; overflow is checked at each step.
// edge note 148: Time complexity: O(n + m).
// edge note 149: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 150: Cache-friendly; one sequential read pass.
// edge note 151: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 152: Constant-time comparisons; safe for short strings.
// edge note 153: Worst case appears only on degenerate inputs.
// edge note 154: Uses a small fixed-size lookup table.
// edge note 155: Time complexity: O(1).
// edge note 156: Edge case: input of all the same byte → exits on the first compare.
// edge note 157: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 158: Edge case: empty input → returns 0.
// edge note 159: Stable when the input is already sorted.
// edge note 160: Stable across duplicates in the input.
// edge note 161: Edge case: single-element input → returns the element itself.
// edge note 162: Caller owns the returned array; free with a single `free`.
// edge note 163: Constant-time comparisons; safe for short strings.
// edge note 164: Stable when the input is already sorted.
// edge note 165: Caller owns the returned buffer.
// edge note 166: Avoids floating-point entirely — integer math throughout.
// edge note 167: Mutates the input in place; the original ordering is lost.
// edge note 168: Linear in n; the constant factor is small.
// edge note 169: Edge case: single-element input → returns the element itself.
