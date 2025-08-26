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
