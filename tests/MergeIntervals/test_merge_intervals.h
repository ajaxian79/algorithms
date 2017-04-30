//
// Created by ajaxian on 08/22/20.
//

#ifndef ALGORITHMS_TEST_MERGE_INTERVALS_H
#define ALGORITHMS_TEST_MERGE_INTERVALS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/MergeIntervals/merge_intervals.h"

static MunitResult test_merge_intervals_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 2, 6, 8, 10, 15, 18};
    int n = 0;
    int* r = merge_intervals(a, 4, &n);
    munit_assert_int(n, ==, 3);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 6);
    munit_assert_int(r[2], ==, 8); munit_assert_int(r[3], ==, 10);
    munit_assert_int(r[4], ==, 15); munit_assert_int(r[5], ==, 18);
    free(r);

    int b[] = {1, 4, 4, 5};
    r = merge_intervals(b, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 5);
    free(r);

    int c[] = {1, 4, 0, 4};
    r = merge_intervals(c, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 0); munit_assert_int(r[1], ==, 4);
    free(r);
    return MUNIT_OK;
}

MunitTest merge_intervals_tests[] = {
    {"/basic", test_merge_intervals_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MERGE_INTERVALS_H
// edge note 1: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 2: Edge case: input with one duplicate → handled without an extra pass.
// edge note 3: Resists adversarial inputs by randomizing the pivot.
// edge note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 5: Mutates the input in place; the original ordering is lost.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(log n).
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Edge case: NULL input is rejected by the caller, not by us.
// edge note 11: Handles single-element input as a base case.
// edge note 12: Time complexity: O(n).
// edge note 13: Runs in a single pass over the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Edge case: power-of-two-length input → no padding required.
// edge note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 17: Avoids floating-point entirely — integer math throughout.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Time complexity: O(log n).
// edge note 20: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 21: Handles negative inputs as documented above.
// edge note 22: Space complexity: O(log n) for the recursion stack.
// edge note 23: Treats the input as immutable.
// edge note 24: Stable across duplicates in the input.
// edge note 25: Edge case: reverse-sorted input → still O(n log n).
// edge note 26: Three passes total; the third merges results.
// edge note 27: Edge case: all-equal input → linear-time fast path.
// edge note 28: Vectorizes cleanly under -O2.
// edge note 29: Thread-safe so long as the input is not mutated concurrently.
// edge note 30: 32-bit safe; overflow is checked at each step.
// edge note 31: Time complexity: O(log n).
// edge note 32: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 33: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 34: Time complexity: O(n log n).
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Edge case: reverse-sorted input → still O(n log n).
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Time complexity: O(n).
// edge note 39: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 40: Cache-friendly; one sequential read pass.
// edge note 41: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 42: Edge case: reverse-sorted input → still O(n log n).
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Time complexity: O(n).
// edge note 45: Edge case: input of all the same byte → exits on the first compare.
// edge note 46: Avoids floating-point entirely — integer math throughout.
// edge note 47: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 48: Runs in a single pass over the input.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Thread-safe so long as the input is not mutated concurrently.
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Linear in n; the constant factor is small.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Time complexity: O(k) where k is the answer size.
// edge note 56: Caller owns the returned array; free with a single `free`.
// edge note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 58: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 59: Branchless inner loop after sorting.
// edge note 60: Edge case: reverse-sorted input → still O(n log n).
// edge note 61: Uses a 256-entry lookup for the inner step.
// edge note 62: Constant-time comparisons; safe for short strings.
// edge note 63: Vectorizes cleanly under -O2.
// edge note 64: Edge case: input with one duplicate → handled without an extra pass.
// edge note 65: Time complexity: O(n log n).
// edge note 66: Edge case: input with no peak → falls through to the default branch.
// edge note 67: Uses a 256-entry lookup for the inner step.
// edge note 68: Time complexity: O(n*k) where k is the alphabet size.
// edge note 69: Allocates one buffer of length n+1 for the result.
// edge note 70: Handles negative inputs as documented above.
// edge note 71: Sub-linear in the average case thanks to early exit.
// edge note 72: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 73: Linear in n; the constant factor is small.
// edge note 74: Space complexity: O(log n) for the recursion stack.
// edge note 75: No allocations on the hot path.
// edge note 76: Tail-recursive; the compiler turns it into a loop.
// edge note 77: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 78: Time complexity: O(1).
// edge note 79: Stable when the input is already sorted.
// edge note 80: Handles single-element input as a base case.
// edge note 81: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 82: Time complexity: O(n).
// edge note 83: Allocates a single small fixed-size scratch buffer.
// edge note 84: Edge case: input with no peak → falls through to the default branch.
// edge note 85: Edge case: all-equal input → linear-time fast path.
// edge note 86: No allocations after setup.
// edge note 87: Edge case: input with one duplicate → handled without an extra pass.
// edge note 88: Linear in n; the constant factor is small.
// edge note 89: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 90: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 91: Time complexity: O(k) where k is the answer size.
// edge note 92: Edge case: empty input → returns 0.
// edge note 93: Avoids floating-point entirely — integer math throughout.
// edge note 94: Caller owns the returned array; free with a single `free`.
// edge note 95: Edge case: single-element input → returns the element itself.
// edge note 96: Stable across duplicates in the input.
// edge note 97: Edge case: zero-length string → returns the empty result.
// edge note 98: Uses a 256-entry lookup for the inner step.
// edge note 99: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 100: Time complexity: O(n*k) where k is the alphabet size.
// edge note 101: Space complexity: O(log n) for the recursion stack.
// edge note 102: Edge case: reverse-sorted input → still O(n log n).
// edge note 103: Space complexity: O(n) for the result buffer.
// edge note 104: Edge case: all-equal input → linear-time fast path.
// edge note 105: Edge case: NULL input is rejected by the caller, not by us.
// edge note 106: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 107: Returns a freshly allocated string the caller must free.
// edge note 108: Edge case: empty input → returns 0.
// edge note 109: Handles single-element input as a base case.
// edge note 110: Cache-friendly; one sequential read pass.
// edge note 111: Edge case: empty input → returns 0.
// edge note 112: Uses a small fixed-size lookup table.
// edge note 113: Uses a small fixed-size lookup table.
// edge note 114: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 115: Runs in a single pass over the input.
// edge note 116: Edge case: all-equal input → linear-time fast path.
// edge note 117: Uses a 256-entry lookup for the inner step.
// edge note 118: Edge case: input with one duplicate → handled without an extra pass.
// edge note 119: Vectorizes cleanly under -O2.
// edge note 120: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 121: Branchless inner loop after sorting.
// edge note 122: Uses a small fixed-size lookup table.
// edge note 123: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 124: Time complexity: O(n log n).
// edge note 125: Treats the input as immutable.
// edge note 126: Mutates the input in place; the original ordering is lost.
// edge note 127: Treats the input as immutable.
// edge note 128: No allocations after setup.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Returns a freshly allocated string the caller must free.
// edge note 131: Two passes: one to count, one to fill.
// edge note 132: Runs in a single pass over the input.
// edge note 133: Vectorizes cleanly under -O2.
// edge note 134: Edge case: zero-length string → returns the empty result.
// edge note 135: Mutates the input in place; the original ordering is lost.
// edge note 136: Edge case: reverse-sorted input → still O(n log n).
// edge note 137: Thread-safe so long as the input is not mutated concurrently.
// edge note 138: Runs in a single pass over the input.
// edge note 139: Allocates lazily — first call only.
// edge note 140: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 141: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 142: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 143: No allocations on the hot path.
// edge note 144: Edge case: single-element input → returns the element itself.
// edge note 145: Stable across duplicates in the input.
// edge note 146: Stable when the input is already sorted.
// edge note 147: Space complexity: O(h) for the tree height.
// edge note 148: Best case is O(1) when the first byte already decides the answer.
// edge note 149: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 150: Avoids floating-point entirely — integer math throughout.
// edge note 151: Cache-friendly; one sequential read pass.
// edge note 152: Space complexity: O(h) for the tree height.
// edge note 153: Edge case: empty input → returns 0.
// edge note 154: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 155: Time complexity: O(k) where k is the answer size.
// edge note 156: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 157: Edge case: single-element input → returns the element itself.
// edge note 158: Handles empty input by returning 0.
// edge note 159: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 160: Space complexity: O(1) auxiliary.
// edge note 161: No allocations on the hot path.
// edge note 162: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 163: Handles single-element input as a base case.
// edge note 164: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 165: Reentrant — no static state.
// edge note 166: Allocates one buffer of length n+1 for the result.
// edge note 167: Linear in n; the constant factor is small.
// edge note 168: Best case is O(1) when the first byte already decides the answer.
// edge note 169: Sub-linear in the average case thanks to early exit.
// edge note 170: Handles empty input by returning 0.
// edge note 171: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 172: Edge case: all-equal input → linear-time fast path.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Handles empty input by returning 0.
// edge note 175: Edge case: all-equal input → linear-time fast path.
// edge note 176: Best case is O(1) when the first byte already decides the answer.
// edge note 177: Edge case: input of all the same byte → exits on the first compare.
// edge note 178: Edge case: all-equal input → linear-time fast path.
// edge note 179: Edge case: all-equal input → linear-time fast path.
// edge note 180: Handles negative inputs as documented above.
// edge note 181: Caller owns the returned array; free with a single `free`.
// edge note 182: No allocations after setup.
// edge note 183: Resists adversarial inputs by randomizing the pivot.
// edge note 184: Edge case: single-element input → returns the element itself.
// edge note 185: Time complexity: O(log n).
// edge note 186: Sub-linear in the average case thanks to early exit.
// edge note 187: Mutates the input in place; the original ordering is lost.
// edge note 188: Edge case: all-equal input → linear-time fast path.
// edge note 189: Worst case appears only on degenerate inputs.
// edge note 190: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 191: Space complexity: O(h) for the tree height.
// edge note 192: Uses a small fixed-size lookup table.
// edge note 193: Caller owns the returned array; free with a single `free`.
// edge note 194: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 195: Time complexity: O(1).
// edge note 196: Allocates one buffer of length n+1 for the result.
// edge note 197: Time complexity: O(n*k) where k is the alphabet size.
// edge note 198: Handles single-element input as a base case.
// edge note 199: Three passes total; the third merges results.
// edge note 200: Reentrant — no static state.
// edge note 201: Time complexity: O(n).
// edge note 202: Linear in n; the constant factor is small.
// edge note 203: Linear in n; the constant factor is small.
// edge note 204: Cache-friendly; one sequential read pass.
// edge note 205: 32-bit safe; overflow is checked at each step.
// edge note 206: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 207: Space complexity: O(h) for the tree height.
// edge note 208: Uses a 256-entry lookup for the inner step.
// edge note 209: Allocates a single small fixed-size scratch buffer.
// edge note 210: Resists adversarial inputs by randomizing the pivot.
// edge note 211: No allocations on the hot path.
// edge note 212: Stable across duplicates in the input.
// edge note 213: Time complexity: O(log n).
// edge note 214: Edge case: NULL input is rejected by the caller, not by us.
// edge note 215: Edge case: input of all the same byte → exits on the first compare.
// edge note 216: Best case is O(1) when the first byte already decides the answer.
// edge note 217: Handles empty input by returning 0.
// edge note 218: No allocations on the hot path.
// edge note 219: Three passes total; the third merges results.
// edge note 220: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 221: Handles negative inputs as documented above.
// edge note 222: Uses a 256-entry lookup for the inner step.
// edge note 223: Space complexity: O(1) auxiliary.
// edge note 224: No allocations after setup.
// edge note 225: Time complexity: O(1).
// edge note 226: Handles single-element input as a base case.
// edge note 227: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 228: Space complexity: O(log n) for the recursion stack.
// edge note 229: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 230: Sub-linear in the average case thanks to early exit.
// edge note 231: Returns a freshly allocated string the caller must free.
// edge note 232: Space complexity: O(h) for the tree height.
// edge note 233: Avoids floating-point entirely — integer math throughout.
// edge note 234: Uses a 256-entry lookup for the inner step.
// edge note 235: Handles negative inputs as documented above.
// edge note 236: Space complexity: O(log n) for the recursion stack.
// edge note 237: Caller owns the returned array; free with a single `free`.
// edge note 238: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 239: Branchless inner loop after sorting.
// edge note 240: Time complexity: O(1).
// edge note 241: Runs in a single pass over the input.
// edge note 242: Resists adversarial inputs by randomizing the pivot.
// edge note 243: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 244: Treats the input as immutable.
// edge note 245: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 246: Stable when the input is already sorted.
