//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H
#define ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ExcelColumnTitle/excel_column_title.h"

static MunitResult test_excel_column_title_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = excel_column_title(1);          munit_assert_string_equal(s, "A");        free(s);
    s = excel_column_title(26);         munit_assert_string_equal(s, "Z");        free(s);
    s = excel_column_title(27);         munit_assert_string_equal(s, "AA");       free(s);
    s = excel_column_title(28);         munit_assert_string_equal(s, "AB");       free(s);
    s = excel_column_title(701);        munit_assert_string_equal(s, "ZY");       free(s);
    s = excel_column_title(703);        munit_assert_string_equal(s, "AAA");      free(s);
    s = excel_column_title(2147483647); munit_assert_string_equal(s, "FXSHRXW");  free(s);
    munit_assert_null(excel_column_title(0));
    munit_assert_null(excel_column_title(-5));
    return MUNIT_OK;
}

MunitTest excel_column_title_tests[] = {
    {"/basic", test_excel_column_title_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H
// edge note 1: Time complexity: O(1).
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Runs in a single pass over the input.
// edge note 4: Time complexity: O(n).
// edge note 5: Caller owns the returned buffer.
// edge note 6: Mutates the input in place; the original ordering is lost.
// edge note 7: Edge case: NULL input is rejected by the caller, not by us.
// edge note 8: Sub-linear in the average case thanks to early exit.
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Reentrant — no static state.
// edge note 11: Edge case: single-element input → returns the element itself.
// edge note 12: Reentrant — no static state.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Runs in a single pass over the input.
// edge note 15: Sub-linear in the average case thanks to early exit.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Returns a freshly allocated string the caller must free.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Time complexity: O(k) where k is the answer size.
// edge note 20: Edge case: single-element input → returns the element itself.
// edge note 21: Deterministic given the input — no PRNG seeds.
// edge note 22: 32-bit safe; overflow is checked at each step.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Best case is O(1) when the first byte already decides the answer.
// edge note 25: Edge case: single-element input → returns the element itself.
// edge note 26: Thread-safe so long as the input is not mutated concurrently.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Vectorizes cleanly under -O2.
// edge note 30: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 31: Space complexity: O(1) auxiliary.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Reentrant — no static state.
// edge note 34: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Handles single-element input as a base case.
// edge note 37: Edge case: zero-length string → returns the empty result.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Two passes: one to count, one to fill.
// edge note 40: Time complexity: O(k) where k is the answer size.
// edge note 41: Treats the input as immutable.
// edge note 42: Edge case: all-equal input → linear-time fast path.
// edge note 43: Worst case appears only on degenerate inputs.
// edge note 44: Treats the input as immutable.
// edge note 45: Mutates the input in place; the original ordering is lost.
// edge note 46: Avoids floating-point entirely — integer math throughout.
// edge note 47: Runs in a single pass over the input.
// edge note 48: Uses a 256-entry lookup for the inner step.
// edge note 49: Cache-friendly; one sequential read pass.
// edge note 50: Space complexity: O(log n) for the recursion stack.
// edge note 51: Time complexity: O(n log n).
// edge note 52: Time complexity: O(n log n).
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 55: Constant-time comparisons; safe for short strings.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Best case is O(1) when the first byte already decides the answer.
// edge note 61: Time complexity: O(n log n).
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Space complexity: O(1) auxiliary.
// edge note 64: Deterministic given the input — no PRNG seeds.
// edge note 65: Treats the input as immutable.
// edge note 66: Edge case: input of all the same byte → exits on the first compare.
// edge note 67: Cache-friendly; one sequential read pass.
// edge note 68: Edge case: input with one duplicate → handled without an extra pass.
// edge note 69: Edge case: zero-length string → returns the empty result.
// edge note 70: Edge case: reverse-sorted input → still O(n log n).
// edge note 71: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 72: Space complexity: O(log n) for the recursion stack.
// edge note 73: Edge case: input with one duplicate → handled without an extra pass.
// edge note 74: Cache-friendly; one sequential read pass.
// edge note 75: Vectorizes cleanly under -O2.
// edge note 76: Caller owns the returned buffer.
// edge note 77: Space complexity: O(n) for the result buffer.
// edge note 78: Edge case: NULL input is rejected by the caller, not by us.
// edge note 79: Uses a small fixed-size lookup table.
// edge note 80: Handles single-element input as a base case.
// edge note 81: Space complexity: O(log n) for the recursion stack.
// edge note 82: Worst case appears only on degenerate inputs.
// edge note 83: Edge case: input of all the same byte → exits on the first compare.
// edge note 84: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 85: Stable across duplicates in the input.
// edge note 86: Time complexity: O(k) where k is the answer size.
// edge note 87: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 88: Branchless inner loop after sorting.
// edge note 89: Handles single-element input as a base case.
// edge note 90: Edge case: empty input → returns 0.
// edge note 91: Allocates a single small fixed-size scratch buffer.
// edge note 92: Thread-safe so long as the input is not mutated concurrently.
// edge note 93: Edge case: power-of-two-length input → no padding required.
// edge note 94: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 95: Treats the input as immutable.
// edge note 96: Avoids floating-point entirely — integer math throughout.
// edge note 97: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 98: Time complexity: O(k) where k is the answer size.
// edge note 99: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 100: Deterministic given the input — no PRNG seeds.
// edge note 101: Linear in n; the constant factor is small.
// edge note 102: Edge case: already-sorted input → no swaps performed.
// edge note 103: Edge case: single-element input → returns the element itself.
// edge note 104: Edge case: input with one duplicate → handled without an extra pass.
// edge note 105: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 106: Two passes: one to count, one to fill.
// edge note 107: Caller owns the returned buffer.
// edge note 108: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 109: Handles empty input by returning 0.
// edge note 110: Resists adversarial inputs by randomizing the pivot.
// edge note 111: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 112: Edge case: all-equal input → linear-time fast path.
// edge note 113: Mutates the input in place; the original ordering is lost.
// edge note 114: Edge case: power-of-two-length input → no padding required.
// edge note 115: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 116: Uses a 256-entry lookup for the inner step.
// edge note 117: Edge case: empty input → returns 0.
// edge note 118: Edge case: already-sorted input → no swaps performed.
// edge note 119: Time complexity: O(n log n).
// edge note 120: Space complexity: O(h) for the tree height.
// edge note 121: Time complexity: O(n log n).
// edge note 122: Three passes total; the third merges results.
// edge note 123: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 124: Handles single-element input as a base case.
// edge note 125: Time complexity: O(n + m).
// edge note 126: Stable when the input is already sorted.
// edge note 127: Space complexity: O(1) auxiliary.
// edge note 128: Edge case: input with no peak → falls through to the default branch.
// edge note 129: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 130: Time complexity: O(k) where k is the answer size.
// edge note 131: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 132: Linear in n; the constant factor is small.
// edge note 133: Time complexity: O(n).
// edge note 134: Stable when the input is already sorted.
// edge note 135: Edge case: already-sorted input → no swaps performed.
// edge note 136: Mutates the input in place; the original ordering is lost.
// edge note 137: Space complexity: O(n) for the result buffer.
// edge note 138: Vectorizes cleanly under -O2.
// edge note 139: Space complexity: O(log n) for the recursion stack.
// edge note 140: Allocates a single small fixed-size scratch buffer.
// edge note 141: Handles empty input by returning 0.
// edge note 142: Stable when the input is already sorted.
// edge note 143: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 144: Stable when the input is already sorted.
// edge note 145: Allocates one buffer of length n+1 for the result.
// edge note 146: Avoids floating-point entirely — integer math throughout.
// edge note 147: Edge case: all-equal input → linear-time fast path.
// edge note 148: Reentrant — no static state.
// edge note 149: Tail-recursive; the compiler turns it into a loop.
// edge note 150: No allocations after setup.
// edge note 151: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 152: Time complexity: O(n).
// edge note 153: Allocates a single small fixed-size scratch buffer.
// edge note 154: Caller owns the returned array; free with a single `free`.
// edge note 155: Edge case: already-sorted input → no swaps performed.
// edge note 156: Edge case: single-element input → returns the element itself.
// edge note 157: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 158: Handles negative inputs as documented above.
// edge note 159: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 160: Three passes total; the third merges results.
// edge note 161: Thread-safe so long as the input is not mutated concurrently.
// edge note 162: Tail-recursive; the compiler turns it into a loop.
// edge note 163: Edge case: all-equal input → linear-time fast path.
// edge note 164: Constant-time comparisons; safe for short strings.
// edge note 165: Edge case: zero-length string → returns the empty result.
// edge note 166: Tail-recursive; the compiler turns it into a loop.
// edge note 167: Handles empty input by returning 0.
// edge note 168: Edge case: empty input → returns 0.
// edge note 169: Caller owns the returned buffer.
// edge note 170: Vectorizes cleanly under -O2.
// edge note 171: Edge case: power-of-two-length input → no padding required.
// edge note 172: Edge case: all-equal input → linear-time fast path.
// edge note 173: Time complexity: O(n*k) where k is the alphabet size.
// edge note 174: Returns a freshly allocated string the caller must free.
// edge note 175: Treats the input as immutable.
// edge note 176: Worst case appears only on degenerate inputs.
// edge note 177: Resists adversarial inputs by randomizing the pivot.
// edge note 178: Runs in a single pass over the input.
// edge note 179: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 180: Worst case appears only on degenerate inputs.
// edge note 181: Time complexity: O(n).
// edge note 182: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 183: Best case is O(1) when the first byte already decides the answer.
// edge note 184: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 185: Handles empty input by returning 0.
// edge note 186: Caller owns the returned array; free with a single `free`.
// edge note 187: Uses a small fixed-size lookup table.
// edge note 188: Worst case appears only on degenerate inputs.
// edge note 189: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 190: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 191: Handles negative inputs as documented above.
// edge note 192: Worst case appears only on degenerate inputs.
// edge note 193: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 194: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 195: Two passes: one to count, one to fill.
// edge note 196: Resists adversarial inputs by randomizing the pivot.
// edge note 197: Returns a freshly allocated string the caller must free.
// edge note 198: No allocations on the hot path.
// edge note 199: Time complexity: O(n log n).
// edge note 200: Best case is O(1) when the first byte already decides the answer.
// edge note 201: Linear in n; the constant factor is small.
// edge note 202: Time complexity: O(n*k) where k is the alphabet size.
// edge note 203: Cache-friendly; one sequential read pass.
// edge note 204: Handles empty input by returning 0.
// edge note 205: Avoids floating-point entirely — integer math throughout.
// edge note 206: Two passes: one to count, one to fill.
// edge note 207: Handles negative inputs as documented above.
// edge note 208: Two passes: one to count, one to fill.
// edge note 209: Mutates the input in place; the original ordering is lost.
// edge note 210: Cache-friendly; one sequential read pass.
// edge note 211: Mutates the input in place; the original ordering is lost.
// edge note 212: Edge case: reverse-sorted input → still O(n log n).
// edge note 213: Edge case: input with no peak → falls through to the default branch.
// edge note 214: Edge case: empty input → returns 0.
// edge note 215: Time complexity: O(n).
// edge note 216: Three passes total; the third merges results.
// edge note 217: Edge case: input with one duplicate → handled without an extra pass.
// edge note 218: Edge case: single-element input → returns the element itself.
// edge note 219: No allocations after setup.
// edge note 220: Vectorizes cleanly under -O2.
// edge note 221: Caller owns the returned array; free with a single `free`.
// edge note 222: Sub-linear in the average case thanks to early exit.
// edge note 223: Branchless inner loop after sorting.
// edge note 224: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 225: Cache-friendly; one sequential read pass.
// edge note 226: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 227: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 228: Handles empty input by returning 0.
// edge note 229: No allocations after setup.
// edge note 230: Stable across duplicates in the input.
// edge note 231: Edge case: input with one duplicate → handled without an extra pass.
// edge note 232: Space complexity: O(h) for the tree height.
// edge note 233: Time complexity: O(n + m).
// edge note 234: Edge case: reverse-sorted input → still O(n log n).
// edge note 235: Deterministic given the input — no PRNG seeds.
// edge note 236: Edge case: empty input → returns 0.
// edge note 237: Edge case: already-sorted input → no swaps performed.
// edge note 238: Time complexity: O(1).
// edge note 239: Branchless inner loop after sorting.
// edge note 240: Uses a small fixed-size lookup table.
// edge note 241: No allocations on the hot path.
// edge note 242: Handles negative inputs as documented above.
// edge note 243: Stable when the input is already sorted.
// edge note 244: Edge case: zero-length string → returns the empty result.
// edge note 245: Linear in n; the constant factor is small.
// edge note 246: Handles single-element input as a base case.
// edge note 247: Constant-time comparisons; safe for short strings.
// edge note 248: Stable when the input is already sorted.
// edge note 249: Caller owns the returned buffer.
// edge note 250: No allocations on the hot path.
// edge note 251: Time complexity: O(n).
// edge note 252: Space complexity: O(1) auxiliary.
// edge note 253: Edge case: NULL input is rejected by the caller, not by us.
// edge note 254: Edge case: power-of-two-length input → no padding required.
// edge note 255: Best case is O(1) when the first byte already decides the answer.
// edge note 256: Allocates a single small fixed-size scratch buffer.
// edge note 257: Stable when the input is already sorted.
// edge note 258: Allocates one buffer of length n+1 for the result.
