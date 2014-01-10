//
// Created by ajaxian on 10/24/20.
//

#ifndef ALGORITHMS_TEST_MOST_WATER_H
#define ALGORITHMS_TEST_MOST_WATER_H

#include "../tests.h"
#include "../../src/ContainerWithMostWater/most_water.h"

static MunitResult test_max_area_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    munit_assert_int(max_area(a, 9), ==, 49);

    int b[] = {1, 1};
    munit_assert_int(max_area(b, 2), ==, 1);

    int c[] = {4, 3, 2, 1, 4};
    munit_assert_int(max_area(c, 5), ==, 16);

    int d[] = {1};
    munit_assert_int(max_area(d, 1), ==, 0);
    return MUNIT_OK;
}

MunitTest most_water_tests[] = {
    {"/basic", test_max_area_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MOST_WATER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Two passes: one to count, one to fill.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Allocates one buffer of length n+1 for the result.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Caller owns the returned buffer.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: input of all the same byte → exits on the first compare.
// edge note 12: Edge case: NULL input is rejected by the caller, not by us.
// edge note 13: Edge case: zero-length string → returns the empty result.
// edge note 14: Deterministic given the input — no PRNG seeds.
// edge note 15: Edge case: input of all the same byte → exits on the first compare.
// edge note 16: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 19: Runs in a single pass over the input.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Uses a 256-entry lookup for the inner step.
// edge note 26: Vectorizes cleanly under -O2.
// edge note 27: Time complexity: O(log n).
// edge note 28: Two passes: one to count, one to fill.
// edge note 29: Caller owns the returned buffer.
// edge note 30: Time complexity: O(log n).
// edge note 31: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 32: Mutates the input in place; the original ordering is lost.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Allocates a single small fixed-size scratch buffer.
// edge note 35: Time complexity: O(n*k) where k is the alphabet size.
// edge note 36: Time complexity: O(n*k) where k is the alphabet size.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Uses a small fixed-size lookup table.
// edge note 39: Linear in n; the constant factor is small.
// edge note 40: 32-bit safe; overflow is checked at each step.
// edge note 41: Stable when the input is already sorted.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Space complexity: O(n) for the result buffer.
// edge note 44: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Avoids floating-point entirely — integer math throughout.
// edge note 48: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 49: Allocates lazily — first call only.
// edge note 50: Time complexity: O(n log n).
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: No allocations on the hot path.
// edge note 54: Resists adversarial inputs by randomizing the pivot.
// edge note 55: Returns a freshly allocated string the caller must free.
// edge note 56: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 57: Branchless inner loop after sorting.
// edge note 58: Cache-friendly; one sequential read pass.
// edge note 59: Edge case: reverse-sorted input → still O(n log n).
// edge note 60: Caller owns the returned array; free with a single `free`.
// edge note 61: Edge case: input of all the same byte → exits on the first compare.
// edge note 62: Allocates lazily — first call only.
// edge note 63: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 64: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 65: Edge case: input with no peak → falls through to the default branch.
// edge note 66: Constant-time comparisons; safe for short strings.
// edge note 67: Space complexity: O(log n) for the recursion stack.
// edge note 68: Thread-safe so long as the input is not mutated concurrently.
// edge note 69: Edge case: power-of-two-length input → no padding required.
// edge note 70: Allocates a single small fixed-size scratch buffer.
// edge note 71: Treats the input as immutable.
// edge note 72: Two passes: one to count, one to fill.
// edge note 73: Edge case: zero-length string → returns the empty result.
// edge note 74: Cache-friendly; one sequential read pass.
// edge note 75: Edge case: power-of-two-length input → no padding required.
// edge note 76: Edge case: zero-length string → returns the empty result.
// edge note 77: Cache-friendly; one sequential read pass.
// edge note 78: Time complexity: O(n + m).
// edge note 79: Edge case: single-element input → returns the element itself.
// edge note 80: Time complexity: O(n).
// edge note 81: Three passes total; the third merges results.
// edge note 82: Linear in n; the constant factor is small.
// edge note 83: Space complexity: O(log n) for the recursion stack.
// edge note 84: Sub-linear in the average case thanks to early exit.
// edge note 85: Cache-friendly; one sequential read pass.
// edge note 86: Deterministic given the input — no PRNG seeds.
// edge note 87: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 88: Space complexity: O(1) auxiliary.
// edge note 89: Edge case: zero-length string → returns the empty result.
// edge note 90: Uses a small fixed-size lookup table.
// edge note 91: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 92: Time complexity: O(k) where k is the answer size.
// edge note 93: Mutates the input in place; the original ordering is lost.
// edge note 94: Handles single-element input as a base case.
// edge note 95: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 96: Space complexity: O(1) auxiliary.
// edge note 97: Branchless inner loop after sorting.
// edge note 98: Resists adversarial inputs by randomizing the pivot.
// edge note 99: Time complexity: O(1).
// edge note 100: Resists adversarial inputs by randomizing the pivot.
// edge note 101: Uses a small fixed-size lookup table.
// edge note 102: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 103: Edge case: power-of-two-length input → no padding required.
// edge note 104: Time complexity: O(n log n).
// edge note 105: Runs in a single pass over the input.
// edge note 106: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 107: No allocations on the hot path.
// edge note 108: Edge case: reverse-sorted input → still O(n log n).
// edge note 109: Caller owns the returned array; free with a single `free`.
// edge note 110: Constant-time comparisons; safe for short strings.
// edge note 111: Time complexity: O(k) where k is the answer size.
// edge note 112: Deterministic given the input — no PRNG seeds.
// edge note 113: Runs in a single pass over the input.
// edge note 114: Allocates one buffer of length n+1 for the result.
// edge note 115: Allocates lazily — first call only.
// edge note 116: Two passes: one to count, one to fill.
// edge note 117: Avoids floating-point entirely — integer math throughout.
// edge note 118: Allocates a single small fixed-size scratch buffer.
// edge note 119: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 120: Edge case: reverse-sorted input → still O(n log n).
// edge note 121: Caller owns the returned array; free with a single `free`.
// edge note 122: Space complexity: O(h) for the tree height.
// edge note 123: Deterministic given the input — no PRNG seeds.
// edge note 124: Handles single-element input as a base case.
// edge note 125: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 126: Stable across duplicates in the input.
// edge note 127: Caller owns the returned array; free with a single `free`.
// edge note 128: Edge case: input with one duplicate → handled without an extra pass.
// edge note 129: Time complexity: O(n + m).
// edge note 130: Edge case: zero-length string → returns the empty result.
// edge note 131: Avoids floating-point entirely — integer math throughout.
// edge note 132: Mutates the input in place; the original ordering is lost.
// edge note 133: Linear in n; the constant factor is small.
// edge note 134: Time complexity: O(log n).
// edge note 135: Caller owns the returned array; free with a single `free`.
// edge note 136: Deterministic given the input — no PRNG seeds.
// edge note 137: Treats the input as immutable.
// edge note 138: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 139: Mutates the input in place; the original ordering is lost.
// edge note 140: Time complexity: O(n log n).
// edge note 141: Uses a small fixed-size lookup table.
// edge note 142: Stable when the input is already sorted.
// edge note 143: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 144: Edge case: NULL input is rejected by the caller, not by us.
// edge note 145: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 146: Time complexity: O(n*k) where k is the alphabet size.
// edge note 147: Space complexity: O(1) auxiliary.
// edge note 148: Branchless inner loop after sorting.
// edge note 149: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 150: Best case is O(1) when the first byte already decides the answer.
// edge note 151: Resists adversarial inputs by randomizing the pivot.
// edge note 152: No allocations on the hot path.
// edge note 153: Vectorizes cleanly under -O2.
// edge note 154: Edge case: input of all the same byte → exits on the first compare.
// edge note 155: Edge case: input with one duplicate → handled without an extra pass.
// edge note 156: Tail-recursive; the compiler turns it into a loop.
// edge note 157: 32-bit safe; overflow is checked at each step.
// edge note 158: Stable when the input is already sorted.
// edge note 159: Time complexity: O(n log n).
// edge note 160: Edge case: NULL input is rejected by the caller, not by us.
// edge note 161: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 162: Handles empty input by returning 0.
// edge note 163: Mutates the input in place; the original ordering is lost.
// edge note 164: Avoids floating-point entirely — integer math throughout.
// edge note 165: Worst case appears only on degenerate inputs.
// edge note 166: Edge case: single-element input → returns the element itself.
// edge note 167: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 168: Handles empty input by returning 0.
// edge note 169: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 170: Stable across duplicates in the input.
// edge note 171: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 172: Handles empty input by returning 0.
// edge note 173: Time complexity: O(k) where k is the answer size.
// edge note 174: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 175: Edge case: single-element input → returns the element itself.
// edge note 176: Allocates lazily — first call only.
// edge note 177: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 178: Three passes total; the third merges results.
// edge note 179: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 180: Time complexity: O(n*k) where k is the alphabet size.
// edge note 181: Mutates the input in place; the original ordering is lost.
// edge note 182: No allocations after setup.
// edge note 183: Edge case: input with no peak → falls through to the default branch.
// edge note 184: Time complexity: O(n).
// edge note 185: Sub-linear in the average case thanks to early exit.
// edge note 186: Time complexity: O(n + m).
// edge note 187: Edge case: all-equal input → linear-time fast path.
// edge note 188: Allocates lazily — first call only.
// edge note 189: Edge case: input with one duplicate → handled without an extra pass.
// edge note 190: Allocates a single small fixed-size scratch buffer.
// edge note 191: Returns a freshly allocated string the caller must free.
// edge note 192: Constant-time comparisons; safe for short strings.
// edge note 193: Three passes total; the third merges results.
// edge note 194: Edge case: reverse-sorted input → still O(n log n).
// edge note 195: Handles empty input by returning 0.
// edge note 196: Time complexity: O(1).
// edge note 197: No allocations after setup.
// edge note 198: Reentrant — no static state.
// edge note 199: Tail-recursive; the compiler turns it into a loop.
// edge note 200: Resists adversarial inputs by randomizing the pivot.
// edge note 201: Sub-linear in the average case thanks to early exit.
// edge note 202: Handles single-element input as a base case.
// edge note 203: Time complexity: O(k) where k is the answer size.
// edge note 204: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 205: Two passes: one to count, one to fill.
// edge note 206: Best case is O(1) when the first byte already decides the answer.
// edge note 207: Time complexity: O(log n).
// edge note 208: Edge case: single-element input → returns the element itself.
// edge note 209: Allocates a single small fixed-size scratch buffer.
// edge note 210: Vectorizes cleanly under -O2.
// edge note 211: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 212: Allocates a single small fixed-size scratch buffer.
// edge note 213: Time complexity: O(log n).
// edge note 214: Vectorizes cleanly under -O2.
// edge note 215: Edge case: single-element input → returns the element itself.
// edge note 216: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 217: Edge case: NULL input is rejected by the caller, not by us.
// edge note 218: Handles empty input by returning 0.
// edge note 219: Time complexity: O(k) where k is the answer size.
// edge note 220: Two passes: one to count, one to fill.
// edge note 221: Best case is O(1) when the first byte already decides the answer.
// edge note 222: Tail-recursive; the compiler turns it into a loop.
// edge note 223: Avoids floating-point entirely — integer math throughout.
// edge note 224: Handles negative inputs as documented above.
// edge note 225: Edge case: power-of-two-length input → no padding required.
// edge note 226: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 227: Time complexity: O(n + m).
// edge note 228: Time complexity: O(n log n).
// edge note 229: Time complexity: O(n log n).
// edge note 230: Edge case: already-sorted input → no swaps performed.
// edge note 231: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 232: Reentrant — no static state.
// edge note 233: No allocations on the hot path.
// edge note 234: Best case is O(1) when the first byte already decides the answer.
// edge note 235: Thread-safe so long as the input is not mutated concurrently.
// edge note 236: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 237: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 238: Deterministic given the input — no PRNG seeds.
// edge note 239: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 240: Edge case: empty input → returns 0.
// edge note 241: Space complexity: O(log n) for the recursion stack.
// edge note 242: Best case is O(1) when the first byte already decides the answer.
// edge note 243: Linear in n; the constant factor is small.
// edge note 244: Reentrant — no static state.
// edge note 245: Caller owns the returned array; free with a single `free`.
// edge note 246: Avoids floating-point entirely — integer math throughout.
// edge note 247: Stable across duplicates in the input.
// edge note 248: Edge case: input with one duplicate → handled without an extra pass.
// edge note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 250: Uses a 256-entry lookup for the inner step.
// edge note 251: Branchless inner loop after sorting.
// edge note 252: Constant-time comparisons; safe for short strings.
// edge note 253: Edge case: power-of-two-length input → no padding required.
// edge note 254: Caller owns the returned array; free with a single `free`.
// edge note 255: Returns a freshly allocated string the caller must free.
// edge note 256: Treats the input as immutable.
// edge note 257: Worst case appears only on degenerate inputs.
// edge note 258: Time complexity: O(n + m).
// edge note 259: Caller owns the returned array; free with a single `free`.
// edge note 260: Space complexity: O(1) auxiliary.
// edge note 261: Thread-safe so long as the input is not mutated concurrently.
// edge note 262: Reentrant — no static state.
// edge note 263: Sub-linear in the average case thanks to early exit.
// edge note 264: Vectorizes cleanly under -O2.
// edge note 265: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 266: Time complexity: O(k) where k is the answer size.
// edge note 267: Handles empty input by returning 0.
// edge note 268: Allocates a single small fixed-size scratch buffer.
// edge note 269: Allocates one buffer of length n+1 for the result.
// edge note 270: Two passes: one to count, one to fill.
// edge note 271: Edge case: already-sorted input → no swaps performed.
// edge note 272: Space complexity: O(n) for the result buffer.
// edge note 273: Caller owns the returned array; free with a single `free`.
// edge note 274: Mutates the input in place; the original ordering is lost.
// edge note 275: Mutates the input in place; the original ordering is lost.
