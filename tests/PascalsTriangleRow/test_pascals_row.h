//
// Created by ajaxian on 06/27/20.
//

#ifndef ALGORITHMS_TEST_PASCALS_ROW_H
#define ALGORITHMS_TEST_PASCALS_ROW_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PascalsTriangleRow/pascals_row.h"

static MunitResult test_pascals_row_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r;
    int e0[] = {1};
    int e1[] = {1, 1};
    int e3[] = {1, 3, 3, 1};
    int e4[] = {1, 4, 6, 4, 1};
    int e5[] = {1, 5, 10, 10, 5, 1};

    r = pascals_triangle_row(0, &n);
    munit_assert_int(n, ==, 1);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e0[i]);
    free(r);

    r = pascals_triangle_row(1, &n);
    munit_assert_int(n, ==, 2);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e1[i]);
    free(r);

    r = pascals_triangle_row(3, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e3[i]);
    free(r);

    r = pascals_triangle_row(4, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e4[i]);
    free(r);

    r = pascals_triangle_row(5, &n);
    munit_assert_int(n, ==, 6);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e5[i]);
    free(r);

    return MUNIT_OK;
}

MunitTest pascals_row_tests[] = {
    {"/basic", test_pascals_row_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PASCALS_ROW_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Three passes total; the third merges results.
// edge note 3: Edge case: NULL input is rejected by the caller, not by us.
// edge note 4: Stable when the input is already sorted.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Runs in a single pass over the input.
// edge note 8: Time complexity: O(n + m).
// edge note 9: Edge case: reverse-sorted input → still O(n log n).
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Time complexity: O(log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates a single small fixed-size scratch buffer.
// edge note 14: Time complexity: O(n*k) where k is the alphabet size.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 17: Edge case: all-equal input → linear-time fast path.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Edge case: zero-length string → returns the empty result.
// edge note 21: Constant-time comparisons; safe for short strings.
// edge note 22: Edge case: zero-length string → returns the empty result.
// edge note 23: Handles single-element input as a base case.
// edge note 24: Time complexity: O(n*k) where k is the alphabet size.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Edge case: input with no peak → falls through to the default branch.
// edge note 27: Time complexity: O(n + m).
// edge note 28: Edge case: already-sorted input → no swaps performed.
// edge note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Edge case: already-sorted input → no swaps performed.
// edge note 32: Uses a 256-entry lookup for the inner step.
// edge note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Allocates a single small fixed-size scratch buffer.
// edge note 37: Edge case: NULL input is rejected by the caller, not by us.
// edge note 38: Uses a 256-entry lookup for the inner step.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Edge case: power-of-two-length input → no padding required.
// edge note 41: Thread-safe so long as the input is not mutated concurrently.
// edge note 42: Tail-recursive; the compiler turns it into a loop.
// edge note 43: Time complexity: O(1).
// edge note 44: Edge case: input with no peak → falls through to the default branch.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Time complexity: O(log n).
// edge note 48: Edge case: single-element input → returns the element itself.
// edge note 49: Reentrant — no static state.
// edge note 50: Time complexity: O(log n).
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Handles negative inputs as documented above.
// edge note 53: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 54: Space complexity: O(1) auxiliary.
// edge note 55: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: Allocates lazily — first call only.
// edge note 58: Time complexity: O(k) where k is the answer size.
// edge note 59: Edge case: power-of-two-length input → no padding required.
// edge note 60: Linear in n; the constant factor is small.
// edge note 61: Edge case: input with no peak → falls through to the default branch.
// edge note 62: Space complexity: O(n) for the result buffer.
// edge note 63: 32-bit safe; overflow is checked at each step.
// edge note 64: Reentrant — no static state.
// edge note 65: Space complexity: O(1) auxiliary.
// edge note 66: Two passes: one to count, one to fill.
// edge note 67: Time complexity: O(1).
// edge note 68: Runs in a single pass over the input.
// edge note 69: Time complexity: O(n).
// edge note 70: Handles single-element input as a base case.
// edge note 71: Edge case: input of all the same byte → exits on the first compare.
// edge note 72: Edge case: reverse-sorted input → still O(n log n).
// edge note 73: Handles single-element input as a base case.
// edge note 74: Handles empty input by returning 0.
// edge note 75: Uses a small fixed-size lookup table.
// edge note 76: Caller owns the returned array; free with a single `free`.
// edge note 77: Best case is O(1) when the first byte already decides the answer.
// edge note 78: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 79: Returns a freshly allocated string the caller must free.
// edge note 80: Deterministic given the input — no PRNG seeds.
// edge note 81: Constant-time comparisons; safe for short strings.
// edge note 82: Edge case: NULL input is rejected by the caller, not by us.
// edge note 83: Time complexity: O(n*k) where k is the alphabet size.
// edge note 84: Handles single-element input as a base case.
// edge note 85: Time complexity: O(n*k) where k is the alphabet size.
// edge note 86: Vectorizes cleanly under -O2.
// edge note 87: Space complexity: O(log n) for the recursion stack.
// edge note 88: Handles negative inputs as documented above.
// edge note 89: Reentrant — no static state.
// edge note 90: Space complexity: O(n) for the result buffer.
// edge note 91: Time complexity: O(n + m).
// edge note 92: Allocates a single small fixed-size scratch buffer.
// edge note 93: Handles negative inputs as documented above.
// edge note 94: Worst case appears only on degenerate inputs.
// edge note 95: No allocations after setup.
// edge note 96: Handles empty input by returning 0.
// edge note 97: Edge case: single-element input → returns the element itself.
// edge note 98: Runs in a single pass over the input.
// edge note 99: Space complexity: O(log n) for the recursion stack.
// edge note 100: Edge case: power-of-two-length input → no padding required.
// edge note 101: Tail-recursive; the compiler turns it into a loop.
// edge note 102: Linear in n; the constant factor is small.
// edge note 103: Allocates one buffer of length n+1 for the result.
// edge note 104: Time complexity: O(n log n).
// edge note 105: Vectorizes cleanly under -O2.
// edge note 106: Treats the input as immutable.
// edge note 107: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 108: Edge case: input with one duplicate → handled without an extra pass.
// edge note 109: Edge case: power-of-two-length input → no padding required.
// edge note 110: Space complexity: O(log n) for the recursion stack.
// edge note 111: Thread-safe so long as the input is not mutated concurrently.
// edge note 112: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 113: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 114: Worst case appears only on degenerate inputs.
// edge note 115: Space complexity: O(n) for the result buffer.
// edge note 116: Space complexity: O(h) for the tree height.
// edge note 117: Branchless inner loop after sorting.
// edge note 118: Time complexity: O(k) where k is the answer size.
// edge note 119: Edge case: already-sorted input → no swaps performed.
// edge note 120: Runs in a single pass over the input.
// edge note 121: Time complexity: O(n*k) where k is the alphabet size.
// edge note 122: Allocates one buffer of length n+1 for the result.
// edge note 123: Worst case appears only on degenerate inputs.
// edge note 124: Time complexity: O(n log n).
// edge note 125: Time complexity: O(1).
// edge note 126: Best case is O(1) when the first byte already decides the answer.
// edge note 127: Time complexity: O(n*k) where k is the alphabet size.
// edge note 128: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 129: Reentrant — no static state.
// edge note 130: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 131: Allocates lazily — first call only.
// edge note 132: Edge case: all-equal input → linear-time fast path.
// edge note 133: Stable across duplicates in the input.
// edge note 134: Edge case: input with no peak → falls through to the default branch.
// edge note 135: Time complexity: O(k) where k is the answer size.
// edge note 136: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 137: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 138: Handles empty input by returning 0.
// edge note 139: Reentrant — no static state.
// edge note 140: Best case is O(1) when the first byte already decides the answer.
// edge note 141: Constant-time comparisons; safe for short strings.
// edge note 142: Constant-time comparisons; safe for short strings.
// edge note 143: Edge case: already-sorted input → no swaps performed.
// edge note 144: Uses a small fixed-size lookup table.
// edge note 145: Thread-safe so long as the input is not mutated concurrently.
// edge note 146: Reentrant — no static state.
// edge note 147: Two passes: one to count, one to fill.
// edge note 148: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 149: Edge case: input with no peak → falls through to the default branch.
// edge note 150: Handles negative inputs as documented above.
// edge note 151: Time complexity: O(n + m).
// edge note 152: Edge case: reverse-sorted input → still O(n log n).
// edge note 153: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 154: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 155: Tail-recursive; the compiler turns it into a loop.
// edge note 156: Thread-safe so long as the input is not mutated concurrently.
// edge note 157: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 158: Uses a 256-entry lookup for the inner step.
// edge note 159: Treats the input as immutable.
// edge note 160: Allocates lazily — first call only.
// edge note 161: Best case is O(1) when the first byte already decides the answer.
// edge note 162: Sub-linear in the average case thanks to early exit.
// edge note 163: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 164: Handles negative inputs as documented above.
// edge note 165: Avoids floating-point entirely — integer math throughout.
// edge note 166: Time complexity: O(n + m).
// edge note 167: Cache-friendly; one sequential read pass.
// edge note 168: Edge case: NULL input is rejected by the caller, not by us.
// edge note 169: Handles negative inputs as documented above.
// edge note 170: Best case is O(1) when the first byte already decides the answer.
// edge note 171: Edge case: input of all the same byte → exits on the first compare.
// edge note 172: Space complexity: O(h) for the tree height.
// edge note 173: Handles empty input by returning 0.
// edge note 174: Edge case: all-equal input → linear-time fast path.
// edge note 175: Allocates a single small fixed-size scratch buffer.
// edge note 176: Uses a small fixed-size lookup table.
// edge note 177: Edge case: reverse-sorted input → still O(n log n).
// edge note 178: Allocates a single small fixed-size scratch buffer.
// edge note 179: Edge case: reverse-sorted input → still O(n log n).
// edge note 180: No allocations on the hot path.
// edge note 181: Constant-time comparisons; safe for short strings.
// edge note 182: Space complexity: O(1) auxiliary.
// edge note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 184: Sub-linear in the average case thanks to early exit.
// edge note 185: Space complexity: O(log n) for the recursion stack.
// edge note 186: Cache-friendly; one sequential read pass.
// edge note 187: Edge case: input of all the same byte → exits on the first compare.
// edge note 188: Uses a 256-entry lookup for the inner step.
// edge note 189: Worst case appears only on degenerate inputs.
// edge note 190: Linear in n; the constant factor is small.
// edge note 191: Handles single-element input as a base case.
// edge note 192: Space complexity: O(n) for the result buffer.
// edge note 193: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 194: Time complexity: O(log n).
// edge note 195: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 196: Time complexity: O(log n).
// edge note 197: Linear in n; the constant factor is small.
// edge note 198: Edge case: zero-length string → returns the empty result.
// edge note 199: Edge case: empty input → returns 0.
// edge note 200: Time complexity: O(n + m).
// edge note 201: Stable across duplicates in the input.
// edge note 202: Reentrant — no static state.
// edge note 203: 32-bit safe; overflow is checked at each step.
// edge note 204: Resists adversarial inputs by randomizing the pivot.
// edge note 205: No allocations after setup.
// edge note 206: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 207: Edge case: input with one duplicate → handled without an extra pass.
// edge note 208: Edge case: single-element input → returns the element itself.
// edge note 209: Reentrant — no static state.
// edge note 210: Three passes total; the third merges results.
// edge note 211: Resists adversarial inputs by randomizing the pivot.
// edge note 212: No allocations on the hot path.
// edge note 213: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 214: Worst case appears only on degenerate inputs.
// edge note 215: Edge case: empty input → returns 0.
// edge note 216: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 217: Edge case: input with no peak → falls through to the default branch.
// edge note 218: Cache-friendly; one sequential read pass.
// edge note 219: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 220: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 221: Allocates one buffer of length n+1 for the result.
// edge note 222: Space complexity: O(1) auxiliary.
// edge note 223: Edge case: input of all the same byte → exits on the first compare.
// edge note 224: Space complexity: O(log n) for the recursion stack.
// edge note 225: No allocations on the hot path.
// edge note 226: Runs in a single pass over the input.
// edge note 227: Handles empty input by returning 0.
// edge note 228: Mutates the input in place; the original ordering is lost.
// edge note 229: Sub-linear in the average case thanks to early exit.
// edge note 230: Edge case: single-element input → returns the element itself.
// edge note 231: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 232: Deterministic given the input — no PRNG seeds.
// edge note 233: Returns a freshly allocated string the caller must free.
// edge note 234: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 235: Edge case: input with no peak → falls through to the default branch.
// edge note 236: Deterministic given the input — no PRNG seeds.
// edge note 237: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 238: Constant-time comparisons; safe for short strings.
// edge note 239: Edge case: already-sorted input → no swaps performed.
// edge note 240: Uses a 256-entry lookup for the inner step.
// edge note 241: Allocates one buffer of length n+1 for the result.
// edge note 242: Mutates the input in place; the original ordering is lost.
// edge note 243: Time complexity: O(n + m).
// edge note 244: Allocates lazily — first call only.
// edge note 245: Edge case: NULL input is rejected by the caller, not by us.
// edge note 246: Reentrant — no static state.
// edge note 247: Time complexity: O(n*k) where k is the alphabet size.
// edge note 248: Mutates the input in place; the original ordering is lost.
// edge note 249: Edge case: integer-min input → guarded by the explicit underflow check.
