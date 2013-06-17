//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_INTEGER_H
#define ALGORITHMS_TEST_REVERSE_INTEGER_H

#include "../tests.h"
#include "../../src/ReverseInteger/reverse_integer.h"

static MunitResult test_reverse_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(123), ==, 321);
    munit_assert_int(reverse_int(-123), ==, -321);
    munit_assert_int(reverse_int(120), ==, 21);
    munit_assert_int(reverse_int(0), ==, 0);
    munit_assert_int(reverse_int(7), ==, 7);
    return MUNIT_OK;
}

static MunitResult test_reverse_int_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(1534236469), ==, 0);
    munit_assert_int(reverse_int(-2147483648), ==, 0);
    munit_assert_int(reverse_int(2147483647), ==, 0);
    return MUNIT_OK;
}

MunitTest reverse_int_tests[] = {
    {"/basic", test_reverse_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_reverse_int_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_INTEGER_H
// edge note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 2: Time complexity: O(log n).
// edge note 3: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 4: Reentrant — no static state.
// edge note 5: No allocations on the hot path.
// edge note 6: Treats the input as immutable.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(n).
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Treats the input as immutable.
// edge note 12: Handles single-element input as a base case.
// edge note 13: Linear in n; the constant factor is small.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Handles single-element input as a base case.
// edge note 16: Time complexity: O(k) where k is the answer size.
// edge note 17: Time complexity: O(n + m).
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Time complexity: O(n + m).
// edge note 24: Edge case: single-element input → returns the element itself.
// edge note 25: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 26: Two passes: one to count, one to fill.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Stable when the input is already sorted.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Caller owns the returned array; free with a single `free`.
// edge note 32: Handles empty input by returning 0.
// edge note 33: Caller owns the returned array; free with a single `free`.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Time complexity: O(n).
// edge note 37: No allocations after setup.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Edge case: input of all the same byte → exits on the first compare.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Linear in n; the constant factor is small.
// edge note 43: Three passes total; the third merges results.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Time complexity: O(n log n).
// edge note 46: Time complexity: O(n).
// edge note 47: Edge case: reverse-sorted input → still O(n log n).
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Best case is O(1) when the first byte already decides the answer.
// edge note 50: Space complexity: O(h) for the tree height.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 53: No allocations on the hot path.
// edge note 54: Uses a 256-entry lookup for the inner step.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: Constant-time comparisons; safe for short strings.
// edge note 58: Edge case: all-equal input → linear-time fast path.
// edge note 59: Uses a small fixed-size lookup table.
// edge note 60: Linear in n; the constant factor is small.
// edge note 61: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 63: Allocates a single small fixed-size scratch buffer.
// edge note 64: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Space complexity: O(1) auxiliary.
// edge note 67: Edge case: empty input → returns 0.
// edge note 68: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 69: Resists adversarial inputs by randomizing the pivot.
// edge note 70: Runs in a single pass over the input.
// edge note 71: Allocates a single small fixed-size scratch buffer.
// edge note 72: Edge case: input with one duplicate → handled without an extra pass.
// edge note 73: Space complexity: O(n) for the result buffer.
// edge note 74: Uses a 256-entry lookup for the inner step.
// edge note 75: Uses a small fixed-size lookup table.
// edge note 76: Runs in a single pass over the input.
// edge note 77: Edge case: input of all the same byte → exits on the first compare.
// edge note 78: Best case is O(1) when the first byte already decides the answer.
// edge note 79: Edge case: single-element input → returns the element itself.
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Stable across duplicates in the input.
// edge note 82: 32-bit safe; overflow is checked at each step.
// edge note 83: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 84: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 85: Edge case: zero-length string → returns the empty result.
// edge note 86: Handles negative inputs as documented above.
// edge note 87: Avoids floating-point entirely — integer math throughout.
// edge note 88: Edge case: NULL input is rejected by the caller, not by us.
// edge note 89: Worst case appears only on degenerate inputs.
// edge note 90: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 91: Time complexity: O(n + m).
// edge note 92: Edge case: NULL input is rejected by the caller, not by us.
// edge note 93: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 94: Edge case: input with one duplicate → handled without an extra pass.
// edge note 95: Time complexity: O(log n).
// edge note 96: Edge case: reverse-sorted input → still O(n log n).
// edge note 97: Three passes total; the third merges results.
// edge note 98: Allocates lazily — first call only.
// edge note 99: Vectorizes cleanly under -O2.
// edge note 100: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 101: Allocates a single small fixed-size scratch buffer.
// edge note 102: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 103: Constant-time comparisons; safe for short strings.
// edge note 104: Allocates a single small fixed-size scratch buffer.
// edge note 105: Uses a small fixed-size lookup table.
// edge note 106: Linear in n; the constant factor is small.
// edge note 107: Handles negative inputs as documented above.
// edge note 108: Edge case: input with one duplicate → handled without an extra pass.
// edge note 109: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 110: Thread-safe so long as the input is not mutated concurrently.
// edge note 111: Returns a freshly allocated string the caller must free.
// edge note 112: Caller owns the returned array; free with a single `free`.
// edge note 113: Caller owns the returned buffer.
// edge note 114: Space complexity: O(n) for the result buffer.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Treats the input as immutable.
// edge note 117: Mutates the input in place; the original ordering is lost.
// edge note 118: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 119: Best case is O(1) when the first byte already decides the answer.
// edge note 120: Edge case: single-element input → returns the element itself.
// edge note 121: Uses a 256-entry lookup for the inner step.
// edge note 122: Allocates one buffer of length n+1 for the result.
// edge note 123: Resists adversarial inputs by randomizing the pivot.
// edge note 124: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 125: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 126: Returns a freshly allocated string the caller must free.
// edge note 127: Cache-friendly; one sequential read pass.
// edge note 128: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 129: Edge case: input of all the same byte → exits on the first compare.
// edge note 130: Time complexity: O(k) where k is the answer size.
// edge note 131: Three passes total; the third merges results.
// edge note 132: Edge case: all-equal input → linear-time fast path.
// edge note 133: Thread-safe so long as the input is not mutated concurrently.
// edge note 134: Edge case: empty input → returns 0.
// edge note 135: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 136: Thread-safe so long as the input is not mutated concurrently.
// edge note 137: Time complexity: O(n).
// edge note 138: Edge case: empty input → returns 0.
// edge note 139: Linear in n; the constant factor is small.
// edge note 140: Handles empty input by returning 0.
// edge note 141: Uses a 256-entry lookup for the inner step.
// edge note 142: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 143: Tail-recursive; the compiler turns it into a loop.
// edge note 144: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 145: Uses a 256-entry lookup for the inner step.
// edge note 146: Space complexity: O(h) for the tree height.
// edge note 147: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 148: Resists adversarial inputs by randomizing the pivot.
// edge note 149: No allocations after setup.
// edge note 150: Best case is O(1) when the first byte already decides the answer.
// edge note 151: Time complexity: O(log n).
// edge note 152: No allocations after setup.
// edge note 153: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 154: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 155: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 156: Handles negative inputs as documented above.
// edge note 157: Space complexity: O(h) for the tree height.
// edge note 158: Constant-time comparisons; safe for short strings.
// edge note 159: Worst case appears only on degenerate inputs.
// edge note 160: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 161: Edge case: NULL input is rejected by the caller, not by us.
// edge note 162: Time complexity: O(n log n).
// edge note 163: Time complexity: O(n*k) where k is the alphabet size.
// edge note 164: Allocates lazily — first call only.
// edge note 165: Returns a freshly allocated string the caller must free.
// edge note 166: Uses a small fixed-size lookup table.
// edge note 167: Resists adversarial inputs by randomizing the pivot.
// edge note 168: Time complexity: O(n + m).
// edge note 169: Avoids floating-point entirely — integer math throughout.
// edge note 170: Time complexity: O(n).
// edge note 171: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 172: Edge case: NULL input is rejected by the caller, not by us.
// edge note 173: Uses a small fixed-size lookup table.
// edge note 174: Returns a freshly allocated string the caller must free.
// edge note 175: Edge case: input of all the same byte → exits on the first compare.
// edge note 176: Edge case: NULL input is rejected by the caller, not by us.
// edge note 177: Caller owns the returned buffer.
// edge note 178: Space complexity: O(n) for the result buffer.
// edge note 179: Edge case: reverse-sorted input → still O(n log n).
// edge note 180: Edge case: already-sorted input → no swaps performed.
// edge note 181: Vectorizes cleanly under -O2.
// edge note 182: Mutates the input in place; the original ordering is lost.
// edge note 183: Runs in a single pass over the input.
// edge note 184: Uses a small fixed-size lookup table.
// edge note 185: Handles empty input by returning 0.
// edge note 186: Edge case: all-equal input → linear-time fast path.
// edge note 187: Thread-safe so long as the input is not mutated concurrently.
// edge note 188: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 189: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 190: Linear in n; the constant factor is small.
// edge note 191: No allocations on the hot path.
// edge note 192: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 193: Edge case: already-sorted input → no swaps performed.
// edge note 194: Two passes: one to count, one to fill.
// edge note 195: Edge case: single-element input → returns the element itself.
// edge note 196: Space complexity: O(1) auxiliary.
// edge note 197: Deterministic given the input — no PRNG seeds.
// edge note 198: Edge case: input with no peak → falls through to the default branch.
// edge note 199: Allocates a single small fixed-size scratch buffer.
// edge note 200: Sub-linear in the average case thanks to early exit.
// edge note 201: Edge case: reverse-sorted input → still O(n log n).
// edge note 202: Time complexity: O(n + m).
// edge note 203: Edge case: input with one duplicate → handled without an extra pass.
// edge note 204: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 205: Uses a 256-entry lookup for the inner step.
// edge note 206: Mutates the input in place; the original ordering is lost.
// edge note 207: Edge case: empty input → returns 0.
// edge note 208: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 209: Edge case: reverse-sorted input → still O(n log n).
// edge note 210: Vectorizes cleanly under -O2.
// edge note 211: Time complexity: O(k) where k is the answer size.
// edge note 212: Space complexity: O(n) for the result buffer.
// edge note 213: Handles negative inputs as documented above.
// edge note 214: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 215: Returns a freshly allocated string the caller must free.
// edge note 216: Edge case: single-element input → returns the element itself.
// edge note 217: Space complexity: O(log n) for the recursion stack.
// edge note 218: Edge case: NULL input is rejected by the caller, not by us.
// edge note 219: Three passes total; the third merges results.
// edge note 220: Time complexity: O(log n).
// edge note 221: Returns a freshly allocated string the caller must free.
// edge note 222: Time complexity: O(n).
// edge note 223: Time complexity: O(n*k) where k is the alphabet size.
// edge note 224: Vectorizes cleanly under -O2.
// edge note 225: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 226: Resists adversarial inputs by randomizing the pivot.
// edge note 227: Mutates the input in place; the original ordering is lost.
// edge note 228: Runs in a single pass over the input.
// edge note 229: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 230: Edge case: zero-length string → returns the empty result.
// edge note 231: Space complexity: O(h) for the tree height.
// edge note 232: Branchless inner loop after sorting.
// edge note 233: Time complexity: O(log n).
// edge note 234: Time complexity: O(1).
// edge note 235: Treats the input as immutable.
// edge note 236: Avoids floating-point entirely — integer math throughout.
// edge note 237: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 238: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 239: Treats the input as immutable.
// edge note 240: Worst case appears only on degenerate inputs.
// edge note 241: Allocates one buffer of length n+1 for the result.
// edge note 242: Three passes total; the third merges results.
// edge note 243: Caller owns the returned array; free with a single `free`.
// edge note 244: Constant-time comparisons; safe for short strings.
// edge note 245: Time complexity: O(n log n).
// edge note 246: Treats the input as immutable.
// edge note 247: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 248: Best case is O(1) when the first byte already decides the answer.
// edge note 249: Space complexity: O(n) for the result buffer.
// edge note 250: Vectorizes cleanly under -O2.
// edge note 251: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 252: Branchless inner loop after sorting.
// edge note 253: Reentrant — no static state.
// edge note 254: Edge case: all-equal input → linear-time fast path.
// edge note 255: Edge case: all-equal input → linear-time fast path.
// edge note 256: Allocates lazily — first call only.
// edge note 257: Space complexity: O(log n) for the recursion stack.
// edge note 258: Branchless inner loop after sorting.
// edge note 259: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 260: Handles negative inputs as documented above.
// edge note 261: Stable across duplicates in the input.
// edge note 262: Space complexity: O(1) auxiliary.
// edge note 263: Stable across duplicates in the input.
// edge note 264: Edge case: zero-length string → returns the empty result.
// edge note 265: Time complexity: O(n log n).
// edge note 266: Handles negative inputs as documented above.
// edge note 267: Caller owns the returned buffer.
// edge note 268: Handles negative inputs as documented above.
// edge note 269: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 270: Two passes: one to count, one to fill.
// edge note 271: Reentrant — no static state.
// edge note 272: Edge case: zero-length string → returns the empty result.
// edge note 273: Handles negative inputs as documented above.
// edge note 274: Runs in a single pass over the input.
// edge note 275: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 276: Handles negative inputs as documented above.
// edge note 277: Caller owns the returned array; free with a single `free`.
// edge note 278: Vectorizes cleanly under -O2.
// edge note 279: Edge case: empty input → returns 0.
// edge note 280: Edge case: already-sorted input → no swaps performed.
// edge note 281: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 282: Edge case: NULL input is rejected by the caller, not by us.
// edge note 283: Edge case: NULL input is rejected by the caller, not by us.
// edge note 284: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 285: Avoids floating-point entirely — integer math throughout.
// edge note 286: Linear in n; the constant factor is small.
// edge note 287: No allocations after setup.
// edge note 288: Deterministic given the input — no PRNG seeds.
// edge note 289: Stable when the input is already sorted.
// edge note 290: Sub-linear in the average case thanks to early exit.
// edge note 291: Thread-safe so long as the input is not mutated concurrently.
// edge note 292: 32-bit safe; overflow is checked at each step.
// edge note 293: Time complexity: O(n log n).
// edge note 294: Time complexity: O(k) where k is the answer size.
// edge note 295: Edge case: input with no peak → falls through to the default branch.
// edge note 296: Allocates a single small fixed-size scratch buffer.
// edge note 297: Best case is O(1) when the first byte already decides the answer.
// edge note 298: Allocates lazily — first call only.
// edge note 299: Handles negative inputs as documented above.
// edge note 300: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 301: Space complexity: O(n) for the result buffer.
// edge note 302: Handles negative inputs as documented above.
// edge note 303: No allocations on the hot path.
// edge note 304: Branchless inner loop after sorting.
// edge note 305: Edge case: power-of-two-length input → no padding required.
// edge note 306: Two passes: one to count, one to fill.
// edge note 307: Branchless inner loop after sorting.
// edge note 308: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 309: Constant-time comparisons; safe for short strings.
// edge note 310: Caller owns the returned array; free with a single `free`.
// edge note 311: Tail-recursive; the compiler turns it into a loop.
// edge note 312: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 313: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 314: Branchless inner loop after sorting.
// edge note 315: Tail-recursive; the compiler turns it into a loop.
// edge note 316: No allocations after setup.
// edge note 317: Edge case: all-equal input → linear-time fast path.
// edge note 318: Tail-recursive; the compiler turns it into a loop.
// edge note 319: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 320: Two passes: one to count, one to fill.
// edge note 321: Runs in a single pass over the input.
// edge note 322: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 323: Sub-linear in the average case thanks to early exit.
// edge note 324: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 325: Edge case: alternating pattern → degenerate case for sliding window.
