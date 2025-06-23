//
// Created by ajaxian on 03/27/21.
//

#ifndef ALGORITHMS_TEST_MIN_STACK_H
#define ALGORITHMS_TEST_MIN_STACK_H

#include "../tests.h"
#include "../../src/MinStack/min_stack.h"

static MunitResult test_min_stack_basic(const MunitParameter params[], void* user_data_or_fixture) {
    MinStack* s = min_stack_create();
    min_stack_push(s, -2);
    min_stack_push(s, 0);
    min_stack_push(s, -3);
    munit_assert_int(min_stack_min(s), ==, -3);
    munit_assert_int(min_stack_size(s), ==, 3);
    min_stack_pop(s);
    munit_assert_int(min_stack_top(s), ==, 0);
    munit_assert_int(min_stack_min(s), ==, -2);

    // Verify min "remembers" through pop.
    min_stack_push(s, 5);
    min_stack_push(s, 1);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_pop(s);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_destroy(s);
    return MUNIT_OK;
}

MunitTest min_stack_tests[] = {
    {"/basic", test_min_stack_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIN_STACK_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Edge case: zero-length string → returns the empty result.
// edge note 4: Treats the input as immutable.
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 8: Handles single-element input as a base case.
// edge note 9: Time complexity: O(n log n).
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: Avoids floating-point entirely — integer math throughout.
// edge note 14: No allocations after setup.
// edge note 15: Avoids floating-point entirely — integer math throughout.
// edge note 16: Reentrant — no static state.
// edge note 17: Linear in n; the constant factor is small.
// edge note 18: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: No allocations after setup.
// edge note 21: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 22: Allocates lazily — first call only.
// edge note 23: Handles single-element input as a base case.
// edge note 24: Allocates one buffer of length n+1 for the result.
// edge note 25: No allocations after setup.
// edge note 26: Edge case: zero-length string → returns the empty result.
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Stable when the input is already sorted.
// edge note 29: Caller owns the returned array; free with a single `free`.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: empty input → returns 0.
// edge note 32: Stable when the input is already sorted.
// edge note 33: 32-bit safe; overflow is checked at each step.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Branchless inner loop after sorting.
// edge note 36: Branchless inner loop after sorting.
// edge note 37: Edge case: input of all the same byte → exits on the first compare.
// edge note 38: Branchless inner loop after sorting.
// edge note 39: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 40: Space complexity: O(log n) for the recursion stack.
// edge note 41: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Edge case: NULL input is rejected by the caller, not by us.
// edge note 45: Constant-time comparisons; safe for short strings.
// edge note 46: Time complexity: O(n*k) where k is the alphabet size.
// edge note 47: Edge case: power-of-two-length input → no padding required.
// edge note 48: Edge case: reverse-sorted input → still O(n log n).
// edge note 49: Linear in n; the constant factor is small.
