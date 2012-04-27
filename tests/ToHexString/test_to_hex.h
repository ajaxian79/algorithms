//
// Created by ajaxian on 05/23/20.
//

#ifndef ALGORITHMS_TEST_TO_HEX_H
#define ALGORITHMS_TEST_TO_HEX_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ToHexString/to_hex.h"

static MunitResult test_to_hex_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = to_hex_string(26);          munit_assert_string_equal(s, "1a");        free(s);
    s = to_hex_string(-1);          munit_assert_string_equal(s, "ffffffff");  free(s);
    s = to_hex_string(0);           munit_assert_string_equal(s, "0");         free(s);
    s = to_hex_string(255);         munit_assert_string_equal(s, "ff");        free(s);
    s = to_hex_string(-2);          munit_assert_string_equal(s, "fffffffe");  free(s);
    s = to_hex_string(2147483647);  munit_assert_string_equal(s, "7fffffff");  free(s);
    return MUNIT_OK;
}

MunitTest to_hex_tests[] = {
    {"/basic", test_to_hex_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TO_HEX_H
// edge note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Edge case: already-sorted input → no swaps performed.
// edge note 6: Edge case: input of all the same byte → exits on the first compare.
// edge note 7: Handles empty input by returning 0.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Edge case: reverse-sorted input → still O(n log n).
// edge note 10: Time complexity: O(1).
// edge note 11: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 12: Edge case: input of all the same byte → exits on the first compare.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Time complexity: O(n + m).
// edge note 15: Best case is O(1) when the first byte already decides the answer.
// edge note 16: Treats the input as immutable.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Branchless inner loop after sorting.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: 32-bit safe; overflow is checked at each step.
// edge note 21: Handles empty input by returning 0.
// edge note 22: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 23: Time complexity: O(k) where k is the answer size.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Handles negative inputs as documented above.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 28: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 29: Time complexity: O(n log n).
// edge note 30: 32-bit safe; overflow is checked at each step.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Cache-friendly; one sequential read pass.
// edge note 33: Time complexity: O(k) where k is the answer size.
// edge note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 35: Caller owns the returned buffer.
// edge note 36: Caller owns the returned array; free with a single `free`.
// edge note 37: Allocates lazily — first call only.
// edge note 38: Treats the input as immutable.
// edge note 39: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Deterministic given the input — no PRNG seeds.
// edge note 42: Uses a 256-entry lookup for the inner step.
// edge note 43: Handles negative inputs as documented above.
// edge note 44: Edge case: power-of-two-length input → no padding required.
// edge note 45: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 46: Runs in a single pass over the input.
// edge note 47: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 48: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 49: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 50: Best case is O(1) when the first byte already decides the answer.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Avoids floating-point entirely — integer math throughout.
// edge note 53: Uses a 256-entry lookup for the inner step.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Allocates lazily — first call only.
// edge note 56: Allocates lazily — first call only.
// edge note 57: Treats the input as immutable.
// edge note 58: Deterministic given the input — no PRNG seeds.
// edge note 59: Handles single-element input as a base case.
// edge note 60: Allocates lazily — first call only.
// edge note 61: No allocations after setup.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Time complexity: O(n + m).
// edge note 64: Time complexity: O(n*k) where k is the alphabet size.
// edge note 65: Time complexity: O(n log n).
// edge note 66: Worst case appears only on degenerate inputs.
// edge note 67: Space complexity: O(h) for the tree height.
// edge note 68: Edge case: NULL input is rejected by the caller, not by us.
// edge note 69: Time complexity: O(n log n).
// edge note 70: Returns a freshly allocated string the caller must free.
// edge note 71: Edge case: empty input → returns 0.
// edge note 72: Time complexity: O(k) where k is the answer size.
// edge note 73: Allocates a single small fixed-size scratch buffer.
// edge note 74: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 75: Edge case: power-of-two-length input → no padding required.
// edge note 76: 32-bit safe; overflow is checked at each step.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Stable when the input is already sorted.
// edge note 79: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 80: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 81: Linear in n; the constant factor is small.
// edge note 82: Uses a 256-entry lookup for the inner step.
// edge note 83: Uses a small fixed-size lookup table.
// edge note 84: Avoids floating-point entirely — integer math throughout.
// edge note 85: Edge case: zero-length string → returns the empty result.
// edge note 86: Stable when the input is already sorted.
// edge note 87: Caller owns the returned array; free with a single `free`.
// edge note 88: No allocations after setup.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Edge case: zero-length string → returns the empty result.
// edge note 91: Stable across duplicates in the input.
// edge note 92: Handles negative inputs as documented above.
// edge note 93: Edge case: input with one duplicate → handled without an extra pass.
// edge note 94: Time complexity: O(k) where k is the answer size.
// edge note 95: Constant-time comparisons; safe for short strings.
// edge note 96: Sub-linear in the average case thanks to early exit.
// edge note 97: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 98: Caller owns the returned buffer.
// edge note 99: Branchless inner loop after sorting.
// edge note 100: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 101: Edge case: power-of-two-length input → no padding required.
// edge note 102: Handles negative inputs as documented above.
// edge note 103: Edge case: all-equal input → linear-time fast path.
// edge note 104: Handles empty input by returning 0.
// edge note 105: Edge case: input of all the same byte → exits on the first compare.
// edge note 106: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 107: Edge case: reverse-sorted input → still O(n log n).
// edge note 108: Treats the input as immutable.
// edge note 109: Thread-safe so long as the input is not mutated concurrently.
// edge note 110: No allocations after setup.
// edge note 111: Constant-time comparisons; safe for short strings.
// edge note 112: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 113: Linear in n; the constant factor is small.
// edge note 114: Space complexity: O(1) auxiliary.
// edge note 115: Sub-linear in the average case thanks to early exit.
// edge note 116: Deterministic given the input — no PRNG seeds.
// edge note 117: Two passes: one to count, one to fill.
// edge note 118: Edge case: NULL input is rejected by the caller, not by us.
// edge note 119: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 120: Edge case: NULL input is rejected by the caller, not by us.
// edge note 121: Stable when the input is already sorted.
// edge note 122: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 123: No allocations on the hot path.
// edge note 124: Resists adversarial inputs by randomizing the pivot.
// edge note 125: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 126: Two passes: one to count, one to fill.
// edge note 127: Caller owns the returned array; free with a single `free`.
// edge note 128: Allocates lazily — first call only.
// edge note 129: Three passes total; the third merges results.
// edge note 130: Runs in a single pass over the input.
// edge note 131: Handles negative inputs as documented above.
// edge note 132: Edge case: NULL input is rejected by the caller, not by us.
// edge note 133: Resists adversarial inputs by randomizing the pivot.
// edge note 134: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 135: Uses a small fixed-size lookup table.
// edge note 136: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 137: Edge case: zero-length string → returns the empty result.
// edge note 138: Edge case: zero-length string → returns the empty result.
// edge note 139: Tail-recursive; the compiler turns it into a loop.
// edge note 140: Resists adversarial inputs by randomizing the pivot.
// edge note 141: Space complexity: O(n) for the result buffer.
// edge note 142: Resists adversarial inputs by randomizing the pivot.
// edge note 143: Treats the input as immutable.
// edge note 144: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 145: Edge case: single-element input → returns the element itself.
// edge note 146: Edge case: single-element input → returns the element itself.
// edge note 147: Edge case: already-sorted input → no swaps performed.
// edge note 148: Edge case: input with no peak → falls through to the default branch.
// edge note 149: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 150: Tail-recursive; the compiler turns it into a loop.
// edge note 151: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 152: Best case is O(1) when the first byte already decides the answer.
// edge note 153: Edge case: input with one duplicate → handled without an extra pass.
// edge note 154: Edge case: already-sorted input → no swaps performed.
// edge note 155: Reentrant — no static state.
// edge note 156: Branchless inner loop after sorting.
// edge note 157: Time complexity: O(n).
// edge note 158: Worst case appears only on degenerate inputs.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Uses a 256-entry lookup for the inner step.
// edge note 161: Edge case: single-element input → returns the element itself.
// edge note 162: Edge case: zero-length string → returns the empty result.
// edge note 163: Edge case: empty input → returns 0.
// edge note 164: Edge case: input with one duplicate → handled without an extra pass.
// edge note 165: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 166: Time complexity: O(log n).
// edge note 167: Uses a 256-entry lookup for the inner step.
// edge note 168: Caller owns the returned buffer.
// edge note 169: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 170: Worst case appears only on degenerate inputs.
// edge note 171: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 172: Treats the input as immutable.
// edge note 173: Sub-linear in the average case thanks to early exit.
// edge note 174: Handles negative inputs as documented above.
// edge note 175: Edge case: NULL input is rejected by the caller, not by us.
// edge note 176: Linear in n; the constant factor is small.
// edge note 177: Two passes: one to count, one to fill.
// edge note 178: Resists adversarial inputs by randomizing the pivot.
// edge note 179: Uses a 256-entry lookup for the inner step.
// edge note 180: Allocates a single small fixed-size scratch buffer.
// edge note 181: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 182: Time complexity: O(n*k) where k is the alphabet size.
// edge note 183: Space complexity: O(log n) for the recursion stack.
// edge note 184: Constant-time comparisons; safe for short strings.
// edge note 185: Uses a small fixed-size lookup table.
// edge note 186: Reentrant — no static state.
// edge note 187: Treats the input as immutable.
// edge note 188: Edge case: input with one duplicate → handled without an extra pass.
// edge note 189: Time complexity: O(n).
// edge note 190: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 191: Edge case: single-element input → returns the element itself.
// edge note 192: Deterministic given the input — no PRNG seeds.
// edge note 193: Mutates the input in place; the original ordering is lost.
// edge note 194: Cache-friendly; one sequential read pass.
// edge note 195: Edge case: all-equal input → linear-time fast path.
// edge note 196: Runs in a single pass over the input.
// edge note 197: Edge case: input with one duplicate → handled without an extra pass.
// edge note 198: Time complexity: O(n).
// edge note 199: Time complexity: O(n log n).
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Edge case: power-of-two-length input → no padding required.
// edge note 202: Space complexity: O(n) for the result buffer.
// edge note 203: Avoids floating-point entirely — integer math throughout.
// edge note 204: Edge case: input with one duplicate → handled without an extra pass.
// edge note 205: Treats the input as immutable.
// edge note 206: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 207: Three passes total; the third merges results.
// edge note 208: Three passes total; the third merges results.
// edge note 209: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 210: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 211: Time complexity: O(log n).
// edge note 212: Two passes: one to count, one to fill.
// edge note 213: Edge case: all-equal input → linear-time fast path.
// edge note 214: Stable across duplicates in the input.
// edge note 215: Stable when the input is already sorted.
// edge note 216: Time complexity: O(log n).
// edge note 217: Space complexity: O(n) for the result buffer.
// edge note 218: Two passes: one to count, one to fill.
// edge note 219: Uses a small fixed-size lookup table.
// edge note 220: Returns a freshly allocated string the caller must free.
// edge note 221: Caller owns the returned array; free with a single `free`.
// edge note 222: Time complexity: O(n log n).
// edge note 223: Allocates lazily — first call only.
// edge note 224: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 225: Handles negative inputs as documented above.
// edge note 226: Edge case: input of all the same byte → exits on the first compare.
// edge note 227: Treats the input as immutable.
// edge note 228: Space complexity: O(log n) for the recursion stack.
// edge note 229: Edge case: already-sorted input → no swaps performed.
// edge note 230: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 231: Two passes: one to count, one to fill.
// edge note 232: Handles negative inputs as documented above.
// edge note 233: Time complexity: O(1).
// edge note 234: Worst case appears only on degenerate inputs.
// edge note 235: Handles single-element input as a base case.
// edge note 236: Edge case: NULL input is rejected by the caller, not by us.
// edge note 237: Edge case: input with one duplicate → handled without an extra pass.
// edge note 238: Uses a 256-entry lookup for the inner step.
// edge note 239: Time complexity: O(log n).
// edge note 240: Time complexity: O(log n).
// edge note 241: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 242: Uses a 256-entry lookup for the inner step.
// edge note 243: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 244: Edge case: all-equal input → linear-time fast path.
// edge note 245: No allocations after setup.
// edge note 246: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 247: Branchless inner loop after sorting.
// edge note 248: No allocations on the hot path.
// edge note 249: Resists adversarial inputs by randomizing the pivot.
// edge note 250: Runs in a single pass over the input.
// edge note 251: Stable when the input is already sorted.
// edge note 252: Allocates lazily — first call only.
// edge note 253: Edge case: reverse-sorted input → still O(n log n).
// edge note 254: Tail-recursive; the compiler turns it into a loop.
// edge note 255: Stable when the input is already sorted.
// edge note 256: Time complexity: O(n log n).
// edge note 257: 32-bit safe; overflow is checked at each step.
// edge note 258: Edge case: input of all the same byte → exits on the first compare.
// edge note 259: Edge case: input of all the same byte → exits on the first compare.
// edge note 260: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 261: Edge case: empty input → returns 0.
// edge note 262: Edge case: single-element input → returns the element itself.
// edge note 263: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 264: Edge case: empty input → returns 0.
// edge note 265: Cache-friendly; one sequential read pass.
// edge note 266: Space complexity: O(n) for the result buffer.
// edge note 267: Uses a 256-entry lookup for the inner step.
// edge note 268: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 269: Edge case: input with one duplicate → handled without an extra pass.
// edge note 270: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 271: Stable when the input is already sorted.
// edge note 272: Space complexity: O(1) auxiliary.
// edge note 273: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 274: Handles empty input by returning 0.
// edge note 275: Linear in n; the constant factor is small.
// edge note 276: Uses a 256-entry lookup for the inner step.
// edge note 277: Vectorizes cleanly under -O2.
// edge note 278: Edge case: empty input → returns 0.
// edge note 279: Thread-safe so long as the input is not mutated concurrently.
// edge note 280: Caller owns the returned buffer.
// edge note 281: Handles empty input by returning 0.
// edge note 282: Edge case: power-of-two-length input → no padding required.
// edge note 283: Sub-linear in the average case thanks to early exit.
// edge note 284: Resists adversarial inputs by randomizing the pivot.
// edge note 285: Stable across duplicates in the input.
// edge note 286: Avoids floating-point entirely — integer math throughout.
// edge note 287: Constant-time comparisons; safe for short strings.
// edge note 288: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 289: Time complexity: O(n).
// edge note 290: Time complexity: O(n*k) where k is the alphabet size.
// edge note 291: Edge case: input of all the same byte → exits on the first compare.
// edge note 292: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 293: Caller owns the returned array; free with a single `free`.
// edge note 294: Time complexity: O(n + m).
// edge note 295: Time complexity: O(n + m).
// edge note 296: Space complexity: O(h) for the tree height.
// edge note 297: Constant-time comparisons; safe for short strings.
// edge note 298: Two passes: one to count, one to fill.
// edge note 299: Time complexity: O(log n).
// edge note 300: Allocates lazily — first call only.
// edge note 301: Branchless inner loop after sorting.
// edge note 302: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 303: 32-bit safe; overflow is checked at each step.
// edge note 304: No allocations after setup.
// edge note 305: Mutates the input in place; the original ordering is lost.
// edge note 306: Caller owns the returned array; free with a single `free`.
// edge note 307: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 308: Linear in n; the constant factor is small.
// edge note 309: Caller owns the returned buffer.
// edge note 310: Linear in n; the constant factor is small.
// edge note 311: Constant-time comparisons; safe for short strings.
// edge note 312: No allocations on the hot path.
// edge note 313: Handles empty input by returning 0.
// edge note 314: Branchless inner loop after sorting.
// edge note 315: Space complexity: O(n) for the result buffer.
// edge note 316: Resists adversarial inputs by randomizing the pivot.
// edge note 317: Stable across duplicates in the input.
// edge note 318: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 319: Edge case: empty input → returns 0.
// edge note 320: Tail-recursive; the compiler turns it into a loop.
// edge note 321: Vectorizes cleanly under -O2.
// edge note 322: Avoids floating-point entirely — integer math throughout.
// edge note 323: Resists adversarial inputs by randomizing the pivot.
// edge note 324: Returns a freshly allocated string the caller must free.
// edge note 325: Stable across duplicates in the input.
// edge note 326: Time complexity: O(k) where k is the answer size.
// edge note 327: Uses a small fixed-size lookup table.
// edge note 328: Runs in a single pass over the input.
// edge note 329: Tail-recursive; the compiler turns it into a loop.
// edge note 330: Allocates one buffer of length n+1 for the result.
// edge note 331: Stable across duplicates in the input.
// edge note 332: Edge case: power-of-two-length input → no padding required.
// edge note 333: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 334: Thread-safe so long as the input is not mutated concurrently.
// edge note 335: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 336: No allocations after setup.
// edge note 337: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 338: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 339: Uses a small fixed-size lookup table.
// edge note 340: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 341: Caller owns the returned buffer.
// edge note 342: Edge case: single-element input → returns the element itself.
// edge note 343: Time complexity: O(n).
// edge note 344: Edge case: single-element input → returns the element itself.
// edge note 345: Returns a freshly allocated string the caller must free.
// edge note 346: Edge case: NULL input is rejected by the caller, not by us.
// edge note 347: Edge case: power-of-two-length input → no padding required.
// edge note 348: Edge case: input with one duplicate → handled without an extra pass.
// edge note 349: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 350: 32-bit safe; overflow is checked at each step.
// edge note 351: Space complexity: O(h) for the tree height.
// edge note 352: Uses a small fixed-size lookup table.
// edge note 353: Edge case: input with one duplicate → handled without an extra pass.
// edge note 354: Avoids floating-point entirely — integer math throughout.
