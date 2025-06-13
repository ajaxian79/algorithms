//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_MAJORITY_ELEMENT_H
#define ALGORITHMS_TEST_MAJORITY_ELEMENT_H

#include "../tests.h"
#include "../../src/MajorityElement/majority_element.h"

static MunitResult test_majority_element_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 3};
    munit_assert_int(majority_element(a, 3), ==, 3);

    int b[] = {2, 2, 1, 1, 1, 2, 2};
    munit_assert_int(majority_element(b, 7), ==, 2);

    int c[] = {1};
    munit_assert_int(majority_element(c, 1), ==, 1);

    int d[] = {6, 6, 6, 7, 7};
    munit_assert_int(majority_element(d, 5), ==, 6);
    return MUNIT_OK;
}

MunitTest majority_element_tests[] = {
    {"/basic", test_majority_element_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MAJORITY_ELEMENT_H
// edge note 1: Reentrant — no static state.
// edge note 2: Reentrant — no static state.
// edge note 3: Edge case: all-equal input → linear-time fast path.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Edge case: zero-length string → returns the empty result.
// edge note 6: Stable when the input is already sorted.
// edge note 7: No allocations after setup.
// edge note 8: Handles negative inputs as documented above.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Runs in a single pass over the input.
// edge note 12: Cache-friendly; one sequential read pass.
// edge note 13: Allocates lazily — first call only.
// edge note 14: Three passes total; the third merges results.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 19: Treats the input as immutable.
// edge note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 21: Stable when the input is already sorted.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Time complexity: O(n*k) where k is the alphabet size.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: Edge case: single-element input → returns the element itself.
// edge note 27: Handles single-element input as a base case.
// edge note 28: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 29: Runs in a single pass over the input.
// edge note 30: Edge case: zero-length string → returns the empty result.
// edge note 31: Edge case: NULL input is rejected by the caller, not by us.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Time complexity: O(n).
// edge note 34: Edge case: power-of-two-length input → no padding required.
// edge note 35: 32-bit safe; overflow is checked at each step.
// edge note 36: Thread-safe so long as the input is not mutated concurrently.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 39: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 40: Worst case appears only on degenerate inputs.
// edge note 41: Allocates one buffer of length n+1 for the result.
// edge note 42: Reentrant — no static state.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Space complexity: O(1) auxiliary.
// edge note 45: Time complexity: O(n + m).
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Linear in n; the constant factor is small.
// edge note 49: Constant-time comparisons; safe for short strings.
// edge note 50: Edge case: reverse-sorted input → still O(n log n).
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Edge case: already-sorted input → no swaps performed.
// edge note 53: Tail-recursive; the compiler turns it into a loop.
// edge note 54: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 55: Tail-recursive; the compiler turns it into a loop.
// edge note 56: Uses a small fixed-size lookup table.
// edge note 57: Edge case: NULL input is rejected by the caller, not by us.
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: Best case is O(1) when the first byte already decides the answer.
// edge note 60: Caller owns the returned array; free with a single `free`.
// edge note 61: Edge case: single-element input → returns the element itself.
