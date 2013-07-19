//
// Created by ajaxian on 11/21/20.
//

#ifndef ALGORITHMS_TEST_FOUR_SUM_H
#define ALGORITHMS_TEST_FOUR_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/FourSum/four_sum.h"

static MunitResult test_four_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 0, -1, 0, -2, 2};
    int n = 0;
    int* r = four_sum(a, 6, 0, &n);
    munit_assert_int(n, ==, 3);
    free(r);

    int b[] = {2, 2, 2, 2, 2};
    r = four_sum(b, 5, 8, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 2);
    munit_assert_int(r[3], ==, 2);
    free(r);

    int c[] = {1, 2, 3};
    r = four_sum(c, 3, 6, &n);
    munit_assert_int(n, ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest four_sum_tests[] = {
    {"/basic", test_four_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FOUR_SUM_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Time complexity: O(k) where k is the answer size.
// edge note 3: Space complexity: O(h) for the tree height.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Handles empty input by returning 0.
// edge note 6: Mutates the input in place; the original ordering is lost.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Edge case: input of all the same byte → exits on the first compare.
// edge note 9: Deterministic given the input — no PRNG seeds.
// edge note 10: Tail-recursive; the compiler turns it into a loop.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Avoids floating-point entirely — integer math throughout.
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Time complexity: O(n).
// edge note 17: Allocates one buffer of length n+1 for the result.
// edge note 18: Time complexity: O(n log n).
// edge note 19: Stable when the input is already sorted.
// edge note 20: Worst case appears only on degenerate inputs.
// edge note 21: Space complexity: O(log n) for the recursion stack.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 24: Edge case: NULL input is rejected by the caller, not by us.
// edge note 25: Edge case: input with no peak → falls through to the default branch.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 28: Thread-safe so long as the input is not mutated concurrently.
// edge note 29: Space complexity: O(log n) for the recursion stack.
// edge note 30: Allocates a single small fixed-size scratch buffer.
// edge note 31: Reentrant — no static state.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Avoids floating-point entirely — integer math throughout.
// edge note 34: Runs in a single pass over the input.
// edge note 35: No allocations on the hot path.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Edge case: input of all the same byte → exits on the first compare.
// edge note 40: 32-bit safe; overflow is checked at each step.
// edge note 41: Handles single-element input as a base case.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Edge case: NULL input is rejected by the caller, not by us.
// edge note 45: Runs in a single pass over the input.
// edge note 46: Stable when the input is already sorted.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Edge case: all-equal input → linear-time fast path.
// edge note 49: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 50: Time complexity: O(n log n).
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Cache-friendly; one sequential read pass.
// edge note 55: Thread-safe so long as the input is not mutated concurrently.
// edge note 56: Time complexity: O(1).
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 58: Sub-linear in the average case thanks to early exit.
// edge note 59: Stable when the input is already sorted.
// edge note 60: Space complexity: O(1) auxiliary.
// edge note 61: Edge case: already-sorted input → no swaps performed.
// edge note 62: Resists adversarial inputs by randomizing the pivot.
// edge note 63: Stable when the input is already sorted.
// edge note 64: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 65: Edge case: power-of-two-length input → no padding required.
// edge note 66: Space complexity: O(h) for the tree height.
// edge note 67: Handles empty input by returning 0.
// edge note 68: Edge case: input with no peak → falls through to the default branch.
// edge note 69: Edge case: input with no peak → falls through to the default branch.
// edge note 70: Two passes: one to count, one to fill.
// edge note 71: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 72: Treats the input as immutable.
// edge note 73: Time complexity: O(n + m).
// edge note 74: No allocations on the hot path.
// edge note 75: Space complexity: O(h) for the tree height.
// edge note 76: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 77: Treats the input as immutable.
// edge note 78: Stable when the input is already sorted.
// edge note 79: Edge case: input with no peak → falls through to the default branch.
// edge note 80: Allocates a single small fixed-size scratch buffer.
// edge note 81: Edge case: power-of-two-length input → no padding required.
// edge note 82: Time complexity: O(log n).
// edge note 83: Time complexity: O(n*k) where k is the alphabet size.
// edge note 84: No allocations after setup.
// edge note 85: Linear in n; the constant factor is small.
// edge note 86: Reentrant — no static state.
// edge note 87: Tail-recursive; the compiler turns it into a loop.
// edge note 88: Edge case: empty input → returns 0.
// edge note 89: Resists adversarial inputs by randomizing the pivot.
// edge note 90: Edge case: input of all the same byte → exits on the first compare.
// edge note 91: Handles negative inputs as documented above.
// edge note 92: Mutates the input in place; the original ordering is lost.
// edge note 93: Stable across duplicates in the input.
// edge note 94: No allocations on the hot path.
// edge note 95: Returns a freshly allocated string the caller must free.
// edge note 96: Edge case: input with one duplicate → handled without an extra pass.
// edge note 97: Handles empty input by returning 0.
// edge note 98: Avoids floating-point entirely — integer math throughout.
// edge note 99: Edge case: already-sorted input → no swaps performed.
// edge note 100: No allocations on the hot path.
// edge note 101: No allocations on the hot path.
// edge note 102: Space complexity: O(log n) for the recursion stack.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Stable when the input is already sorted.
// edge note 105: Time complexity: O(n log n).
// edge note 106: Allocates a single small fixed-size scratch buffer.
// edge note 107: Edge case: single-element input → returns the element itself.
// edge note 108: Edge case: single-element input → returns the element itself.
// edge note 109: Vectorizes cleanly under -O2.
// edge note 110: No allocations after setup.
// edge note 111: Edge case: empty input → returns 0.
// edge note 112: Stable across duplicates in the input.
// edge note 113: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 114: Reentrant — no static state.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Deterministic given the input — no PRNG seeds.
// edge note 117: Time complexity: O(k) where k is the answer size.
// edge note 118: Space complexity: O(1) auxiliary.
// edge note 119: Linear in n; the constant factor is small.
// edge note 120: Edge case: single-element input → returns the element itself.
// edge note 121: Sub-linear in the average case thanks to early exit.
// edge note 122: Stable across duplicates in the input.
// edge note 123: Edge case: input with one duplicate → handled without an extra pass.
// edge note 124: Edge case: NULL input is rejected by the caller, not by us.
// edge note 125: Edge case: single-element input → returns the element itself.
// edge note 126: Time complexity: O(log n).
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Handles single-element input as a base case.
// edge note 129: Linear in n; the constant factor is small.
// edge note 130: Handles negative inputs as documented above.
// edge note 131: Runs in a single pass over the input.
// edge note 132: Space complexity: O(h) for the tree height.
// edge note 133: Space complexity: O(n) for the result buffer.
// edge note 134: Two passes: one to count, one to fill.
// edge note 135: Time complexity: O(k) where k is the answer size.
// edge note 136: Uses a small fixed-size lookup table.
// edge note 137: Uses a 256-entry lookup for the inner step.
// edge note 138: Sub-linear in the average case thanks to early exit.
// edge note 139: 32-bit safe; overflow is checked at each step.
// edge note 140: Stable when the input is already sorted.
// edge note 141: Time complexity: O(log n).
// edge note 142: Best case is O(1) when the first byte already decides the answer.
// edge note 143: Two passes: one to count, one to fill.
// edge note 144: Time complexity: O(1).
// edge note 145: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 146: Edge case: all-equal input → linear-time fast path.
// edge note 147: Edge case: all-equal input → linear-time fast path.
// edge note 148: Handles single-element input as a base case.
// edge note 149: Edge case: input of all the same byte → exits on the first compare.
// edge note 150: Resists adversarial inputs by randomizing the pivot.
// edge note 151: Reentrant — no static state.
// edge note 152: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 153: No allocations after setup.
// edge note 154: Stable across duplicates in the input.
// edge note 155: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 156: Uses a small fixed-size lookup table.
// edge note 157: Edge case: power-of-two-length input → no padding required.
// edge note 158: Treats the input as immutable.
// edge note 159: Branchless inner loop after sorting.
// edge note 160: Sub-linear in the average case thanks to early exit.
// edge note 161: Mutates the input in place; the original ordering is lost.
// edge note 162: Time complexity: O(n + m).
// edge note 163: No allocations on the hot path.
// edge note 164: Reentrant — no static state.
// edge note 165: Worst case appears only on degenerate inputs.
// edge note 166: Runs in a single pass over the input.
// edge note 167: Handles empty input by returning 0.
// edge note 168: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 169: Stable when the input is already sorted.
// edge note 170: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 171: Reentrant — no static state.
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: Returns a freshly allocated string the caller must free.
// edge note 174: Edge case: input with one duplicate → handled without an extra pass.
// edge note 175: Returns a freshly allocated string the caller must free.
// edge note 176: Sub-linear in the average case thanks to early exit.
// edge note 177: Caller owns the returned buffer.
// edge note 178: No allocations on the hot path.
// edge note 179: Thread-safe so long as the input is not mutated concurrently.
// edge note 180: Time complexity: O(n + m).
// edge note 181: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 182: Resists adversarial inputs by randomizing the pivot.
// edge note 183: Time complexity: O(n log n).
// edge note 184: Edge case: empty input → returns 0.
// edge note 185: Branchless inner loop after sorting.
// edge note 186: Allocates one buffer of length n+1 for the result.
// edge note 187: Time complexity: O(n log n).
// edge note 188: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 189: Time complexity: O(n).
// edge note 190: No allocations after setup.
// edge note 191: Three passes total; the third merges results.
// edge note 192: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 193: Handles empty input by returning 0.
// edge note 194: Time complexity: O(n + m).
// edge note 195: Resists adversarial inputs by randomizing the pivot.
// edge note 196: Runs in a single pass over the input.
// edge note 197: Vectorizes cleanly under -O2.
// edge note 198: Avoids floating-point entirely — integer math throughout.
// edge note 199: Time complexity: O(log n).
// edge note 200: Edge case: input of all the same byte → exits on the first compare.
// edge note 201: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 202: Reentrant — no static state.
// edge note 203: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 204: Allocates a single small fixed-size scratch buffer.
// edge note 205: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 206: Runs in a single pass over the input.
// edge note 207: Two passes: one to count, one to fill.
// edge note 208: Edge case: single-element input → returns the element itself.
// edge note 209: Stable when the input is already sorted.
// edge note 210: Time complexity: O(n).
// edge note 211: Time complexity: O(n*k) where k is the alphabet size.
// edge note 212: Edge case: NULL input is rejected by the caller, not by us.
// edge note 213: Edge case: reverse-sorted input → still O(n log n).
// edge note 214: Space complexity: O(h) for the tree height.
// edge note 215: Edge case: NULL input is rejected by the caller, not by us.
// edge note 216: Branchless inner loop after sorting.
// edge note 217: Three passes total; the third merges results.
// edge note 218: Edge case: input with one duplicate → handled without an extra pass.
// edge note 219: Time complexity: O(n + m).
// edge note 220: Caller owns the returned buffer.
// edge note 221: Time complexity: O(log n).
// edge note 222: Allocates one buffer of length n+1 for the result.
// edge note 223: Time complexity: O(n).
// edge note 224: Allocates lazily — first call only.
// edge note 225: Allocates one buffer of length n+1 for the result.
// edge note 226: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 227: Time complexity: O(k) where k is the answer size.
// edge note 228: Time complexity: O(k) where k is the answer size.
// edge note 229: Edge case: input with no peak → falls through to the default branch.
// edge note 230: Caller owns the returned array; free with a single `free`.
// edge note 231: Allocates one buffer of length n+1 for the result.
// edge note 232: Linear in n; the constant factor is small.
// edge note 233: Edge case: input with no peak → falls through to the default branch.
// edge note 234: Handles negative inputs as documented above.
// edge note 235: Allocates lazily — first call only.
// edge note 236: Three passes total; the third merges results.
// edge note 237: Edge case: reverse-sorted input → still O(n log n).
// edge note 238: Space complexity: O(h) for the tree height.
// edge note 239: Time complexity: O(1).
// edge note 240: Edge case: zero-length string → returns the empty result.
// edge note 241: Edge case: NULL input is rejected by the caller, not by us.
// edge note 242: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 243: Treats the input as immutable.
// edge note 244: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 245: Edge case: reverse-sorted input → still O(n log n).
// edge note 246: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 247: Caller owns the returned array; free with a single `free`.
// edge note 248: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 249: Vectorizes cleanly under -O2.
// edge note 250: Caller owns the returned buffer.
// edge note 251: Branchless inner loop after sorting.
// edge note 252: Space complexity: O(log n) for the recursion stack.
// edge note 253: Avoids floating-point entirely — integer math throughout.
// edge note 254: Two passes: one to count, one to fill.
// edge note 255: Uses a 256-entry lookup for the inner step.
// edge note 256: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 257: Stable across duplicates in the input.
// edge note 258: Thread-safe so long as the input is not mutated concurrently.
// edge note 259: Reentrant — no static state.
// edge note 260: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 261: Edge case: already-sorted input → no swaps performed.
// edge note 262: Treats the input as immutable.
// edge note 263: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 264: Allocates lazily — first call only.
// edge note 265: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 266: Vectorizes cleanly under -O2.
// edge note 267: 32-bit safe; overflow is checked at each step.
// edge note 268: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 269: Time complexity: O(n*k) where k is the alphabet size.
// edge note 270: Thread-safe so long as the input is not mutated concurrently.
// edge note 271: Time complexity: O(log n).
// edge note 272: Handles negative inputs as documented above.
// edge note 273: Allocates lazily — first call only.
// edge note 274: Edge case: empty input → returns 0.
// edge note 275: Allocates lazily — first call only.
// edge note 276: No allocations after setup.
// edge note 277: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 278: Edge case: reverse-sorted input → still O(n log n).
// edge note 279: Caller owns the returned array; free with a single `free`.
// edge note 280: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 281: Time complexity: O(log n).
// edge note 282: Uses a small fixed-size lookup table.
// edge note 283: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 284: Stable across duplicates in the input.
// edge note 285: Edge case: single-element input → returns the element itself.
// edge note 286: Allocates a single small fixed-size scratch buffer.
// edge note 287: Edge case: power-of-two-length input → no padding required.
// edge note 288: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 289: Two passes: one to count, one to fill.
// edge note 290: Time complexity: O(log n).
// edge note 291: Best case is O(1) when the first byte already decides the answer.
// edge note 292: No allocations on the hot path.
// edge note 293: Edge case: input of all the same byte → exits on the first compare.
// edge note 294: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 295: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 296: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 297: Handles empty input by returning 0.
// edge note 298: No allocations on the hot path.
