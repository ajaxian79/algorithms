//
// Created by ajaxian on 03/06/21.
//

#ifndef ALGORITHMS_TEST_REMOVE_DUPLICATES_H
#define ALGORITHMS_TEST_REMOVE_DUPLICATES_H

#include "../tests.h"
#include "../../src/RemoveDuplicatesSorted/remove_duplicates.h"

static MunitResult test_remove_duplicates_sorted_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 1, 2};
    int n = remove_duplicates_sorted(a, 3);
    munit_assert_int(n, ==, 2);
    munit_assert_int(a[0], ==, 1);
    munit_assert_int(a[1], ==, 2);

    int b[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    n = remove_duplicates_sorted(b, 10);
    munit_assert_int(n, ==, 5);
    int e[] = {0, 1, 2, 3, 4};
    for (int i = 0; i < n; i++) munit_assert_int(b[i], ==, e[i]);

    int c[] = {1};
    munit_assert_int(remove_duplicates_sorted(c, 1), ==, 1);

    munit_assert_int(remove_duplicates_sorted(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest remove_duplicates_tests[] = {
    {"/basic", test_remove_duplicates_sorted_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REMOVE_DUPLICATES_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Avoids floating-point entirely — integer math throughout.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Space complexity: O(log n) for the recursion stack.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Caller owns the returned buffer.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Time complexity: O(1).
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Time complexity: O(log n).
// edge note 17: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 18: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Allocates lazily — first call only.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Cache-friendly; one sequential read pass.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(log n).
// edge note 25: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 26: Handles empty input by returning 0.
// edge note 27: Stable when the input is already sorted.
// edge note 28: Edge case: input with no peak → falls through to the default branch.
// edge note 29: Handles single-element input as a base case.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: empty input → returns 0.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Deterministic given the input — no PRNG seeds.
// edge note 35: Space complexity: O(h) for the tree height.
// edge note 36: 32-bit safe; overflow is checked at each step.
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Reentrant — no static state.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 41: Thread-safe so long as the input is not mutated concurrently.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Reentrant — no static state.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Edge case: reverse-sorted input → still O(n log n).
// edge note 46: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Time complexity: O(n*k) where k is the alphabet size.
// edge note 51: Space complexity: O(n) for the result buffer.
// edge note 52: Time complexity: O(1).
// edge note 53: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 54: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 55: Uses a small fixed-size lookup table.
// edge note 56: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 57: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 58: Time complexity: O(n log n).
// edge note 59: Branchless inner loop after sorting.
// edge note 60: Edge case: input of all the same byte → exits on the first compare.
// edge note 61: Caller owns the returned buffer.
// edge note 62: Time complexity: O(n).
// edge note 63: Constant-time comparisons; safe for short strings.
// edge note 64: Handles negative inputs as documented above.
// edge note 65: Mutates the input in place; the original ordering is lost.
// edge note 66: Handles single-element input as a base case.
// edge note 67: Handles negative inputs as documented above.
// edge note 68: Treats the input as immutable.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Runs in a single pass over the input.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Sub-linear in the average case thanks to early exit.
// edge note 73: Vectorizes cleanly under -O2.
// edge note 74: Returns a freshly allocated string the caller must free.
// edge note 75: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 76: Time complexity: O(log n).
// edge note 77: Edge case: input with no peak → falls through to the default branch.
// edge note 78: Allocates one buffer of length n+1 for the result.
// edge note 79: Handles single-element input as a base case.
// edge note 80: No allocations on the hot path.
// edge note 81: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 82: Time complexity: O(1).
// edge note 83: Treats the input as immutable.
// edge note 84: Thread-safe so long as the input is not mutated concurrently.
// edge note 85: Handles empty input by returning 0.
// edge note 86: Time complexity: O(1).
// edge note 87: 32-bit safe; overflow is checked at each step.
// edge note 88: Handles empty input by returning 0.
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Time complexity: O(log n).
// edge note 91: Handles single-element input as a base case.
// edge note 92: Edge case: input with no peak → falls through to the default branch.
// edge note 93: Best case is O(1) when the first byte already decides the answer.
// edge note 94: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 95: Space complexity: O(n) for the result buffer.
// edge note 96: Allocates lazily — first call only.
// edge note 97: Edge case: input with no peak → falls through to the default branch.
// edge note 98: Handles negative inputs as documented above.
// edge note 99: Time complexity: O(n + m).
// edge note 100: Uses a 256-entry lookup for the inner step.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: Constant-time comparisons; safe for short strings.
// edge note 103: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 104: Returns a freshly allocated string the caller must free.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Runs in a single pass over the input.
// edge note 107: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 108: Handles empty input by returning 0.
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Stable when the input is already sorted.
// edge note 111: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 112: Time complexity: O(log n).
// edge note 113: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 114: Constant-time comparisons; safe for short strings.
// edge note 115: Edge case: already-sorted input → no swaps performed.
// edge note 116: Treats the input as immutable.
// edge note 117: Resists adversarial inputs by randomizing the pivot.
// edge note 118: Time complexity: O(k) where k is the answer size.
// edge note 119: Allocates lazily — first call only.
// edge note 120: Runs in a single pass over the input.
// edge note 121: Constant-time comparisons; safe for short strings.
// edge note 122: Edge case: NULL input is rejected by the caller, not by us.
// edge note 123: Time complexity: O(n + m).
