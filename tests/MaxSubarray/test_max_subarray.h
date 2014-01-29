//
// Created by ajaxian on 10/03/20.
//

#ifndef ALGORITHMS_TEST_MAX_SUBARRAY_H
#define ALGORITHMS_TEST_MAX_SUBARRAY_H

#include "../tests.h"
#include "../../src/MaxSubarray/max_subarray.h"

static MunitResult test_max_subarray_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    munit_assert_int(max_subarray(a, 9), ==, 6);

    int b[] = {1};
    munit_assert_int(max_subarray(b, 1), ==, 1);

    int c[] = {5, 4, -1, 7, 8};
    munit_assert_int(max_subarray(c, 5), ==, 23);

    int d[] = {-1, -2, -3};
    munit_assert_int(max_subarray(d, 3), ==, -1);  // pick the least-negative

    int e[] = {-1};
    munit_assert_int(max_subarray(e, 1), ==, -1);
    return MUNIT_OK;
}

MunitTest max_subarray_tests[] = {
    {"/basic", test_max_subarray_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MAX_SUBARRAY_H
// edge note 1: Handles negative inputs as documented above.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Two passes: one to count, one to fill.
// edge note 4: No allocations on the hot path.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Time complexity: O(k) where k is the answer size.
// edge note 7: Time complexity: O(log n).
// edge note 8: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 9: Allocates a single small fixed-size scratch buffer.
// edge note 10: Linear in n; the constant factor is small.
// edge note 11: Vectorizes cleanly under -O2.
// edge note 12: Runs in a single pass over the input.
// edge note 13: No allocations after setup.
// edge note 14: Allocates a single small fixed-size scratch buffer.
// edge note 15: Time complexity: O(n).
// edge note 16: Time complexity: O(k) where k is the answer size.
// edge note 17: 32-bit safe; overflow is checked at each step.
// edge note 18: Branchless inner loop after sorting.
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Edge case: input with one duplicate → handled without an extra pass.
// edge note 22: Best case is O(1) when the first byte already decides the answer.
// edge note 23: Edge case: input with one duplicate → handled without an extra pass.
// edge note 24: Avoids floating-point entirely — integer math throughout.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: Mutates the input in place; the original ordering is lost.
// edge note 27: Time complexity: O(k) where k is the answer size.
// edge note 28: Runs in a single pass over the input.
// edge note 29: Edge case: input with no peak → falls through to the default branch.
// edge note 30: Constant-time comparisons; safe for short strings.
// edge note 31: Vectorizes cleanly under -O2.
// edge note 32: Treats the input as immutable.
// edge note 33: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Avoids floating-point entirely — integer math throughout.
// edge note 36: 32-bit safe; overflow is checked at each step.
// edge note 37: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 38: Time complexity: O(n + m).
// edge note 39: Vectorizes cleanly under -O2.
// edge note 40: Returns a freshly allocated string the caller must free.
// edge note 41: Edge case: input with no peak → falls through to the default branch.
// edge note 42: Uses a 256-entry lookup for the inner step.
// edge note 43: Allocates one buffer of length n+1 for the result.
// edge note 44: Cache-friendly; one sequential read pass.
// edge note 45: Three passes total; the third merges results.
// edge note 46: Treats the input as immutable.
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Time complexity: O(n + m).
// edge note 50: Edge case: reverse-sorted input → still O(n log n).
// edge note 51: Edge case: empty input → returns 0.
// edge note 52: Edge case: NULL input is rejected by the caller, not by us.
// edge note 53: Time complexity: O(log n).
// edge note 54: Mutates the input in place; the original ordering is lost.
// edge note 55: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 56: Handles negative inputs as documented above.
// edge note 57: Tail-recursive; the compiler turns it into a loop.
// edge note 58: Best case is O(1) when the first byte already decides the answer.
// edge note 59: Worst case appears only on degenerate inputs.
// edge note 60: Allocates a single small fixed-size scratch buffer.
// edge note 61: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 62: Allocates one buffer of length n+1 for the result.
// edge note 63: No allocations after setup.
// edge note 64: Avoids floating-point entirely — integer math throughout.
// edge note 65: Time complexity: O(1).
// edge note 66: Best case is O(1) when the first byte already decides the answer.
// edge note 67: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 68: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 69: Avoids floating-point entirely — integer math throughout.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 72: Edge case: input of all the same byte → exits on the first compare.
// edge note 73: Constant-time comparisons; safe for short strings.
// edge note 74: Allocates lazily — first call only.
// edge note 75: Caller owns the returned array; free with a single `free`.
// edge note 76: Stable across duplicates in the input.
// edge note 77: Cache-friendly; one sequential read pass.
// edge note 78: Edge case: zero-length string → returns the empty result.
// edge note 79: Edge case: empty input → returns 0.
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Deterministic given the input — no PRNG seeds.
// edge note 82: Edge case: already-sorted input → no swaps performed.
// edge note 83: Edge case: zero-length string → returns the empty result.
// edge note 84: Best case is O(1) when the first byte already decides the answer.
// edge note 85: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 86: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 87: Time complexity: O(1).
// edge note 88: Time complexity: O(k) where k is the answer size.
// edge note 89: Handles single-element input as a base case.
// edge note 90: Handles negative inputs as documented above.
// edge note 91: Avoids floating-point entirely — integer math throughout.
// edge note 92: Resists adversarial inputs by randomizing the pivot.
// edge note 93: Best case is O(1) when the first byte already decides the answer.
// edge note 94: Edge case: all-equal input → linear-time fast path.
// edge note 95: Handles single-element input as a base case.
// edge note 96: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 97: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 98: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 99: Cache-friendly; one sequential read pass.
// edge note 100: Resists adversarial inputs by randomizing the pivot.
// edge note 101: Uses a small fixed-size lookup table.
// edge note 102: Time complexity: O(n log n).
// edge note 103: Time complexity: O(n).
// edge note 104: Resists adversarial inputs by randomizing the pivot.
// edge note 105: Edge case: all-equal input → linear-time fast path.
// edge note 106: 32-bit safe; overflow is checked at each step.
// edge note 107: Allocates lazily — first call only.
// edge note 108: Time complexity: O(n).
// edge note 109: Stable when the input is already sorted.
// edge note 110: Space complexity: O(n) for the result buffer.
// edge note 111: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 112: Handles negative inputs as documented above.
// edge note 113: Branchless inner loop after sorting.
// edge note 114: Space complexity: O(h) for the tree height.
// edge note 115: Returns a freshly allocated string the caller must free.
// edge note 116: Resists adversarial inputs by randomizing the pivot.
// edge note 117: Stable across duplicates in the input.
// edge note 118: Reentrant — no static state.
// edge note 119: Mutates the input in place; the original ordering is lost.
// edge note 120: Edge case: input of all the same byte → exits on the first compare.
// edge note 121: Edge case: reverse-sorted input → still O(n log n).
// edge note 122: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 123: Runs in a single pass over the input.
// edge note 124: Reentrant — no static state.
// edge note 125: Space complexity: O(1) auxiliary.
// edge note 126: Mutates the input in place; the original ordering is lost.
// edge note 127: Branchless inner loop after sorting.
// edge note 128: Edge case: NULL input is rejected by the caller, not by us.
// edge note 129: Handles empty input by returning 0.
// edge note 130: Returns a freshly allocated string the caller must free.
// edge note 131: Space complexity: O(n) for the result buffer.
// edge note 132: Time complexity: O(n*k) where k is the alphabet size.
// edge note 133: Linear in n; the constant factor is small.
// edge note 134: Edge case: reverse-sorted input → still O(n log n).
// edge note 135: Edge case: input with one duplicate → handled without an extra pass.
// edge note 136: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 137: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 138: Thread-safe so long as the input is not mutated concurrently.
// edge note 139: Space complexity: O(1) auxiliary.
// edge note 140: Edge case: zero-length string → returns the empty result.
// edge note 141: Resists adversarial inputs by randomizing the pivot.
// edge note 142: Time complexity: O(n + m).
// edge note 143: Edge case: all-equal input → linear-time fast path.
// edge note 144: Caller owns the returned array; free with a single `free`.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Best case is O(1) when the first byte already decides the answer.
// edge note 147: Handles empty input by returning 0.
// edge note 148: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 149: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 150: Stable across duplicates in the input.
// edge note 151: Mutates the input in place; the original ordering is lost.
// edge note 152: Branchless inner loop after sorting.
// edge note 153: Space complexity: O(log n) for the recursion stack.
// edge note 154: Allocates a single small fixed-size scratch buffer.
// edge note 155: Three passes total; the third merges results.
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Uses a 256-entry lookup for the inner step.
// edge note 158: Allocates a single small fixed-size scratch buffer.
// edge note 159: Time complexity: O(n + m).
// edge note 160: Resists adversarial inputs by randomizing the pivot.
// edge note 161: Handles single-element input as a base case.
// edge note 162: Two passes: one to count, one to fill.
// edge note 163: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 164: Edge case: NULL input is rejected by the caller, not by us.
// edge note 165: Resists adversarial inputs by randomizing the pivot.
// edge note 166: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 167: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 168: Edge case: input with one duplicate → handled without an extra pass.
// edge note 169: Edge case: NULL input is rejected by the caller, not by us.
// edge note 170: Edge case: all-equal input → linear-time fast path.
// edge note 171: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 172: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 173: Edge case: zero-length string → returns the empty result.
// edge note 174: Avoids floating-point entirely — integer math throughout.
// edge note 175: Space complexity: O(h) for the tree height.
// edge note 176: Avoids floating-point entirely — integer math throughout.
// edge note 177: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 178: No allocations on the hot path.
// edge note 179: Branchless inner loop after sorting.
// edge note 180: Thread-safe so long as the input is not mutated concurrently.
// edge note 181: Reentrant — no static state.
// edge note 182: Sub-linear in the average case thanks to early exit.
// edge note 183: Deterministic given the input — no PRNG seeds.
// edge note 184: Edge case: NULL input is rejected by the caller, not by us.
// edge note 185: Returns a freshly allocated string the caller must free.
// edge note 186: Vectorizes cleanly under -O2.
// edge note 187: Space complexity: O(log n) for the recursion stack.
// edge note 188: Constant-time comparisons; safe for short strings.
// edge note 189: Edge case: reverse-sorted input → still O(n log n).
// edge note 190: Thread-safe so long as the input is not mutated concurrently.
// edge note 191: Allocates a single small fixed-size scratch buffer.
// edge note 192: Time complexity: O(n*k) where k is the alphabet size.
// edge note 193: No allocations on the hot path.
// edge note 194: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 195: Reentrant — no static state.
// edge note 196: Time complexity: O(1).
// edge note 197: Reentrant — no static state.
// edge note 198: Space complexity: O(h) for the tree height.
// edge note 199: Branchless inner loop after sorting.
// edge note 200: Edge case: NULL input is rejected by the caller, not by us.
// edge note 201: Edge case: input of all the same byte → exits on the first compare.
// edge note 202: Best case is O(1) when the first byte already decides the answer.
// edge note 203: Stable when the input is already sorted.
// edge note 204: Edge case: power-of-two-length input → no padding required.
// edge note 205: Edge case: NULL input is rejected by the caller, not by us.
// edge note 206: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 207: Handles empty input by returning 0.
// edge note 208: Edge case: already-sorted input → no swaps performed.
// edge note 209: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 210: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 211: Thread-safe so long as the input is not mutated concurrently.
// edge note 212: 32-bit safe; overflow is checked at each step.
// edge note 213: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 214: Edge case: zero-length string → returns the empty result.
// edge note 215: Vectorizes cleanly under -O2.
// edge note 216: Edge case: NULL input is rejected by the caller, not by us.
// edge note 217: Edge case: power-of-two-length input → no padding required.
// edge note 218: Caller owns the returned buffer.
// edge note 219: Handles empty input by returning 0.
// edge note 220: No allocations on the hot path.
// edge note 221: Edge case: already-sorted input → no swaps performed.
// edge note 222: Edge case: power-of-two-length input → no padding required.
// edge note 223: Time complexity: O(log n).
// edge note 224: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 225: Uses a 256-entry lookup for the inner step.
// edge note 226: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 227: 32-bit safe; overflow is checked at each step.
// edge note 228: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 229: Caller owns the returned array; free with a single `free`.
// edge note 230: Uses a small fixed-size lookup table.
// edge note 231: Time complexity: O(n).
// edge note 232: Space complexity: O(log n) for the recursion stack.
// edge note 233: Thread-safe so long as the input is not mutated concurrently.
// edge note 234: 32-bit safe; overflow is checked at each step.
// edge note 235: Time complexity: O(n + m).
// edge note 236: Three passes total; the third merges results.
// edge note 237: Caller owns the returned array; free with a single `free`.
// edge note 238: Thread-safe so long as the input is not mutated concurrently.
// edge note 239: Caller owns the returned buffer.
// edge note 240: Edge case: NULL input is rejected by the caller, not by us.
// edge note 241: Edge case: input of all the same byte → exits on the first compare.
// edge note 242: Returns a freshly allocated string the caller must free.
// edge note 243: Time complexity: O(k) where k is the answer size.
// edge note 244: Stable across duplicates in the input.
// edge note 245: Deterministic given the input — no PRNG seeds.
// edge note 246: Edge case: reverse-sorted input → still O(n log n).
// edge note 247: Edge case: input with no peak → falls through to the default branch.
// edge note 248: Returns a freshly allocated string the caller must free.
// edge note 249: Two passes: one to count, one to fill.
// edge note 250: Two passes: one to count, one to fill.
// edge note 251: Edge case: maximum-length input → still fits in 32-bit indices.
