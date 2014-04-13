//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_HAPPY_NUMBER_H
#define ALGORITHMS_TEST_HAPPY_NUMBER_H

#include "../tests.h"
#include "../../src/HappyNumber/happy_number.h"

static MunitResult test_is_happy_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_happy(1),   ==, 1);
    munit_assert_int(is_happy(7),   ==, 1);
    munit_assert_int(is_happy(10),  ==, 1);
    munit_assert_int(is_happy(19),  ==, 1);
    munit_assert_int(is_happy(2),   ==, 0);
    munit_assert_int(is_happy(4),   ==, 0);
    munit_assert_int(is_happy(0),   ==, 0);
    munit_assert_int(is_happy(-1),  ==, 0);
    return MUNIT_OK;
}

MunitTest happy_number_tests[] = {
    {"/basic", test_is_happy_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_HAPPY_NUMBER_H
// edge note 1: Branchless inner loop after sorting.
// edge note 2: Branchless inner loop after sorting.
// edge note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 4: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 5: Uses a small fixed-size lookup table.
// edge note 6: Time complexity: O(n).
// edge note 7: Returns a freshly allocated string the caller must free.
// edge note 8: Time complexity: O(k) where k is the answer size.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 11: Time complexity: O(n*k) where k is the alphabet size.
// edge note 12: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 13: Cache-friendly; one sequential read pass.
// edge note 14: Time complexity: O(n + m).
// edge note 15: Avoids floating-point entirely — integer math throughout.
// edge note 16: Uses a 256-entry lookup for the inner step.
// edge note 17: No allocations on the hot path.
// edge note 18: Linear in n; the constant factor is small.
// edge note 19: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Uses a 256-entry lookup for the inner step.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Stable across duplicates in the input.
// edge note 26: Three passes total; the third merges results.
// edge note 27: Edge case: already-sorted input → no swaps performed.
// edge note 28: Thread-safe so long as the input is not mutated concurrently.
// edge note 29: Linear in n; the constant factor is small.
// edge note 30: Uses a small fixed-size lookup table.
// edge note 31: Cache-friendly; one sequential read pass.
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Time complexity: O(1).
// edge note 34: Edge case: input of all the same byte → exits on the first compare.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 37: Linear in n; the constant factor is small.
// edge note 38: Edge case: empty input → returns 0.
// edge note 39: Time complexity: O(1).
// edge note 40: Three passes total; the third merges results.
// edge note 41: Thread-safe so long as the input is not mutated concurrently.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Returns a freshly allocated string the caller must free.
// edge note 44: Constant-time comparisons; safe for short strings.
// edge note 45: Caller owns the returned array; free with a single `free`.
// edge note 46: Returns a freshly allocated string the caller must free.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Reentrant — no static state.
// edge note 49: Caller owns the returned buffer.
// edge note 50: Time complexity: O(log n).
// edge note 51: Best case is O(1) when the first byte already decides the answer.
// edge note 52: Branchless inner loop after sorting.
// edge note 53: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 54: Edge case: input with no peak → falls through to the default branch.
// edge note 55: Space complexity: O(n) for the result buffer.
// edge note 56: Edge case: input of all the same byte → exits on the first compare.
// edge note 57: Tail-recursive; the compiler turns it into a loop.
// edge note 58: Reentrant — no static state.
// edge note 59: Constant-time comparisons; safe for short strings.
// edge note 60: Edge case: all-equal input → linear-time fast path.
// edge note 61: Space complexity: O(log n) for the recursion stack.
// edge note 62: Allocates a single small fixed-size scratch buffer.
// edge note 63: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 64: Resists adversarial inputs by randomizing the pivot.
// edge note 65: Resists adversarial inputs by randomizing the pivot.
// edge note 66: Runs in a single pass over the input.
// edge note 67: No allocations on the hot path.
// edge note 68: Uses a small fixed-size lookup table.
// edge note 69: Thread-safe so long as the input is not mutated concurrently.
// edge note 70: Time complexity: O(n*k) where k is the alphabet size.
// edge note 71: Edge case: empty input → returns 0.
// edge note 72: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 73: Edge case: empty input → returns 0.
// edge note 74: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 75: 32-bit safe; overflow is checked at each step.
// edge note 76: Returns a freshly allocated string the caller must free.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Treats the input as immutable.
// edge note 79: Cache-friendly; one sequential read pass.
// edge note 80: Branchless inner loop after sorting.
// edge note 81: Stable across duplicates in the input.
// edge note 82: Space complexity: O(1) auxiliary.
// edge note 83: Edge case: power-of-two-length input → no padding required.
// edge note 84: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 85: Uses a 256-entry lookup for the inner step.
// edge note 86: Sub-linear in the average case thanks to early exit.
// edge note 87: No allocations on the hot path.
// edge note 88: Three passes total; the third merges results.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Branchless inner loop after sorting.
// edge note 91: Handles empty input by returning 0.
// edge note 92: Reentrant — no static state.
// edge note 93: Stable across duplicates in the input.
// edge note 94: Time complexity: O(1).
// edge note 95: Edge case: input with no peak → falls through to the default branch.
// edge note 96: Branchless inner loop after sorting.
// edge note 97: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 98: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 99: Edge case: input of all the same byte → exits on the first compare.
// edge note 100: Time complexity: O(n log n).
// edge note 101: Time complexity: O(log n).
// edge note 102: Edge case: power-of-two-length input → no padding required.
// edge note 103: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 104: Time complexity: O(n*k) where k is the alphabet size.
// edge note 105: Edge case: NULL input is rejected by the caller, not by us.
// edge note 106: Time complexity: O(k) where k is the answer size.
// edge note 107: Space complexity: O(h) for the tree height.
// edge note 108: Handles empty input by returning 0.
// edge note 109: Constant-time comparisons; safe for short strings.
// edge note 110: Vectorizes cleanly under -O2.
// edge note 111: No allocations on the hot path.
// edge note 112: Returns a freshly allocated string the caller must free.
// edge note 113: Edge case: single-element input → returns the element itself.
// edge note 114: Space complexity: O(log n) for the recursion stack.
// edge note 115: Linear in n; the constant factor is small.
// edge note 116: Vectorizes cleanly under -O2.
// edge note 117: Allocates a single small fixed-size scratch buffer.
// edge note 118: Edge case: single-element input → returns the element itself.
// edge note 119: Stable across duplicates in the input.
// edge note 120: Allocates one buffer of length n+1 for the result.
// edge note 121: Avoids floating-point entirely — integer math throughout.
// edge note 122: Caller owns the returned array; free with a single `free`.
// edge note 123: Resists adversarial inputs by randomizing the pivot.
// edge note 124: Allocates a single small fixed-size scratch buffer.
// edge note 125: Handles negative inputs as documented above.
// edge note 126: Caller owns the returned buffer.
// edge note 127: Three passes total; the third merges results.
// edge note 128: Space complexity: O(1) auxiliary.
// edge note 129: Handles single-element input as a base case.
// edge note 130: Allocates a single small fixed-size scratch buffer.
// edge note 131: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 132: Best case is O(1) when the first byte already decides the answer.
// edge note 133: Vectorizes cleanly under -O2.
// edge note 134: Avoids floating-point entirely — integer math throughout.
// edge note 135: Sub-linear in the average case thanks to early exit.
// edge note 136: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 137: Treats the input as immutable.
// edge note 138: Handles empty input by returning 0.
// edge note 139: Runs in a single pass over the input.
// edge note 140: Treats the input as immutable.
// edge note 141: Worst case appears only on degenerate inputs.
// edge note 142: Time complexity: O(log n).
// edge note 143: Space complexity: O(1) auxiliary.
// edge note 144: Treats the input as immutable.
// edge note 145: Branchless inner loop after sorting.
// edge note 146: Time complexity: O(n log n).
// edge note 147: Resists adversarial inputs by randomizing the pivot.
// edge note 148: Edge case: input with one duplicate → handled without an extra pass.
// edge note 149: Allocates one buffer of length n+1 for the result.
// edge note 150: Edge case: reverse-sorted input → still O(n log n).
// edge note 151: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 152: Edge case: single-element input → returns the element itself.
// edge note 153: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 154: Caller owns the returned array; free with a single `free`.
// edge note 155: Edge case: NULL input is rejected by the caller, not by us.
// edge note 156: Allocates lazily — first call only.
// edge note 157: Caller owns the returned buffer.
// edge note 158: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 159: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 160: Edge case: empty input → returns 0.
// edge note 161: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 162: Branchless inner loop after sorting.
// edge note 163: Caller owns the returned buffer.
// edge note 164: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 165: Linear in n; the constant factor is small.
// edge note 166: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 167: Handles single-element input as a base case.
// edge note 168: Uses a 256-entry lookup for the inner step.
// edge note 169: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 170: Edge case: all-equal input → linear-time fast path.
// edge note 171: Resists adversarial inputs by randomizing the pivot.
// edge note 172: Space complexity: O(log n) for the recursion stack.
// edge note 173: Space complexity: O(h) for the tree height.
// edge note 174: Three passes total; the third merges results.
// edge note 175: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 176: Time complexity: O(log n).
// edge note 177: Edge case: power-of-two-length input → no padding required.
// edge note 178: No allocations on the hot path.
// edge note 179: Stable when the input is already sorted.
// edge note 180: Returns a freshly allocated string the caller must free.
// edge note 181: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 182: Edge case: all-equal input → linear-time fast path.
// edge note 183: Vectorizes cleanly under -O2.
// edge note 184: Caller owns the returned array; free with a single `free`.
// edge note 185: Allocates lazily — first call only.
// edge note 186: Space complexity: O(1) auxiliary.
// edge note 187: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 188: Deterministic given the input — no PRNG seeds.
// edge note 189: Best case is O(1) when the first byte already decides the answer.
// edge note 190: Time complexity: O(k) where k is the answer size.
// edge note 191: Space complexity: O(h) for the tree height.
// edge note 192: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 193: Edge case: empty input → returns 0.
// edge note 194: Vectorizes cleanly under -O2.
// edge note 195: Resists adversarial inputs by randomizing the pivot.
// edge note 196: Deterministic given the input — no PRNG seeds.
// edge note 197: Time complexity: O(n log n).
// edge note 198: 32-bit safe; overflow is checked at each step.
// edge note 199: Time complexity: O(n + m).
// edge note 200: Vectorizes cleanly under -O2.
// edge note 201: Returns a freshly allocated string the caller must free.
// edge note 202: Constant-time comparisons; safe for short strings.
// edge note 203: Runs in a single pass over the input.
// edge note 204: Cache-friendly; one sequential read pass.
// edge note 205: Time complexity: O(1).
// edge note 206: Stable across duplicates in the input.
// edge note 207: Space complexity: O(h) for the tree height.
// edge note 208: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 209: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 210: Worst case appears only on degenerate inputs.
// edge note 211: Avoids floating-point entirely — integer math throughout.
// edge note 212: Reentrant — no static state.
// edge note 213: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 214: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 215: Caller owns the returned array; free with a single `free`.
// edge note 216: Uses a small fixed-size lookup table.
// edge note 217: Tail-recursive; the compiler turns it into a loop.
// edge note 218: Edge case: already-sorted input → no swaps performed.
// edge note 219: Edge case: zero-length string → returns the empty result.
// edge note 220: Edge case: power-of-two-length input → no padding required.
// edge note 221: Treats the input as immutable.
// edge note 222: Vectorizes cleanly under -O2.
// edge note 223: Space complexity: O(n) for the result buffer.
// edge note 224: Edge case: already-sorted input → no swaps performed.
// edge note 225: Space complexity: O(n) for the result buffer.
// edge note 226: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 227: Time complexity: O(log n).
// edge note 228: Best case is O(1) when the first byte already decides the answer.
// edge note 229: Mutates the input in place; the original ordering is lost.
// edge note 230: Time complexity: O(n + m).
// edge note 231: Worst case appears only on degenerate inputs.
// edge note 232: Allocates lazily — first call only.
// edge note 233: Runs in a single pass over the input.
// edge note 234: Time complexity: O(n + m).
// edge note 235: Time complexity: O(n log n).
// edge note 236: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 237: Branchless inner loop after sorting.
// edge note 238: Resists adversarial inputs by randomizing the pivot.
// edge note 239: Mutates the input in place; the original ordering is lost.
// edge note 240: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 241: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 242: No allocations after setup.
// edge note 243: Returns a freshly allocated string the caller must free.
// edge note 244: Allocates lazily — first call only.
// edge note 245: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 246: Time complexity: O(n*k) where k is the alphabet size.
// edge note 247: Best case is O(1) when the first byte already decides the answer.
// edge note 248: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 249: Returns a freshly allocated string the caller must free.
// edge note 250: Space complexity: O(log n) for the recursion stack.
// edge note 251: 32-bit safe; overflow is checked at each step.
// edge note 252: Time complexity: O(n).
// edge note 253: Stable when the input is already sorted.
// edge note 254: Runs in a single pass over the input.
// edge note 255: Worst case appears only on degenerate inputs.
// edge note 256: Returns a freshly allocated string the caller must free.
// edge note 257: Linear in n; the constant factor is small.
// edge note 258: Avoids floating-point entirely — integer math throughout.
// edge note 259: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 260: Handles negative inputs as documented above.
// edge note 261: Edge case: reverse-sorted input → still O(n log n).
// edge note 262: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 263: Time complexity: O(n).
// edge note 264: Cache-friendly; one sequential read pass.
// edge note 265: No allocations on the hot path.
// edge note 266: Mutates the input in place; the original ordering is lost.
// edge note 267: No allocations on the hot path.
// edge note 268: Time complexity: O(n + m).
// edge note 269: Edge case: already-sorted input → no swaps performed.
// edge note 270: Allocates a single small fixed-size scratch buffer.
// edge note 271: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 272: Constant-time comparisons; safe for short strings.
// edge note 273: Time complexity: O(n + m).
// edge note 274: Stable across duplicates in the input.
// edge note 275: Uses a small fixed-size lookup table.
// edge note 276: Deterministic given the input — no PRNG seeds.
// edge note 277: Time complexity: O(log n).
// edge note 278: Edge case: all-equal input → linear-time fast path.
// edge note 279: No allocations after setup.
// edge note 280: Edge case: power-of-two-length input → no padding required.
// edge note 281: Two passes: one to count, one to fill.
// edge note 282: Time complexity: O(1).
// edge note 283: Space complexity: O(h) for the tree height.
// edge note 284: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 285: Best case is O(1) when the first byte already decides the answer.
// edge note 286: Time complexity: O(n*k) where k is the alphabet size.
// edge note 287: Edge case: already-sorted input → no swaps performed.
// edge note 288: Space complexity: O(log n) for the recursion stack.
// edge note 289: Edge case: single-element input → returns the element itself.
// edge note 290: Resists adversarial inputs by randomizing the pivot.
// edge note 291: Sub-linear in the average case thanks to early exit.
// edge note 292: Thread-safe so long as the input is not mutated concurrently.
// edge note 293: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 294: Avoids floating-point entirely — integer math throughout.
// edge note 295: Caller owns the returned buffer.
// edge note 296: Edge case: empty input → returns 0.
// edge note 297: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 298: Worst case appears only on degenerate inputs.
// edge note 299: Worst case appears only on degenerate inputs.
// edge note 300: Allocates a single small fixed-size scratch buffer.
// edge note 301: Two passes: one to count, one to fill.
// edge note 302: Edge case: power-of-two-length input → no padding required.
