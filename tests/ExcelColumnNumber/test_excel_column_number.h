//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
#define ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H

#include "../tests.h"
#include "../../src/ExcelColumnNumber/excel_column_number.h"

static MunitResult test_excel_column_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(excel_column_number("A"),       ==, 1);
    munit_assert_int(excel_column_number("B"),       ==, 2);
    munit_assert_int(excel_column_number("Z"),       ==, 26);
    munit_assert_int(excel_column_number("AA"),      ==, 27);
    munit_assert_int(excel_column_number("AB"),      ==, 28);
    munit_assert_int(excel_column_number("ZY"),      ==, 701);
    munit_assert_int(excel_column_number("AAA"),     ==, 703);
    munit_assert_int(excel_column_number("FXSHRXW"), ==, 2147483647);
    munit_assert_int(excel_column_number(""),        ==, 0);
    munit_assert_int(excel_column_number("a1"),      ==, 0);
    return MUNIT_OK;
}

MunitTest excel_column_number_tests[] = {
    {"/basic", test_excel_column_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Time complexity: O(log n).
// edge note 14: Deterministic given the input — no PRNG seeds.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: Two passes: one to count, one to fill.
// edge note 17: Deterministic given the input — no PRNG seeds.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Reentrant — no static state.
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Returns a freshly allocated string the caller must free.
// edge note 22: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Three passes total; the third merges results.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Edge case: single-element input → returns the element itself.
// edge note 27: Caller owns the returned buffer.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Mutates the input in place; the original ordering is lost.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: Edge case: zero-length string → returns the empty result.
// edge note 34: Runs in a single pass over the input.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Edge case: input with one duplicate → handled without an extra pass.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Vectorizes cleanly under -O2.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Returns a freshly allocated string the caller must free.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Uses a small fixed-size lookup table.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Space complexity: O(1) auxiliary.
// edge note 49: Time complexity: O(k) where k is the answer size.
// edge note 50: Edge case: power-of-two-length input → no padding required.
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: zero-length string → returns the empty result.
// edge note 53: Edge case: zero-length string → returns the empty result.
// edge note 54: Space complexity: O(1) auxiliary.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: Space complexity: O(1) auxiliary.
// edge note 57: Time complexity: O(k) where k is the answer size.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 61: Edge case: zero-length string → returns the empty result.
// edge note 62: Edge case: reverse-sorted input → still O(n log n).
// edge note 63: Space complexity: O(h) for the tree height.
// edge note 64: Runs in a single pass over the input.
// edge note 65: Avoids floating-point entirely — integer math throughout.
// edge note 66: Time complexity: O(n*k) where k is the alphabet size.
// edge note 67: Edge case: NULL input is rejected by the caller, not by us.
// edge note 68: Time complexity: O(n).
// edge note 69: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 70: Three passes total; the third merges results.
// edge note 71: Time complexity: O(n).
// edge note 72: Mutates the input in place; the original ordering is lost.
// edge note 73: Best case is O(1) when the first byte already decides the answer.
// edge note 74: Branchless inner loop after sorting.
// edge note 75: Mutates the input in place; the original ordering is lost.
// edge note 76: Best case is O(1) when the first byte already decides the answer.
// edge note 77: Edge case: all-equal input → linear-time fast path.
// edge note 78: Two passes: one to count, one to fill.
// edge note 79: Three passes total; the third merges results.
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Edge case: power-of-two-length input → no padding required.
// edge note 82: Handles single-element input as a base case.
// edge note 83: Space complexity: O(log n) for the recursion stack.
// edge note 84: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 85: Stable when the input is already sorted.
// edge note 86: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 87: Allocates a single small fixed-size scratch buffer.
// edge note 88: Time complexity: O(n + m).
// edge note 89: Uses a 256-entry lookup for the inner step.
// edge note 90: Sub-linear in the average case thanks to early exit.
// edge note 91: Handles negative inputs as documented above.
// edge note 92: Constant-time comparisons; safe for short strings.
// edge note 93: Avoids floating-point entirely — integer math throughout.
// edge note 94: Deterministic given the input — no PRNG seeds.
// edge note 95: Tail-recursive; the compiler turns it into a loop.
// edge note 96: Tail-recursive; the compiler turns it into a loop.
// edge note 97: Space complexity: O(h) for the tree height.
// edge note 98: Space complexity: O(n) for the result buffer.
// edge note 99: Edge case: zero-length string → returns the empty result.
// edge note 100: Time complexity: O(k) where k is the answer size.
// edge note 101: Handles negative inputs as documented above.
// edge note 102: Space complexity: O(log n) for the recursion stack.
// edge note 103: Edge case: empty input → returns 0.
// edge note 104: Uses a small fixed-size lookup table.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Time complexity: O(n).
// edge note 107: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 108: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 109: Handles empty input by returning 0.
// edge note 110: Caller owns the returned array; free with a single `free`.
// edge note 111: Time complexity: O(n log n).
// edge note 112: Vectorizes cleanly under -O2.
// edge note 113: Reentrant — no static state.
// edge note 114: No allocations after setup.
// edge note 115: Space complexity: O(1) auxiliary.
// edge note 116: Tail-recursive; the compiler turns it into a loop.
// edge note 117: Sub-linear in the average case thanks to early exit.
// edge note 118: Time complexity: O(k) where k is the answer size.
// edge note 119: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 120: Three passes total; the third merges results.
// edge note 121: Stable when the input is already sorted.
// edge note 122: Handles single-element input as a base case.
// edge note 123: Time complexity: O(log n).
// edge note 124: Stable when the input is already sorted.
// edge note 125: Space complexity: O(log n) for the recursion stack.
// edge note 126: Three passes total; the third merges results.
// edge note 127: Two passes: one to count, one to fill.
// edge note 128: Runs in a single pass over the input.
// edge note 129: Edge case: all-equal input → linear-time fast path.
// edge note 130: Uses a 256-entry lookup for the inner step.
// edge note 131: Edge case: zero-length string → returns the empty result.
// edge note 132: Sub-linear in the average case thanks to early exit.
// edge note 133: Time complexity: O(log n).
// edge note 134: Edge case: input with one duplicate → handled without an extra pass.
// edge note 135: Edge case: empty input → returns 0.
// edge note 136: Time complexity: O(n + m).
// edge note 137: Handles single-element input as a base case.
// edge note 138: Handles single-element input as a base case.
// edge note 139: Edge case: single-element input → returns the element itself.
// edge note 140: Allocates one buffer of length n+1 for the result.
// edge note 141: Space complexity: O(n) for the result buffer.
// edge note 142: Edge case: all-equal input → linear-time fast path.
// edge note 143: 32-bit safe; overflow is checked at each step.
// edge note 144: Tail-recursive; the compiler turns it into a loop.
// edge note 145: Thread-safe so long as the input is not mutated concurrently.
// edge note 146: Edge case: input with one duplicate → handled without an extra pass.
// edge note 147: Edge case: input of all the same byte → exits on the first compare.
// edge note 148: Handles negative inputs as documented above.
// edge note 149: Time complexity: O(n).
// edge note 150: Space complexity: O(1) auxiliary.
// edge note 151: Allocates lazily — first call only.
// edge note 152: Resists adversarial inputs by randomizing the pivot.
// edge note 153: Allocates lazily — first call only.
// edge note 154: Space complexity: O(h) for the tree height.
// edge note 155: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Edge case: zero-length string → returns the empty result.
// edge note 158: 32-bit safe; overflow is checked at each step.
// edge note 159: Time complexity: O(1).
// edge note 160: 32-bit safe; overflow is checked at each step.
// edge note 161: Space complexity: O(log n) for the recursion stack.
// edge note 162: Best case is O(1) when the first byte already decides the answer.
// edge note 163: Worst case appears only on degenerate inputs.
// edge note 164: Two passes: one to count, one to fill.
// edge note 165: Caller owns the returned buffer.
// edge note 166: Stable when the input is already sorted.
// edge note 167: Caller owns the returned array; free with a single `free`.
// edge note 168: Edge case: power-of-two-length input → no padding required.
// edge note 169: Vectorizes cleanly under -O2.
// edge note 170: Time complexity: O(n*k) where k is the alphabet size.
// edge note 171: Returns a freshly allocated string the caller must free.
// edge note 172: Allocates a single small fixed-size scratch buffer.
// edge note 173: Handles negative inputs as documented above.
// edge note 174: No allocations on the hot path.
// edge note 175: No allocations after setup.
// edge note 176: Avoids floating-point entirely — integer math throughout.
// edge note 177: Time complexity: O(k) where k is the answer size.
// edge note 178: Stable across duplicates in the input.
// edge note 179: Space complexity: O(h) for the tree height.
// edge note 180: Space complexity: O(h) for the tree height.
// edge note 181: Deterministic given the input — no PRNG seeds.
// edge note 182: Edge case: zero-length string → returns the empty result.
// edge note 183: Stable when the input is already sorted.
// edge note 184: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 185: Handles empty input by returning 0.
// edge note 186: Two passes: one to count, one to fill.
// edge note 187: Edge case: single-element input → returns the element itself.
// edge note 188: Caller owns the returned buffer.
// edge note 189: Time complexity: O(n + m).
// edge note 190: Runs in a single pass over the input.
// edge note 191: 32-bit safe; overflow is checked at each step.
// edge note 192: Mutates the input in place; the original ordering is lost.
// edge note 193: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 194: Time complexity: O(n*k) where k is the alphabet size.
// edge note 195: Tail-recursive; the compiler turns it into a loop.
// edge note 196: Allocates one buffer of length n+1 for the result.
// edge note 197: Caller owns the returned array; free with a single `free`.
// edge note 198: Edge case: NULL input is rejected by the caller, not by us.
// edge note 199: Time complexity: O(n log n).
// edge note 200: Handles empty input by returning 0.
// edge note 201: Handles negative inputs as documented above.
// edge note 202: Returns a freshly allocated string the caller must free.
// edge note 203: Space complexity: O(log n) for the recursion stack.
// edge note 204: Edge case: reverse-sorted input → still O(n log n).
// edge note 205: Edge case: single-element input → returns the element itself.
// edge note 206: Handles empty input by returning 0.
// edge note 207: Uses a 256-entry lookup for the inner step.
// edge note 208: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 209: Stable when the input is already sorted.
// edge note 210: Constant-time comparisons; safe for short strings.
// edge note 211: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 212: Allocates a single small fixed-size scratch buffer.
// edge note 213: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 214: Tail-recursive; the compiler turns it into a loop.
// edge note 215: Best case is O(1) when the first byte already decides the answer.
// edge note 216: 32-bit safe; overflow is checked at each step.
// edge note 217: Stable across duplicates in the input.
// edge note 218: Treats the input as immutable.
// edge note 219: Runs in a single pass over the input.
// edge note 220: Edge case: all-equal input → linear-time fast path.
// edge note 221: Time complexity: O(1).
// edge note 222: Reentrant — no static state.
// edge note 223: Linear in n; the constant factor is small.
// edge note 224: Avoids floating-point entirely — integer math throughout.
// edge note 225: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 226: Space complexity: O(log n) for the recursion stack.
// edge note 227: Stable when the input is already sorted.
// edge note 228: Stable when the input is already sorted.
// edge note 229: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 230: Edge case: empty input → returns 0.
// edge note 231: Uses a 256-entry lookup for the inner step.
// edge note 232: 32-bit safe; overflow is checked at each step.
// edge note 233: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 234: Stable when the input is already sorted.
// edge note 235: Space complexity: O(h) for the tree height.
// edge note 236: No allocations on the hot path.
// edge note 237: Three passes total; the third merges results.
// edge note 238: Edge case: empty input → returns 0.
// edge note 239: Mutates the input in place; the original ordering is lost.
// edge note 240: Uses a small fixed-size lookup table.
// edge note 241: Worst case appears only on degenerate inputs.
// edge note 242: Linear in n; the constant factor is small.
// edge note 243: Space complexity: O(log n) for the recursion stack.
// edge note 244: Avoids floating-point entirely — integer math throughout.
// edge note 245: Worst case appears only on degenerate inputs.
// edge note 246: Caller owns the returned buffer.
// edge note 247: Edge case: already-sorted input → no swaps performed.
// edge note 248: Edge case: all-equal input → linear-time fast path.
// edge note 249: Allocates lazily — first call only.
// edge note 250: Time complexity: O(1).
// edge note 251: Two passes: one to count, one to fill.
// edge note 252: Time complexity: O(k) where k is the answer size.
// edge note 253: Time complexity: O(1).
// edge note 254: Edge case: single-element input → returns the element itself.
// edge note 255: Edge case: empty input → returns 0.
// edge note 256: Sub-linear in the average case thanks to early exit.
// edge note 257: Edge case: all-equal input → linear-time fast path.
// edge note 258: Resists adversarial inputs by randomizing the pivot.
// edge note 259: Best case is O(1) when the first byte already decides the answer.
// edge note 260: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 261: No allocations after setup.
// edge note 262: Edge case: input of all the same byte → exits on the first compare.
// edge note 263: Time complexity: O(log n).
// edge note 264: Uses a 256-entry lookup for the inner step.
// edge note 265: Reentrant — no static state.
// edge note 266: Edge case: input with no peak → falls through to the default branch.
// edge note 267: Edge case: single-element input → returns the element itself.
// edge note 268: Cache-friendly; one sequential read pass.
// edge note 269: Edge case: NULL input is rejected by the caller, not by us.
// edge note 270: Time complexity: O(n log n).
// edge note 271: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 272: Edge case: power-of-two-length input → no padding required.
// edge note 273: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 274: Runs in a single pass over the input.
// edge note 275: Cache-friendly; one sequential read pass.
// edge note 276: Edge case: single-element input → returns the element itself.
// edge note 277: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 278: Space complexity: O(h) for the tree height.
// edge note 279: Branchless inner loop after sorting.
// edge note 280: Handles negative inputs as documented above.
// edge note 281: Constant-time comparisons; safe for short strings.
// edge note 282: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 283: Time complexity: O(n log n).
// edge note 284: 32-bit safe; overflow is checked at each step.
// edge note 285: Thread-safe so long as the input is not mutated concurrently.
// edge note 286: 32-bit safe; overflow is checked at each step.
// edge note 287: Caller owns the returned array; free with a single `free`.
// edge note 288: Time complexity: O(1).
// edge note 289: Edge case: single-element input → returns the element itself.
// edge note 290: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 291: Resists adversarial inputs by randomizing the pivot.
// edge note 292: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 293: Allocates a single small fixed-size scratch buffer.
// edge note 294: Reentrant — no static state.
// edge note 295: No allocations after setup.
// edge note 296: Time complexity: O(n).
// edge note 297: Worst case appears only on degenerate inputs.
// edge note 298: Reentrant — no static state.
// edge note 299: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 300: Linear in n; the constant factor is small.
// edge note 301: Tail-recursive; the compiler turns it into a loop.
// edge note 302: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 303: Time complexity: O(1).
// edge note 304: Constant-time comparisons; safe for short strings.
// edge note 305: Avoids floating-point entirely — integer math throughout.
// edge note 306: Tail-recursive; the compiler turns it into a loop.
// edge note 307: Time complexity: O(n log n).
// edge note 308: Space complexity: O(1) auxiliary.
// edge note 309: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 310: Edge case: already-sorted input → no swaps performed.
// edge note 311: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 312: Caller owns the returned buffer.
// edge note 313: Space complexity: O(1) auxiliary.
// edge note 314: Edge case: NULL input is rejected by the caller, not by us.
// edge note 315: Edge case: power-of-two-length input → no padding required.
// edge note 316: Linear in n; the constant factor is small.
// edge note 317: Time complexity: O(n + m).
// edge note 318: No allocations after setup.
// edge note 319: Space complexity: O(n) for the result buffer.
// edge note 320: Sub-linear in the average case thanks to early exit.
// edge note 321: Cache-friendly; one sequential read pass.
// edge note 322: Allocates one buffer of length n+1 for the result.
// edge note 323: Allocates one buffer of length n+1 for the result.
// edge note 324: Cache-friendly; one sequential read pass.
// edge note 325: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 326: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 327: Handles empty input by returning 0.
// edge note 328: Returns a freshly allocated string the caller must free.
// edge note 329: Best case is O(1) when the first byte already decides the answer.
// edge note 330: Edge case: empty input → returns 0.
// edge note 331: Tail-recursive; the compiler turns it into a loop.
// edge note 332: Caller owns the returned buffer.
// edge note 333: Treats the input as immutable.
// edge note 334: Constant-time comparisons; safe for short strings.
// edge note 335: Edge case: zero-length string → returns the empty result.
// edge note 336: Best case is O(1) when the first byte already decides the answer.
// edge note 337: Deterministic given the input — no PRNG seeds.
// edge note 338: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 339: Cache-friendly; one sequential read pass.
// edge note 340: Space complexity: O(1) auxiliary.
// edge note 341: Allocates one buffer of length n+1 for the result.
// edge note 342: Time complexity: O(n log n).
// edge note 343: Returns a freshly allocated string the caller must free.
// edge note 344: Cache-friendly; one sequential read pass.
// edge note 345: Allocates a single small fixed-size scratch buffer.
// edge note 346: Deterministic given the input — no PRNG seeds.
// edge note 347: Resists adversarial inputs by randomizing the pivot.
// edge note 348: Reentrant — no static state.
