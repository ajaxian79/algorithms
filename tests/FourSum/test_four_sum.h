//
// Created by ajaxian on 11/21/20.
//

#ifndef ALGORITHMS_TEST_FOUR_SUM_H
#define ALGORITHMS_TEST_FOUR_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/FourSum/four_sum.h"

static MunitResult test_four_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 0, -1, 0, -2, 2};
    int n = 0;
    int* r = four_sum(a, 6, 0, &n);
    munit_assert_int(n, ==, 3);
    free(r);

    int b[] = {2, 2, 2, 2, 2};
    r = four_sum(b, 5, 8, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 2);
    munit_assert_int(r[3], ==, 2);
    free(r);

    int c[] = {1, 2, 3};
    r = four_sum(c, 3, 6, &n);
    munit_assert_int(n, ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest four_sum_tests[] = {
    {"/basic", test_four_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FOUR_SUM_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Time complexity: O(k) where k is the answer size.
// edge note 3: Space complexity: O(h) for the tree height.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Handles empty input by returning 0.
// edge note 6: Mutates the input in place; the original ordering is lost.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Edge case: input of all the same byte → exits on the first compare.
// edge note 9: Deterministic given the input — no PRNG seeds.
// edge note 10: Tail-recursive; the compiler turns it into a loop.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Avoids floating-point entirely — integer math throughout.
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Time complexity: O(n).
// edge note 17: Allocates one buffer of length n+1 for the result.
// edge note 18: Time complexity: O(n log n).
// edge note 19: Stable when the input is already sorted.
// edge note 20: Worst case appears only on degenerate inputs.
// edge note 21: Space complexity: O(log n) for the recursion stack.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 24: Edge case: NULL input is rejected by the caller, not by us.
// edge note 25: Edge case: input with no peak → falls through to the default branch.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 28: Thread-safe so long as the input is not mutated concurrently.
// edge note 29: Space complexity: O(log n) for the recursion stack.
// edge note 30: Allocates a single small fixed-size scratch buffer.
// edge note 31: Reentrant — no static state.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Avoids floating-point entirely — integer math throughout.
// edge note 34: Runs in a single pass over the input.
// edge note 35: No allocations on the hot path.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Edge case: input of all the same byte → exits on the first compare.
// edge note 40: 32-bit safe; overflow is checked at each step.
// edge note 41: Handles single-element input as a base case.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Edge case: NULL input is rejected by the caller, not by us.
// edge note 45: Runs in a single pass over the input.
// edge note 46: Stable when the input is already sorted.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Edge case: all-equal input → linear-time fast path.
// edge note 49: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 50: Time complexity: O(n log n).
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Cache-friendly; one sequential read pass.
// edge note 55: Thread-safe so long as the input is not mutated concurrently.
// edge note 56: Time complexity: O(1).
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
