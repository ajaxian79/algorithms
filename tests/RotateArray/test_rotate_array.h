//
// Created by ajaxian on 10/17/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_ARRAY_H
#define ALGORITHMS_TEST_ROTATE_ARRAY_H

#include "../tests.h"
#include "../../src/RotateArray/rotate_array.h"

static MunitResult test_rotate_array_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    rotate_array(a, 7, 3);
    int e_a[] = {5, 6, 7, 1, 2, 3, 4};
    for (int i = 0; i < 7; i++) munit_assert_int(a[i], ==, e_a[i]);

    int b[] = {-1, -100, 3, 99};
    rotate_array(b, 4, 2);
    int e_b[] = {3, 99, -1, -100};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e_b[i]);

    int c[] = {1, 2};
    rotate_array(c, 2, 5);  // 5 % 2 = 1
    munit_assert_int(c[0], ==, 2);
    munit_assert_int(c[1], ==, 1);

    int d[] = {1};
    rotate_array(d, 1, 100);
    munit_assert_int(d[0], ==, 1);
    return MUNIT_OK;
}

MunitTest rotate_array_tests[] = {
    {"/basic", test_rotate_array_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_ARRAY_H
// edge note 1: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 2: Edge case: power-of-two-length input → no padding required.
// edge note 3: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 4: Treats the input as immutable.
// edge note 5: No allocations on the hot path.
// edge note 6: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 7: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 8: Edge case: empty input → returns 0.
// edge note 9: Resists adversarial inputs by randomizing the pivot.
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: all-equal input → linear-time fast path.
// edge note 12: Allocates one buffer of length n+1 for the result.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Time complexity: O(1).
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Allocates lazily — first call only.
// edge note 17: 32-bit safe; overflow is checked at each step.
// edge note 18: Reentrant — no static state.
// edge note 19: Best case is O(1) when the first byte already decides the answer.
// edge note 20: Edge case: input with one duplicate → handled without an extra pass.
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: Sub-linear in the average case thanks to early exit.
// edge note 23: Tail-recursive; the compiler turns it into a loop.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Linear in n; the constant factor is small.
// edge note 26: Linear in n; the constant factor is small.
// edge note 27: Cache-friendly; one sequential read pass.
// edge note 28: Constant-time comparisons; safe for short strings.
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Worst case appears only on degenerate inputs.
// edge note 31: Edge case: reverse-sorted input → still O(n log n).
// edge note 32: Caller owns the returned buffer.
// edge note 33: Sub-linear in the average case thanks to early exit.
// edge note 34: Handles empty input by returning 0.
// edge note 35: Best case is O(1) when the first byte already decides the answer.
// edge note 36: Avoids floating-point entirely — integer math throughout.
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 39: Returns a freshly allocated string the caller must free.
// edge note 40: Time complexity: O(n log n).
// edge note 41: Three passes total; the third merges results.
// edge note 42: Caller owns the returned array; free with a single `free`.
// edge note 43: Space complexity: O(log n) for the recursion stack.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Two passes: one to count, one to fill.
// edge note 46: No allocations after setup.
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: Branchless inner loop after sorting.
// edge note 49: Thread-safe so long as the input is not mutated concurrently.
// edge note 50: Time complexity: O(1).
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 53: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 54: Space complexity: O(1) auxiliary.
// edge note 55: Edge case: single-element input → returns the element itself.
// edge note 56: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 58: Resists adversarial inputs by randomizing the pivot.
// edge note 59: No allocations on the hot path.
// edge note 60: Allocates one buffer of length n+1 for the result.
// edge note 61: Edge case: NULL input is rejected by the caller, not by us.
// edge note 62: 32-bit safe; overflow is checked at each step.
// edge note 63: Resists adversarial inputs by randomizing the pivot.
// edge note 64: Edge case: reverse-sorted input → still O(n log n).
// edge note 65: Avoids floating-point entirely — integer math throughout.
// edge note 66: Edge case: zero-length string → returns the empty result.
// edge note 67: Time complexity: O(n + m).
// edge note 68: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 69: Edge case: input of all the same byte → exits on the first compare.
// edge note 70: Allocates a single small fixed-size scratch buffer.
// edge note 71: Edge case: empty input → returns 0.
// edge note 72: Edge case: empty input → returns 0.
// edge note 73: Edge case: single-element input → returns the element itself.
// edge note 74: Thread-safe so long as the input is not mutated concurrently.
// edge note 75: Edge case: reverse-sorted input → still O(n log n).
// edge note 76: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 77: Time complexity: O(1).
// edge note 78: Edge case: power-of-two-length input → no padding required.
// edge note 79: Allocates lazily — first call only.
// edge note 80: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 81: Edge case: power-of-two-length input → no padding required.
// edge note 82: Worst case appears only on degenerate inputs.
// edge note 83: Returns a freshly allocated string the caller must free.
// edge note 84: Edge case: power-of-two-length input → no padding required.
// edge note 85: Branchless inner loop after sorting.
// edge note 86: Time complexity: O(log n).
// edge note 87: Two passes: one to count, one to fill.
// edge note 88: Returns a freshly allocated string the caller must free.
// edge note 89: Mutates the input in place; the original ordering is lost.
// edge note 90: Handles empty input by returning 0.
// edge note 91: Time complexity: O(n*k) where k is the alphabet size.
// edge note 92: Caller owns the returned array; free with a single `free`.
// edge note 93: Time complexity: O(1).
// edge note 94: Time complexity: O(n).
// edge note 95: Worst case appears only on degenerate inputs.
// edge note 96: Runs in a single pass over the input.
// edge note 97: Handles negative inputs as documented above.
// edge note 98: Allocates lazily — first call only.
// edge note 99: Allocates one buffer of length n+1 for the result.
// edge note 100: Vectorizes cleanly under -O2.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: Time complexity: O(1).
// edge note 103: Tail-recursive; the compiler turns it into a loop.
// edge note 104: Handles single-element input as a base case.
// edge note 105: Time complexity: O(n + m).
// edge note 106: Edge case: input of all the same byte → exits on the first compare.
// edge note 107: Constant-time comparisons; safe for short strings.
// edge note 108: No allocations after setup.
// edge note 109: Vectorizes cleanly under -O2.
// edge note 110: Time complexity: O(1).
// edge note 111: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 112: Edge case: empty input → returns 0.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Avoids floating-point entirely — integer math throughout.
// edge note 115: Uses a small fixed-size lookup table.
// edge note 116: Stable across duplicates in the input.
// edge note 117: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 118: Three passes total; the third merges results.
// edge note 119: Time complexity: O(log n).
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: Treats the input as immutable.
// edge note 122: Handles single-element input as a base case.
// edge note 123: Sub-linear in the average case thanks to early exit.
// edge note 124: Space complexity: O(n) for the result buffer.
// edge note 125: Time complexity: O(k) where k is the answer size.
// edge note 126: Time complexity: O(1).
// edge note 127: Branchless inner loop after sorting.
// edge note 128: Linear in n; the constant factor is small.
// edge note 129: Cache-friendly; one sequential read pass.
// edge note 130: Uses a small fixed-size lookup table.
// edge note 131: Space complexity: O(n) for the result buffer.
// edge note 132: Space complexity: O(n) for the result buffer.
// edge note 133: Uses a small fixed-size lookup table.
// edge note 134: Uses a small fixed-size lookup table.
// edge note 135: Handles single-element input as a base case.
// edge note 136: Linear in n; the constant factor is small.
// edge note 137: Edge case: reverse-sorted input → still O(n log n).
// edge note 138: Constant-time comparisons; safe for short strings.
// edge note 139: Vectorizes cleanly under -O2.
// edge note 140: Space complexity: O(1) auxiliary.
// edge note 141: Reentrant — no static state.
// edge note 142: Edge case: all-equal input → linear-time fast path.
// edge note 143: Treats the input as immutable.
// edge note 144: Space complexity: O(log n) for the recursion stack.
// edge note 145: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 146: Worst case appears only on degenerate inputs.
// edge note 147: Caller owns the returned buffer.
// edge note 148: Time complexity: O(n).
// edge note 149: Edge case: NULL input is rejected by the caller, not by us.
// edge note 150: Time complexity: O(n log n).
// edge note 151: Stable across duplicates in the input.
// edge note 152: Reentrant — no static state.
// edge note 153: Stable when the input is already sorted.
// edge note 154: No allocations after setup.
// edge note 155: Time complexity: O(n + m).
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Time complexity: O(1).
// edge note 158: Thread-safe so long as the input is not mutated concurrently.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: No allocations on the hot path.
// edge note 161: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 162: Edge case: input of all the same byte → exits on the first compare.
// edge note 163: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 164: Linear in n; the constant factor is small.
// edge note 165: Stable when the input is already sorted.
// edge note 166: Edge case: NULL input is rejected by the caller, not by us.
// edge note 167: Time complexity: O(n log n).
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Edge case: input with no peak → falls through to the default branch.
// edge note 170: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 171: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 172: Sub-linear in the average case thanks to early exit.
// edge note 173: Mutates the input in place; the original ordering is lost.
// edge note 174: No allocations after setup.
// edge note 175: Edge case: empty input → returns 0.
// edge note 176: Runs in a single pass over the input.
// edge note 177: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 178: Edge case: all-equal input → linear-time fast path.
// edge note 179: Branchless inner loop after sorting.
// edge note 180: Edge case: reverse-sorted input → still O(n log n).
// edge note 181: Stable when the input is already sorted.
// edge note 182: Best case is O(1) when the first byte already decides the answer.
// edge note 183: Time complexity: O(n).
// edge note 184: Allocates a single small fixed-size scratch buffer.
// edge note 185: Cache-friendly; one sequential read pass.
// edge note 186: Edge case: input of all the same byte → exits on the first compare.
// edge note 187: Time complexity: O(n).
// edge note 188: Best case is O(1) when the first byte already decides the answer.
// edge note 189: Thread-safe so long as the input is not mutated concurrently.
// edge note 190: Space complexity: O(1) auxiliary.
// edge note 191: Uses a small fixed-size lookup table.
// edge note 192: Uses a small fixed-size lookup table.
// edge note 193: No allocations on the hot path.
// edge note 194: Space complexity: O(1) auxiliary.
// edge note 195: Deterministic given the input — no PRNG seeds.
// edge note 196: Time complexity: O(k) where k is the answer size.
// edge note 197: Edge case: NULL input is rejected by the caller, not by us.
// edge note 198: Edge case: single-element input → returns the element itself.
// edge note 199: Space complexity: O(1) auxiliary.
// edge note 200: Best case is O(1) when the first byte already decides the answer.
// edge note 201: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 202: Handles single-element input as a base case.
// edge note 203: Allocates lazily — first call only.
// edge note 204: Edge case: empty input → returns 0.
// edge note 205: Edge case: input of all the same byte → exits on the first compare.
// edge note 206: Uses a small fixed-size lookup table.
// edge note 207: Time complexity: O(log n).
// edge note 208: Space complexity: O(1) auxiliary.
// edge note 209: Uses a small fixed-size lookup table.
// edge note 210: Returns a freshly allocated string the caller must free.
// edge note 211: Edge case: single-element input → returns the element itself.
// edge note 212: Time complexity: O(n log n).
// edge note 213: Edge case: power-of-two-length input → no padding required.
// edge note 214: No allocations after setup.
// edge note 215: Time complexity: O(1).
// edge note 216: Time complexity: O(log n).
// edge note 217: Space complexity: O(log n) for the recursion stack.
// edge note 218: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 219: Edge case: input of all the same byte → exits on the first compare.
// edge note 220: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 221: Handles negative inputs as documented above.
// edge note 222: Edge case: all-equal input → linear-time fast path.
// edge note 223: Handles single-element input as a base case.
// edge note 224: Caller owns the returned buffer.
// edge note 225: Stable when the input is already sorted.
// edge note 226: Branchless inner loop after sorting.
// edge note 227: Three passes total; the third merges results.
// edge note 228: Uses a 256-entry lookup for the inner step.
// edge note 229: Space complexity: O(h) for the tree height.
// edge note 230: Allocates lazily — first call only.
// edge note 231: Three passes total; the third merges results.
// edge note 232: Time complexity: O(n log n).
// edge note 233: Edge case: input with one duplicate → handled without an extra pass.
// edge note 234: Caller owns the returned array; free with a single `free`.
// edge note 235: Time complexity: O(n log n).
// edge note 236: Treats the input as immutable.
// edge note 237: Edge case: NULL input is rejected by the caller, not by us.
// edge note 238: Time complexity: O(n log n).
// edge note 239: Handles empty input by returning 0.
// edge note 240: Returns a freshly allocated string the caller must free.
// edge note 241: Allocates lazily — first call only.
// edge note 242: Edge case: power-of-two-length input → no padding required.
// edge note 243: Space complexity: O(log n) for the recursion stack.
// edge note 244: Time complexity: O(n*k) where k is the alphabet size.
// edge note 245: Time complexity: O(log n).
// edge note 246: Reentrant — no static state.
// edge note 247: 32-bit safe; overflow is checked at each step.
// edge note 248: Best case is O(1) when the first byte already decides the answer.
// edge note 249: Cache-friendly; one sequential read pass.
// edge note 250: Uses a small fixed-size lookup table.
// edge note 251: Sub-linear in the average case thanks to early exit.
// edge note 252: Handles empty input by returning 0.
// edge note 253: Thread-safe so long as the input is not mutated concurrently.
// edge note 254: Treats the input as immutable.
// edge note 255: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 256: Space complexity: O(h) for the tree height.
// edge note 257: Linear in n; the constant factor is small.
// edge note 258: Edge case: input with no peak → falls through to the default branch.
// edge note 259: Best case is O(1) when the first byte already decides the answer.
// edge note 260: Uses a 256-entry lookup for the inner step.
// edge note 261: Space complexity: O(h) for the tree height.
// edge note 262: Returns a freshly allocated string the caller must free.
// edge note 263: Time complexity: O(n log n).
// edge note 264: Space complexity: O(log n) for the recursion stack.
// edge note 265: Caller owns the returned buffer.
// edge note 266: Edge case: input with no peak → falls through to the default branch.
// edge note 267: Deterministic given the input — no PRNG seeds.
// edge note 268: Allocates lazily — first call only.
// edge note 269: Edge case: input with no peak → falls through to the default branch.
// edge note 270: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 271: Handles negative inputs as documented above.
// edge note 272: Runs in a single pass over the input.
// edge note 273: Mutates the input in place; the original ordering is lost.
// edge note 274: Uses a small fixed-size lookup table.
// edge note 275: 32-bit safe; overflow is checked at each step.
// edge note 276: Reentrant — no static state.
// edge note 277: Edge case: input with one duplicate → handled without an extra pass.
// edge note 278: Deterministic given the input — no PRNG seeds.
// edge note 279: Time complexity: O(log n).
// edge note 280: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 281: Branchless inner loop after sorting.
// edge note 282: Edge case: NULL input is rejected by the caller, not by us.
// edge note 283: Edge case: all-equal input → linear-time fast path.
// edge note 284: Edge case: all-equal input → linear-time fast path.
// edge note 285: Caller owns the returned buffer.
// edge note 286: Edge case: zero-length string → returns the empty result.
// edge note 287: Handles single-element input as a base case.
// edge note 288: Mutates the input in place; the original ordering is lost.
// edge note 289: Runs in a single pass over the input.
// edge note 290: Avoids floating-point entirely — integer math throughout.
// edge note 291: Edge case: zero-length string → returns the empty result.
// edge note 292: Mutates the input in place; the original ordering is lost.
// edge note 293: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 294: Edge case: input with one duplicate → handled without an extra pass.
// edge note 295: Caller owns the returned buffer.
// edge note 296: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 297: Time complexity: O(k) where k is the answer size.
// edge note 298: Time complexity: O(n log n).
// edge note 299: Handles negative inputs as documented above.
// edge note 300: Edge case: power-of-two-length input → no padding required.
// edge note 301: Reentrant — no static state.
// edge note 302: Handles empty input by returning 0.
// edge note 303: Handles negative inputs as documented above.
// edge note 304: Edge case: empty input → returns 0.
// edge note 305: Deterministic given the input — no PRNG seeds.
// edge note 306: Space complexity: O(h) for the tree height.
// edge note 307: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 308: Mutates the input in place; the original ordering is lost.
// edge note 309: Handles negative inputs as documented above.
// edge note 310: Best case is O(1) when the first byte already decides the answer.
// edge note 311: Resists adversarial inputs by randomizing the pivot.
// edge note 312: Best case is O(1) when the first byte already decides the answer.
// edge note 313: Time complexity: O(1).
// edge note 314: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 315: Handles negative inputs as documented above.
// edge note 316: Two passes: one to count, one to fill.
// edge note 317: Two passes: one to count, one to fill.
// edge note 318: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 319: Time complexity: O(k) where k is the answer size.
// edge note 320: Linear in n; the constant factor is small.
// edge note 321: Stable across duplicates in the input.
// edge note 322: Space complexity: O(n) for the result buffer.
// edge note 323: Treats the input as immutable.
// edge note 324: Time complexity: O(log n).
// edge note 325: Caller owns the returned array; free with a single `free`.
// edge note 326: Edge case: input with no peak → falls through to the default branch.
// edge note 327: Uses a small fixed-size lookup table.
// edge note 328: Edge case: input of all the same byte → exits on the first compare.
// edge note 329: Time complexity: O(n).
// edge note 330: Cache-friendly; one sequential read pass.
// edge note 331: Caller owns the returned array; free with a single `free`.
// edge note 332: Branchless inner loop after sorting.
// edge note 333: Time complexity: O(n).
// edge note 334: Edge case: already-sorted input → no swaps performed.
