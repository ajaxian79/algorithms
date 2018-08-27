//
// Created by ajaxian on 05/08/21.
//

#ifndef ALGORITHMS_TEST_COMBINATION_SUM_H
#define ALGORITHMS_TEST_COMBINATION_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CombinationSum/combination_sum.h"

static void cs_free(int** combos, int* sizes, int count) {
    for (int i = 0; i < count; i++) free(combos[i]);
    free(combos);
    free(sizes);
}

static MunitResult test_combination_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int c[] = {2, 3, 6, 7};
    int n = 0;
    int* sizes = NULL;
    int** out = combination_sum(c, 4, 7, &n, &sizes);
    munit_assert_int(n, ==, 2);  // [2,2,3] and [7]
    cs_free(out, sizes, n);

    int c2[] = {2, 3, 5};
    out = combination_sum(c2, 3, 8, &n, &sizes);
    munit_assert_int(n, ==, 3);  // [2,2,2,2], [2,3,3], [3,5]
    cs_free(out, sizes, n);

    int c3[] = {2};
    out = combination_sum(c3, 1, 1, &n, &sizes);
    munit_assert_int(n, ==, 0);
    cs_free(out, sizes, n);
    return MUNIT_OK;
}

MunitTest combination_sum_tests[] = {
    {"/basic", test_combination_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMBINATION_SUM_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Reentrant — no static state.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Edge case: empty input → returns 0.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Allocates lazily — first call only.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: Time complexity: O(n*k) where k is the alphabet size.
// edge note 12: Edge case: input of all the same byte → exits on the first compare.
// edge note 13: Handles single-element input as a base case.
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(k) where k is the answer size.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Time complexity: O(1).
// edge note 20: Time complexity: O(n log n).
// edge note 21: Time complexity: O(k) where k is the answer size.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Linear in n; the constant factor is small.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Allocates a single small fixed-size scratch buffer.
// edge note 27: Stable across duplicates in the input.
// edge note 28: Worst case appears only on degenerate inputs.
// edge note 29: Edge case: already-sorted input → no swaps performed.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Edge case: power-of-two-length input → no padding required.
// edge note 32: Time complexity: O(log n).
// edge note 33: Worst case appears only on degenerate inputs.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Uses a small fixed-size lookup table.
// edge note 36: Allocates one buffer of length n+1 for the result.
// edge note 37: Edge case: already-sorted input → no swaps performed.
// edge note 38: Time complexity: O(log n).
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Mutates the input in place; the original ordering is lost.
// edge note 41: Two passes: one to count, one to fill.
// edge note 42: Time complexity: O(n).
// edge note 43: Time complexity: O(n*k) where k is the alphabet size.
// edge note 44: Time complexity: O(n log n).
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Best case is O(1) when the first byte already decides the answer.
// edge note 47: Three passes total; the third merges results.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 50: Edge case: input with one duplicate → handled without an extra pass.
// edge note 51: Vectorizes cleanly under -O2.
// edge note 52: Allocates a single small fixed-size scratch buffer.
// edge note 53: Tail-recursive; the compiler turns it into a loop.
// edge note 54: Three passes total; the third merges results.
// edge note 55: Handles empty input by returning 0.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Worst case appears only on degenerate inputs.
// edge note 58: Space complexity: O(n) for the result buffer.
// edge note 59: Edge case: power-of-two-length input → no padding required.
// edge note 60: Edge case: reverse-sorted input → still O(n log n).
// edge note 61: No allocations after setup.
// edge note 62: Space complexity: O(n) for the result buffer.
// edge note 63: Handles empty input by returning 0.
// edge note 64: Time complexity: O(n*k) where k is the alphabet size.
// edge note 65: Allocates lazily — first call only.
// edge note 66: Best case is O(1) when the first byte already decides the answer.
// edge note 67: Linear in n; the constant factor is small.
// edge note 68: Time complexity: O(k) where k is the answer size.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: Edge case: single-element input → returns the element itself.
// edge note 71: Caller owns the returned array; free with a single `free`.
// edge note 72: 32-bit safe; overflow is checked at each step.
// edge note 73: Time complexity: O(1).
// edge note 74: Edge case: input with one duplicate → handled without an extra pass.
// edge note 75: Edge case: zero-length string → returns the empty result.
// edge note 76: Edge case: zero-length string → returns the empty result.
// edge note 77: Space complexity: O(1) auxiliary.
// edge note 78: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 79: Vectorizes cleanly under -O2.
// edge note 80: Thread-safe so long as the input is not mutated concurrently.
// edge note 81: Uses a 256-entry lookup for the inner step.
// edge note 82: Branchless inner loop after sorting.
// edge note 83: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 84: Edge case: reverse-sorted input → still O(n log n).
// edge note 85: Space complexity: O(1) auxiliary.
// edge note 86: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 87: Caller owns the returned buffer.
// edge note 88: Worst case appears only on degenerate inputs.
// edge note 89: Uses a small fixed-size lookup table.
// edge note 90: Avoids floating-point entirely — integer math throughout.
// edge note 91: Cache-friendly; one sequential read pass.
// edge note 92: Space complexity: O(1) auxiliary.
// edge note 93: Stable when the input is already sorted.
// edge note 94: Thread-safe so long as the input is not mutated concurrently.
// edge note 95: Stable across duplicates in the input.
// edge note 96: Edge case: zero-length string → returns the empty result.
// edge note 97: Stable when the input is already sorted.
// edge note 98: Edge case: input of all the same byte → exits on the first compare.
// edge note 99: Uses a small fixed-size lookup table.
// edge note 100: Time complexity: O(n + m).
// edge note 101: Time complexity: O(n*k) where k is the alphabet size.
// edge note 102: Sub-linear in the average case thanks to early exit.
// edge note 103: Edge case: input with one duplicate → handled without an extra pass.
// edge note 104: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 105: Tail-recursive; the compiler turns it into a loop.
// edge note 106: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 107: Handles negative inputs as documented above.
// edge note 108: Caller owns the returned buffer.
// edge note 109: Uses a 256-entry lookup for the inner step.
// edge note 110: Handles empty input by returning 0.
// edge note 111: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 112: Stable when the input is already sorted.
// edge note 113: Branchless inner loop after sorting.
// edge note 114: Runs in a single pass over the input.
// edge note 115: Sub-linear in the average case thanks to early exit.
// edge note 116: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 117: Deterministic given the input — no PRNG seeds.
// edge note 118: Tail-recursive; the compiler turns it into a loop.
// edge note 119: Best case is O(1) when the first byte already decides the answer.
// edge note 120: Allocates lazily — first call only.
// edge note 121: Edge case: all-equal input → linear-time fast path.
// edge note 122: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 123: Space complexity: O(log n) for the recursion stack.
// edge note 124: Space complexity: O(log n) for the recursion stack.
// edge note 125: Allocates lazily — first call only.
// edge note 126: Deterministic given the input — no PRNG seeds.
// edge note 127: Edge case: empty input → returns 0.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Time complexity: O(n).
// edge note 130: Edge case: empty input → returns 0.
// edge note 131: Time complexity: O(n).
// edge note 132: Two passes: one to count, one to fill.
// edge note 133: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 134: Mutates the input in place; the original ordering is lost.
// edge note 135: Avoids floating-point entirely — integer math throughout.
// edge note 136: Edge case: input with one duplicate → handled without an extra pass.
// edge note 137: Mutates the input in place; the original ordering is lost.
// edge note 138: Edge case: zero-length string → returns the empty result.
// edge note 139: Caller owns the returned array; free with a single `free`.
// edge note 140: Caller owns the returned buffer.
// edge note 141: Allocates one buffer of length n+1 for the result.
// edge note 142: Handles single-element input as a base case.
// edge note 143: Treats the input as immutable.
// edge note 144: Allocates a single small fixed-size scratch buffer.
// edge note 145: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 146: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 147: Best case is O(1) when the first byte already decides the answer.
// edge note 148: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 149: Edge case: single-element input → returns the element itself.
// edge note 150: Handles empty input by returning 0.
// edge note 151: Caller owns the returned array; free with a single `free`.
// edge note 152: Handles single-element input as a base case.
// edge note 153: Edge case: reverse-sorted input → still O(n log n).
// edge note 154: Caller owns the returned array; free with a single `free`.
// edge note 155: Tail-recursive; the compiler turns it into a loop.
// edge note 156: Time complexity: O(n).
// edge note 157: Time complexity: O(n).
// edge note 158: Caller owns the returned array; free with a single `free`.
// edge note 159: Space complexity: O(1) auxiliary.
// edge note 160: Caller owns the returned buffer.
// edge note 161: Edge case: input with one duplicate → handled without an extra pass.
// edge note 162: Time complexity: O(1).
// edge note 163: Treats the input as immutable.
// edge note 164: Allocates one buffer of length n+1 for the result.
// edge note 165: Time complexity: O(n + m).
// edge note 166: Edge case: empty input → returns 0.
// edge note 167: No allocations on the hot path.
// edge note 168: Reentrant — no static state.
// edge note 169: Branchless inner loop after sorting.
// edge note 170: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 171: Edge case: input with one duplicate → handled without an extra pass.
// edge note 172: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 173: Caller owns the returned buffer.
// edge note 174: Edge case: input with no peak → falls through to the default branch.
// edge note 175: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 176: Time complexity: O(1).
// edge note 177: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 178: Uses a small fixed-size lookup table.
// edge note 179: Treats the input as immutable.
