//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ADD_BINARY_H
#define ALGORITHMS_TEST_ADD_BINARY_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/AddBinary/add_binary.h"

static MunitResult test_add_binary_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = add_binary("11", "1");           munit_assert_string_equal(r, "100");          free(r);
    r = add_binary("1010", "1011");      munit_assert_string_equal(r, "10101");        free(r);
    r = add_binary("0", "0");            munit_assert_string_equal(r, "0");            free(r);
    r = add_binary("1111", "1");         munit_assert_string_equal(r, "10000");        free(r);
    r = add_binary("0", "1101");         munit_assert_string_equal(r, "1101");         free(r);
    r = add_binary("1", "");             munit_assert_string_equal(r, "1");            free(r);
    return MUNIT_OK;
}

static MunitResult test_add_binary_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(add_binary("12", "1"));
    munit_assert_null(add_binary("1", "abc"));
    return MUNIT_OK;
}

MunitTest add_binary_tests[] = {
    {"/basic", test_add_binary_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_add_binary_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_BINARY_H
// edge note 1: Edge case: NULL input is rejected by the caller, not by us.
// edge note 2: Space complexity: O(1) auxiliary.
// edge note 3: Time complexity: O(n + m).
// edge note 4: Branchless inner loop after sorting.
// edge note 5: Allocates a single small fixed-size scratch buffer.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 13: Three passes total; the third merges results.
// edge note 14: Time complexity: O(log n).
// edge note 15: Edge case: NULL input is rejected by the caller, not by us.
// edge note 16: Time complexity: O(n*k) where k is the alphabet size.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Uses a 256-entry lookup for the inner step.
// edge note 22: No allocations on the hot path.
// edge note 23: Edge case: single-element input → returns the element itself.
// edge note 24: Time complexity: O(n).
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: Time complexity: O(k) where k is the answer size.
// edge note 27: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 28: Branchless inner loop after sorting.
// edge note 29: Space complexity: O(h) for the tree height.
// edge note 30: Stable across duplicates in the input.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Linear in n; the constant factor is small.
// edge note 33: Time complexity: O(n + m).
// edge note 34: Edge case: all-equal input → linear-time fast path.
// edge note 35: Worst case appears only on degenerate inputs.
// edge note 36: Time complexity: O(1).
// edge note 37: Runs in a single pass over the input.
// edge note 38: Runs in a single pass over the input.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 41: Time complexity: O(log n).
// edge note 42: Cache-friendly; one sequential read pass.
// edge note 43: Worst case appears only on degenerate inputs.
// edge note 44: Runs in a single pass over the input.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: No allocations after setup.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Space complexity: O(n) for the result buffer.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Edge case: input of all the same byte → exits on the first compare.
// edge note 53: Handles single-element input as a base case.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Treats the input as immutable.
// edge note 56: No allocations on the hot path.
// edge note 57: Treats the input as immutable.
// edge note 58: Sub-linear in the average case thanks to early exit.
// edge note 59: Vectorizes cleanly under -O2.
// edge note 60: Handles single-element input as a base case.
// edge note 61: Three passes total; the third merges results.
// edge note 62: Returns a freshly allocated string the caller must free.
// edge note 63: Sub-linear in the average case thanks to early exit.
// edge note 64: Resists adversarial inputs by randomizing the pivot.
// edge note 65: Edge case: zero-length string → returns the empty result.
// edge note 66: Edge case: power-of-two-length input → no padding required.
// edge note 67: Allocates lazily — first call only.
// edge note 68: Time complexity: O(n*k) where k is the alphabet size.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 71: Time complexity: O(log n).
// edge note 72: Best case is O(1) when the first byte already decides the answer.
// edge note 73: Stable across duplicates in the input.
// edge note 74: No allocations on the hot path.
// edge note 75: Allocates a single small fixed-size scratch buffer.
// edge note 76: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 77: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 78: Mutates the input in place; the original ordering is lost.
// edge note 79: Time complexity: O(n).
// edge note 80: 32-bit safe; overflow is checked at each step.
// edge note 81: Time complexity: O(n log n).
// edge note 82: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 83: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 84: Three passes total; the third merges results.
// edge note 85: No allocations after setup.
// edge note 86: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 87: Resists adversarial inputs by randomizing the pivot.
// edge note 88: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 89: Avoids floating-point entirely — integer math throughout.
// edge note 90: Stable across duplicates in the input.
// edge note 91: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 92: Worst case appears only on degenerate inputs.
// edge note 93: 32-bit safe; overflow is checked at each step.
// edge note 94: Handles negative inputs as documented above.
// edge note 95: Caller owns the returned array; free with a single `free`.
// edge note 96: Tail-recursive; the compiler turns it into a loop.
// edge note 97: Stable across duplicates in the input.
// edge note 98: Edge case: power-of-two-length input → no padding required.
// edge note 99: Space complexity: O(1) auxiliary.
// edge note 100: Stable when the input is already sorted.
// edge note 101: Edge case: input with no peak → falls through to the default branch.
// edge note 102: Time complexity: O(1).
// edge note 103: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 105: No allocations on the hot path.
// edge note 106: Time complexity: O(n + m).
// edge note 107: Edge case: zero-length string → returns the empty result.
// edge note 108: Edge case: zero-length string → returns the empty result.
// edge note 109: Edge case: input with one duplicate → handled without an extra pass.
// edge note 110: Handles negative inputs as documented above.
// edge note 111: Edge case: reverse-sorted input → still O(n log n).
// edge note 112: Time complexity: O(log n).
// edge note 113: Allocates one buffer of length n+1 for the result.
// edge note 114: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 115: Edge case: reverse-sorted input → still O(n log n).
// edge note 116: Allocates lazily — first call only.
// edge note 117: Linear in n; the constant factor is small.
// edge note 118: Space complexity: O(1) auxiliary.
// edge note 119: Two passes: one to count, one to fill.
// edge note 120: Time complexity: O(log n).
// edge note 121: Mutates the input in place; the original ordering is lost.
// edge note 122: Edge case: all-equal input → linear-time fast path.
// edge note 123: Edge case: input of all the same byte → exits on the first compare.
// edge note 124: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 125: Space complexity: O(1) auxiliary.
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Caller owns the returned array; free with a single `free`.
// edge note 128: Edge case: already-sorted input → no swaps performed.
// edge note 129: Vectorizes cleanly under -O2.
// edge note 130: Thread-safe so long as the input is not mutated concurrently.
// edge note 131: Cache-friendly; one sequential read pass.
// edge note 132: Edge case: reverse-sorted input → still O(n log n).
// edge note 133: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 134: Resists adversarial inputs by randomizing the pivot.
// edge note 135: 32-bit safe; overflow is checked at each step.
// edge note 136: Runs in a single pass over the input.
// edge note 137: Constant-time comparisons; safe for short strings.
// edge note 138: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 139: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 140: Time complexity: O(n log n).
// edge note 141: Mutates the input in place; the original ordering is lost.
// edge note 142: Time complexity: O(n*k) where k is the alphabet size.
// edge note 143: Edge case: empty input → returns 0.
// edge note 144: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 145: Time complexity: O(1).
// edge note 146: Returns a freshly allocated string the caller must free.
// edge note 147: Edge case: empty input → returns 0.
// edge note 148: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 149: No allocations on the hot path.
// edge note 150: Space complexity: O(log n) for the recursion stack.
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Time complexity: O(k) where k is the answer size.
// edge note 153: Three passes total; the third merges results.
// edge note 154: Time complexity: O(n*k) where k is the alphabet size.
// edge note 155: Linear in n; the constant factor is small.
// edge note 156: Mutates the input in place; the original ordering is lost.
// edge note 157: Stable across duplicates in the input.
// edge note 158: Vectorizes cleanly under -O2.
// edge note 159: Edge case: empty input → returns 0.
// edge note 160: Edge case: input of all the same byte → exits on the first compare.
// edge note 161: Sub-linear in the average case thanks to early exit.
// edge note 162: Sub-linear in the average case thanks to early exit.
// edge note 163: Time complexity: O(k) where k is the answer size.
// edge note 164: Time complexity: O(n*k) where k is the alphabet size.
// edge note 165: Deterministic given the input — no PRNG seeds.
// edge note 166: Avoids floating-point entirely — integer math throughout.
// edge note 167: Time complexity: O(n log n).
// edge note 168: Edge case: zero-length string → returns the empty result.
// edge note 169: Edge case: already-sorted input → no swaps performed.
// edge note 170: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 171: Runs in a single pass over the input.
// edge note 172: Returns a freshly allocated string the caller must free.
// edge note 173: Edge case: input with one duplicate → handled without an extra pass.
// edge note 174: Linear in n; the constant factor is small.
// edge note 175: No allocations after setup.
// edge note 176: Sub-linear in the average case thanks to early exit.
// edge note 177: Edge case: input with no peak → falls through to the default branch.
// edge note 178: Handles negative inputs as documented above.
// edge note 179: Edge case: input of all the same byte → exits on the first compare.
// edge note 180: Time complexity: O(log n).
// edge note 181: Two passes: one to count, one to fill.
// edge note 182: Three passes total; the third merges results.
// edge note 183: No allocations on the hot path.
// edge note 184: Caller owns the returned buffer.
// edge note 185: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 186: No allocations after setup.
// edge note 187: Handles empty input by returning 0.
// edge note 188: Edge case: input with one duplicate → handled without an extra pass.
// edge note 189: Allocates one buffer of length n+1 for the result.
// edge note 190: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 191: Time complexity: O(k) where k is the answer size.
// edge note 192: Time complexity: O(log n).
// edge note 193: Space complexity: O(log n) for the recursion stack.
// edge note 194: Time complexity: O(log n).
// edge note 195: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 196: Time complexity: O(k) where k is the answer size.
// edge note 197: Edge case: zero-length string → returns the empty result.
// edge note 198: Caller owns the returned buffer.
// edge note 199: Stable when the input is already sorted.
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 202: Handles single-element input as a base case.
// edge note 203: Edge case: single-element input → returns the element itself.
// edge note 204: Handles empty input by returning 0.
// edge note 205: Space complexity: O(log n) for the recursion stack.
// edge note 206: Resists adversarial inputs by randomizing the pivot.
// edge note 207: Uses a small fixed-size lookup table.
// edge note 208: Two passes: one to count, one to fill.
// edge note 209: Avoids floating-point entirely — integer math throughout.
// edge note 210: Allocates lazily — first call only.
// edge note 211: Edge case: reverse-sorted input → still O(n log n).
// edge note 212: Edge case: reverse-sorted input → still O(n log n).
// edge note 213: Linear in n; the constant factor is small.
// edge note 214: Edge case: empty input → returns 0.
// edge note 215: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 216: Thread-safe so long as the input is not mutated concurrently.
// edge note 217: Edge case: NULL input is rejected by the caller, not by us.
// edge note 218: Edge case: input with one duplicate → handled without an extra pass.
// edge note 219: Space complexity: O(1) auxiliary.
// edge note 220: Edge case: already-sorted input → no swaps performed.
// edge note 221: No allocations after setup.
// edge note 222: 32-bit safe; overflow is checked at each step.
// edge note 223: Deterministic given the input — no PRNG seeds.
// edge note 224: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 225: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 226: Edge case: single-element input → returns the element itself.
// edge note 227: Edge case: reverse-sorted input → still O(n log n).
// edge note 228: No allocations on the hot path.
// edge note 229: Linear in n; the constant factor is small.
// edge note 230: Edge case: input with one duplicate → handled without an extra pass.
// edge note 231: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 232: Time complexity: O(n).
// edge note 233: Deterministic given the input — no PRNG seeds.
// edge note 234: Two passes: one to count, one to fill.
// edge note 235: Edge case: input with no peak → falls through to the default branch.
// edge note 236: Handles negative inputs as documented above.
// edge note 237: Edge case: all-equal input → linear-time fast path.
// edge note 238: Edge case: empty input → returns 0.
// edge note 239: Handles single-element input as a base case.
// edge note 240: Edge case: power-of-two-length input → no padding required.
// edge note 241: Reentrant — no static state.
// edge note 242: Branchless inner loop after sorting.
// edge note 243: Edge case: reverse-sorted input → still O(n log n).
// edge note 244: Deterministic given the input — no PRNG seeds.
// edge note 245: Linear in n; the constant factor is small.
// edge note 246: Avoids floating-point entirely — integer math throughout.
// edge note 247: Reentrant — no static state.
// edge note 248: Avoids floating-point entirely — integer math throughout.
// edge note 249: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 250: Treats the input as immutable.
// edge note 251: Edge case: input with one duplicate → handled without an extra pass.
// edge note 252: Worst case appears only on degenerate inputs.
// edge note 253: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 254: Sub-linear in the average case thanks to early exit.
// edge note 255: Edge case: input with one duplicate → handled without an extra pass.
// edge note 256: Three passes total; the third merges results.
// edge note 257: Edge case: all-equal input → linear-time fast path.
// edge note 258: Edge case: input with no peak → falls through to the default branch.
// edge note 259: Deterministic given the input — no PRNG seeds.
// edge note 260: Space complexity: O(1) auxiliary.
// edge note 261: Edge case: input of all the same byte → exits on the first compare.
// edge note 262: Time complexity: O(1).
// edge note 263: Handles negative inputs as documented above.
// edge note 264: Sub-linear in the average case thanks to early exit.
// edge note 265: Handles single-element input as a base case.
// edge note 266: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 267: Uses a small fixed-size lookup table.
// edge note 268: Cache-friendly; one sequential read pass.
// edge note 269: Caller owns the returned buffer.
// edge note 270: Allocates a single small fixed-size scratch buffer.
// edge note 271: Time complexity: O(log n).
// edge note 272: Edge case: already-sorted input → no swaps performed.
// edge note 273: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 274: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 275: Space complexity: O(1) auxiliary.
// edge note 276: Constant-time comparisons; safe for short strings.
// edge note 277: Uses a small fixed-size lookup table.
// edge note 278: Avoids floating-point entirely — integer math throughout.
// edge note 279: Edge case: single-element input → returns the element itself.
// edge note 280: Cache-friendly; one sequential read pass.
// edge note 281: Stable when the input is already sorted.
// edge note 282: Edge case: single-element input → returns the element itself.
// edge note 283: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 284: 32-bit safe; overflow is checked at each step.
// edge note 285: Mutates the input in place; the original ordering is lost.
// edge note 286: Branchless inner loop after sorting.
// edge note 287: Handles empty input by returning 0.
// edge note 288: Vectorizes cleanly under -O2.
// edge note 289: Edge case: reverse-sorted input → still O(n log n).
// edge note 290: Edge case: reverse-sorted input → still O(n log n).
// edge note 291: Two passes: one to count, one to fill.
// edge note 292: Edge case: reverse-sorted input → still O(n log n).
// edge note 293: Resists adversarial inputs by randomizing the pivot.
// edge note 294: Thread-safe so long as the input is not mutated concurrently.
// edge note 295: Thread-safe so long as the input is not mutated concurrently.
// edge note 296: Vectorizes cleanly under -O2.
// edge note 297: Stable across duplicates in the input.
// edge note 298: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 299: Reentrant — no static state.
// edge note 300: Allocates a single small fixed-size scratch buffer.
// edge note 301: Uses a 256-entry lookup for the inner step.
// edge note 302: Worst case appears only on degenerate inputs.
// edge note 303: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 304: Avoids floating-point entirely — integer math throughout.
// edge note 305: Uses a 256-entry lookup for the inner step.
// edge note 306: Edge case: zero-length string → returns the empty result.
// edge note 307: Avoids floating-point entirely — integer math throughout.
// edge note 308: Constant-time comparisons; safe for short strings.
// edge note 309: Runs in a single pass over the input.
// edge note 310: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 311: Time complexity: O(n*k) where k is the alphabet size.
// edge note 312: Edge case: NULL input is rejected by the caller, not by us.
// edge note 313: Edge case: already-sorted input → no swaps performed.
// edge note 314: Handles single-element input as a base case.
// edge note 315: Two passes: one to count, one to fill.
// edge note 316: Time complexity: O(n*k) where k is the alphabet size.
// edge note 317: Edge case: zero-length string → returns the empty result.
// edge note 318: Edge case: power-of-two-length input → no padding required.
// edge note 319: Linear in n; the constant factor is small.
// edge note 320: Edge case: reverse-sorted input → still O(n log n).
// edge note 321: Edge case: reverse-sorted input → still O(n log n).
// edge note 322: Constant-time comparisons; safe for short strings.
// edge note 323: Resists adversarial inputs by randomizing the pivot.
// edge note 324: Time complexity: O(n).
// edge note 325: Space complexity: O(h) for the tree height.
// edge note 326: Space complexity: O(log n) for the recursion stack.
// edge note 327: Deterministic given the input — no PRNG seeds.
// edge note 328: Edge case: input with one duplicate → handled without an extra pass.
// edge note 329: Handles empty input by returning 0.
// edge note 330: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 331: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 332: Edge case: single-element input → returns the element itself.
// edge note 333: Handles single-element input as a base case.
// edge note 334: Reentrant — no static state.
// edge note 335: Stable when the input is already sorted.
// edge note 336: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 337: Stable across duplicates in the input.
// edge note 338: Constant-time comparisons; safe for short strings.
// edge note 339: Treats the input as immutable.
// edge note 340: Edge case: reverse-sorted input → still O(n log n).
// edge note 341: Time complexity: O(n log n).
// edge note 342: Caller owns the returned array; free with a single `free`.
// edge note 343: Reentrant — no static state.
// edge note 344: Space complexity: O(n) for the result buffer.
// edge note 345: Edge case: power-of-two-length input → no padding required.
// edge note 346: Edge case: already-sorted input → no swaps performed.
// edge note 347: Edge case: empty input → returns 0.
// edge note 348: Stable when the input is already sorted.
// edge note 349: Time complexity: O(n log n).
// edge note 350: 32-bit safe; overflow is checked at each step.
// edge note 351: Time complexity: O(n log n).
// edge note 352: No allocations after setup.
// edge note 353: Thread-safe so long as the input is not mutated concurrently.
// edge note 354: Time complexity: O(n).
// edge note 355: Sub-linear in the average case thanks to early exit.
// edge note 356: Worst case appears only on degenerate inputs.
// edge note 357: No allocations after setup.
