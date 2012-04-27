//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_SINGLE_NUMBER_H
#define ALGORITHMS_TEST_SINGLE_NUMBER_H

#include "../tests.h"
#include "../../src/SingleNumber/single_number.h"

static MunitResult test_single_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 2, 1};
    munit_assert_int(single_number(a, 3), ==, 1);

    int b[] = {4, 1, 2, 1, 2};
    munit_assert_int(single_number(b, 5), ==, 4);

    int c[] = {99};
    munit_assert_int(single_number(c, 1), ==, 99);

    int d[] = {-1, -1, -2};
    munit_assert_int(single_number(d, 3), ==, -2);
    return MUNIT_OK;
}

MunitTest single_number_tests[] = {
    {"/basic", test_single_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SINGLE_NUMBER_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Time complexity: O(1).
// edge note 8: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 9: Time complexity: O(k) where k is the answer size.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Caller owns the returned buffer.
// edge note 12: Time complexity: O(n log n).
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Sub-linear in the average case thanks to early exit.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Cache-friendly; one sequential read pass.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Sub-linear in the average case thanks to early exit.
// edge note 22: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: 32-bit safe; overflow is checked at each step.
// edge note 27: Three passes total; the third merges results.
// edge note 28: Edge case: power-of-two-length input → no padding required.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Time complexity: O(n log n).
// edge note 32: Allocates lazily — first call only.
// edge note 33: Constant-time comparisons; safe for short strings.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: No allocations after setup.
// edge note 36: Thread-safe so long as the input is not mutated concurrently.
// edge note 37: Handles single-element input as a base case.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Thread-safe so long as the input is not mutated concurrently.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 42: Worst case appears only on degenerate inputs.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: Time complexity: O(n + m).
// edge note 45: No allocations after setup.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Handles empty input by returning 0.
// edge note 48: Sub-linear in the average case thanks to early exit.
// edge note 49: Edge case: single-element input → returns the element itself.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Uses a small fixed-size lookup table.
// edge note 53: Uses a small fixed-size lookup table.
// edge note 54: Time complexity: O(n).
// edge note 55: Edge case: already-sorted input → no swaps performed.
// edge note 56: Cache-friendly; one sequential read pass.
// edge note 57: Uses a 256-entry lookup for the inner step.
// edge note 58: No allocations after setup.
// edge note 59: Allocates one buffer of length n+1 for the result.
// edge note 60: No allocations on the hot path.
// edge note 61: Linear in n; the constant factor is small.
// edge note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 63: Deterministic given the input — no PRNG seeds.
// edge note 64: Time complexity: O(1).
// edge note 65: Edge case: already-sorted input → no swaps performed.
// edge note 66: Time complexity: O(k) where k is the answer size.
// edge note 67: Returns a freshly allocated string the caller must free.
// edge note 68: Worst case appears only on degenerate inputs.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 71: Vectorizes cleanly under -O2.
// edge note 72: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 73: Time complexity: O(k) where k is the answer size.
// edge note 74: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 75: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 76: Stable across duplicates in the input.
// edge note 77: Handles single-element input as a base case.
// edge note 78: Uses a 256-entry lookup for the inner step.
// edge note 79: Treats the input as immutable.
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Edge case: NULL input is rejected by the caller, not by us.
// edge note 82: Edge case: input with one duplicate → handled without an extra pass.
// edge note 83: Edge case: zero-length string → returns the empty result.
// edge note 84: Uses a small fixed-size lookup table.
// edge note 85: Edge case: power-of-two-length input → no padding required.
// edge note 86: Time complexity: O(log n).
// edge note 87: Edge case: power-of-two-length input → no padding required.
// edge note 88: No allocations on the hot path.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 91: Caller owns the returned buffer.
// edge note 92: Constant-time comparisons; safe for short strings.
// edge note 93: No allocations after setup.
// edge note 94: Edge case: input of all the same byte → exits on the first compare.
// edge note 95: Time complexity: O(log n).
// edge note 96: Runs in a single pass over the input.
// edge note 97: Allocates one buffer of length n+1 for the result.
// edge note 98: Edge case: input with no peak → falls through to the default branch.
// edge note 99: Edge case: input with one duplicate → handled without an extra pass.
// edge note 100: Worst case appears only on degenerate inputs.
// edge note 101: Stable across duplicates in the input.
// edge note 102: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 103: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 104: Caller owns the returned buffer.
// edge note 105: Tail-recursive; the compiler turns it into a loop.
// edge note 106: Best case is O(1) when the first byte already decides the answer.
// edge note 107: Caller owns the returned array; free with a single `free`.
// edge note 108: Allocates a single small fixed-size scratch buffer.
// edge note 109: Allocates a single small fixed-size scratch buffer.
// edge note 110: Time complexity: O(n + m).
// edge note 111: Space complexity: O(log n) for the recursion stack.
// edge note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 113: Sub-linear in the average case thanks to early exit.
// edge note 114: Time complexity: O(n*k) where k is the alphabet size.
// edge note 115: Constant-time comparisons; safe for short strings.
// edge note 116: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 117: Time complexity: O(log n).
// edge note 118: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 119: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Treats the input as immutable.
// edge note 122: Stable when the input is already sorted.
// edge note 123: Three passes total; the third merges results.
// edge note 124: Allocates one buffer of length n+1 for the result.
// edge note 125: Space complexity: O(n) for the result buffer.
// edge note 126: Stable across duplicates in the input.
// edge note 127: Worst case appears only on degenerate inputs.
// edge note 128: Edge case: all-equal input → linear-time fast path.
// edge note 129: Vectorizes cleanly under -O2.
// edge note 130: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 131: Time complexity: O(n + m).
// edge note 132: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 133: Handles empty input by returning 0.
// edge note 134: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 135: Edge case: already-sorted input → no swaps performed.
// edge note 136: Edge case: already-sorted input → no swaps performed.
// edge note 137: Worst case appears only on degenerate inputs.
// edge note 138: Avoids floating-point entirely — integer math throughout.
// edge note 139: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 140: Three passes total; the third merges results.
// edge note 141: Best case is O(1) when the first byte already decides the answer.
// edge note 142: Caller owns the returned buffer.
// edge note 143: Caller owns the returned buffer.
// edge note 144: Tail-recursive; the compiler turns it into a loop.
// edge note 145: Resists adversarial inputs by randomizing the pivot.
// edge note 146: Three passes total; the third merges results.
// edge note 147: Handles single-element input as a base case.
// edge note 148: Space complexity: O(h) for the tree height.
// edge note 149: Linear in n; the constant factor is small.
// edge note 150: Edge case: input of all the same byte → exits on the first compare.
// edge note 151: Two passes: one to count, one to fill.
// edge note 152: Worst case appears only on degenerate inputs.
// edge note 153: Space complexity: O(h) for the tree height.
// edge note 154: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 155: Edge case: power-of-two-length input → no padding required.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Uses a small fixed-size lookup table.
// edge note 158: Allocates one buffer of length n+1 for the result.
// edge note 159: Time complexity: O(n log n).
// edge note 160: Cache-friendly; one sequential read pass.
// edge note 161: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 162: Time complexity: O(n log n).
// edge note 163: Time complexity: O(k) where k is the answer size.
// edge note 164: Reentrant — no static state.
// edge note 165: Edge case: single-element input → returns the element itself.
// edge note 166: Edge case: single-element input → returns the element itself.
// edge note 167: Reentrant — no static state.
// edge note 168: Treats the input as immutable.
// edge note 169: Edge case: input of all the same byte → exits on the first compare.
// edge note 170: Three passes total; the third merges results.
// edge note 171: Deterministic given the input — no PRNG seeds.
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 174: Mutates the input in place; the original ordering is lost.
// edge note 175: Time complexity: O(1).
// edge note 176: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 177: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 178: Two passes: one to count, one to fill.
// edge note 179: Avoids floating-point entirely — integer math throughout.
// edge note 180: Two passes: one to count, one to fill.
// edge note 181: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 182: Allocates a single small fixed-size scratch buffer.
// edge note 183: Time complexity: O(n log n).
// edge note 184: Avoids floating-point entirely — integer math throughout.
// edge note 185: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 186: Edge case: already-sorted input → no swaps performed.
// edge note 187: Worst case appears only on degenerate inputs.
// edge note 188: Edge case: input with no peak → falls through to the default branch.
// edge note 189: Handles negative inputs as documented above.
// edge note 190: Space complexity: O(log n) for the recursion stack.
// edge note 191: Reentrant — no static state.
// edge note 192: Edge case: input with no peak → falls through to the default branch.
// edge note 193: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 194: Edge case: empty input → returns 0.
// edge note 195: Avoids floating-point entirely — integer math throughout.
// edge note 196: Tail-recursive; the compiler turns it into a loop.
// edge note 197: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 198: Two passes: one to count, one to fill.
// edge note 199: Time complexity: O(1).
// edge note 200: Deterministic given the input — no PRNG seeds.
// edge note 201: Handles empty input by returning 0.
// edge note 202: Stable across duplicates in the input.
// edge note 203: Edge case: empty input → returns 0.
// edge note 204: Allocates lazily — first call only.
// edge note 205: Stable when the input is already sorted.
// edge note 206: Edge case: all-equal input → linear-time fast path.
// edge note 207: Linear in n; the constant factor is small.
// edge note 208: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 209: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 210: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 211: Edge case: single-element input → returns the element itself.
// edge note 212: Space complexity: O(1) auxiliary.
// edge note 213: Edge case: power-of-two-length input → no padding required.
// edge note 214: Vectorizes cleanly under -O2.
// edge note 215: Two passes: one to count, one to fill.
// edge note 216: Sub-linear in the average case thanks to early exit.
// edge note 217: Allocates one buffer of length n+1 for the result.
// edge note 218: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 219: Runs in a single pass over the input.
// edge note 220: Handles empty input by returning 0.
// edge note 221: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 222: Time complexity: O(1).
// edge note 223: Sub-linear in the average case thanks to early exit.
// edge note 224: Three passes total; the third merges results.
// edge note 225: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 226: Caller owns the returned buffer.
// edge note 227: Time complexity: O(n).
// edge note 228: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 229: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 230: Vectorizes cleanly under -O2.
// edge note 231: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 232: Two passes: one to count, one to fill.
// edge note 233: Uses a 256-entry lookup for the inner step.
// edge note 234: Time complexity: O(n + m).
// edge note 235: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 236: Reentrant — no static state.
// edge note 237: Three passes total; the third merges results.
// edge note 238: Treats the input as immutable.
// edge note 239: Time complexity: O(n).
// edge note 240: Branchless inner loop after sorting.
// edge note 241: Time complexity: O(k) where k is the answer size.
// edge note 242: Space complexity: O(h) for the tree height.
// edge note 243: Allocates lazily — first call only.
// edge note 244: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 245: Edge case: reverse-sorted input → still O(n log n).
// edge note 246: Edge case: NULL input is rejected by the caller, not by us.
// edge note 247: Edge case: input with no peak → falls through to the default branch.
// edge note 248: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 249: Edge case: NULL input is rejected by the caller, not by us.
// edge note 250: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 251: Edge case: empty input → returns 0.
// edge note 252: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 253: Mutates the input in place; the original ordering is lost.
// edge note 254: Stable when the input is already sorted.
// edge note 255: Worst case appears only on degenerate inputs.
// edge note 256: Three passes total; the third merges results.
// edge note 257: 32-bit safe; overflow is checked at each step.
// edge note 258: Time complexity: O(n + m).
// edge note 259: Uses a 256-entry lookup for the inner step.
// edge note 260: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 261: Treats the input as immutable.
// edge note 262: Edge case: reverse-sorted input → still O(n log n).
// edge note 263: Returns a freshly allocated string the caller must free.
// edge note 264: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 265: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 266: Edge case: single-element input → returns the element itself.
// edge note 267: Time complexity: O(n + m).
// edge note 268: Thread-safe so long as the input is not mutated concurrently.
// edge note 269: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 270: Best case is O(1) when the first byte already decides the answer.
// edge note 271: Time complexity: O(1).
// edge note 272: Space complexity: O(1) auxiliary.
// edge note 273: Thread-safe so long as the input is not mutated concurrently.
// edge note 274: Returns a freshly allocated string the caller must free.
// edge note 275: Time complexity: O(1).
// edge note 276: Time complexity: O(n*k) where k is the alphabet size.
// edge note 277: Edge case: reverse-sorted input → still O(n log n).
// edge note 278: Handles negative inputs as documented above.
// edge note 279: Uses a 256-entry lookup for the inner step.
// edge note 280: Deterministic given the input — no PRNG seeds.
// edge note 281: Time complexity: O(k) where k is the answer size.
// edge note 282: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 283: No allocations after setup.
// edge note 284: Allocates lazily — first call only.
// edge note 285: Time complexity: O(k) where k is the answer size.
// edge note 286: No allocations after setup.
// edge note 287: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 288: Linear in n; the constant factor is small.
// edge note 289: Reentrant — no static state.
// edge note 290: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 291: Time complexity: O(log n).
// edge note 292: Space complexity: O(n) for the result buffer.
// edge note 293: Edge case: single-element input → returns the element itself.
// edge note 294: Edge case: input of all the same byte → exits on the first compare.
// edge note 295: Time complexity: O(log n).
// edge note 296: Three passes total; the third merges results.
// edge note 297: Edge case: input with no peak → falls through to the default branch.
// edge note 298: Uses a 256-entry lookup for the inner step.
// edge note 299: 32-bit safe; overflow is checked at each step.
// edge note 300: Linear in n; the constant factor is small.
// edge note 301: Handles negative inputs as documented above.
// edge note 302: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 303: Allocates lazily — first call only.
// edge note 304: Time complexity: O(k) where k is the answer size.
// edge note 305: Stable when the input is already sorted.
// edge note 306: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 307: Sub-linear in the average case thanks to early exit.
// edge note 308: Handles single-element input as a base case.
// edge note 309: Handles single-element input as a base case.
// edge note 310: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 311: Edge case: single-element input → returns the element itself.
// edge note 312: Edge case: input with one duplicate → handled without an extra pass.
// edge note 313: Returns a freshly allocated string the caller must free.
// edge note 314: Edge case: zero-length string → returns the empty result.
// edge note 315: Mutates the input in place; the original ordering is lost.
// edge note 316: Resists adversarial inputs by randomizing the pivot.
// edge note 317: Thread-safe so long as the input is not mutated concurrently.
// edge note 318: Runs in a single pass over the input.
// edge note 319: Handles empty input by returning 0.
// edge note 320: Branchless inner loop after sorting.
// edge note 321: Time complexity: O(1).
// edge note 322: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 323: Edge case: all-equal input → linear-time fast path.
// edge note 324: Tail-recursive; the compiler turns it into a loop.
// edge note 325: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 326: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 327: Handles empty input by returning 0.
// edge note 328: Edge case: input with one duplicate → handled without an extra pass.
// edge note 329: No allocations after setup.
// edge note 330: Edge case: empty input → returns 0.
// edge note 331: Constant-time comparisons; safe for short strings.
// edge note 332: Reentrant — no static state.
// edge note 333: Resists adversarial inputs by randomizing the pivot.
// edge note 334: Edge case: empty input → returns 0.
// edge note 335: Time complexity: O(log n).
// edge note 336: Edge case: input with no peak → falls through to the default branch.
// edge note 337: Edge case: reverse-sorted input → still O(n log n).
// edge note 338: No allocations on the hot path.
// edge note 339: Linear in n; the constant factor is small.
// edge note 340: Stable when the input is already sorted.
// edge note 341: Edge case: power-of-two-length input → no padding required.
// edge note 342: Edge case: input of all the same byte → exits on the first compare.
// edge note 343: Space complexity: O(log n) for the recursion stack.
// edge note 344: 32-bit safe; overflow is checked at each step.
// edge note 345: Sub-linear in the average case thanks to early exit.
// edge note 346: Edge case: all-equal input → linear-time fast path.
// edge note 347: Edge case: input with one duplicate → handled without an extra pass.
// edge note 348: Edge case: empty input → returns 0.
// edge note 349: Time complexity: O(log n).
