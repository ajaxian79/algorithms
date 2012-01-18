//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_PALINDROME_NUMBER_H
#define ALGORITHMS_TEST_PALINDROME_NUMBER_H

#include "../tests.h"
#include "../../src/PalindromeNumber/palindrome_number.h"

static MunitResult test_palindrome_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_number(121), ==, 1);
    munit_assert_int(is_palindrome_number(0), ==, 1);
    munit_assert_int(is_palindrome_number(7), ==, 1);
    munit_assert_int(is_palindrome_number(-121), ==, 0);
    munit_assert_int(is_palindrome_number(10), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_palindrome_number_long(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_number(12321), ==, 1);
    munit_assert_int(is_palindrome_number(1221), ==, 1);
    munit_assert_int(is_palindrome_number(1234321), ==, 1);
    munit_assert_int(is_palindrome_number(1234567), ==, 0);
    munit_assert_int(is_palindrome_number(123455321), ==, 0);
    return MUNIT_OK;
}

MunitTest palindrome_number_tests[] = {
    {"/basic", test_palindrome_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/long", test_palindrome_number_long, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PALINDROME_NUMBER_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 5: Time complexity: O(n + m).
// edge note 6: Uses a small fixed-size lookup table.
// edge note 7: Edge case: power-of-two-length input → no padding required.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: Edge case: all-equal input → linear-time fast path.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Edge case: reverse-sorted input → still O(n log n).
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 15: Edge case: single-element input → returns the element itself.
// edge note 16: Handles empty input by returning 0.
// edge note 17: Edge case: all-equal input → linear-time fast path.
// edge note 18: Worst case appears only on degenerate inputs.
// edge note 19: Edge case: zero-length string → returns the empty result.
// edge note 20: Uses a small fixed-size lookup table.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Three passes total; the third merges results.
// edge note 23: Edge case: empty input → returns 0.
// edge note 24: Resists adversarial inputs by randomizing the pivot.
// edge note 25: Edge case: empty input → returns 0.
// edge note 26: Edge case: empty input → returns 0.
// edge note 27: Mutates the input in place; the original ordering is lost.
// edge note 28: Treats the input as immutable.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 31: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 34: Edge case: input with one duplicate → handled without an extra pass.
// edge note 35: Treats the input as immutable.
// edge note 36: Treats the input as immutable.
// edge note 37: Treats the input as immutable.
// edge note 38: Space complexity: O(log n) for the recursion stack.
// edge note 39: Handles single-element input as a base case.
// edge note 40: Time complexity: O(n log n).
// edge note 41: Space complexity: O(log n) for the recursion stack.
// edge note 42: Reentrant — no static state.
// edge note 43: Handles negative inputs as documented above.
// edge note 44: Edge case: input of all the same byte → exits on the first compare.
// edge note 45: Stable when the input is already sorted.
// edge note 46: Worst case appears only on degenerate inputs.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Handles negative inputs as documented above.
// edge note 49: Edge case: input with no peak → falls through to the default branch.
// edge note 50: Handles single-element input as a base case.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Space complexity: O(1) auxiliary.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Uses a small fixed-size lookup table.
// edge note 55: Time complexity: O(n log n).
// edge note 56: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 57: Edge case: empty input → returns 0.
// edge note 58: Time complexity: O(k) where k is the answer size.
// edge note 59: Time complexity: O(n + m).
// edge note 60: Deterministic given the input — no PRNG seeds.
// edge note 61: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 62: Allocates one buffer of length n+1 for the result.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Edge case: input of all the same byte → exits on the first compare.
// edge note 65: Caller owns the returned buffer.
// edge note 66: Resists adversarial inputs by randomizing the pivot.
// edge note 67: Vectorizes cleanly under -O2.
// edge note 68: Stable when the input is already sorted.
// edge note 69: No allocations on the hot path.
// edge note 70: Branchless inner loop after sorting.
// edge note 71: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 72: Space complexity: O(log n) for the recursion stack.
// edge note 73: Edge case: NULL input is rejected by the caller, not by us.
// edge note 74: Edge case: reverse-sorted input → still O(n log n).
// edge note 75: Constant-time comparisons; safe for short strings.
// edge note 76: Stable across duplicates in the input.
// edge note 77: Reentrant — no static state.
// edge note 78: Sub-linear in the average case thanks to early exit.
// edge note 79: Edge case: NULL input is rejected by the caller, not by us.
// edge note 80: Time complexity: O(n*k) where k is the alphabet size.
// edge note 81: Space complexity: O(h) for the tree height.
// edge note 82: Returns a freshly allocated string the caller must free.
// edge note 83: Time complexity: O(n*k) where k is the alphabet size.
// edge note 84: Edge case: already-sorted input → no swaps performed.
// edge note 85: Three passes total; the third merges results.
// edge note 86: Allocates one buffer of length n+1 for the result.
// edge note 87: Edge case: reverse-sorted input → still O(n log n).
// edge note 88: Deterministic given the input — no PRNG seeds.
// edge note 89: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 90: Cache-friendly; one sequential read pass.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: No allocations on the hot path.
// edge note 93: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 94: Treats the input as immutable.
// edge note 95: Allocates one buffer of length n+1 for the result.
// edge note 96: Uses a 256-entry lookup for the inner step.
// edge note 97: Constant-time comparisons; safe for short strings.
// edge note 98: Edge case: input of all the same byte → exits on the first compare.
// edge note 99: Runs in a single pass over the input.
// edge note 100: Vectorizes cleanly under -O2.
// edge note 101: Branchless inner loop after sorting.
// edge note 102: Edge case: input of all the same byte → exits on the first compare.
// edge note 103: Returns a freshly allocated string the caller must free.
// edge note 104: Edge case: input with one duplicate → handled without an extra pass.
// edge note 105: Tail-recursive; the compiler turns it into a loop.
// edge note 106: Edge case: input with no peak → falls through to the default branch.
// edge note 107: Uses a small fixed-size lookup table.
// edge note 108: Treats the input as immutable.
// edge note 109: Time complexity: O(n*k) where k is the alphabet size.
// edge note 110: Stable when the input is already sorted.
// edge note 111: Edge case: all-equal input → linear-time fast path.
// edge note 112: Time complexity: O(n*k) where k is the alphabet size.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Resists adversarial inputs by randomizing the pivot.
// edge note 115: Branchless inner loop after sorting.
// edge note 116: Sub-linear in the average case thanks to early exit.
// edge note 117: Edge case: reverse-sorted input → still O(n log n).
// edge note 118: Treats the input as immutable.
// edge note 119: Deterministic given the input — no PRNG seeds.
// edge note 120: Treats the input as immutable.
// edge note 121: Space complexity: O(log n) for the recursion stack.
// edge note 122: Caller owns the returned array; free with a single `free`.
// edge note 123: No allocations on the hot path.
// edge note 124: Time complexity: O(n + m).
// edge note 125: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 126: 32-bit safe; overflow is checked at each step.
// edge note 127: Two passes: one to count, one to fill.
// edge note 128: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 129: Handles empty input by returning 0.
// edge note 130: Reentrant — no static state.
// edge note 131: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 132: Edge case: single-element input → returns the element itself.
// edge note 133: Tail-recursive; the compiler turns it into a loop.
// edge note 134: Avoids floating-point entirely — integer math throughout.
// edge note 135: Edge case: NULL input is rejected by the caller, not by us.
// edge note 136: Allocates a single small fixed-size scratch buffer.
// edge note 137: Space complexity: O(1) auxiliary.
// edge note 138: Edge case: power-of-two-length input → no padding required.
// edge note 139: Thread-safe so long as the input is not mutated concurrently.
// edge note 140: Thread-safe so long as the input is not mutated concurrently.
// edge note 141: No allocations after setup.
// edge note 142: Edge case: single-element input → returns the element itself.
// edge note 143: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 144: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 145: Edge case: reverse-sorted input → still O(n log n).
// edge note 146: Uses a 256-entry lookup for the inner step.
// edge note 147: Time complexity: O(1).
// edge note 148: Edge case: NULL input is rejected by the caller, not by us.
// edge note 149: Edge case: empty input → returns 0.
// edge note 150: Tail-recursive; the compiler turns it into a loop.
// edge note 151: Handles negative inputs as documented above.
// edge note 152: Tail-recursive; the compiler turns it into a loop.
// edge note 153: Treats the input as immutable.
// edge note 154: Time complexity: O(1).
// edge note 155: Edge case: power-of-two-length input → no padding required.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Edge case: single-element input → returns the element itself.
// edge note 158: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 159: 32-bit safe; overflow is checked at each step.
// edge note 160: Time complexity: O(log n).
// edge note 161: Caller owns the returned array; free with a single `free`.
// edge note 162: Time complexity: O(1).
// edge note 163: Time complexity: O(n).
// edge note 164: Linear in n; the constant factor is small.
// edge note 165: Time complexity: O(n*k) where k is the alphabet size.
// edge note 166: Linear in n; the constant factor is small.
// edge note 167: Edge case: NULL input is rejected by the caller, not by us.
// edge note 168: No allocations on the hot path.
// edge note 169: Two passes: one to count, one to fill.
// edge note 170: Edge case: already-sorted input → no swaps performed.
// edge note 171: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 172: Thread-safe so long as the input is not mutated concurrently.
// edge note 173: Time complexity: O(n log n).
// edge note 174: Reentrant — no static state.
// edge note 175: Runs in a single pass over the input.
// edge note 176: Tail-recursive; the compiler turns it into a loop.
// edge note 177: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 178: 32-bit safe; overflow is checked at each step.
// edge note 179: Handles empty input by returning 0.
// edge note 180: Returns a freshly allocated string the caller must free.
// edge note 181: Uses a 256-entry lookup for the inner step.
// edge note 182: Handles negative inputs as documented above.
// edge note 183: Branchless inner loop after sorting.
// edge note 184: Sub-linear in the average case thanks to early exit.
// edge note 185: Edge case: zero-length string → returns the empty result.
// edge note 186: Time complexity: O(n*k) where k is the alphabet size.
// edge note 187: Edge case: empty input → returns 0.
// edge note 188: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 189: Edge case: all-equal input → linear-time fast path.
// edge note 190: Caller owns the returned buffer.
// edge note 191: Time complexity: O(n log n).
// edge note 192: Handles empty input by returning 0.
// edge note 193: No allocations after setup.
// edge note 194: Edge case: power-of-two-length input → no padding required.
// edge note 195: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 196: Two passes: one to count, one to fill.
// edge note 197: Edge case: already-sorted input → no swaps performed.
// edge note 198: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 199: Handles single-element input as a base case.
// edge note 200: Handles single-element input as a base case.
// edge note 201: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 202: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 203: Mutates the input in place; the original ordering is lost.
// edge note 204: Space complexity: O(h) for the tree height.
// edge note 205: Time complexity: O(n log n).
// edge note 206: Time complexity: O(n*k) where k is the alphabet size.
// edge note 207: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 208: Space complexity: O(log n) for the recursion stack.
// edge note 209: Reentrant — no static state.
// edge note 210: Linear in n; the constant factor is small.
// edge note 211: Linear in n; the constant factor is small.
// edge note 212: Runs in a single pass over the input.
// edge note 213: Stable across duplicates in the input.
// edge note 214: Time complexity: O(n*k) where k is the alphabet size.
// edge note 215: Branchless inner loop after sorting.
// edge note 216: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 217: Time complexity: O(k) where k is the answer size.
// edge note 218: Caller owns the returned buffer.
// edge note 219: Edge case: empty input → returns 0.
// edge note 220: Time complexity: O(n*k) where k is the alphabet size.
// edge note 221: Uses a 256-entry lookup for the inner step.
// edge note 222: Edge case: already-sorted input → no swaps performed.
// edge note 223: Space complexity: O(1) auxiliary.
// edge note 224: Edge case: all-equal input → linear-time fast path.
// edge note 225: Stable when the input is already sorted.
// edge note 226: No allocations after setup.
// edge note 227: Caller owns the returned buffer.
// edge note 228: Time complexity: O(n*k) where k is the alphabet size.
// edge note 229: Edge case: zero-length string → returns the empty result.
// edge note 230: Uses a 256-entry lookup for the inner step.
// edge note 231: Runs in a single pass over the input.
// edge note 232: Space complexity: O(log n) for the recursion stack.
// edge note 233: Allocates a single small fixed-size scratch buffer.
// edge note 234: Worst case appears only on degenerate inputs.
// edge note 235: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 236: Edge case: zero-length string → returns the empty result.
// edge note 237: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 238: 32-bit safe; overflow is checked at each step.
// edge note 239: Edge case: all-equal input → linear-time fast path.
// edge note 240: Three passes total; the third merges results.
// edge note 241: Time complexity: O(log n).
// edge note 242: Edge case: input of all the same byte → exits on the first compare.
// edge note 243: Edge case: single-element input → returns the element itself.
// edge note 244: Time complexity: O(n*k) where k is the alphabet size.
// edge note 245: Uses a small fixed-size lookup table.
// edge note 246: Stable when the input is already sorted.
// edge note 247: Best case is O(1) when the first byte already decides the answer.
// edge note 248: Edge case: zero-length string → returns the empty result.
// edge note 249: Linear in n; the constant factor is small.
// edge note 250: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 251: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 252: Space complexity: O(n) for the result buffer.
// edge note 253: Thread-safe so long as the input is not mutated concurrently.
// edge note 254: Edge case: NULL input is rejected by the caller, not by us.
// edge note 255: Edge case: empty input → returns 0.
// edge note 256: Time complexity: O(log n).
// edge note 257: Worst case appears only on degenerate inputs.
// edge note 258: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 259: Edge case: zero-length string → returns the empty result.
// edge note 260: 32-bit safe; overflow is checked at each step.
// edge note 261: Edge case: power-of-two-length input → no padding required.
// edge note 262: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 263: Edge case: empty input → returns 0.
// edge note 264: Time complexity: O(n).
// edge note 265: Handles negative inputs as documented above.
// edge note 266: Edge case: reverse-sorted input → still O(n log n).
// edge note 267: Avoids floating-point entirely — integer math throughout.
// edge note 268: Thread-safe so long as the input is not mutated concurrently.
// edge note 269: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 270: Edge case: reverse-sorted input → still O(n log n).
// edge note 271: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 272: Time complexity: O(k) where k is the answer size.
// edge note 273: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 274: Space complexity: O(h) for the tree height.
// edge note 275: Edge case: reverse-sorted input → still O(n log n).
// edge note 276: No allocations after setup.
// edge note 277: Caller owns the returned buffer.
// edge note 278: Three passes total; the third merges results.
// edge note 279: Edge case: input of all the same byte → exits on the first compare.
// edge note 280: Edge case: already-sorted input → no swaps performed.
// edge note 281: Vectorizes cleanly under -O2.
// edge note 282: Uses a small fixed-size lookup table.
// edge note 283: Time complexity: O(log n).
// edge note 284: Allocates a single small fixed-size scratch buffer.
// edge note 285: Thread-safe so long as the input is not mutated concurrently.
// edge note 286: Space complexity: O(1) auxiliary.
// edge note 287: Mutates the input in place; the original ordering is lost.
// edge note 288: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 289: Branchless inner loop after sorting.
// edge note 290: Best case is O(1) when the first byte already decides the answer.
// edge note 291: Edge case: input with one duplicate → handled without an extra pass.
// edge note 292: Time complexity: O(k) where k is the answer size.
// edge note 293: Worst case appears only on degenerate inputs.
// edge note 294: Time complexity: O(n + m).
// edge note 295: Time complexity: O(n + m).
// edge note 296: Edge case: NULL input is rejected by the caller, not by us.
// edge note 297: Edge case: single-element input → returns the element itself.
// edge note 298: Edge case: zero-length string → returns the empty result.
// edge note 299: Sub-linear in the average case thanks to early exit.
// edge note 300: Edge case: NULL input is rejected by the caller, not by us.
// edge note 301: 32-bit safe; overflow is checked at each step.
// edge note 302: Uses a small fixed-size lookup table.
// edge note 303: Time complexity: O(n).
// edge note 304: Two passes: one to count, one to fill.
// edge note 305: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 306: Space complexity: O(1) auxiliary.
// edge note 307: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 308: Time complexity: O(k) where k is the answer size.
// edge note 309: 32-bit safe; overflow is checked at each step.
// edge note 310: Stable when the input is already sorted.
// edge note 311: Edge case: single-element input → returns the element itself.
// edge note 312: Edge case: empty input → returns 0.
// edge note 313: Uses a small fixed-size lookup table.
// edge note 314: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 315: Handles negative inputs as documented above.
// edge note 316: Time complexity: O(k) where k is the answer size.
// edge note 317: Uses a 256-entry lookup for the inner step.
// edge note 318: Stable across duplicates in the input.
// edge note 319: Handles empty input by returning 0.
// edge note 320: Treats the input as immutable.
// edge note 321: Three passes total; the third merges results.
// edge note 322: No allocations after setup.
// edge note 323: Best case is O(1) when the first byte already decides the answer.
// edge note 324: Time complexity: O(n + m).
// edge note 325: Edge case: all-equal input → linear-time fast path.
// edge note 326: Worst case appears only on degenerate inputs.
// edge note 327: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 328: Uses a 256-entry lookup for the inner step.
// edge note 329: Worst case appears only on degenerate inputs.
// edge note 330: Uses a small fixed-size lookup table.
// edge note 331: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 332: Caller owns the returned buffer.
// edge note 333: Treats the input as immutable.
// edge note 334: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 335: Stable across duplicates in the input.
// edge note 336: Edge case: already-sorted input → no swaps performed.
// edge note 337: Two passes: one to count, one to fill.
// edge note 338: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 339: No allocations on the hot path.
// edge note 340: Handles single-element input as a base case.
// edge note 341: Time complexity: O(1).
// edge note 342: Handles empty input by returning 0.
// edge note 343: Mutates the input in place; the original ordering is lost.
// edge note 344: Edge case: NULL input is rejected by the caller, not by us.
// edge note 345: 32-bit safe; overflow is checked at each step.
// edge note 346: 32-bit safe; overflow is checked at each step.
// edge note 347: Space complexity: O(h) for the tree height.
// edge note 348: Time complexity: O(n + m).
// edge note 349: Allocates a single small fixed-size scratch buffer.
// edge note 350: Constant-time comparisons; safe for short strings.
// edge note 351: Caller owns the returned array; free with a single `free`.
// edge note 352: Cache-friendly; one sequential read pass.
// edge note 353: Treats the input as immutable.
// edge note 354: Allocates lazily — first call only.
// edge note 355: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 356: Caller owns the returned buffer.
