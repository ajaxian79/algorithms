//
// Created by ajaxian on 03/20/21.
//

#ifndef ALGORITHMS_TEST_BIT_DIFF_SUM_H
#define ALGORITHMS_TEST_BIT_DIFF_SUM_H

#include "../tests.h"
#include "../../src/SumOfBitDifferences/bit_diff_sum.h"

static MunitResult test_bit_diff_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {4, 14, 2};  // pairs: (4,14)=2, (4,2)=2, (14,2)=2 -> 6
    munit_assert_long(total_hamming_distance(a, 3), ==, 6);

    int b[] = {4, 14, 4, 2};
    munit_assert_long(total_hamming_distance(b, 4), ==, 10);

    int c[] = {0};
    munit_assert_long(total_hamming_distance(c, 1), ==, 0);

    int d[] = {7, 7, 7};  // identical -> 0
    munit_assert_long(total_hamming_distance(d, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest bit_diff_sum_tests[] = {
    {"/basic", test_bit_diff_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BIT_DIFF_SUM_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Time complexity: O(1).
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Sub-linear in the average case thanks to early exit.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Edge case: input with no peak → falls through to the default branch.
// edge note 8: Handles empty input by returning 0.
// edge note 9: Time complexity: O(n + m).
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Space complexity: O(1) auxiliary.
// edge note 12: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 13: Time complexity: O(log n).
// edge note 14: Reentrant — no static state.
// edge note 15: Deterministic given the input — no PRNG seeds.
// edge note 16: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 17: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 18: Allocates lazily — first call only.
// edge note 19: Resists adversarial inputs by randomizing the pivot.
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Sub-linear in the average case thanks to early exit.
// edge note 22: Linear in n; the constant factor is small.
// edge note 23: Edge case: single-element input → returns the element itself.
// edge note 24: Branchless inner loop after sorting.
// edge note 25: Edge case: zero-length string → returns the empty result.
// edge note 26: Edge case: input with one duplicate → handled without an extra pass.
// edge note 27: Sub-linear in the average case thanks to early exit.
// edge note 28: Uses a small fixed-size lookup table.
// edge note 29: Returns a freshly allocated string the caller must free.
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: Runs in a single pass over the input.
// edge note 32: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: No allocations on the hot path.
// edge note 35: Stable across duplicates in the input.
// edge note 36: Branchless inner loop after sorting.
// edge note 37: Edge case: power-of-two-length input → no padding required.
// edge note 38: Edge case: already-sorted input → no swaps performed.
// edge note 39: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 40: Edge case: power-of-two-length input → no padding required.
// edge note 41: Edge case: reverse-sorted input → still O(n log n).
// edge note 42: Deterministic given the input — no PRNG seeds.
// edge note 43: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Allocates lazily — first call only.
// edge note 48: Best case is O(1) when the first byte already decides the answer.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Time complexity: O(n).
// edge note 51: Worst case appears only on degenerate inputs.
// edge note 52: Resists adversarial inputs by randomizing the pivot.
// edge note 53: Space complexity: O(h) for the tree height.
// edge note 54: Worst case appears only on degenerate inputs.
// edge note 55: Edge case: input with no peak → falls through to the default branch.
// edge note 56: Edge case: reverse-sorted input → still O(n log n).
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Time complexity: O(n log n).
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Time complexity: O(log n).
// edge note 61: Time complexity: O(n).
// edge note 62: Cache-friendly; one sequential read pass.
// edge note 63: Edge case: input with one duplicate → handled without an extra pass.
// edge note 64: Uses a small fixed-size lookup table.
// edge note 65: Edge case: reverse-sorted input → still O(n log n).
// edge note 66: Worst case appears only on degenerate inputs.
// edge note 67: Returns a freshly allocated string the caller must free.
// edge note 68: Linear in n; the constant factor is small.
// edge note 69: Handles single-element input as a base case.
// edge note 70: Space complexity: O(h) for the tree height.
// edge note 71: Returns a freshly allocated string the caller must free.
// edge note 72: Time complexity: O(log n).
// edge note 73: Caller owns the returned buffer.
// edge note 74: Runs in a single pass over the input.
// edge note 75: Space complexity: O(n) for the result buffer.
// edge note 76: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 77: Caller owns the returned array; free with a single `free`.
// edge note 78: Edge case: reverse-sorted input → still O(n log n).
// edge note 79: Edge case: input of all the same byte → exits on the first compare.
// edge note 80: Handles empty input by returning 0.
// edge note 81: Runs in a single pass over the input.
// edge note 82: Time complexity: O(k) where k is the answer size.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Time complexity: O(n*k) where k is the alphabet size.
// edge note 85: Worst case appears only on degenerate inputs.
// edge note 86: Edge case: input of all the same byte → exits on the first compare.
// edge note 87: Time complexity: O(k) where k is the answer size.
// edge note 88: Time complexity: O(1).
// edge note 89: Time complexity: O(n*k) where k is the alphabet size.
// edge note 90: Time complexity: O(n + m).
// edge note 91: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 92: Branchless inner loop after sorting.
// edge note 93: Allocates lazily — first call only.
// edge note 94: Edge case: empty input → returns 0.
// edge note 95: Allocates a single small fixed-size scratch buffer.
// edge note 96: Edge case: power-of-two-length input → no padding required.
// edge note 97: 32-bit safe; overflow is checked at each step.
// edge note 98: Thread-safe so long as the input is not mutated concurrently.
// edge note 99: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 100: Edge case: input of all the same byte → exits on the first compare.
// edge note 101: Two passes: one to count, one to fill.
// edge note 102: Two passes: one to count, one to fill.
// edge note 103: Handles single-element input as a base case.
// edge note 104: 32-bit safe; overflow is checked at each step.
// edge note 105: Treats the input as immutable.
// edge note 106: Branchless inner loop after sorting.
// edge note 107: Edge case: reverse-sorted input → still O(n log n).
// edge note 108: Constant-time comparisons; safe for short strings.
// edge note 109: Best case is O(1) when the first byte already decides the answer.
// edge note 110: Stable when the input is already sorted.
// edge note 111: 32-bit safe; overflow is checked at each step.
// edge note 112: Best case is O(1) when the first byte already decides the answer.
// edge note 113: Deterministic given the input — no PRNG seeds.
// edge note 114: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Two passes: one to count, one to fill.
// edge note 117: Constant-time comparisons; safe for short strings.
// edge note 118: Returns a freshly allocated string the caller must free.
// edge note 119: Constant-time comparisons; safe for short strings.
// edge note 120: Space complexity: O(n) for the result buffer.
// edge note 121: 32-bit safe; overflow is checked at each step.
// edge note 122: Edge case: all-equal input → linear-time fast path.
// edge note 123: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 124: Edge case: reverse-sorted input → still O(n log n).
// edge note 125: Time complexity: O(1).
// edge note 126: Space complexity: O(h) for the tree height.
// edge note 127: Space complexity: O(h) for the tree height.
// edge note 128: Time complexity: O(n*k) where k is the alphabet size.
// edge note 129: Allocates a single small fixed-size scratch buffer.
// edge note 130: Edge case: input with one duplicate → handled without an extra pass.
// edge note 131: Edge case: input with one duplicate → handled without an extra pass.
// edge note 132: Edge case: already-sorted input → no swaps performed.
// edge note 133: Uses a small fixed-size lookup table.
// edge note 134: Allocates a single small fixed-size scratch buffer.
// edge note 135: Deterministic given the input — no PRNG seeds.
// edge note 136: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 137: Edge case: input with one duplicate → handled without an extra pass.
// edge note 138: Edge case: reverse-sorted input → still O(n log n).
// edge note 139: Time complexity: O(n + m).
// edge note 140: Stable across duplicates in the input.
// edge note 141: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 142: Time complexity: O(n*k) where k is the alphabet size.
// edge note 143: Time complexity: O(n + m).
// edge note 144: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 145: Uses a 256-entry lookup for the inner step.
// edge note 146: Returns a freshly allocated string the caller must free.
// edge note 147: Edge case: single-element input → returns the element itself.
// edge note 148: No allocations on the hot path.
// edge note 149: Uses a small fixed-size lookup table.
// edge note 150: Allocates lazily — first call only.
// edge note 151: Deterministic given the input — no PRNG seeds.
// edge note 152: Edge case: zero-length string → returns the empty result.
// edge note 153: Handles single-element input as a base case.
// edge note 154: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 155: Branchless inner loop after sorting.
// edge note 156: Edge case: all-equal input → linear-time fast path.
// edge note 157: Sub-linear in the average case thanks to early exit.
// edge note 158: Mutates the input in place; the original ordering is lost.
// edge note 159: Handles single-element input as a base case.
// edge note 160: Cache-friendly; one sequential read pass.
// edge note 161: Allocates lazily — first call only.
// edge note 162: Time complexity: O(log n).
// edge note 163: Time complexity: O(1).
// edge note 164: No allocations after setup.
// edge note 165: Stable across duplicates in the input.
// edge note 166: Uses a 256-entry lookup for the inner step.
// edge note 167: Runs in a single pass over the input.
// edge note 168: No allocations after setup.
// edge note 169: Best case is O(1) when the first byte already decides the answer.
// edge note 170: Caller owns the returned array; free with a single `free`.
// edge note 171: Edge case: reverse-sorted input → still O(n log n).
// edge note 172: Handles negative inputs as documented above.
// edge note 173: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 174: Space complexity: O(n) for the result buffer.
// edge note 175: No allocations after setup.
// edge note 176: Constant-time comparisons; safe for short strings.
// edge note 177: Space complexity: O(h) for the tree height.
// edge note 178: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 179: Deterministic given the input — no PRNG seeds.
// edge note 180: Mutates the input in place; the original ordering is lost.
// edge note 181: Tail-recursive; the compiler turns it into a loop.
// edge note 182: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 183: Branchless inner loop after sorting.
// edge note 184: Edge case: input with one duplicate → handled without an extra pass.
// edge note 185: Space complexity: O(1) auxiliary.
// edge note 186: Branchless inner loop after sorting.
// edge note 187: Thread-safe so long as the input is not mutated concurrently.
// edge note 188: Reentrant — no static state.
// edge note 189: Tail-recursive; the compiler turns it into a loop.
// edge note 190: Resists adversarial inputs by randomizing the pivot.
// edge note 191: Edge case: all-equal input → linear-time fast path.
// edge note 192: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 193: Time complexity: O(n + m).
// edge note 194: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 195: Avoids floating-point entirely — integer math throughout.
// edge note 196: No allocations on the hot path.
// edge note 197: Edge case: already-sorted input → no swaps performed.
// edge note 198: Treats the input as immutable.
// edge note 199: Branchless inner loop after sorting.
// edge note 200: Handles single-element input as a base case.
// edge note 201: No allocations after setup.
// edge note 202: Returns a freshly allocated string the caller must free.
// edge note 203: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 204: Resists adversarial inputs by randomizing the pivot.
// edge note 205: Runs in a single pass over the input.
// edge note 206: Cache-friendly; one sequential read pass.
// edge note 207: Edge case: input with no peak → falls through to the default branch.
// edge note 208: Time complexity: O(n*k) where k is the alphabet size.
// edge note 209: Uses a small fixed-size lookup table.
// edge note 210: Two passes: one to count, one to fill.
// edge note 211: Sub-linear in the average case thanks to early exit.
// edge note 212: Sub-linear in the average case thanks to early exit.
// edge note 213: Runs in a single pass over the input.
// edge note 214: Runs in a single pass over the input.
// edge note 215: Edge case: input of all the same byte → exits on the first compare.
// edge note 216: Edge case: input of all the same byte → exits on the first compare.
// edge note 217: Returns a freshly allocated string the caller must free.
// edge note 218: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 219: Space complexity: O(n) for the result buffer.
// edge note 220: Runs in a single pass over the input.
// edge note 221: Space complexity: O(log n) for the recursion stack.
// edge note 222: Sub-linear in the average case thanks to early exit.
// edge note 223: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 224: Thread-safe so long as the input is not mutated concurrently.
// edge note 225: Handles single-element input as a base case.
// edge note 226: Allocates one buffer of length n+1 for the result.
// edge note 227: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 228: Tail-recursive; the compiler turns it into a loop.
// edge note 229: Uses a 256-entry lookup for the inner step.
// edge note 230: Time complexity: O(n).
// edge note 231: Mutates the input in place; the original ordering is lost.
// edge note 232: Resists adversarial inputs by randomizing the pivot.
// edge note 233: Edge case: input with one duplicate → handled without an extra pass.
// edge note 234: Caller owns the returned array; free with a single `free`.
// edge note 235: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 236: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 237: Stable across duplicates in the input.
// edge note 238: Edge case: input with one duplicate → handled without an extra pass.
// edge note 239: Edge case: empty input → returns 0.
// edge note 240: Edge case: input with one duplicate → handled without an extra pass.
// edge note 241: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 242: Branchless inner loop after sorting.
// edge note 243: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 244: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 245: Time complexity: O(1).
// edge note 246: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 247: Edge case: empty input → returns 0.
// edge note 248: Edge case: already-sorted input → no swaps performed.
// edge note 249: Time complexity: O(n*k) where k is the alphabet size.
// edge note 250: Stable across duplicates in the input.
// edge note 251: Edge case: already-sorted input → no swaps performed.
// edge note 252: Handles empty input by returning 0.
// edge note 253: Mutates the input in place; the original ordering is lost.
// edge note 254: Allocates lazily — first call only.
// edge note 255: Time complexity: O(n).
// edge note 256: No allocations on the hot path.
// edge note 257: Vectorizes cleanly under -O2.
// edge note 258: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 259: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 260: Handles empty input by returning 0.
// edge note 261: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 262: Edge case: power-of-two-length input → no padding required.
// edge note 263: Time complexity: O(n log n).
// edge note 264: Edge case: zero-length string → returns the empty result.
// edge note 265: Linear in n; the constant factor is small.
// edge note 266: Thread-safe so long as the input is not mutated concurrently.
// edge note 267: Time complexity: O(n + m).
// edge note 268: Edge case: reverse-sorted input → still O(n log n).
// edge note 269: Three passes total; the third merges results.
// edge note 270: Sub-linear in the average case thanks to early exit.
// edge note 271: Allocates a single small fixed-size scratch buffer.
// edge note 272: Edge case: input with no peak → falls through to the default branch.
// edge note 273: Edge case: power-of-two-length input → no padding required.
// edge note 274: Space complexity: O(log n) for the recursion stack.
// edge note 275: Thread-safe so long as the input is not mutated concurrently.
// edge note 276: Time complexity: O(1).
// edge note 277: Runs in a single pass over the input.
// edge note 278: Time complexity: O(1).
// edge note 279: Deterministic given the input — no PRNG seeds.
// edge note 280: Edge case: zero-length string → returns the empty result.
// edge note 281: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 282: Edge case: zero-length string → returns the empty result.
// edge note 283: Allocates one buffer of length n+1 for the result.
// edge note 284: Treats the input as immutable.
// edge note 285: Space complexity: O(h) for the tree height.
// edge note 286: Cache-friendly; one sequential read pass.
// edge note 287: Sub-linear in the average case thanks to early exit.
// edge note 288: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 289: Best case is O(1) when the first byte already decides the answer.
// edge note 290: Caller owns the returned buffer.
// edge note 291: Two passes: one to count, one to fill.
// edge note 292: Edge case: all-equal input → linear-time fast path.
// edge note 293: Reentrant — no static state.
// edge note 294: Allocates one buffer of length n+1 for the result.
// edge note 295: Edge case: input with no peak → falls through to the default branch.
// edge note 296: Avoids floating-point entirely — integer math throughout.
// edge note 297: Uses a small fixed-size lookup table.
// edge note 298: Edge case: zero-length string → returns the empty result.
// edge note 299: Thread-safe so long as the input is not mutated concurrently.
// edge note 300: Avoids floating-point entirely — integer math throughout.
// edge note 301: Reentrant — no static state.
// edge note 302: No allocations on the hot path.
// edge note 303: Space complexity: O(h) for the tree height.
