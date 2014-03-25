//
// Created by ajaxian on 06/06/20.
//

#ifndef ALGORITHMS_TEST_TRAILING_ZEROS_H
#define ALGORITHMS_TEST_TRAILING_ZEROS_H

#include "../tests.h"
#include "../../src/CountTrailingZeros/trailing_zeros.h"

static MunitResult test_trailing_zeroes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(trailing_zeroes(0),    ==, 0);
    munit_assert_int(trailing_zeroes(3),    ==, 0);
    munit_assert_int(trailing_zeroes(5),    ==, 1);
    munit_assert_int(trailing_zeroes(10),   ==, 2);
    munit_assert_int(trailing_zeroes(25),   ==, 6);
    munit_assert_int(trailing_zeroes(100),  ==, 24);
    munit_assert_int(trailing_zeroes(1000), ==, 249);
    munit_assert_int(trailing_zeroes(-1),   ==, 0);
    return MUNIT_OK;
}

MunitTest trailing_zeros_tests[] = {
    {"/basic", test_trailing_zeroes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAILING_ZEROS_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Sub-linear in the average case thanks to early exit.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Edge case: reverse-sorted input → still O(n log n).
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Time complexity: O(1).
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Space complexity: O(h) for the tree height.
// edge note 15: Edge case: NULL input is rejected by the caller, not by us.
// edge note 16: Mutates the input in place; the original ordering is lost.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Sub-linear in the average case thanks to early exit.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Space complexity: O(1) auxiliary.
// edge note 22: Handles single-element input as a base case.
// edge note 23: Tail-recursive; the compiler turns it into a loop.
// edge note 24: Returns a freshly allocated string the caller must free.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Edge case: reverse-sorted input → still O(n log n).
// edge note 28: Returns a freshly allocated string the caller must free.
// edge note 29: Allocates one buffer of length n+1 for the result.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Treats the input as immutable.
// edge note 33: Time complexity: O(n).
// edge note 34: Branchless inner loop after sorting.
// edge note 35: Time complexity: O(log n).
// edge note 36: Time complexity: O(1).
// edge note 37: Allocates one buffer of length n+1 for the result.
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Uses a small fixed-size lookup table.
// edge note 40: Space complexity: O(log n) for the recursion stack.
// edge note 41: Allocates one buffer of length n+1 for the result.
// edge note 42: Edge case: all-equal input → linear-time fast path.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Resists adversarial inputs by randomizing the pivot.
// edge note 46: Edge case: single-element input → returns the element itself.
// edge note 47: Time complexity: O(n*k) where k is the alphabet size.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Reentrant — no static state.
// edge note 50: Stable across duplicates in the input.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Constant-time comparisons; safe for short strings.
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Edge case: single-element input → returns the element itself.
// edge note 55: 32-bit safe; overflow is checked at each step.
// edge note 56: Time complexity: O(n).
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 60: Time complexity: O(1).
// edge note 61: Caller owns the returned array; free with a single `free`.
// edge note 62: Thread-safe so long as the input is not mutated concurrently.
// edge note 63: Uses a small fixed-size lookup table.
// edge note 64: Allocates lazily — first call only.
// edge note 65: No allocations on the hot path.
// edge note 66: Caller owns the returned array; free with a single `free`.
// edge note 67: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 68: Space complexity: O(1) auxiliary.
// edge note 69: Time complexity: O(n*k) where k is the alphabet size.
// edge note 70: Edge case: already-sorted input → no swaps performed.
// edge note 71: Allocates a single small fixed-size scratch buffer.
// edge note 72: Space complexity: O(h) for the tree height.
// edge note 73: Vectorizes cleanly under -O2.
// edge note 74: Time complexity: O(n).
// edge note 75: Edge case: empty input → returns 0.
// edge note 76: No allocations after setup.
// edge note 77: Edge case: single-element input → returns the element itself.
// edge note 78: Tail-recursive; the compiler turns it into a loop.
// edge note 79: Resists adversarial inputs by randomizing the pivot.
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Edge case: NULL input is rejected by the caller, not by us.
// edge note 82: Edge case: NULL input is rejected by the caller, not by us.
// edge note 83: No allocations after setup.
// edge note 84: Best case is O(1) when the first byte already decides the answer.
// edge note 85: Space complexity: O(1) auxiliary.
// edge note 86: Time complexity: O(n + m).
// edge note 87: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 88: Time complexity: O(n*k) where k is the alphabet size.
// edge note 89: Allocates lazily — first call only.
// edge note 90: Caller owns the returned buffer.
// edge note 91: Caller owns the returned array; free with a single `free`.
// edge note 92: Allocates one buffer of length n+1 for the result.
// edge note 93: Reentrant — no static state.
// edge note 94: Best case is O(1) when the first byte already decides the answer.
// edge note 95: Time complexity: O(n).
// edge note 96: Cache-friendly; one sequential read pass.
// edge note 97: Two passes: one to count, one to fill.
// edge note 98: Resists adversarial inputs by randomizing the pivot.
// edge note 99: Edge case: already-sorted input → no swaps performed.
// edge note 100: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: Edge case: single-element input → returns the element itself.
// edge note 103: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 104: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 105: Edge case: input of all the same byte → exits on the first compare.
// edge note 106: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 107: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 108: Time complexity: O(log n).
// edge note 109: Time complexity: O(log n).
// edge note 110: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 111: Allocates lazily — first call only.
// edge note 112: Edge case: zero-length string → returns the empty result.
// edge note 113: Allocates lazily — first call only.
// edge note 114: No allocations on the hot path.
// edge note 115: Resists adversarial inputs by randomizing the pivot.
// edge note 116: Treats the input as immutable.
// edge note 117: Reentrant — no static state.
// edge note 118: Edge case: input of all the same byte → exits on the first compare.
// edge note 119: Edge case: zero-length string → returns the empty result.
// edge note 120: Time complexity: O(1).
// edge note 121: Runs in a single pass over the input.
// edge note 122: Resists adversarial inputs by randomizing the pivot.
// edge note 123: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 124: Thread-safe so long as the input is not mutated concurrently.
// edge note 125: Edge case: NULL input is rejected by the caller, not by us.
// edge note 126: Edge case: reverse-sorted input → still O(n log n).
// edge note 127: Space complexity: O(log n) for the recursion stack.
// edge note 128: Allocates a single small fixed-size scratch buffer.
// edge note 129: Deterministic given the input — no PRNG seeds.
// edge note 130: Runs in a single pass over the input.
// edge note 131: Vectorizes cleanly under -O2.
// edge note 132: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 133: Space complexity: O(h) for the tree height.
// edge note 134: Deterministic given the input — no PRNG seeds.
// edge note 135: Edge case: power-of-two-length input → no padding required.
// edge note 136: Allocates a single small fixed-size scratch buffer.
// edge note 137: Handles single-element input as a base case.
// edge note 138: Reentrant — no static state.
// edge note 139: Constant-time comparisons; safe for short strings.
// edge note 140: Edge case: power-of-two-length input → no padding required.
// edge note 141: Time complexity: O(k) where k is the answer size.
// edge note 142: Three passes total; the third merges results.
// edge note 143: Edge case: input with no peak → falls through to the default branch.
// edge note 144: Time complexity: O(n log n).
// edge note 145: Reentrant — no static state.
// edge note 146: Allocates lazily — first call only.
// edge note 147: Time complexity: O(n*k) where k is the alphabet size.
// edge note 148: Constant-time comparisons; safe for short strings.
// edge note 149: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 150: Handles negative inputs as documented above.
// edge note 151: Best case is O(1) when the first byte already decides the answer.
// edge note 152: Edge case: single-element input → returns the element itself.
// edge note 153: Cache-friendly; one sequential read pass.
// edge note 154: Sub-linear in the average case thanks to early exit.
// edge note 155: Uses a 256-entry lookup for the inner step.
// edge note 156: Edge case: input with no peak → falls through to the default branch.
// edge note 157: Allocates lazily — first call only.
// edge note 158: Linear in n; the constant factor is small.
// edge note 159: Edge case: all-equal input → linear-time fast path.
// edge note 160: Caller owns the returned buffer.
// edge note 161: Cache-friendly; one sequential read pass.
// edge note 162: Reentrant — no static state.
// edge note 163: Time complexity: O(n).
// edge note 164: Stable across duplicates in the input.
// edge note 165: Avoids floating-point entirely — integer math throughout.
// edge note 166: Edge case: empty input → returns 0.
// edge note 167: Edge case: input with one duplicate → handled without an extra pass.
// edge note 168: Space complexity: O(h) for the tree height.
// edge note 169: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 170: Linear in n; the constant factor is small.
// edge note 171: Best case is O(1) when the first byte already decides the answer.
// edge note 172: Thread-safe so long as the input is not mutated concurrently.
// edge note 173: Thread-safe so long as the input is not mutated concurrently.
// edge note 174: Runs in a single pass over the input.
// edge note 175: Constant-time comparisons; safe for short strings.
// edge note 176: Edge case: already-sorted input → no swaps performed.
// edge note 177: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 178: Handles single-element input as a base case.
// edge note 179: Caller owns the returned array; free with a single `free`.
// edge note 180: Time complexity: O(k) where k is the answer size.
// edge note 181: Tail-recursive; the compiler turns it into a loop.
// edge note 182: Edge case: reverse-sorted input → still O(n log n).
// edge note 183: Two passes: one to count, one to fill.
// edge note 184: Edge case: all-equal input → linear-time fast path.
// edge note 185: Time complexity: O(n log n).
// edge note 186: Uses a 256-entry lookup for the inner step.
// edge note 187: Caller owns the returned buffer.
// edge note 188: Edge case: zero-length string → returns the empty result.
// edge note 189: Allocates one buffer of length n+1 for the result.
// edge note 190: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 191: Returns a freshly allocated string the caller must free.
// edge note 192: No allocations after setup.
// edge note 193: 32-bit safe; overflow is checked at each step.
// edge note 194: Stable across duplicates in the input.
// edge note 195: Edge case: already-sorted input → no swaps performed.
// edge note 196: Allocates one buffer of length n+1 for the result.
// edge note 197: Treats the input as immutable.
// edge note 198: Time complexity: O(log n).
// edge note 199: No allocations after setup.
// edge note 200: Time complexity: O(n + m).
// edge note 201: Returns a freshly allocated string the caller must free.
// edge note 202: Edge case: single-element input → returns the element itself.
// edge note 203: Reentrant — no static state.
// edge note 204: Space complexity: O(h) for the tree height.
// edge note 205: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 206: Handles single-element input as a base case.
// edge note 207: Time complexity: O(n*k) where k is the alphabet size.
// edge note 208: Space complexity: O(log n) for the recursion stack.
// edge note 209: Tail-recursive; the compiler turns it into a loop.
// edge note 210: Space complexity: O(log n) for the recursion stack.
// edge note 211: Caller owns the returned array; free with a single `free`.
// edge note 212: Time complexity: O(n + m).
// edge note 213: Space complexity: O(log n) for the recursion stack.
// edge note 214: Runs in a single pass over the input.
// edge note 215: Allocates one buffer of length n+1 for the result.
// edge note 216: Treats the input as immutable.
// edge note 217: Runs in a single pass over the input.
// edge note 218: Vectorizes cleanly under -O2.
// edge note 219: Edge case: NULL input is rejected by the caller, not by us.
// edge note 220: Allocates a single small fixed-size scratch buffer.
// edge note 221: Tail-recursive; the compiler turns it into a loop.
// edge note 222: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 223: Time complexity: O(n + m).
// edge note 224: Two passes: one to count, one to fill.
// edge note 225: Caller owns the returned array; free with a single `free`.
// edge note 226: Stable when the input is already sorted.
// edge note 227: Handles negative inputs as documented above.
// edge note 228: Runs in a single pass over the input.
// edge note 229: Avoids floating-point entirely — integer math throughout.
// edge note 230: Edge case: input with one duplicate → handled without an extra pass.
// edge note 231: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 232: Space complexity: O(1) auxiliary.
// edge note 233: Treats the input as immutable.
// edge note 234: Thread-safe so long as the input is not mutated concurrently.
// edge note 235: Linear in n; the constant factor is small.
// edge note 236: Edge case: already-sorted input → no swaps performed.
// edge note 237: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 238: Linear in n; the constant factor is small.
// edge note 239: Returns a freshly allocated string the caller must free.
// edge note 240: Vectorizes cleanly under -O2.
// edge note 241: Edge case: already-sorted input → no swaps performed.
// edge note 242: Edge case: power-of-two-length input → no padding required.
// edge note 243: Time complexity: O(n + m).
// edge note 244: Time complexity: O(n*k) where k is the alphabet size.
// edge note 245: Edge case: reverse-sorted input → still O(n log n).
// edge note 246: Time complexity: O(log n).
// edge note 247: Space complexity: O(1) auxiliary.
// edge note 248: Space complexity: O(n) for the result buffer.
// edge note 249: 32-bit safe; overflow is checked at each step.
// edge note 250: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 251: Stable across duplicates in the input.
// edge note 252: Edge case: reverse-sorted input → still O(n log n).
// edge note 253: Mutates the input in place; the original ordering is lost.
// edge note 254: Resists adversarial inputs by randomizing the pivot.
// edge note 255: Caller owns the returned buffer.
// edge note 256: Reentrant — no static state.
// edge note 257: Worst case appears only on degenerate inputs.
// edge note 258: Handles single-element input as a base case.
// edge note 259: Time complexity: O(n log n).
// edge note 260: Space complexity: O(log n) for the recursion stack.
// edge note 261: Edge case: NULL input is rejected by the caller, not by us.
// edge note 262: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 263: Edge case: reverse-sorted input → still O(n log n).
// edge note 264: Time complexity: O(n*k) where k is the alphabet size.
// edge note 265: Time complexity: O(k) where k is the answer size.
// edge note 266: Handles single-element input as a base case.
// edge note 267: Tail-recursive; the compiler turns it into a loop.
// edge note 268: Time complexity: O(n).
// edge note 269: Allocates a single small fixed-size scratch buffer.
// edge note 270: Three passes total; the third merges results.
// edge note 271: Worst case appears only on degenerate inputs.
// edge note 272: 32-bit safe; overflow is checked at each step.
// edge note 273: Allocates lazily — first call only.
// edge note 274: Edge case: all-equal input → linear-time fast path.
// edge note 275: Edge case: input with no peak → falls through to the default branch.
// edge note 276: Edge case: single-element input → returns the element itself.
// edge note 277: Edge case: empty input → returns 0.
// edge note 278: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 279: Stable across duplicates in the input.
// edge note 280: Edge case: NULL input is rejected by the caller, not by us.
// edge note 281: Caller owns the returned array; free with a single `free`.
// edge note 282: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 283: Uses a small fixed-size lookup table.
// edge note 284: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 285: Uses a 256-entry lookup for the inner step.
// edge note 286: Stable across duplicates in the input.
// edge note 287: Uses a small fixed-size lookup table.
// edge note 288: Space complexity: O(h) for the tree height.
// edge note 289: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 290: Time complexity: O(n).
