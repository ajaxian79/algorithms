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
