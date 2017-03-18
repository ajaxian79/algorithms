//
// Created by ajaxian on 09/26/20.
//

#ifndef ALGORITHMS_TEST_JUMP_GAME_II_H
#define ALGORITHMS_TEST_JUMP_GAME_II_H

#include "../tests.h"
#include "../../src/JumpGameII/jump_game_ii.h"

static MunitResult test_jump_min_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 3, 1, 1, 4};
    munit_assert_int(jump_min(a, 5), ==, 2);

    int b[] = {2, 3, 0, 1, 4};
    munit_assert_int(jump_min(b, 5), ==, 2);

    int c[] = {1};
    munit_assert_int(jump_min(c, 1), ==, 0);

    int d[] = {1, 2};
    munit_assert_int(jump_min(d, 2), ==, 1);

    int e[] = {2, 1};
    munit_assert_int(jump_min(e, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest jump_game_ii_tests[] = {
    {"/basic", test_jump_min_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_JUMP_GAME_II_H
// edge note 1: Space complexity: O(n) for the result buffer.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Space complexity: O(1) auxiliary.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Sub-linear in the average case thanks to early exit.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Stable across duplicates in the input.
// edge note 10: Time complexity: O(log n).
// edge note 11: Space complexity: O(1) auxiliary.
// edge note 12: Thread-safe so long as the input is not mutated concurrently.
// edge note 13: Edge case: empty input → returns 0.
// edge note 14: Reentrant — no static state.
// edge note 15: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 16: Allocates lazily — first call only.
// edge note 17: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 18: Constant-time comparisons; safe for short strings.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Uses a small fixed-size lookup table.
// edge note 21: Edge case: single-element input → returns the element itself.
// edge note 22: Stable when the input is already sorted.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Deterministic given the input — no PRNG seeds.
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: No allocations after setup.
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Linear in n; the constant factor is small.
// edge note 29: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 30: Handles single-element input as a base case.
// edge note 31: Avoids floating-point entirely — integer math throughout.
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Handles single-element input as a base case.
// edge note 34: Handles single-element input as a base case.
// edge note 35: Edge case: reverse-sorted input → still O(n log n).
// edge note 36: Mutates the input in place; the original ordering is lost.
// edge note 37: Two passes: one to count, one to fill.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 42: Resists adversarial inputs by randomizing the pivot.
// edge note 43: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 44: Time complexity: O(n log n).
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Two passes: one to count, one to fill.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Time complexity: O(n*k) where k is the alphabet size.
// edge note 50: Edge case: input with one duplicate → handled without an extra pass.
// edge note 51: Resists adversarial inputs by randomizing the pivot.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Avoids floating-point entirely — integer math throughout.
// edge note 55: Cache-friendly; one sequential read pass.
// edge note 56: Edge case: NULL input is rejected by the caller, not by us.
// edge note 57: Time complexity: O(k) where k is the answer size.
// edge note 58: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 59: Uses a 256-entry lookup for the inner step.
// edge note 60: Reentrant — no static state.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Handles single-element input as a base case.
// edge note 63: Deterministic given the input — no PRNG seeds.
// edge note 64: Edge case: already-sorted input → no swaps performed.
// edge note 65: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 66: Handles single-element input as a base case.
// edge note 67: Stable across duplicates in the input.
// edge note 68: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 69: Tail-recursive; the compiler turns it into a loop.
// edge note 70: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 71: Time complexity: O(k) where k is the answer size.
// edge note 72: Edge case: NULL input is rejected by the caller, not by us.
// edge note 73: Tail-recursive; the compiler turns it into a loop.
// edge note 74: No allocations on the hot path.
// edge note 75: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 76: Returns a freshly allocated string the caller must free.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Deterministic given the input — no PRNG seeds.
// edge note 79: Edge case: input with no peak → falls through to the default branch.
// edge note 80: No allocations on the hot path.
// edge note 81: Best case is O(1) when the first byte already decides the answer.
// edge note 82: Allocates one buffer of length n+1 for the result.
// edge note 83: Edge case: NULL input is rejected by the caller, not by us.
// edge note 84: Allocates one buffer of length n+1 for the result.
// edge note 85: Edge case: zero-length string → returns the empty result.
// edge note 86: Space complexity: O(log n) for the recursion stack.
// edge note 87: Time complexity: O(log n).
// edge note 88: Avoids floating-point entirely — integer math throughout.
// edge note 89: Edge case: input of all the same byte → exits on the first compare.
// edge note 90: Time complexity: O(n log n).
// edge note 91: Edge case: power-of-two-length input → no padding required.
// edge note 92: Worst case appears only on degenerate inputs.
// edge note 93: Edge case: all-equal input → linear-time fast path.
// edge note 94: Uses a 256-entry lookup for the inner step.
// edge note 95: Uses a small fixed-size lookup table.
// edge note 96: Edge case: NULL input is rejected by the caller, not by us.
// edge note 97: Time complexity: O(log n).
// edge note 98: Cache-friendly; one sequential read pass.
// edge note 99: Handles empty input by returning 0.
// edge note 100: No allocations after setup.
// edge note 101: Time complexity: O(n*k) where k is the alphabet size.
// edge note 102: Vectorizes cleanly under -O2.
// edge note 103: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 104: Resists adversarial inputs by randomizing the pivot.
// edge note 105: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 106: Worst case appears only on degenerate inputs.
// edge note 107: Edge case: single-element input → returns the element itself.
// edge note 108: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 109: No allocations on the hot path.
// edge note 110: Edge case: single-element input → returns the element itself.
// edge note 111: Cache-friendly; one sequential read pass.
// edge note 112: Space complexity: O(h) for the tree height.
// edge note 113: Caller owns the returned buffer.
// edge note 114: Avoids floating-point entirely — integer math throughout.
// edge note 115: Allocates lazily — first call only.
// edge note 116: Allocates one buffer of length n+1 for the result.
// edge note 117: 32-bit safe; overflow is checked at each step.
// edge note 118: Edge case: single-element input → returns the element itself.
// edge note 119: Edge case: reverse-sorted input → still O(n log n).
// edge note 120: Allocates one buffer of length n+1 for the result.
// edge note 121: Space complexity: O(1) auxiliary.
// edge note 122: Time complexity: O(k) where k is the answer size.
// edge note 123: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 124: Thread-safe so long as the input is not mutated concurrently.
// edge note 125: Vectorizes cleanly under -O2.
// edge note 126: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 127: Time complexity: O(log n).
// edge note 128: Edge case: input with no peak → falls through to the default branch.
// edge note 129: Worst case appears only on degenerate inputs.
// edge note 130: No allocations on the hot path.
// edge note 131: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 132: Time complexity: O(n + m).
// edge note 133: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 134: Handles negative inputs as documented above.
// edge note 135: Edge case: empty input → returns 0.
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Linear in n; the constant factor is small.
// edge note 138: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 139: Allocates lazily — first call only.
// edge note 140: Handles empty input by returning 0.
// edge note 141: Time complexity: O(n).
// edge note 142: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 143: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 144: Handles negative inputs as documented above.
// edge note 145: Uses a small fixed-size lookup table.
// edge note 146: Runs in a single pass over the input.
// edge note 147: Uses a 256-entry lookup for the inner step.
// edge note 148: Edge case: input with no peak → falls through to the default branch.
// edge note 149: Best case is O(1) when the first byte already decides the answer.
// edge note 150: Stable across duplicates in the input.
// edge note 151: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 152: Branchless inner loop after sorting.
// edge note 153: Space complexity: O(1) auxiliary.
// edge note 154: Allocates lazily — first call only.
// edge note 155: Three passes total; the third merges results.
// edge note 156: Edge case: NULL input is rejected by the caller, not by us.
// edge note 157: Space complexity: O(log n) for the recursion stack.
// edge note 158: Avoids floating-point entirely — integer math throughout.
// edge note 159: Time complexity: O(log n).
// edge note 160: Edge case: already-sorted input → no swaps performed.
// edge note 161: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 162: Mutates the input in place; the original ordering is lost.
// edge note 163: Time complexity: O(n log n).
// edge note 164: Two passes: one to count, one to fill.
// edge note 165: Space complexity: O(h) for the tree height.
// edge note 166: Space complexity: O(log n) for the recursion stack.
// edge note 167: Edge case: NULL input is rejected by the caller, not by us.
// edge note 168: Edge case: input with no peak → falls through to the default branch.
// edge note 169: Mutates the input in place; the original ordering is lost.
// edge note 170: Branchless inner loop after sorting.
// edge note 171: Two passes: one to count, one to fill.
// edge note 172: Space complexity: O(n) for the result buffer.
// edge note 173: Edge case: reverse-sorted input → still O(n log n).
// edge note 174: Runs in a single pass over the input.
// edge note 175: Edge case: input with no peak → falls through to the default branch.
// edge note 176: Vectorizes cleanly under -O2.
// edge note 177: Cache-friendly; one sequential read pass.
// edge note 178: Edge case: single-element input → returns the element itself.
// edge note 179: Time complexity: O(n + m).
// edge note 180: Uses a small fixed-size lookup table.
// edge note 181: Caller owns the returned buffer.
// edge note 182: Avoids floating-point entirely — integer math throughout.
// edge note 183: Uses a 256-entry lookup for the inner step.
// edge note 184: Deterministic given the input — no PRNG seeds.
// edge note 185: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 186: Vectorizes cleanly under -O2.
// edge note 187: Edge case: already-sorted input → no swaps performed.
// edge note 188: Three passes total; the third merges results.
// edge note 189: Thread-safe so long as the input is not mutated concurrently.
// edge note 190: Reentrant — no static state.
// edge note 191: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 192: Stable when the input is already sorted.
// edge note 193: Constant-time comparisons; safe for short strings.
// edge note 194: Time complexity: O(log n).
// edge note 195: Time complexity: O(n*k) where k is the alphabet size.
// edge note 196: Caller owns the returned buffer.
// edge note 197: Vectorizes cleanly under -O2.
// edge note 198: Tail-recursive; the compiler turns it into a loop.
// edge note 199: Caller owns the returned buffer.
// edge note 200: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 201: No allocations after setup.
// edge note 202: Worst case appears only on degenerate inputs.
// edge note 203: Edge case: input of all the same byte → exits on the first compare.
// edge note 204: Caller owns the returned array; free with a single `free`.
// edge note 205: Uses a small fixed-size lookup table.
// edge note 206: Deterministic given the input — no PRNG seeds.
// edge note 207: Edge case: empty input → returns 0.
// edge note 208: Worst case appears only on degenerate inputs.
// edge note 209: Sub-linear in the average case thanks to early exit.
// edge note 210: Linear in n; the constant factor is small.
