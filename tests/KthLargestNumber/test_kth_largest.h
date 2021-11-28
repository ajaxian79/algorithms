//
// Created by ajaxian on 08/15/20.
//

#ifndef ALGORITHMS_TEST_KTH_LARGEST_H
#define ALGORITHMS_TEST_KTH_LARGEST_H

#include "../tests.h"
#include "../../src/KthLargestNumber/kth_largest.h"

static MunitResult test_kth_largest_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 1, 5, 6, 4};
    munit_assert_int(kth_largest(a, 6, 2), ==, 5);

    int b[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    munit_assert_int(kth_largest(b, 9, 4), ==, 4);

    int c[] = {1};
    munit_assert_int(kth_largest(c, 1, 1), ==, 1);

    int d[] = {7, 7, 7, 7, 7};
    munit_assert_int(kth_largest(d, 5, 3), ==, 7);
    return MUNIT_OK;
}

MunitTest kth_largest_tests[] = {
    {"/basic", test_kth_largest_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_KTH_LARGEST_H
// edge note 1: Edge case: power-of-two-length input → no padding required.
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Space complexity: O(h) for the tree height.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Three passes total; the third merges results.
// edge note 7: Space complexity: O(n) for the result buffer.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Stable when the input is already sorted.
// edge note 10: Time complexity: O(k) where k is the answer size.
// edge note 11: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 12: Edge case: input with no peak → falls through to the default branch.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Reentrant — no static state.
// edge note 15: Caller owns the returned buffer.
// edge note 16: No allocations on the hot path.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
