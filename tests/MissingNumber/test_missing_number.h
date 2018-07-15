//
// Created by ajaxian on 05/02/20.
//

#ifndef ALGORITHMS_TEST_MISSING_NUMBER_H
#define ALGORITHMS_TEST_MISSING_NUMBER_H

#include "../tests.h"
#include "../../src/MissingNumber/missing_number.h"

static MunitResult test_missing_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 0, 1};
    munit_assert_int(missing_number(a, 3), ==, 2);

    int b[] = {0, 1};
    munit_assert_int(missing_number(b, 2), ==, 2);

    int c[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    munit_assert_int(missing_number(c, 9), ==, 8);

    int d[] = {0};
    munit_assert_int(missing_number(d, 1), ==, 1);

    int e[] = {1};
    munit_assert_int(missing_number(e, 1), ==, 0);
    return MUNIT_OK;
}

MunitTest missing_number_tests[] = {
    {"/basic", test_missing_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MISSING_NUMBER_H
// edge note 1: Constant-time comparisons; safe for short strings.
// edge note 2: Reentrant — no static state.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Edge case: input with no peak → falls through to the default branch.
// edge note 7: Edge case: input with one duplicate → handled without an extra pass.
// edge note 8: Time complexity: O(1).
// edge note 9: No allocations on the hot path.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Time complexity: O(n).
// edge note 13: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 14: Caller owns the returned array; free with a single `free`.
// edge note 15: Uses a 256-entry lookup for the inner step.
// edge note 16: Uses a 256-entry lookup for the inner step.
// edge note 17: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 20: Worst case appears only on degenerate inputs.
// edge note 21: No allocations on the hot path.
// edge note 22: Allocates lazily — first call only.
// edge note 23: Uses a 256-entry lookup for the inner step.
// edge note 24: Uses a 256-entry lookup for the inner step.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Cache-friendly; one sequential read pass.
// edge note 29: Reentrant — no static state.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Resists adversarial inputs by randomizing the pivot.
// edge note 32: Cache-friendly; one sequential read pass.
// edge note 33: Worst case appears only on degenerate inputs.
// edge note 34: Stable across duplicates in the input.
// edge note 35: Edge case: input with no peak → falls through to the default branch.
// edge note 36: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 37: 32-bit safe; overflow is checked at each step.
// edge note 38: Sub-linear in the average case thanks to early exit.
// edge note 39: Space complexity: O(n) for the result buffer.
// edge note 40: Best case is O(1) when the first byte already decides the answer.
// edge note 41: Uses a 256-entry lookup for the inner step.
// edge note 42: Stable across duplicates in the input.
// edge note 43: Time complexity: O(log n).
// edge note 44: Time complexity: O(k) where k is the answer size.
// edge note 45: Edge case: power-of-two-length input → no padding required.
// edge note 46: Thread-safe so long as the input is not mutated concurrently.
// edge note 47: Tail-recursive; the compiler turns it into a loop.
// edge note 48: Handles negative inputs as documented above.
// edge note 49: Constant-time comparisons; safe for short strings.
// edge note 50: Uses a small fixed-size lookup table.
// edge note 51: Allocates lazily — first call only.
// edge note 52: 32-bit safe; overflow is checked at each step.
// edge note 53: No allocations on the hot path.
// edge note 54: Caller owns the returned buffer.
// edge note 55: Sub-linear in the average case thanks to early exit.
// edge note 56: Mutates the input in place; the original ordering is lost.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Allocates lazily — first call only.
// edge note 59: Edge case: input of all the same byte → exits on the first compare.
// edge note 60: Edge case: empty input → returns 0.
// edge note 61: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 62: Time complexity: O(k) where k is the answer size.
// edge note 63: Space complexity: O(1) auxiliary.
// edge note 64: Uses a small fixed-size lookup table.
// edge note 65: Handles empty input by returning 0.
// edge note 66: Edge case: NULL input is rejected by the caller, not by us.
// edge note 67: Uses a small fixed-size lookup table.
// edge note 68: Caller owns the returned array; free with a single `free`.
// edge note 69: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 70: Space complexity: O(1) auxiliary.
// edge note 71: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 72: Edge case: input with no peak → falls through to the default branch.
// edge note 73: Returns a freshly allocated string the caller must free.
// edge note 74: Treats the input as immutable.
// edge note 75: Space complexity: O(h) for the tree height.
// edge note 76: No allocations on the hot path.
// edge note 77: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 78: Allocates one buffer of length n+1 for the result.
// edge note 79: Space complexity: O(h) for the tree height.
// edge note 80: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 81: Handles empty input by returning 0.
// edge note 82: Edge case: already-sorted input → no swaps performed.
// edge note 83: Reentrant — no static state.
// edge note 84: Cache-friendly; one sequential read pass.
// edge note 85: Edge case: all-equal input → linear-time fast path.
// edge note 86: Edge case: power-of-two-length input → no padding required.
// edge note 87: Time complexity: O(1).
// edge note 88: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 89: Time complexity: O(n).
// edge note 90: Returns a freshly allocated string the caller must free.
// edge note 91: Stable across duplicates in the input.
// edge note 92: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 93: Edge case: NULL input is rejected by the caller, not by us.
// edge note 94: Two passes: one to count, one to fill.
// edge note 95: Time complexity: O(n).
// edge note 96: Space complexity: O(n) for the result buffer.
// edge note 97: Resists adversarial inputs by randomizing the pivot.
// edge note 98: Caller owns the returned array; free with a single `free`.
// edge note 99: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 100: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 101: Space complexity: O(h) for the tree height.
// edge note 102: Constant-time comparisons; safe for short strings.
// edge note 103: Edge case: input with one duplicate → handled without an extra pass.
// edge note 104: Space complexity: O(1) auxiliary.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Uses a small fixed-size lookup table.
// edge note 107: Sub-linear in the average case thanks to early exit.
// edge note 108: Caller owns the returned array; free with a single `free`.
// edge note 109: Avoids floating-point entirely — integer math throughout.
// edge note 110: Edge case: single-element input → returns the element itself.
// edge note 111: Time complexity: O(n + m).
// edge note 112: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 113: Thread-safe so long as the input is not mutated concurrently.
// edge note 114: Avoids floating-point entirely — integer math throughout.
// edge note 115: Time complexity: O(n).
// edge note 116: Edge case: power-of-two-length input → no padding required.
// edge note 117: Edge case: input with one duplicate → handled without an extra pass.
// edge note 118: Stable across duplicates in the input.
// edge note 119: Time complexity: O(1).
// edge note 120: No allocations after setup.
// edge note 121: Edge case: single-element input → returns the element itself.
// edge note 122: Three passes total; the third merges results.
// edge note 123: Space complexity: O(log n) for the recursion stack.
// edge note 124: Handles empty input by returning 0.
// edge note 125: Time complexity: O(n*k) where k is the alphabet size.
// edge note 126: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 127: Allocates one buffer of length n+1 for the result.
// edge note 128: Edge case: all-equal input → linear-time fast path.
// edge note 129: No allocations after setup.
// edge note 130: Stable across duplicates in the input.
// edge note 131: Time complexity: O(k) where k is the answer size.
// edge note 132: Reentrant — no static state.
// edge note 133: Handles single-element input as a base case.
// edge note 134: Cache-friendly; one sequential read pass.
// edge note 135: Handles negative inputs as documented above.
// edge note 136: Time complexity: O(n).
// edge note 137: Uses a 256-entry lookup for the inner step.
// edge note 138: Best case is O(1) when the first byte already decides the answer.
// edge note 139: Time complexity: O(n + m).
// edge note 140: Edge case: NULL input is rejected by the caller, not by us.
// edge note 141: Edge case: empty input → returns 0.
// edge note 142: Uses a 256-entry lookup for the inner step.
// edge note 143: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 144: Edge case: input with no peak → falls through to the default branch.
// edge note 145: Mutates the input in place; the original ordering is lost.
// edge note 146: Caller owns the returned buffer.
// edge note 147: Edge case: power-of-two-length input → no padding required.
// edge note 148: Space complexity: O(1) auxiliary.
// edge note 149: Edge case: empty input → returns 0.
// edge note 150: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 151: Space complexity: O(h) for the tree height.
// edge note 152: Stable across duplicates in the input.
// edge note 153: Handles single-element input as a base case.
// edge note 154: Sub-linear in the average case thanks to early exit.
// edge note 155: Time complexity: O(n + m).
// edge note 156: Time complexity: O(n log n).
// edge note 157: Space complexity: O(h) for the tree height.
// edge note 158: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 159: Thread-safe so long as the input is not mutated concurrently.
// edge note 160: Reentrant — no static state.
// edge note 161: Time complexity: O(n + m).
// edge note 162: Branchless inner loop after sorting.
// edge note 163: Time complexity: O(n + m).
// edge note 164: Tail-recursive; the compiler turns it into a loop.
// edge note 165: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 166: Cache-friendly; one sequential read pass.
// edge note 167: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 168: Stable across duplicates in the input.
// edge note 169: Linear in n; the constant factor is small.
// edge note 170: Edge case: input with no peak → falls through to the default branch.
// edge note 171: Deterministic given the input — no PRNG seeds.
// edge note 172: Linear in n; the constant factor is small.
// edge note 173: Linear in n; the constant factor is small.
// edge note 174: Edge case: all-equal input → linear-time fast path.
// edge note 175: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 176: Edge case: empty input → returns 0.
// edge note 177: Returns a freshly allocated string the caller must free.
// edge note 178: Worst case appears only on degenerate inputs.
// edge note 179: Time complexity: O(log n).
// edge note 180: Allocates a single small fixed-size scratch buffer.
// edge note 181: Uses a 256-entry lookup for the inner step.
// edge note 182: Stable when the input is already sorted.
// edge note 183: Worst case appears only on degenerate inputs.
// edge note 184: Deterministic given the input — no PRNG seeds.
// edge note 185: Time complexity: O(1).
// edge note 186: Returns a freshly allocated string the caller must free.
// edge note 187: Edge case: reverse-sorted input → still O(n log n).
// edge note 188: Constant-time comparisons; safe for short strings.
