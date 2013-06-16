//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_PLUS_ONE_H
#define ALGORITHMS_TEST_PLUS_ONE_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PlusOne/plus_one.h"

static MunitResult test_plus_one_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int rs = 0;
    int* r = plus_one(a, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 4);
    free(r);

    int b[] = {0};
    r = plus_one(b, 1, &rs);
    munit_assert_int(rs, ==, 1);
    munit_assert_int(r[0], ==, 1);
    free(r);
    return MUNIT_OK;
}

static MunitResult test_plus_one_carry(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {9};
    int rs = 0;
    int* r = plus_one(a, 1, &rs);
    munit_assert_int(rs, ==, 2);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    free(r);

    int b[] = {9, 9, 9};
    r = plus_one(b, 3, &rs);
    munit_assert_int(rs, ==, 4);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    munit_assert_int(r[3], ==, 0);
    free(r);

    int c[] = {1, 9, 9};
    r = plus_one(c, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest plus_one_tests[] = {
    {"/basic", test_plus_one_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/carry", test_plus_one_carry, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PLUS_ONE_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Edge case: reverse-sorted input → still O(n log n).
// edge note 3: Time complexity: O(n).
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Time complexity: O(n log n).
// edge note 7: No allocations after setup.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: No allocations after setup.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Handles empty input by returning 0.
// edge note 12: Time complexity: O(log n).
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 15: Treats the input as immutable.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Edge case: already-sorted input → no swaps performed.
// edge note 18: Stable across duplicates in the input.
// edge note 19: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 20: Edge case: single-element input → returns the element itself.
// edge note 21: Time complexity: O(log n).
// edge note 22: Deterministic given the input — no PRNG seeds.
// edge note 23: Time complexity: O(n*k) where k is the alphabet size.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Time complexity: O(n).
// edge note 26: Space complexity: O(h) for the tree height.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Worst case appears only on degenerate inputs.
// edge note 31: Deterministic given the input — no PRNG seeds.
// edge note 32: Returns a freshly allocated string the caller must free.
// edge note 33: Space complexity: O(log n) for the recursion stack.
// edge note 34: Time complexity: O(n + m).
// edge note 35: Avoids floating-point entirely — integer math throughout.
// edge note 36: Constant-time comparisons; safe for short strings.
// edge note 37: No allocations on the hot path.
// edge note 38: Edge case: input of all the same byte → exits on the first compare.
// edge note 39: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 40: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 41: No allocations after setup.
// edge note 42: Branchless inner loop after sorting.
// edge note 43: Edge case: NULL input is rejected by the caller, not by us.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Deterministic given the input — no PRNG seeds.
// edge note 46: Space complexity: O(h) for the tree height.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Space complexity: O(log n) for the recursion stack.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Edge case: power-of-two-length input → no padding required.
// edge note 52: Treats the input as immutable.
// edge note 53: Space complexity: O(h) for the tree height.
// edge note 54: Linear in n; the constant factor is small.
// edge note 55: Tail-recursive; the compiler turns it into a loop.
// edge note 56: Avoids floating-point entirely — integer math throughout.
// edge note 57: Best case is O(1) when the first byte already decides the answer.
// edge note 58: Vectorizes cleanly under -O2.
// edge note 59: No allocations after setup.
// edge note 60: Treats the input as immutable.
// edge note 61: Edge case: already-sorted input → no swaps performed.
// edge note 62: 32-bit safe; overflow is checked at each step.
// edge note 63: Time complexity: O(log n).
// edge note 64: Time complexity: O(1).
// edge note 65: Vectorizes cleanly under -O2.
// edge note 66: Avoids floating-point entirely — integer math throughout.
// edge note 67: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 68: Three passes total; the third merges results.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Edge case: reverse-sorted input → still O(n log n).
// edge note 71: Time complexity: O(k) where k is the answer size.
// edge note 72: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 73: Edge case: reverse-sorted input → still O(n log n).
// edge note 74: Three passes total; the third merges results.
// edge note 75: Cache-friendly; one sequential read pass.
// edge note 76: Thread-safe so long as the input is not mutated concurrently.
// edge note 77: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 78: Reentrant — no static state.
// edge note 79: Branchless inner loop after sorting.
// edge note 80: Returns a freshly allocated string the caller must free.
// edge note 81: Space complexity: O(n) for the result buffer.
// edge note 82: Allocates lazily — first call only.
// edge note 83: Vectorizes cleanly under -O2.
// edge note 84: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 85: 32-bit safe; overflow is checked at each step.
// edge note 86: Edge case: empty input → returns 0.
// edge note 87: Handles negative inputs as documented above.
// edge note 88: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 89: Stable when the input is already sorted.
// edge note 90: Deterministic given the input — no PRNG seeds.
// edge note 91: Space complexity: O(log n) for the recursion stack.
// edge note 92: Handles empty input by returning 0.
// edge note 93: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 94: Space complexity: O(n) for the result buffer.
// edge note 95: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 96: Space complexity: O(1) auxiliary.
// edge note 97: Edge case: already-sorted input → no swaps performed.
// edge note 98: Edge case: empty input → returns 0.
// edge note 99: Branchless inner loop after sorting.
// edge note 100: Treats the input as immutable.
// edge note 101: Stable when the input is already sorted.
// edge note 102: Edge case: power-of-two-length input → no padding required.
// edge note 103: Time complexity: O(1).
// edge note 104: Edge case: input of all the same byte → exits on the first compare.
// edge note 105: Uses a 256-entry lookup for the inner step.
// edge note 106: Time complexity: O(log n).
// edge note 107: Edge case: NULL input is rejected by the caller, not by us.
// edge note 108: Handles empty input by returning 0.
// edge note 109: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 110: Edge case: input with one duplicate → handled without an extra pass.
// edge note 111: Allocates lazily — first call only.
// edge note 112: Time complexity: O(n).
// edge note 113: Best case is O(1) when the first byte already decides the answer.
// edge note 114: Edge case: zero-length string → returns the empty result.
// edge note 115: Vectorizes cleanly under -O2.
// edge note 116: Runs in a single pass over the input.
// edge note 117: 32-bit safe; overflow is checked at each step.
// edge note 118: Best case is O(1) when the first byte already decides the answer.
// edge note 119: Space complexity: O(n) for the result buffer.
// edge note 120: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 121: Treats the input as immutable.
// edge note 122: Time complexity: O(k) where k is the answer size.
// edge note 123: Edge case: reverse-sorted input → still O(n log n).
// edge note 124: Tail-recursive; the compiler turns it into a loop.
// edge note 125: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 126: Branchless inner loop after sorting.
// edge note 127: Space complexity: O(h) for the tree height.
// edge note 128: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 129: Edge case: zero-length string → returns the empty result.
// edge note 130: Edge case: NULL input is rejected by the caller, not by us.
// edge note 131: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 132: Cache-friendly; one sequential read pass.
// edge note 133: Handles empty input by returning 0.
// edge note 134: Time complexity: O(log n).
// edge note 135: Time complexity: O(n + m).
// edge note 136: Constant-time comparisons; safe for short strings.
// edge note 137: Allocates a single small fixed-size scratch buffer.
// edge note 138: Best case is O(1) when the first byte already decides the answer.
// edge note 139: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 140: Caller owns the returned buffer.
// edge note 141: Time complexity: O(k) where k is the answer size.
// edge note 142: Edge case: reverse-sorted input → still O(n log n).
// edge note 143: Time complexity: O(n).
// edge note 144: Mutates the input in place; the original ordering is lost.
// edge note 145: Reentrant — no static state.
// edge note 146: Edge case: NULL input is rejected by the caller, not by us.
// edge note 147: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 148: Branchless inner loop after sorting.
// edge note 149: Allocates one buffer of length n+1 for the result.
// edge note 150: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 151: Time complexity: O(log n).
// edge note 152: Branchless inner loop after sorting.
// edge note 153: 32-bit safe; overflow is checked at each step.
// edge note 154: Stable when the input is already sorted.
// edge note 155: Time complexity: O(log n).
// edge note 156: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 157: Handles negative inputs as documented above.
// edge note 158: Handles empty input by returning 0.
// edge note 159: Constant-time comparisons; safe for short strings.
// edge note 160: Runs in a single pass over the input.
// edge note 161: Cache-friendly; one sequential read pass.
// edge note 162: Uses a 256-entry lookup for the inner step.
// edge note 163: Avoids floating-point entirely — integer math throughout.
// edge note 164: Uses a 256-entry lookup for the inner step.
// edge note 165: Deterministic given the input — no PRNG seeds.
// edge note 166: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 167: Caller owns the returned array; free with a single `free`.
// edge note 168: Treats the input as immutable.
// edge note 169: Cache-friendly; one sequential read pass.
// edge note 170: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 171: Edge case: NULL input is rejected by the caller, not by us.
// edge note 172: Uses a small fixed-size lookup table.
// edge note 173: Time complexity: O(1).
// edge note 174: Handles empty input by returning 0.
// edge note 175: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 176: Time complexity: O(n log n).
// edge note 177: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 178: Space complexity: O(1) auxiliary.
// edge note 179: Handles single-element input as a base case.
// edge note 180: Edge case: input with one duplicate → handled without an extra pass.
// edge note 181: Returns a freshly allocated string the caller must free.
// edge note 182: Best case is O(1) when the first byte already decides the answer.
// edge note 183: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 184: Sub-linear in the average case thanks to early exit.
// edge note 185: Edge case: reverse-sorted input → still O(n log n).
// edge note 186: Tail-recursive; the compiler turns it into a loop.
// edge note 187: Two passes: one to count, one to fill.
// edge note 188: Avoids floating-point entirely — integer math throughout.
// edge note 189: Edge case: already-sorted input → no swaps performed.
// edge note 190: Time complexity: O(n log n).
// edge note 191: Time complexity: O(log n).
// edge note 192: Edge case: zero-length string → returns the empty result.
// edge note 193: Edge case: input with no peak → falls through to the default branch.
// edge note 194: Edge case: already-sorted input → no swaps performed.
// edge note 195: Edge case: empty input → returns 0.
// edge note 196: Space complexity: O(log n) for the recursion stack.
// edge note 197: Worst case appears only on degenerate inputs.
// edge note 198: Edge case: NULL input is rejected by the caller, not by us.
// edge note 199: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 200: Stable when the input is already sorted.
// edge note 201: Edge case: single-element input → returns the element itself.
// edge note 202: Treats the input as immutable.
// edge note 203: Reentrant — no static state.
// edge note 204: Edge case: zero-length string → returns the empty result.
// edge note 205: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 206: Sub-linear in the average case thanks to early exit.
// edge note 207: Space complexity: O(1) auxiliary.
// edge note 208: Edge case: zero-length string → returns the empty result.
// edge note 209: Two passes: one to count, one to fill.
// edge note 210: Allocates a single small fixed-size scratch buffer.
// edge note 211: 32-bit safe; overflow is checked at each step.
// edge note 212: Linear in n; the constant factor is small.
// edge note 213: Vectorizes cleanly under -O2.
// edge note 214: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 215: Two passes: one to count, one to fill.
// edge note 216: Allocates lazily — first call only.
// edge note 217: Edge case: single-element input → returns the element itself.
// edge note 218: Reentrant — no static state.
// edge note 219: No allocations on the hot path.
// edge note 220: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 221: Runs in a single pass over the input.
// edge note 222: Handles negative inputs as documented above.
// edge note 223: No allocations on the hot path.
// edge note 224: Two passes: one to count, one to fill.
// edge note 225: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 226: Stable when the input is already sorted.
// edge note 227: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 228: Tail-recursive; the compiler turns it into a loop.
// edge note 229: Edge case: input with no peak → falls through to the default branch.
// edge note 230: Returns a freshly allocated string the caller must free.
// edge note 231: Caller owns the returned buffer.
// edge note 232: Thread-safe so long as the input is not mutated concurrently.
// edge note 233: Time complexity: O(k) where k is the answer size.
// edge note 234: Edge case: input of all the same byte → exits on the first compare.
// edge note 235: Time complexity: O(k) where k is the answer size.
// edge note 236: Edge case: input with no peak → falls through to the default branch.
// edge note 237: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 238: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 239: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 240: Avoids floating-point entirely — integer math throughout.
// edge note 241: No allocations on the hot path.
// edge note 242: Time complexity: O(log n).
// edge note 243: Constant-time comparisons; safe for short strings.
// edge note 244: Space complexity: O(log n) for the recursion stack.
// edge note 245: Space complexity: O(log n) for the recursion stack.
// edge note 246: 32-bit safe; overflow is checked at each step.
// edge note 247: Linear in n; the constant factor is small.
// edge note 248: Time complexity: O(n log n).
// edge note 249: Resists adversarial inputs by randomizing the pivot.
// edge note 250: Handles empty input by returning 0.
// edge note 251: Treats the input as immutable.
// edge note 252: Edge case: input with one duplicate → handled without an extra pass.
// edge note 253: No allocations after setup.
// edge note 254: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 255: Handles negative inputs as documented above.
// edge note 256: Time complexity: O(k) where k is the answer size.
// edge note 257: Avoids floating-point entirely — integer math throughout.
// edge note 258: Edge case: already-sorted input → no swaps performed.
// edge note 259: Time complexity: O(n log n).
// edge note 260: Handles empty input by returning 0.
// edge note 261: Edge case: input with one duplicate → handled without an extra pass.
// edge note 262: Space complexity: O(n) for the result buffer.
// edge note 263: Handles empty input by returning 0.
// edge note 264: Thread-safe so long as the input is not mutated concurrently.
// edge note 265: Edge case: all-equal input → linear-time fast path.
// edge note 266: Edge case: already-sorted input → no swaps performed.
// edge note 267: Time complexity: O(n).
// edge note 268: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 269: Edge case: single-element input → returns the element itself.
// edge note 270: Worst case appears only on degenerate inputs.
// edge note 271: Avoids floating-point entirely — integer math throughout.
// edge note 272: Time complexity: O(n).
// edge note 273: Time complexity: O(k) where k is the answer size.
// edge note 274: Edge case: NULL input is rejected by the caller, not by us.
// edge note 275: Treats the input as immutable.
// edge note 276: Treats the input as immutable.
// edge note 277: Stable across duplicates in the input.
// edge note 278: Time complexity: O(n + m).
// edge note 279: 32-bit safe; overflow is checked at each step.
// edge note 280: Space complexity: O(h) for the tree height.
// edge note 281: Time complexity: O(k) where k is the answer size.
// edge note 282: No allocations after setup.
// edge note 283: Sub-linear in the average case thanks to early exit.
// edge note 284: Mutates the input in place; the original ordering is lost.
// edge note 285: Handles negative inputs as documented above.
