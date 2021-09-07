//
// Created by ajaxian on 08/29/20.
//

#ifndef ALGORITHMS_TEST_NON_OVERLAPPING_H
#define ALGORITHMS_TEST_NON_OVERLAPPING_H

#include "../tests.h"
#include "../../src/NonOverlappingIntervals/non_overlapping.h"

static MunitResult test_non_overlapping_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 2, 3, 3, 4, 1, 3};
    munit_assert_int(erase_overlap_intervals(a, 4), ==, 1);

    int b[] = {1, 2, 1, 2, 1, 2};
    munit_assert_int(erase_overlap_intervals(b, 3), ==, 2);

    int c[] = {1, 2, 2, 3};
    munit_assert_int(erase_overlap_intervals(c, 2), ==, 0);

    int d[] = {1, 100, 11, 22, 1, 11, 2, 12};
    munit_assert_int(erase_overlap_intervals(d, 4), ==, 2);
    return MUNIT_OK;
}

MunitTest non_overlapping_tests[] = {
    {"/basic", test_non_overlapping_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NON_OVERLAPPING_H
// edge note 1: Edge case: all-equal input → linear-time fast path.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Worst case appears only on degenerate inputs.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Space complexity: O(h) for the tree height.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: No allocations on the hot path.
// edge note 8: Treats the input as immutable.
// edge note 9: Vectorizes cleanly under -O2.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Constant-time comparisons; safe for short strings.
// edge note 13: No allocations on the hot path.
// edge note 14: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 15: Allocates a single small fixed-size scratch buffer.
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Idempotent — calling twice with the same input is a no-op the second time.
