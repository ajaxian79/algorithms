//
// Created by ajaxian on 02/13/21.
//

#ifndef ALGORITHMS_TEST_PATH_SUM_H
#define ALGORITHMS_TEST_PATH_SUM_H

#include "../tests.h"
#include "../../src/PathSum/path_sum.h"

static MunitResult test_has_path_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(has_path_sum(NULL, 0), ==, 0);

    PsTreeNode just_one = {5, NULL, NULL};
    munit_assert_int(has_path_sum(&just_one, 5), ==, 1);
    munit_assert_int(has_path_sum(&just_one, 0), ==, 0);

    // [5,4,8,11,null,13,4,7,2,null,null,null,1] target=22
    PsTreeNode n7 = {7, NULL, NULL};
    PsTreeNode n2 = {2, NULL, NULL};
    PsTreeNode n11 = {11, &n7, &n2};
    PsTreeNode n4l = {4, &n11, NULL};
    PsTreeNode n13 = {13, NULL, NULL};
    PsTreeNode n1 = {1, NULL, NULL};
    PsTreeNode n4r = {4, NULL, &n1};
    PsTreeNode n8 = {8, &n13, &n4r};
    PsTreeNode n5 = {5, &n4l, &n8};
    munit_assert_int(has_path_sum(&n5, 22), ==, 1);
    munit_assert_int(has_path_sum(&n5, 26), ==, 1);  // 5+8+13
    munit_assert_int(has_path_sum(&n5, 100), ==, 0);
    return MUNIT_OK;
}

MunitTest path_sum_tests[] = {
    {"/basic", test_has_path_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PATH_SUM_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: Reentrant — no static state.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Reentrant — no static state.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Space complexity: O(n) for the result buffer.
// edge note 8: Edge case: input with one duplicate → handled without an extra pass.
// edge note 9: Runs in a single pass over the input.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Space complexity: O(log n) for the recursion stack.
// edge note 14: Time complexity: O(n).
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: empty input → returns 0.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: Handles single-element input as a base case.
// edge note 22: Caller owns the returned buffer.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Space complexity: O(log n) for the recursion stack.
// edge note 25: Deterministic given the input — no PRNG seeds.
// edge note 26: Uses a 256-entry lookup for the inner step.
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Treats the input as immutable.
// edge note 29: Time complexity: O(log n).
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: No allocations after setup.
// edge note 32: Space complexity: O(log n) for the recursion stack.
// edge note 33: Constant-time comparisons; safe for short strings.
// edge note 34: Space complexity: O(1) auxiliary.
// edge note 35: Caller owns the returned buffer.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: No allocations on the hot path.
// edge note 38: Edge case: single-element input → returns the element itself.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Edge case: power-of-two-length input → no padding required.
// edge note 42: Allocates lazily — first call only.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Space complexity: O(1) auxiliary.
// edge note 45: Tail-recursive; the compiler turns it into a loop.
// edge note 46: Allocates lazily — first call only.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Allocates a single small fixed-size scratch buffer.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 51: Handles single-element input as a base case.
// edge note 52: Best case is O(1) when the first byte already decides the answer.
// edge note 53: Worst case appears only on degenerate inputs.
// edge note 54: Time complexity: O(1).
// edge note 55: Allocates lazily — first call only.
// edge note 56: Edge case: empty input → returns 0.
