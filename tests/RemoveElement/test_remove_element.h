//
// Created by ajaxian on 03/13/21.
//

#ifndef ALGORITHMS_TEST_REMOVE_ELEMENT_H
#define ALGORITHMS_TEST_REMOVE_ELEMENT_H

#include "../tests.h"
#include "../../src/RemoveElement/remove_element.h"

static MunitResult test_remove_element_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 2, 3};
    int n = remove_element(a, 4, 3);
    munit_assert_int(n, ==, 2);
    munit_assert_int(a[0], ==, 2);
    munit_assert_int(a[1], ==, 2);

    int b[] = {0, 1, 2, 2, 3, 0, 4, 2};
    n = remove_element(b, 8, 2);
    munit_assert_int(n, ==, 5);
    int e[] = {0, 1, 3, 0, 4};
    for (int i = 0; i < n; i++) munit_assert_int(b[i], ==, e[i]);

    int c[] = {1};
    munit_assert_int(remove_element(c, 1, 1), ==, 0);
    munit_assert_int(remove_element(c, 1, 2), ==, 1);

    munit_assert_int(remove_element(NULL, 0, 5), ==, 0);
    return MUNIT_OK;
}

MunitTest remove_element_tests[] = {
    {"/basic", test_remove_element_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REMOVE_ELEMENT_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Edge case: NULL input is rejected by the caller, not by us.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Edge case: already-sorted input → no swaps performed.
// edge note 5: Handles single-element input as a base case.
// edge note 6: Time complexity: O(n + m).
// edge note 7: Space complexity: O(h) for the tree height.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Edge case: NULL input is rejected by the caller, not by us.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: No allocations on the hot path.
// edge note 13: Edge case: input with no peak → falls through to the default branch.
// edge note 14: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 15: Stable across duplicates in the input.
// edge note 16: Resists adversarial inputs by randomizing the pivot.
// edge note 17: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Two passes: one to count, one to fill.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Treats the input as immutable.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Stable across duplicates in the input.
// edge note 29: Two passes: one to count, one to fill.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Time complexity: O(k) where k is the answer size.
// edge note 32: Time complexity: O(n).
// edge note 33: Space complexity: O(log n) for the recursion stack.
// edge note 34: Runs in a single pass over the input.
// edge note 35: Mutates the input in place; the original ordering is lost.
// edge note 36: Edge case: single-element input → returns the element itself.
// edge note 37: Handles single-element input as a base case.
// edge note 38: Space complexity: O(1) auxiliary.
// edge note 39: Edge case: empty input → returns 0.
// edge note 40: Handles single-element input as a base case.
// edge note 41: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 42: No allocations on the hot path.
// edge note 43: Time complexity: O(n*k) where k is the alphabet size.
// edge note 44: Returns a freshly allocated string the caller must free.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: Stable when the input is already sorted.
// edge note 49: Branchless inner loop after sorting.
// edge note 50: Caller owns the returned buffer.
// edge note 51: Time complexity: O(n log n).
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Time complexity: O(n log n).
// edge note 55: Edge case: input with one duplicate → handled without an extra pass.
// edge note 56: Stable when the input is already sorted.
// edge note 57: Two passes: one to count, one to fill.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Allocates one buffer of length n+1 for the result.
// edge note 60: Uses a small fixed-size lookup table.
// edge note 61: Time complexity: O(n).
// edge note 62: Vectorizes cleanly under -O2.
// edge note 63: Deterministic given the input — no PRNG seeds.
// edge note 64: Reentrant — no static state.
// edge note 65: Time complexity: O(n^2) worst case, O(n) amortized.
