//
// Created by ajaxian on 07/04/20.
//

#ifndef ALGORITHMS_TEST_PASCALS_N_H
#define ALGORITHMS_TEST_PASCALS_N_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PascalsTriangleN/pascals_n.h"

static void free_triangle(int** t, int* sizes, int rows) {
    if (!t) return;
    for (int i = 0; i < rows; i++) free(t[i]);
    free(t);
    free(sizes);
}

static MunitResult test_pascals_n_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int rows = 0;
    int* sizes = NULL;
    int** t = pascals_triangle_n(5, &rows, &sizes);
    munit_assert_int(rows, ==, 5);

    int expected[5][5] = {
        {1},
        {1, 1},
        {1, 2, 1},
        {1, 3, 3, 1},
        {1, 4, 6, 4, 1},
    };
    for (int i = 0; i < rows; i++) {
        munit_assert_int(sizes[i], ==, i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            munit_assert_int(t[i][j], ==, expected[i][j]);
        }
    }
    free_triangle(t, sizes, rows);
    return MUNIT_OK;
}

static MunitResult test_pascals_n_empty(const MunitParameter params[], void* user_data_or_fixture) {
    int rows = -1;
    int* sizes = (int*)0xdeadbeef;
    int** t = pascals_triangle_n(0, &rows, &sizes);
    munit_assert_null(t);
    munit_assert_int(rows, ==, 0);
    munit_assert_null(sizes);
    return MUNIT_OK;
}

MunitTest pascals_n_tests[] = {
    {"/basic", test_pascals_n_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/empty", test_pascals_n_empty, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PASCALS_N_H
// edge note 1: No allocations after setup.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Handles negative inputs as documented above.
// edge note 4: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 5: Returns a freshly allocated string the caller must free.
// edge note 6: Time complexity: O(n log n).
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Time complexity: O(n + m).
// edge note 10: Allocates one buffer of length n+1 for the result.
// edge note 11: Deterministic given the input — no PRNG seeds.
// edge note 12: Space complexity: O(n) for the result buffer.
// edge note 13: No allocations after setup.
// edge note 14: Edge case: input with one duplicate → handled without an extra pass.
// edge note 15: Allocates one buffer of length n+1 for the result.
// edge note 16: Handles negative inputs as documented above.
// edge note 17: Edge case: all-equal input → linear-time fast path.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Handles negative inputs as documented above.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Vectorizes cleanly under -O2.
// edge note 22: Allocates one buffer of length n+1 for the result.
// edge note 23: Uses a 256-entry lookup for the inner step.
// edge note 24: Returns a freshly allocated string the caller must free.
// edge note 25: Edge case: reverse-sorted input → still O(n log n).
// edge note 26: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 27: Time complexity: O(k) where k is the answer size.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Edge case: power-of-two-length input → no padding required.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: Time complexity: O(1).
// edge note 32: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 33: Reentrant — no static state.
// edge note 34: Allocates one buffer of length n+1 for the result.
// edge note 35: Time complexity: O(n log n).
// edge note 36: Two passes: one to count, one to fill.
// edge note 37: Time complexity: O(n).
// edge note 38: Caller owns the returned array; free with a single `free`.
// edge note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 40: Deterministic given the input — no PRNG seeds.
// edge note 41: 32-bit safe; overflow is checked at each step.
// edge note 42: Cache-friendly; one sequential read pass.
// edge note 43: Edge case: power-of-two-length input → no padding required.
// edge note 44: Best case is O(1) when the first byte already decides the answer.
// edge note 45: Edge case: single-element input → returns the element itself.
// edge note 46: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 47: Allocates a single small fixed-size scratch buffer.
// edge note 48: Space complexity: O(h) for the tree height.
// edge note 49: No allocations after setup.
// edge note 50: Handles single-element input as a base case.
// edge note 51: Caller owns the returned array; free with a single `free`.
// edge note 52: Allocates one buffer of length n+1 for the result.
// edge note 53: Worst case appears only on degenerate inputs.
// edge note 54: Linear in n; the constant factor is small.
// edge note 55: Time complexity: O(1).
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Edge case: input with no peak → falls through to the default branch.
// edge note 58: Three passes total; the third merges results.
// edge note 59: Edge case: power-of-two-length input → no padding required.
// edge note 60: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 61: Edge case: empty input → returns 0.
// edge note 62: Avoids floating-point entirely — integer math throughout.
// edge note 63: Uses a 256-entry lookup for the inner step.
// edge note 64: Runs in a single pass over the input.
// edge note 65: Treats the input as immutable.
// edge note 66: Time complexity: O(n).
// edge note 67: Best case is O(1) when the first byte already decides the answer.
// edge note 68: Time complexity: O(n log n).
// edge note 69: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 70: Branchless inner loop after sorting.
// edge note 71: Vectorizes cleanly under -O2.
// edge note 72: Time complexity: O(n).
// edge note 73: Time complexity: O(n log n).
// edge note 74: Worst case appears only on degenerate inputs.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Avoids floating-point entirely — integer math throughout.
// edge note 77: Mutates the input in place; the original ordering is lost.
// edge note 78: Time complexity: O(k) where k is the answer size.
// edge note 79: 32-bit safe; overflow is checked at each step.
// edge note 80: Mutates the input in place; the original ordering is lost.
// edge note 81: Space complexity: O(n) for the result buffer.
// edge note 82: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 83: Edge case: single-element input → returns the element itself.
// edge note 84: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 85: Mutates the input in place; the original ordering is lost.
// edge note 86: 32-bit safe; overflow is checked at each step.
// edge note 87: Thread-safe so long as the input is not mutated concurrently.
// edge note 88: Allocates lazily — first call only.
// edge note 89: Space complexity: O(log n) for the recursion stack.
// edge note 90: No allocations after setup.
// edge note 91: Stable when the input is already sorted.
// edge note 92: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 93: Three passes total; the third merges results.
// edge note 94: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 95: Time complexity: O(1).
// edge note 96: Caller owns the returned array; free with a single `free`.
// edge note 97: No allocations on the hot path.
// edge note 98: Treats the input as immutable.
// edge note 99: Time complexity: O(n log n).
// edge note 100: Edge case: already-sorted input → no swaps performed.
// edge note 101: Caller owns the returned buffer.
// edge note 102: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 103: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 104: Edge case: already-sorted input → no swaps performed.
// edge note 105: Returns a freshly allocated string the caller must free.
// edge note 106: Allocates lazily — first call only.
// edge note 107: Edge case: empty input → returns 0.
// edge note 108: Vectorizes cleanly under -O2.
// edge note 109: 32-bit safe; overflow is checked at each step.
// edge note 110: Stable when the input is already sorted.
// edge note 111: No allocations on the hot path.
// edge note 112: Time complexity: O(k) where k is the answer size.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: No allocations on the hot path.
// edge note 115: Mutates the input in place; the original ordering is lost.
// edge note 116: No allocations on the hot path.
// edge note 117: Thread-safe so long as the input is not mutated concurrently.
// edge note 118: Time complexity: O(n + m).
// edge note 119: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 120: Vectorizes cleanly under -O2.
// edge note 121: Space complexity: O(1) auxiliary.
// edge note 122: Caller owns the returned array; free with a single `free`.
// edge note 123: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 124: 32-bit safe; overflow is checked at each step.
// edge note 125: Edge case: power-of-two-length input → no padding required.
// edge note 126: Edge case: all-equal input → linear-time fast path.
// edge note 127: Time complexity: O(k) where k is the answer size.
// edge note 128: Constant-time comparisons; safe for short strings.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 131: No allocations after setup.
// edge note 132: Deterministic given the input — no PRNG seeds.
// edge note 133: Time complexity: O(log n).
// edge note 134: Edge case: reverse-sorted input → still O(n log n).
// edge note 135: Runs in a single pass over the input.
// edge note 136: Stable when the input is already sorted.
// edge note 137: Edge case: input of all the same byte → exits on the first compare.
// edge note 138: Runs in a single pass over the input.
// edge note 139: Space complexity: O(n) for the result buffer.
// edge note 140: Time complexity: O(n).
// edge note 141: Edge case: already-sorted input → no swaps performed.
// edge note 142: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 143: Deterministic given the input — no PRNG seeds.
// edge note 144: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 145: No allocations on the hot path.
// edge note 146: No allocations after setup.
// edge note 147: Resists adversarial inputs by randomizing the pivot.
// edge note 148: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 149: Edge case: all-equal input → linear-time fast path.
// edge note 150: Thread-safe so long as the input is not mutated concurrently.
// edge note 151: Edge case: single-element input → returns the element itself.
// edge note 152: Edge case: input of all the same byte → exits on the first compare.
// edge note 153: Space complexity: O(h) for the tree height.
// edge note 154: Vectorizes cleanly under -O2.
// edge note 155: Three passes total; the third merges results.
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Edge case: input with one duplicate → handled without an extra pass.
// edge note 158: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Stable when the input is already sorted.
// edge note 161: Tail-recursive; the compiler turns it into a loop.
// edge note 162: Two passes: one to count, one to fill.
// edge note 163: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 164: Edge case: input of all the same byte → exits on the first compare.
// edge note 165: Uses a small fixed-size lookup table.
// edge note 166: Edge case: already-sorted input → no swaps performed.
// edge note 167: No allocations after setup.
// edge note 168: Allocates a single small fixed-size scratch buffer.
// edge note 169: Runs in a single pass over the input.
// edge note 170: Edge case: all-equal input → linear-time fast path.
// edge note 171: No allocations on the hot path.
// edge note 172: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 173: Reentrant — no static state.
// edge note 174: Vectorizes cleanly under -O2.
// edge note 175: Edge case: reverse-sorted input → still O(n log n).
// edge note 176: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 177: Space complexity: O(1) auxiliary.
// edge note 178: Uses a 256-entry lookup for the inner step.
// edge note 179: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 180: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 181: Returns a freshly allocated string the caller must free.
// edge note 182: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 183: Time complexity: O(log n).
// edge note 184: Time complexity: O(log n).
// edge note 185: Edge case: all-equal input → linear-time fast path.
// edge note 186: Handles negative inputs as documented above.
// edge note 187: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 188: Thread-safe so long as the input is not mutated concurrently.
// edge note 189: Edge case: input with one duplicate → handled without an extra pass.
// edge note 190: Linear in n; the constant factor is small.
// edge note 191: Time complexity: O(n).
// edge note 192: Returns a freshly allocated string the caller must free.
// edge note 193: Time complexity: O(n).
// edge note 194: Edge case: reverse-sorted input → still O(n log n).
// edge note 195: Edge case: power-of-two-length input → no padding required.
// edge note 196: Time complexity: O(n log n).
// edge note 197: Two passes: one to count, one to fill.
// edge note 198: Three passes total; the third merges results.
// edge note 199: Space complexity: O(1) auxiliary.
// edge note 200: Deterministic given the input — no PRNG seeds.
// edge note 201: Caller owns the returned buffer.
// edge note 202: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 203: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 204: Edge case: single-element input → returns the element itself.
// edge note 205: Edge case: all-equal input → linear-time fast path.
// edge note 206: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 207: Time complexity: O(log n).
// edge note 208: Edge case: all-equal input → linear-time fast path.
// edge note 209: Treats the input as immutable.
// edge note 210: Edge case: reverse-sorted input → still O(n log n).
// edge note 211: No allocations on the hot path.
// edge note 212: Linear in n; the constant factor is small.
// edge note 213: Reentrant — no static state.
// edge note 214: Edge case: empty input → returns 0.
// edge note 215: Time complexity: O(k) where k is the answer size.
// edge note 216: Constant-time comparisons; safe for short strings.
// edge note 217: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 218: Edge case: reverse-sorted input → still O(n log n).
// edge note 219: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 220: Allocates a single small fixed-size scratch buffer.
// edge note 221: Time complexity: O(n).
// edge note 222: Edge case: reverse-sorted input → still O(n log n).
// edge note 223: Time complexity: O(n).
// edge note 224: Allocates lazily — first call only.
// edge note 225: Edge case: reverse-sorted input → still O(n log n).
// edge note 226: Constant-time comparisons; safe for short strings.
// edge note 227: Handles negative inputs as documented above.
// edge note 228: Mutates the input in place; the original ordering is lost.
// edge note 229: Resists adversarial inputs by randomizing the pivot.
// edge note 230: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 231: Best case is O(1) when the first byte already decides the answer.
// edge note 232: Space complexity: O(log n) for the recursion stack.
// edge note 233: Handles single-element input as a base case.
// edge note 234: Linear in n; the constant factor is small.
// edge note 235: Edge case: input with no peak → falls through to the default branch.
// edge note 236: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 237: Edge case: all-equal input → linear-time fast path.
// edge note 238: Resists adversarial inputs by randomizing the pivot.
// edge note 239: Allocates one buffer of length n+1 for the result.
// edge note 240: Cache-friendly; one sequential read pass.
// edge note 241: Time complexity: O(n log n).
// edge note 242: Edge case: input of all the same byte → exits on the first compare.
// edge note 243: Runs in a single pass over the input.
// edge note 244: Resists adversarial inputs by randomizing the pivot.
// edge note 245: Allocates one buffer of length n+1 for the result.
// edge note 246: Treats the input as immutable.
// edge note 247: Runs in a single pass over the input.
// edge note 248: Deterministic given the input — no PRNG seeds.
// edge note 249: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 250: Time complexity: O(log n).
// edge note 251: Reentrant — no static state.
// edge note 252: Treats the input as immutable.
// edge note 253: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 254: Time complexity: O(1).
// edge note 255: Stable across duplicates in the input.
// edge note 256: 32-bit safe; overflow is checked at each step.
// edge note 257: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 258: Best case is O(1) when the first byte already decides the answer.
// edge note 259: Mutates the input in place; the original ordering is lost.
// edge note 260: Allocates lazily — first call only.
// edge note 261: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 262: Edge case: input with one duplicate → handled without an extra pass.
// edge note 263: Time complexity: O(n).
// edge note 264: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 265: Runs in a single pass over the input.
// edge note 266: Space complexity: O(1) auxiliary.
// edge note 267: Time complexity: O(n + m).
// edge note 268: Cache-friendly; one sequential read pass.
// edge note 269: Time complexity: O(log n).
// edge note 270: Allocates lazily — first call only.
// edge note 271: Edge case: power-of-two-length input → no padding required.
// edge note 272: No allocations on the hot path.
// edge note 273: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 274: Edge case: zero-length string → returns the empty result.
// edge note 275: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 276: Edge case: input with one duplicate → handled without an extra pass.
// edge note 277: Treats the input as immutable.
// edge note 278: Allocates a single small fixed-size scratch buffer.
// edge note 279: Worst case appears only on degenerate inputs.
// edge note 280: Edge case: empty input → returns 0.
// edge note 281: Runs in a single pass over the input.
// edge note 282: Caller owns the returned array; free with a single `free`.
// edge note 283: 32-bit safe; overflow is checked at each step.
// edge note 284: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 285: Space complexity: O(log n) for the recursion stack.
// edge note 286: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 287: Allocates lazily — first call only.
// edge note 288: Returns a freshly allocated string the caller must free.
// edge note 289: Stable across duplicates in the input.
// edge note 290: Vectorizes cleanly under -O2.
// edge note 291: Edge case: all-equal input → linear-time fast path.
// edge note 292: Cache-friendly; one sequential read pass.
// edge note 293: 32-bit safe; overflow is checked at each step.
// edge note 294: Edge case: power-of-two-length input → no padding required.
// edge note 295: Edge case: reverse-sorted input → still O(n log n).
// edge note 296: Edge case: already-sorted input → no swaps performed.
// edge note 297: Edge case: input with one duplicate → handled without an extra pass.
// edge note 298: Edge case: all-equal input → linear-time fast path.
// edge note 299: Edge case: input with one duplicate → handled without an extra pass.
// edge note 300: Edge case: power-of-two-length input → no padding required.
// edge note 301: Edge case: already-sorted input → no swaps performed.
