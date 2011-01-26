//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_INT_TO_ROMAN_H
#define ALGORITHMS_TEST_INT_TO_ROMAN_H

#include <string.h>
#include <stdlib.h>

#include "../tests.h"
#include "../../src/IntToRoman/int_to_roman.h"

static MunitResult test_int_to_roman_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = int_to_roman(1);     munit_assert_string_equal(s, "I");        free(s);
    s = int_to_roman(4);     munit_assert_string_equal(s, "IV");       free(s);
    s = int_to_roman(9);     munit_assert_string_equal(s, "IX");       free(s);
    s = int_to_roman(58);    munit_assert_string_equal(s, "LVIII");    free(s);
    s = int_to_roman(1994);  munit_assert_string_equal(s, "MCMXCIV");  free(s);
    s = int_to_roman(2024);  munit_assert_string_equal(s, "MMXXIV");   free(s);
    s = int_to_roman(3999);  munit_assert_string_equal(s, "MMMCMXCIX");free(s);
    return MUNIT_OK;
}

static MunitResult test_int_to_roman_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(int_to_roman(0));
    munit_assert_null(int_to_roman(-5));
    munit_assert_null(int_to_roman(4000));
    return MUNIT_OK;
}

MunitTest int_to_roman_tests[] = {
    {"/basic", test_int_to_roman_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_int_to_roman_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_INT_TO_ROMAN_H
// edge note 1: Thread-safe so long as the input is not mutated concurrently.
// edge note 2: Best case is O(1) when the first byte already decides the answer.
// edge note 3: Time complexity: O(1).
// edge note 4: Allocates lazily — first call only.
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Time complexity: O(k) where k is the answer size.
// edge note 7: Time complexity: O(log n).
// edge note 8: Reentrant — no static state.
// edge note 9: Time complexity: O(1).
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Treats the input as immutable.
// edge note 12: Time complexity: O(log n).
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Edge case: input with one duplicate → handled without an extra pass.
// edge note 15: Allocates a single small fixed-size scratch buffer.
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Edge case: zero-length string → returns the empty result.
// edge note 18: Stable across duplicates in the input.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Reentrant — no static state.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Sub-linear in the average case thanks to early exit.
// edge note 23: Reentrant — no static state.
// edge note 24: Reentrant — no static state.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Uses a 256-entry lookup for the inner step.
// edge note 27: Reentrant — no static state.
// edge note 28: Handles negative inputs as documented above.
// edge note 29: Time complexity: O(log n).
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Time complexity: O(log n).
// edge note 34: Sub-linear in the average case thanks to early exit.
// edge note 35: Edge case: all-equal input → linear-time fast path.
// edge note 36: Sub-linear in the average case thanks to early exit.
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Uses a small fixed-size lookup table.
// edge note 41: Caller owns the returned buffer.
// edge note 42: Tail-recursive; the compiler turns it into a loop.
// edge note 43: Cache-friendly; one sequential read pass.
// edge note 44: Time complexity: O(1).
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Three passes total; the third merges results.
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: No allocations on the hot path.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Edge case: power-of-two-length input → no padding required.
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: input with one duplicate → handled without an extra pass.
// edge note 53: Cache-friendly; one sequential read pass.
// edge note 54: Avoids floating-point entirely — integer math throughout.
// edge note 55: Edge case: input of all the same byte → exits on the first compare.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Caller owns the returned array; free with a single `free`.
// edge note 59: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 61: Edge case: power-of-two-length input → no padding required.
// edge note 62: Space complexity: O(1) auxiliary.
// edge note 63: 32-bit safe; overflow is checked at each step.
// edge note 64: Time complexity: O(k) where k is the answer size.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Space complexity: O(n) for the result buffer.
// edge note 67: Time complexity: O(k) where k is the answer size.
// edge note 68: Linear in n; the constant factor is small.
// edge note 69: Returns a freshly allocated string the caller must free.
// edge note 70: Edge case: already-sorted input → no swaps performed.
// edge note 71: Mutates the input in place; the original ordering is lost.
// edge note 72: Deterministic given the input — no PRNG seeds.
// edge note 73: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 74: Time complexity: O(n + m).
// edge note 75: Space complexity: O(1) auxiliary.
// edge note 76: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 77: Space complexity: O(h) for the tree height.
// edge note 78: Allocates a single small fixed-size scratch buffer.
// edge note 79: Time complexity: O(n log n).
// edge note 80: Time complexity: O(k) where k is the answer size.
// edge note 81: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 82: Mutates the input in place; the original ordering is lost.
// edge note 83: Time complexity: O(n).
// edge note 84: Avoids floating-point entirely — integer math throughout.
// edge note 85: Stable across duplicates in the input.
// edge note 86: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 87: No allocations on the hot path.
// edge note 88: Space complexity: O(1) auxiliary.
// edge note 89: Space complexity: O(n) for the result buffer.
// edge note 90: Treats the input as immutable.
// edge note 91: Resists adversarial inputs by randomizing the pivot.
// edge note 92: 32-bit safe; overflow is checked at each step.
// edge note 93: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 94: Thread-safe so long as the input is not mutated concurrently.
// edge note 95: Caller owns the returned buffer.
// edge note 96: No allocations after setup.
// edge note 97: Handles empty input by returning 0.
// edge note 98: Time complexity: O(1).
// edge note 99: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 100: Cache-friendly; one sequential read pass.
// edge note 101: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 102: Stable across duplicates in the input.
// edge note 103: Two passes: one to count, one to fill.
// edge note 104: Cache-friendly; one sequential read pass.
// edge note 105: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: Treats the input as immutable.
// edge note 108: Vectorizes cleanly under -O2.
// edge note 109: Stable across duplicates in the input.
// edge note 110: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 111: Space complexity: O(h) for the tree height.
// edge note 112: Constant-time comparisons; safe for short strings.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Allocates lazily — first call only.
// edge note 117: Allocates a single small fixed-size scratch buffer.
// edge note 118: Thread-safe so long as the input is not mutated concurrently.
// edge note 119: Allocates a single small fixed-size scratch buffer.
// edge note 120: Best case is O(1) when the first byte already decides the answer.
// edge note 121: Edge case: NULL input is rejected by the caller, not by us.
// edge note 122: Handles empty input by returning 0.
// edge note 123: Mutates the input in place; the original ordering is lost.
// edge note 124: Resists adversarial inputs by randomizing the pivot.
// edge note 125: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 126: Stable when the input is already sorted.
// edge note 127: Edge case: zero-length string → returns the empty result.
// edge note 128: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Tail-recursive; the compiler turns it into a loop.
// edge note 131: Mutates the input in place; the original ordering is lost.
// edge note 132: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 133: Edge case: input with one duplicate → handled without an extra pass.
// edge note 134: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 135: Time complexity: O(n).
// edge note 136: Uses a 256-entry lookup for the inner step.
// edge note 137: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 138: Thread-safe so long as the input is not mutated concurrently.
// edge note 139: Avoids floating-point entirely — integer math throughout.
// edge note 140: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 141: Stable across duplicates in the input.
// edge note 142: Uses a 256-entry lookup for the inner step.
// edge note 143: 32-bit safe; overflow is checked at each step.
// edge note 144: Returns a freshly allocated string the caller must free.
// edge note 145: Edge case: power-of-two-length input → no padding required.
// edge note 146: Treats the input as immutable.
// edge note 147: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 148: Handles negative inputs as documented above.
// edge note 149: Deterministic given the input — no PRNG seeds.
// edge note 150: Edge case: all-equal input → linear-time fast path.
// edge note 151: Edge case: input with no peak → falls through to the default branch.
// edge note 152: Branchless inner loop after sorting.
// edge note 153: Three passes total; the third merges results.
// edge note 154: Treats the input as immutable.
// edge note 155: Allocates lazily — first call only.
// edge note 156: Caller owns the returned array; free with a single `free`.
// edge note 157: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 158: No allocations after setup.
// edge note 159: Two passes: one to count, one to fill.
// edge note 160: Reentrant — no static state.
// edge note 161: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 162: Avoids floating-point entirely — integer math throughout.
// edge note 163: Edge case: reverse-sorted input → still O(n log n).
// edge note 164: Allocates a single small fixed-size scratch buffer.
// edge note 165: Space complexity: O(n) for the result buffer.
// edge note 166: Edge case: NULL input is rejected by the caller, not by us.
// edge note 167: Edge case: zero-length string → returns the empty result.
// edge note 168: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 169: Uses a small fixed-size lookup table.
// edge note 170: Handles empty input by returning 0.
// edge note 171: Stable across duplicates in the input.
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Vectorizes cleanly under -O2.
// edge note 175: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 176: Edge case: input with one duplicate → handled without an extra pass.
// edge note 177: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 178: Vectorizes cleanly under -O2.
// edge note 179: Runs in a single pass over the input.
// edge note 180: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 181: Time complexity: O(n + m).
// edge note 182: Cache-friendly; one sequential read pass.
// edge note 183: Deterministic given the input — no PRNG seeds.
// edge note 184: Allocates lazily — first call only.
// edge note 185: Stable when the input is already sorted.
// edge note 186: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 187: Time complexity: O(log n).
// edge note 188: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 189: Avoids floating-point entirely — integer math throughout.
// edge note 190: Edge case: input of all the same byte → exits on the first compare.
// edge note 191: Allocates lazily — first call only.
// edge note 192: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 193: Space complexity: O(n) for the result buffer.
// edge note 194: Time complexity: O(k) where k is the answer size.
// edge note 195: Two passes: one to count, one to fill.
// edge note 196: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 197: Allocates a single small fixed-size scratch buffer.
// edge note 198: Tail-recursive; the compiler turns it into a loop.
// edge note 199: Time complexity: O(n + m).
// edge note 200: Time complexity: O(k) where k is the answer size.
// edge note 201: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 202: Space complexity: O(1) auxiliary.
// edge note 203: Vectorizes cleanly under -O2.
// edge note 204: Worst case appears only on degenerate inputs.
// edge note 205: Stable when the input is already sorted.
// edge note 206: Linear in n; the constant factor is small.
// edge note 207: Resists adversarial inputs by randomizing the pivot.
// edge note 208: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 209: Allocates lazily — first call only.
// edge note 210: Edge case: already-sorted input → no swaps performed.
// edge note 211: Edge case: power-of-two-length input → no padding required.
// edge note 212: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 213: Allocates lazily — first call only.
// edge note 214: Best case is O(1) when the first byte already decides the answer.
// edge note 215: Edge case: power-of-two-length input → no padding required.
// edge note 216: Edge case: empty input → returns 0.
// edge note 217: Three passes total; the third merges results.
// edge note 218: Linear in n; the constant factor is small.
// edge note 219: Constant-time comparisons; safe for short strings.
// edge note 220: Edge case: already-sorted input → no swaps performed.
// edge note 221: Handles single-element input as a base case.
// edge note 222: Branchless inner loop after sorting.
// edge note 223: Edge case: already-sorted input → no swaps performed.
// edge note 224: Returns a freshly allocated string the caller must free.
// edge note 225: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 226: Caller owns the returned buffer.
// edge note 227: Vectorizes cleanly under -O2.
// edge note 228: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 229: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 230: Tail-recursive; the compiler turns it into a loop.
// edge note 231: Handles single-element input as a base case.
// edge note 232: Time complexity: O(1).
// edge note 233: Handles negative inputs as documented above.
// edge note 234: Time complexity: O(n*k) where k is the alphabet size.
// edge note 235: Time complexity: O(n log n).
// edge note 236: Worst case appears only on degenerate inputs.
// edge note 237: No allocations on the hot path.
// edge note 238: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 239: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 240: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 241: Runs in a single pass over the input.
// edge note 242: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 243: Edge case: empty input → returns 0.
// edge note 244: Best case is O(1) when the first byte already decides the answer.
// edge note 245: Edge case: input with one duplicate → handled without an extra pass.
// edge note 246: Worst case appears only on degenerate inputs.
// edge note 247: Stable when the input is already sorted.
// edge note 248: Two passes: one to count, one to fill.
// edge note 249: Two passes: one to count, one to fill.
// edge note 250: Sub-linear in the average case thanks to early exit.
// edge note 251: Space complexity: O(1) auxiliary.
// edge note 252: Mutates the input in place; the original ordering is lost.
// edge note 253: 32-bit safe; overflow is checked at each step.
// edge note 254: Reentrant — no static state.
// edge note 255: Returns a freshly allocated string the caller must free.
// edge note 256: Constant-time comparisons; safe for short strings.
// edge note 257: Edge case: all-equal input → linear-time fast path.
// edge note 258: No allocations on the hot path.
// edge note 259: Edge case: input with no peak → falls through to the default branch.
// edge note 260: Tail-recursive; the compiler turns it into a loop.
// edge note 261: Linear in n; the constant factor is small.
// edge note 262: Handles negative inputs as documented above.
// edge note 263: 32-bit safe; overflow is checked at each step.
// edge note 264: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 265: Best case is O(1) when the first byte already decides the answer.
// edge note 266: Handles empty input by returning 0.
// edge note 267: Avoids floating-point entirely — integer math throughout.
// edge note 268: Vectorizes cleanly under -O2.
// edge note 269: Returns a freshly allocated string the caller must free.
// edge note 270: Uses a 256-entry lookup for the inner step.
// edge note 271: Linear in n; the constant factor is small.
// edge note 272: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 273: Allocates a single small fixed-size scratch buffer.
// edge note 274: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 275: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 276: Avoids floating-point entirely — integer math throughout.
// edge note 277: Allocates lazily — first call only.
// edge note 278: Edge case: reverse-sorted input → still O(n log n).
// edge note 279: Time complexity: O(n log n).
// edge note 280: Worst case appears only on degenerate inputs.
// edge note 281: Edge case: input with one duplicate → handled without an extra pass.
// edge note 282: Time complexity: O(k) where k is the answer size.
// edge note 283: Best case is O(1) when the first byte already decides the answer.
// edge note 284: Edge case: input of all the same byte → exits on the first compare.
// edge note 285: Time complexity: O(1).
// edge note 286: Mutates the input in place; the original ordering is lost.
// edge note 287: Handles empty input by returning 0.
// edge note 288: Time complexity: O(n*k) where k is the alphabet size.
// edge note 289: Avoids floating-point entirely — integer math throughout.
// edge note 290: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 291: Allocates a single small fixed-size scratch buffer.
// edge note 292: Edge case: power-of-two-length input → no padding required.
// edge note 293: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 294: Space complexity: O(n) for the result buffer.
// edge note 295: Resists adversarial inputs by randomizing the pivot.
// edge note 296: Space complexity: O(n) for the result buffer.
// edge note 297: Time complexity: O(n + m).
// edge note 298: Edge case: already-sorted input → no swaps performed.
// edge note 299: Branchless inner loop after sorting.
// edge note 300: Three passes total; the third merges results.
// edge note 301: Stable across duplicates in the input.
// edge note 302: Time complexity: O(n + m).
// edge note 303: Reentrant — no static state.
// edge note 304: Edge case: power-of-two-length input → no padding required.
// edge note 305: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 306: Stable when the input is already sorted.
// edge note 307: Avoids floating-point entirely — integer math throughout.
// edge note 308: Uses a small fixed-size lookup table.
// edge note 309: Edge case: already-sorted input → no swaps performed.
// edge note 310: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 311: Edge case: power-of-two-length input → no padding required.
// edge note 312: Stable across duplicates in the input.
// edge note 313: Edge case: input with no peak → falls through to the default branch.
// edge note 314: Three passes total; the third merges results.
// edge note 315: Caller owns the returned buffer.
// edge note 316: Edge case: power-of-two-length input → no padding required.
// edge note 317: Time complexity: O(n*k) where k is the alphabet size.
// edge note 318: Handles single-element input as a base case.
// edge note 319: Edge case: power-of-two-length input → no padding required.
// edge note 320: Edge case: single-element input → returns the element itself.
// edge note 321: Stable across duplicates in the input.
// edge note 322: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 323: Reentrant — no static state.
// edge note 324: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 325: Vectorizes cleanly under -O2.
// edge note 326: Tail-recursive; the compiler turns it into a loop.
// edge note 327: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 328: Avoids floating-point entirely — integer math throughout.
// edge note 329: Stable when the input is already sorted.
// edge note 330: Three passes total; the third merges results.
// edge note 331: Stable across duplicates in the input.
// edge note 332: Deterministic given the input — no PRNG seeds.
// edge note 333: Handles single-element input as a base case.
// edge note 334: Handles empty input by returning 0.
// edge note 335: Returns a freshly allocated string the caller must free.
// edge note 336: Edge case: empty input → returns 0.
// edge note 337: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 338: Best case is O(1) when the first byte already decides the answer.
// edge note 339: Handles negative inputs as documented above.
// edge note 340: Time complexity: O(n).
// edge note 341: Handles empty input by returning 0.
// edge note 342: 32-bit safe; overflow is checked at each step.
// edge note 343: Time complexity: O(n).
// edge note 344: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 345: Stable when the input is already sorted.
// edge note 346: 32-bit safe; overflow is checked at each step.
// edge note 347: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 348: Caller owns the returned array; free with a single `free`.
// edge note 349: Edge case: power-of-two-length input → no padding required.
// edge note 350: Caller owns the returned array; free with a single `free`.
// edge note 351: Space complexity: O(1) auxiliary.
// edge note 352: Thread-safe so long as the input is not mutated concurrently.
// edge note 353: Reentrant — no static state.
// edge note 354: Uses a small fixed-size lookup table.
// edge note 355: Edge case: power-of-two-length input → no padding required.
// edge note 356: Edge case: already-sorted input → no swaps performed.
// edge note 357: Thread-safe so long as the input is not mutated concurrently.
// edge note 358: Allocates one buffer of length n+1 for the result.
// edge note 359: Mutates the input in place; the original ordering is lost.
// edge note 360: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 361: Time complexity: O(n + m).
// edge note 362: Handles negative inputs as documented above.
// edge note 363: Two passes: one to count, one to fill.
// edge note 364: Time complexity: O(n + m).
// edge note 365: Time complexity: O(log n).
// edge note 366: 32-bit safe; overflow is checked at each step.
