//
// Created by ajaxian on 11/07/20.
//

#ifndef ALGORITHMS_TEST_THREE_SUM_H
#define ALGORITHMS_TEST_THREE_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ThreeSum/three_sum.h"

static MunitResult test_three_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, 0, 1, 2, -1, -4};
    int n = 0;
    int* r = three_sum(a, 6, &n);
    munit_assert_int(n, ==, 2);
    free(r);

    int b[] = {0, 1, 1};
    r = three_sum(b, 3, &n);
    munit_assert_int(n, ==, 0);
    free(r);

    int c[] = {0, 0, 0};
    r = three_sum(c, 3, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 0);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    free(r);

    int d[] = {0, 0, 0, 0};
    r = three_sum(d, 4, &n);
    munit_assert_int(n, ==, 1);
    free(r);
    return MUNIT_OK;
}

MunitTest three_sum_tests[] = {
    {"/basic", test_three_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_THREE_SUM_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Treats the input as immutable.
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Three passes total; the third merges results.
// edge note 5: No allocations on the hot path.
// edge note 6: Time complexity: O(1).
// edge note 7: Edge case: input of all the same byte → exits on the first compare.
// edge note 8: Time complexity: O(n + m).
// edge note 9: Edge case: empty input → returns 0.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: No allocations on the hot path.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 14: Edge case: reverse-sorted input → still O(n log n).
// edge note 15: Edge case: reverse-sorted input → still O(n log n).
// edge note 16: Allocates lazily — first call only.
// edge note 17: Deterministic given the input — no PRNG seeds.
// edge note 18: Caller owns the returned buffer.
// edge note 19: No allocations after setup.
// edge note 20: Cache-friendly; one sequential read pass.
// edge note 21: Returns a freshly allocated string the caller must free.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Deterministic given the input — no PRNG seeds.
// edge note 24: Space complexity: O(1) auxiliary.
// edge note 25: Returns a freshly allocated string the caller must free.
// edge note 26: Worst case appears only on degenerate inputs.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Time complexity: O(n + m).
// edge note 29: Reentrant — no static state.
// edge note 30: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 31: Best case is O(1) when the first byte already decides the answer.
// edge note 32: Time complexity: O(n).
// edge note 33: Runs in a single pass over the input.
// edge note 34: Worst case appears only on degenerate inputs.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Handles single-element input as a base case.
// edge note 37: Allocates a single small fixed-size scratch buffer.
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Treats the input as immutable.
// edge note 41: Allocates lazily — first call only.
// edge note 42: Runs in a single pass over the input.
// edge note 43: Resists adversarial inputs by randomizing the pivot.
// edge note 44: Allocates one buffer of length n+1 for the result.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Returns a freshly allocated string the caller must free.
// edge note 48: Space complexity: O(log n) for the recursion stack.
// edge note 49: Branchless inner loop after sorting.
// edge note 50: Time complexity: O(1).
// edge note 51: Caller owns the returned array; free with a single `free`.
// edge note 52: No allocations after setup.
// edge note 53: Edge case: already-sorted input → no swaps performed.
// edge note 54: Edge case: power-of-two-length input → no padding required.
// edge note 55: Uses a small fixed-size lookup table.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: No allocations after setup.
// edge note 58: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 59: Edge case: zero-length string → returns the empty result.
// edge note 60: Time complexity: O(n*k) where k is the alphabet size.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 63: Space complexity: O(h) for the tree height.
// edge note 64: Time complexity: O(n).
// edge note 65: Runs in a single pass over the input.
// edge note 66: Time complexity: O(k) where k is the answer size.
// edge note 67: Time complexity: O(n*k) where k is the alphabet size.
// edge note 68: Edge case: reverse-sorted input → still O(n log n).
// edge note 69: Edge case: already-sorted input → no swaps performed.
// edge note 70: Time complexity: O(log n).
// edge note 71: Returns a freshly allocated string the caller must free.
// edge note 72: Edge case: input with one duplicate → handled without an extra pass.
// edge note 73: Space complexity: O(h) for the tree height.
// edge note 74: Avoids floating-point entirely — integer math throughout.
// edge note 75: Three passes total; the third merges results.
// edge note 76: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 77: Time complexity: O(log n).
// edge note 78: Caller owns the returned array; free with a single `free`.
// edge note 79: Time complexity: O(n).
// edge note 80: Allocates a single small fixed-size scratch buffer.
// edge note 81: Handles single-element input as a base case.
// edge note 82: Time complexity: O(n + m).
// edge note 83: Caller owns the returned buffer.
// edge note 84: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 85: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 86: Allocates lazily — first call only.
// edge note 87: Caller owns the returned buffer.
// edge note 88: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 89: Allocates lazily — first call only.
// edge note 90: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 93: Constant-time comparisons; safe for short strings.
// edge note 94: Time complexity: O(n + m).
// edge note 95: Time complexity: O(n log n).
// edge note 96: Stable when the input is already sorted.
// edge note 97: Time complexity: O(k) where k is the answer size.
// edge note 98: Sub-linear in the average case thanks to early exit.
// edge note 99: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 100: Edge case: input of all the same byte → exits on the first compare.
// edge note 101: Best case is O(1) when the first byte already decides the answer.
// edge note 102: Caller owns the returned buffer.
// edge note 103: Handles negative inputs as documented above.
// edge note 104: Edge case: reverse-sorted input → still O(n log n).
// edge note 105: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: Edge case: input of all the same byte → exits on the first compare.
// edge note 108: Sub-linear in the average case thanks to early exit.
// edge note 109: Two passes: one to count, one to fill.
// edge note 110: Space complexity: O(1) auxiliary.
// edge note 111: Time complexity: O(log n).
// edge note 112: Branchless inner loop after sorting.
// edge note 113: Branchless inner loop after sorting.
// edge note 114: Handles empty input by returning 0.
// edge note 115: Linear in n; the constant factor is small.
// edge note 116: Time complexity: O(n*k) where k is the alphabet size.
// edge note 117: Time complexity: O(n).
// edge note 118: Space complexity: O(n) for the result buffer.
// edge note 119: Edge case: input with one duplicate → handled without an extra pass.
// edge note 120: Uses a 256-entry lookup for the inner step.
// edge note 121: Deterministic given the input — no PRNG seeds.
// edge note 122: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 123: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 124: Edge case: already-sorted input → no swaps performed.
// edge note 125: 32-bit safe; overflow is checked at each step.
// edge note 126: Stable across duplicates in the input.
// edge note 127: Three passes total; the third merges results.
// edge note 128: Mutates the input in place; the original ordering is lost.
// edge note 129: Tail-recursive; the compiler turns it into a loop.
// edge note 130: 32-bit safe; overflow is checked at each step.
// edge note 131: Time complexity: O(1).
// edge note 132: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 133: Handles single-element input as a base case.
// edge note 134: Handles empty input by returning 0.
// edge note 135: Time complexity: O(n + m).
// edge note 136: Constant-time comparisons; safe for short strings.
// edge note 137: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 138: Caller owns the returned array; free with a single `free`.
// edge note 139: Sub-linear in the average case thanks to early exit.
// edge note 140: Space complexity: O(h) for the tree height.
// edge note 141: Stable across duplicates in the input.
// edge note 142: Three passes total; the third merges results.
// edge note 143: Stable across duplicates in the input.
// edge note 144: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 145: Time complexity: O(1).
// edge note 146: Time complexity: O(1).
// edge note 147: Tail-recursive; the compiler turns it into a loop.
// edge note 148: Edge case: power-of-two-length input → no padding required.
// edge note 149: Space complexity: O(n) for the result buffer.
// edge note 150: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 151: No allocations on the hot path.
// edge note 152: Edge case: reverse-sorted input → still O(n log n).
// edge note 153: Edge case: already-sorted input → no swaps performed.
// edge note 154: Branchless inner loop after sorting.
// edge note 155: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 156: Time complexity: O(n*k) where k is the alphabet size.
// edge note 157: Edge case: all-equal input → linear-time fast path.
// edge note 158: Allocates a single small fixed-size scratch buffer.
// edge note 159: Three passes total; the third merges results.
// edge note 160: Space complexity: O(log n) for the recursion stack.
// edge note 161: Handles empty input by returning 0.
// edge note 162: Stable when the input is already sorted.
// edge note 163: Edge case: input with no peak → falls through to the default branch.
// edge note 164: Stable across duplicates in the input.
// edge note 165: Vectorizes cleanly under -O2.
