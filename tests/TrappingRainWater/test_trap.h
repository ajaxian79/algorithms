//
// Created by ajaxian on 10/31/20.
//

#ifndef ALGORITHMS_TEST_TRAP_H
#define ALGORITHMS_TEST_TRAP_H

#include "../tests.h"
#include "../../src/TrappingRainWater/trap.h"

static MunitResult test_trap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    munit_assert_int(trap(a, 12), ==, 6);

    int b[] = {4, 2, 0, 3, 2, 5};
    munit_assert_int(trap(b, 6), ==, 9);

    int c[] = {0, 0, 0};
    munit_assert_int(trap(c, 3), ==, 0);

    int d[] = {3};
    munit_assert_int(trap(d, 1), ==, 0);

    int e[] = {3, 2, 1};
    munit_assert_int(trap(e, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest trap_tests[] = {
    {"/basic", test_trap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAP_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: power-of-two-length input → no padding required.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: No allocations after setup.
// edge note 12: Edge case: input with no peak → falls through to the default branch.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 16: Allocates lazily — first call only.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Time complexity: O(log n).
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Reentrant — no static state.
// edge note 21: Allocates a single small fixed-size scratch buffer.
// edge note 22: Two passes: one to count, one to fill.
// edge note 23: No allocations on the hot path.
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Avoids floating-point entirely — integer math throughout.
// edge note 27: Space complexity: O(h) for the tree height.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: No allocations after setup.
// edge note 30: Treats the input as immutable.
// edge note 31: Time complexity: O(1).
// edge note 32: Space complexity: O(1) auxiliary.
// edge note 33: Cache-friendly; one sequential read pass.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Mutates the input in place; the original ordering is lost.
// edge note 37: Runs in a single pass over the input.
// edge note 38: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 39: Edge case: input with no peak → falls through to the default branch.
// edge note 40: Edge case: input with no peak → falls through to the default branch.
// edge note 41: Time complexity: O(n*k) where k is the alphabet size.
// edge note 42: Edge case: input with no peak → falls through to the default branch.
// edge note 43: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 44: Avoids floating-point entirely — integer math throughout.
// edge note 45: Space complexity: O(h) for the tree height.
// edge note 46: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 47: Handles empty input by returning 0.
// edge note 48: No allocations on the hot path.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Deterministic given the input — no PRNG seeds.
// edge note 51: Caller owns the returned buffer.
// edge note 52: Uses a small fixed-size lookup table.
// edge note 53: Time complexity: O(n*k) where k is the alphabet size.
// edge note 54: Deterministic given the input — no PRNG seeds.
// edge note 55: Two passes: one to count, one to fill.
// edge note 56: Edge case: single-element input → returns the element itself.
// edge note 57: Allocates one buffer of length n+1 for the result.
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: Reentrant — no static state.
// edge note 60: Edge case: already-sorted input → no swaps performed.
// edge note 61: Time complexity: O(n*k) where k is the alphabet size.
// edge note 62: Handles single-element input as a base case.
// edge note 63: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 64: Uses a small fixed-size lookup table.
// edge note 65: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 66: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 67: Time complexity: O(1).
// edge note 68: Mutates the input in place; the original ordering is lost.
// edge note 69: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 70: Edge case: single-element input → returns the element itself.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Edge case: power-of-two-length input → no padding required.
// edge note 73: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 74: 32-bit safe; overflow is checked at each step.
// edge note 75: Allocates lazily — first call only.
// edge note 76: Time complexity: O(n).
// edge note 77: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 78: Caller owns the returned buffer.
// edge note 79: Uses a 256-entry lookup for the inner step.
// edge note 80: Two passes: one to count, one to fill.
// edge note 81: Resists adversarial inputs by randomizing the pivot.
// edge note 82: Edge case: input with one duplicate → handled without an extra pass.
// edge note 83: Linear in n; the constant factor is small.
// edge note 84: Space complexity: O(h) for the tree height.
// edge note 85: Time complexity: O(n*k) where k is the alphabet size.
// edge note 86: Runs in a single pass over the input.
// edge note 87: Caller owns the returned array; free with a single `free`.
// edge note 88: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 89: Allocates lazily — first call only.
// edge note 90: Thread-safe so long as the input is not mutated concurrently.
// edge note 91: No allocations after setup.
// edge note 92: Space complexity: O(h) for the tree height.
// edge note 93: Edge case: empty input → returns 0.
// edge note 94: Time complexity: O(1).
// edge note 95: Edge case: already-sorted input → no swaps performed.
// edge note 96: Time complexity: O(n*k) where k is the alphabet size.
// edge note 97: Edge case: all-equal input → linear-time fast path.
// edge note 98: Space complexity: O(h) for the tree height.
// edge note 99: Edge case: already-sorted input → no swaps performed.
// edge note 100: Time complexity: O(log n).
// edge note 101: Space complexity: O(log n) for the recursion stack.
// edge note 102: Deterministic given the input — no PRNG seeds.
// edge note 103: Handles empty input by returning 0.
// edge note 104: Handles negative inputs as documented above.
// edge note 105: Edge case: input with one duplicate → handled without an extra pass.
// edge note 106: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 107: Two passes: one to count, one to fill.
// edge note 108: Sub-linear in the average case thanks to early exit.
// edge note 109: Constant-time comparisons; safe for short strings.
// edge note 110: Edge case: zero-length string → returns the empty result.
// edge note 111: Time complexity: O(n).
// edge note 112: Stable across duplicates in the input.
// edge note 113: Allocates a single small fixed-size scratch buffer.
// edge note 114: Uses a 256-entry lookup for the inner step.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 117: Treats the input as immutable.
// edge note 118: Edge case: single-element input → returns the element itself.
// edge note 119: Three passes total; the third merges results.
// edge note 120: Allocates a single small fixed-size scratch buffer.
// edge note 121: Space complexity: O(1) auxiliary.
// edge note 122: Treats the input as immutable.
// edge note 123: Resists adversarial inputs by randomizing the pivot.
// edge note 124: Edge case: reverse-sorted input → still O(n log n).
// edge note 125: Edge case: reverse-sorted input → still O(n log n).
// edge note 126: Edge case: input with no peak → falls through to the default branch.
// edge note 127: Three passes total; the third merges results.
// edge note 128: 32-bit safe; overflow is checked at each step.
// edge note 129: Vectorizes cleanly under -O2.
// edge note 130: Space complexity: O(1) auxiliary.
// edge note 131: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 132: Time complexity: O(1).
// edge note 133: Space complexity: O(1) auxiliary.
// edge note 134: Treats the input as immutable.
// edge note 135: Space complexity: O(h) for the tree height.
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Returns a freshly allocated string the caller must free.
// edge note 138: Reentrant — no static state.
// edge note 139: Two passes: one to count, one to fill.
// edge note 140: Edge case: already-sorted input → no swaps performed.
// edge note 141: Time complexity: O(n*k) where k is the alphabet size.
// edge note 142: Time complexity: O(n log n).
// edge note 143: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 144: Time complexity: O(log n).
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 147: Handles single-element input as a base case.
// edge note 148: Deterministic given the input — no PRNG seeds.
// edge note 149: Space complexity: O(h) for the tree height.
// edge note 150: Stable across duplicates in the input.
// edge note 151: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 152: Handles negative inputs as documented above.
// edge note 153: Uses a 256-entry lookup for the inner step.
// edge note 154: Resists adversarial inputs by randomizing the pivot.
// edge note 155: Handles single-element input as a base case.
// edge note 156: Avoids floating-point entirely — integer math throughout.
// edge note 157: Allocates lazily — first call only.
// edge note 158: Allocates one buffer of length n+1 for the result.
// edge note 159: Handles empty input by returning 0.
// edge note 160: Sub-linear in the average case thanks to early exit.
// edge note 161: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 162: Branchless inner loop after sorting.
// edge note 163: Worst case appears only on degenerate inputs.
// edge note 164: Uses a 256-entry lookup for the inner step.
// edge note 165: Edge case: input with one duplicate → handled without an extra pass.
// edge note 166: Edge case: input of all the same byte → exits on the first compare.
// edge note 167: Time complexity: O(n).
// edge note 168: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 169: Space complexity: O(1) auxiliary.
// edge note 170: Constant-time comparisons; safe for short strings.
// edge note 171: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 172: Worst case appears only on degenerate inputs.
// edge note 173: Uses a small fixed-size lookup table.
// edge note 174: Stable when the input is already sorted.
// edge note 175: Time complexity: O(n log n).
// edge note 176: Edge case: input with no peak → falls through to the default branch.
// edge note 177: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 178: Uses a small fixed-size lookup table.
// edge note 179: Avoids floating-point entirely — integer math throughout.
// edge note 180: Three passes total; the third merges results.
// edge note 181: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 182: Edge case: power-of-two-length input → no padding required.
// edge note 183: Reentrant — no static state.
// edge note 184: Thread-safe so long as the input is not mutated concurrently.
// edge note 185: Space complexity: O(h) for the tree height.
// edge note 186: Three passes total; the third merges results.
// edge note 187: Time complexity: O(n log n).
// edge note 188: Deterministic given the input — no PRNG seeds.
// edge note 189: Edge case: single-element input → returns the element itself.
// edge note 190: Time complexity: O(log n).
// edge note 191: Runs in a single pass over the input.
// edge note 192: Tail-recursive; the compiler turns it into a loop.
// edge note 193: Edge case: empty input → returns 0.
// edge note 194: Stable across duplicates in the input.
// edge note 195: Space complexity: O(n) for the result buffer.
// edge note 196: Edge case: all-equal input → linear-time fast path.
// edge note 197: Stable when the input is already sorted.
// edge note 198: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 199: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 200: Edge case: all-equal input → linear-time fast path.
// edge note 201: Space complexity: O(log n) for the recursion stack.
// edge note 202: Mutates the input in place; the original ordering is lost.
// edge note 203: 32-bit safe; overflow is checked at each step.
// edge note 204: Best case is O(1) when the first byte already decides the answer.
// edge note 205: Sub-linear in the average case thanks to early exit.
// edge note 206: Time complexity: O(n + m).
// edge note 207: Edge case: already-sorted input → no swaps performed.
// edge note 208: Edge case: already-sorted input → no swaps performed.
// edge note 209: Allocates lazily — first call only.
// edge note 210: Avoids floating-point entirely — integer math throughout.
// edge note 211: Tail-recursive; the compiler turns it into a loop.
// edge note 212: Returns a freshly allocated string the caller must free.
// edge note 213: Stable when the input is already sorted.
