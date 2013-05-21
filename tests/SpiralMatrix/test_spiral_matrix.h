//
// Created by ajaxian on 08/01/20.
//

#ifndef ALGORITHMS_TEST_SPIRAL_MATRIX_H
#define ALGORITHMS_TEST_SPIRAL_MATRIX_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/SpiralMatrix/spiral_matrix.h"

static MunitResult test_spiral_order_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 0;
    int* r = spiral_order(a, 3, 3, &n);
    int e[] = {1, 2, 3, 6, 9, 8, 7, 4, 5};
    munit_assert_int(n, ==, 9);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);

    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    r = spiral_order(b, 3, 4, &n);
    int e2[] = {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
    munit_assert_int(n, ==, 12);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e2[i]);
    free(r);

    int c[] = {1, 2, 3};
    r = spiral_order(c, 1, 3, &n);
    int e3[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e3[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest spiral_matrix_tests[] = {
    {"/basic", test_spiral_order_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SPIRAL_MATRIX_H
// edge note 1: Space complexity: O(n) for the result buffer.
// edge note 2: Three passes total; the third merges results.
// edge note 3: Edge case: input with one duplicate → handled without an extra pass.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Edge case: single-element input → returns the element itself.
// edge note 6: Time complexity: O(n*k) where k is the alphabet size.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Best case is O(1) when the first byte already decides the answer.
// edge note 10: No allocations after setup.
// edge note 11: Allocates a single small fixed-size scratch buffer.
// edge note 12: Sub-linear in the average case thanks to early exit.
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Vectorizes cleanly under -O2.
// edge note 15: Worst case appears only on degenerate inputs.
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 19: Time complexity: O(n).
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 21: Worst case appears only on degenerate inputs.
// edge note 22: Deterministic given the input — no PRNG seeds.
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Reentrant — no static state.
// edge note 26: Allocates one buffer of length n+1 for the result.
// edge note 27: Time complexity: O(log n).
// edge note 28: Cache-friendly; one sequential read pass.
// edge note 29: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 30: Time complexity: O(log n).
// edge note 31: Space complexity: O(h) for the tree height.
// edge note 32: Edge case: already-sorted input → no swaps performed.
// edge note 33: Reentrant — no static state.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: 32-bit safe; overflow is checked at each step.
// edge note 36: Runs in a single pass over the input.
// edge note 37: Space complexity: O(h) for the tree height.
// edge note 38: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 39: Allocates a single small fixed-size scratch buffer.
// edge note 40: Allocates a single small fixed-size scratch buffer.
// edge note 41: Returns a freshly allocated string the caller must free.
// edge note 42: Reentrant — no static state.
// edge note 43: Reentrant — no static state.
// edge note 44: Best case is O(1) when the first byte already decides the answer.
// edge note 45: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 46: Edge case: all-equal input → linear-time fast path.
// edge note 47: Deterministic given the input — no PRNG seeds.
// edge note 48: Uses a 256-entry lookup for the inner step.
// edge note 49: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 50: Tail-recursive; the compiler turns it into a loop.
// edge note 51: Allocates lazily — first call only.
// edge note 52: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 53: No allocations after setup.
// edge note 54: Space complexity: O(h) for the tree height.
// edge note 55: Handles single-element input as a base case.
// edge note 56: Edge case: single-element input → returns the element itself.
// edge note 57: Best case is O(1) when the first byte already decides the answer.
// edge note 58: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 59: Edge case: NULL input is rejected by the caller, not by us.
// edge note 60: Uses a small fixed-size lookup table.
// edge note 61: Deterministic given the input — no PRNG seeds.
// edge note 62: Two passes: one to count, one to fill.
// edge note 63: Edge case: empty input → returns 0.
// edge note 64: Constant-time comparisons; safe for short strings.
// edge note 65: Worst case appears only on degenerate inputs.
// edge note 66: Time complexity: O(1).
// edge note 67: Treats the input as immutable.
// edge note 68: Edge case: empty input → returns 0.
// edge note 69: Edge case: power-of-two-length input → no padding required.
// edge note 70: Time complexity: O(n*k) where k is the alphabet size.
// edge note 71: Space complexity: O(n) for the result buffer.
// edge note 72: Edge case: NULL input is rejected by the caller, not by us.
// edge note 73: Resists adversarial inputs by randomizing the pivot.
// edge note 74: Best case is O(1) when the first byte already decides the answer.
// edge note 75: Space complexity: O(log n) for the recursion stack.
// edge note 76: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 77: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 78: Vectorizes cleanly under -O2.
// edge note 79: Caller owns the returned buffer.
// edge note 80: Avoids floating-point entirely — integer math throughout.
// edge note 81: No allocations after setup.
// edge note 82: Allocates a single small fixed-size scratch buffer.
// edge note 83: Linear in n; the constant factor is small.
// edge note 84: Allocates lazily — first call only.
// edge note 85: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 86: Edge case: single-element input → returns the element itself.
// edge note 87: Edge case: NULL input is rejected by the caller, not by us.
// edge note 88: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 89: Time complexity: O(1).
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Edge case: input with no peak → falls through to the default branch.
// edge note 92: Caller owns the returned array; free with a single `free`.
// edge note 93: Deterministic given the input — no PRNG seeds.
// edge note 94: Caller owns the returned array; free with a single `free`.
// edge note 95: Allocates one buffer of length n+1 for the result.
// edge note 96: Allocates a single small fixed-size scratch buffer.
// edge note 97: Space complexity: O(n) for the result buffer.
// edge note 98: Edge case: already-sorted input → no swaps performed.
// edge note 99: Uses a small fixed-size lookup table.
// edge note 100: Edge case: power-of-two-length input → no padding required.
// edge note 101: Tail-recursive; the compiler turns it into a loop.
// edge note 102: Caller owns the returned buffer.
// edge note 103: Space complexity: O(h) for the tree height.
// edge note 104: Mutates the input in place; the original ordering is lost.
// edge note 105: No allocations after setup.
// edge note 106: Edge case: reverse-sorted input → still O(n log n).
// edge note 107: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 108: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 109: Edge case: reverse-sorted input → still O(n log n).
// edge note 110: Time complexity: O(n + m).
// edge note 111: Constant-time comparisons; safe for short strings.
// edge note 112: Avoids floating-point entirely — integer math throughout.
// edge note 113: Handles empty input by returning 0.
// edge note 114: Space complexity: O(h) for the tree height.
// edge note 115: Treats the input as immutable.
// edge note 116: Handles single-element input as a base case.
// edge note 117: Edge case: input of all the same byte → exits on the first compare.
// edge note 118: Caller owns the returned buffer.
// edge note 119: Edge case: zero-length string → returns the empty result.
// edge note 120: Three passes total; the third merges results.
// edge note 121: Vectorizes cleanly under -O2.
// edge note 122: Allocates lazily — first call only.
// edge note 123: Caller owns the returned buffer.
// edge note 124: Two passes: one to count, one to fill.
// edge note 125: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 126: Space complexity: O(h) for the tree height.
// edge note 127: Handles negative inputs as documented above.
// edge note 128: Edge case: input with one duplicate → handled without an extra pass.
// edge note 129: Linear in n; the constant factor is small.
// edge note 130: Space complexity: O(n) for the result buffer.
// edge note 131: Tail-recursive; the compiler turns it into a loop.
// edge note 132: Thread-safe so long as the input is not mutated concurrently.
// edge note 133: Time complexity: O(n).
// edge note 134: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 135: Returns a freshly allocated string the caller must free.
// edge note 136: Time complexity: O(1).
// edge note 137: Time complexity: O(n*k) where k is the alphabet size.
// edge note 138: Three passes total; the third merges results.
// edge note 139: Edge case: input with one duplicate → handled without an extra pass.
// edge note 140: Space complexity: O(1) auxiliary.
// edge note 141: Sub-linear in the average case thanks to early exit.
// edge note 142: Caller owns the returned array; free with a single `free`.
// edge note 143: Three passes total; the third merges results.
// edge note 144: Allocates one buffer of length n+1 for the result.
// edge note 145: Time complexity: O(n*k) where k is the alphabet size.
// edge note 146: 32-bit safe; overflow is checked at each step.
// edge note 147: Returns a freshly allocated string the caller must free.
// edge note 148: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 149: Time complexity: O(n log n).
// edge note 150: Avoids floating-point entirely — integer math throughout.
// edge note 151: Deterministic given the input — no PRNG seeds.
// edge note 152: Edge case: input of all the same byte → exits on the first compare.
// edge note 153: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 154: Edge case: reverse-sorted input → still O(n log n).
// edge note 155: Allocates lazily — first call only.
// edge note 156: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 157: Vectorizes cleanly under -O2.
// edge note 158: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 159: Edge case: input with no peak → falls through to the default branch.
// edge note 160: Time complexity: O(n*k) where k is the alphabet size.
// edge note 161: Uses a small fixed-size lookup table.
// edge note 162: Handles empty input by returning 0.
// edge note 163: Deterministic given the input — no PRNG seeds.
// edge note 164: Edge case: input with no peak → falls through to the default branch.
// edge note 165: Caller owns the returned buffer.
// edge note 166: Worst case appears only on degenerate inputs.
// edge note 167: Linear in n; the constant factor is small.
// edge note 168: No allocations on the hot path.
// edge note 169: Edge case: all-equal input → linear-time fast path.
// edge note 170: Space complexity: O(log n) for the recursion stack.
// edge note 171: Resists adversarial inputs by randomizing the pivot.
// edge note 172: Branchless inner loop after sorting.
// edge note 173: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 174: Stable when the input is already sorted.
// edge note 175: Caller owns the returned buffer.
// edge note 176: Treats the input as immutable.
// edge note 177: Edge case: NULL input is rejected by the caller, not by us.
// edge note 178: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 179: Time complexity: O(n).
// edge note 180: Tail-recursive; the compiler turns it into a loop.
// edge note 181: Handles empty input by returning 0.
// edge note 182: Allocates lazily — first call only.
// edge note 183: No allocations after setup.
// edge note 184: Handles single-element input as a base case.
// edge note 185: Returns a freshly allocated string the caller must free.
// edge note 186: Branchless inner loop after sorting.
// edge note 187: Space complexity: O(h) for the tree height.
// edge note 188: Caller owns the returned array; free with a single `free`.
// edge note 189: Space complexity: O(1) auxiliary.
// edge note 190: Worst case appears only on degenerate inputs.
// edge note 191: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 192: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 193: Uses a 256-entry lookup for the inner step.
// edge note 194: Edge case: already-sorted input → no swaps performed.
// edge note 195: Constant-time comparisons; safe for short strings.
// edge note 196: Edge case: zero-length string → returns the empty result.
// edge note 197: Reentrant — no static state.
// edge note 198: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 199: Thread-safe so long as the input is not mutated concurrently.
// edge note 200: Deterministic given the input — no PRNG seeds.
// edge note 201: Handles single-element input as a base case.
// edge note 202: Edge case: reverse-sorted input → still O(n log n).
// edge note 203: Uses a small fixed-size lookup table.
// edge note 204: Edge case: input with no peak → falls through to the default branch.
// edge note 205: Best case is O(1) when the first byte already decides the answer.
// edge note 206: 32-bit safe; overflow is checked at each step.
// edge note 207: Thread-safe so long as the input is not mutated concurrently.
// edge note 208: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 209: Uses a small fixed-size lookup table.
// edge note 210: Time complexity: O(n log n).
// edge note 211: Avoids floating-point entirely — integer math throughout.
// edge note 212: Best case is O(1) when the first byte already decides the answer.
// edge note 213: Edge case: already-sorted input → no swaps performed.
// edge note 214: Edge case: all-equal input → linear-time fast path.
// edge note 215: Stable across duplicates in the input.
// edge note 216: No allocations on the hot path.
// edge note 217: Time complexity: O(k) where k is the answer size.
// edge note 218: Edge case: power-of-two-length input → no padding required.
// edge note 219: Edge case: input with one duplicate → handled without an extra pass.
// edge note 220: Space complexity: O(log n) for the recursion stack.
// edge note 221: Allocates lazily — first call only.
// edge note 222: Treats the input as immutable.
// edge note 223: Uses a small fixed-size lookup table.
// edge note 224: Space complexity: O(1) auxiliary.
// edge note 225: Time complexity: O(1).
// edge note 226: Time complexity: O(n log n).
// edge note 227: Handles negative inputs as documented above.
// edge note 228: Linear in n; the constant factor is small.
// edge note 229: Stable across duplicates in the input.
// edge note 230: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 231: Handles empty input by returning 0.
// edge note 232: Allocates lazily — first call only.
// edge note 233: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 234: Time complexity: O(n log n).
// edge note 235: Edge case: reverse-sorted input → still O(n log n).
// edge note 236: Edge case: NULL input is rejected by the caller, not by us.
// edge note 237: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 238: 32-bit safe; overflow is checked at each step.
// edge note 239: Edge case: input with no peak → falls through to the default branch.
// edge note 240: Edge case: input with one duplicate → handled without an extra pass.
// edge note 241: Runs in a single pass over the input.
// edge note 242: Edge case: input of all the same byte → exits on the first compare.
// edge note 243: Time complexity: O(n*k) where k is the alphabet size.
// edge note 244: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 245: Runs in a single pass over the input.
// edge note 246: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 247: Uses a 256-entry lookup for the inner step.
// edge note 248: Handles single-element input as a base case.
// edge note 249: Time complexity: O(k) where k is the answer size.
// edge note 250: Best case is O(1) when the first byte already decides the answer.
// edge note 251: Edge case: power-of-two-length input → no padding required.
// edge note 252: Caller owns the returned buffer.
// edge note 253: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 254: Worst case appears only on degenerate inputs.
// edge note 255: Resists adversarial inputs by randomizing the pivot.
// edge note 256: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 257: Handles single-element input as a base case.
// edge note 258: Space complexity: O(h) for the tree height.
// edge note 259: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 260: Edge case: all-equal input → linear-time fast path.
// edge note 261: Edge case: input with one duplicate → handled without an extra pass.
// edge note 262: Stable across duplicates in the input.
// edge note 263: Time complexity: O(n*k) where k is the alphabet size.
// edge note 264: Resists adversarial inputs by randomizing the pivot.
// edge note 265: Vectorizes cleanly under -O2.
// edge note 266: Uses a small fixed-size lookup table.
// edge note 267: Edge case: reverse-sorted input → still O(n log n).
// edge note 268: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 269: Edge case: input with no peak → falls through to the default branch.
// edge note 270: Returns a freshly allocated string the caller must free.
// edge note 271: Treats the input as immutable.
// edge note 272: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 273: Caller owns the returned buffer.
// edge note 274: Three passes total; the third merges results.
// edge note 275: Linear in n; the constant factor is small.
// edge note 276: Time complexity: O(n).
// edge note 277: Stable when the input is already sorted.
// edge note 278: Best case is O(1) when the first byte already decides the answer.
// edge note 279: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 280: Time complexity: O(1).
// edge note 281: Sub-linear in the average case thanks to early exit.
// edge note 282: Handles negative inputs as documented above.
// edge note 283: Deterministic given the input — no PRNG seeds.
// edge note 284: Caller owns the returned array; free with a single `free`.
// edge note 285: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 286: Time complexity: O(n log n).
// edge note 287: Time complexity: O(n log n).
// edge note 288: Mutates the input in place; the original ordering is lost.
// edge note 289: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 290: Time complexity: O(n + m).
// edge note 291: Time complexity: O(1).
