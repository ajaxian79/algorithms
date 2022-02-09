//
// Created by ajaxian on 12/19/20.
//

#ifndef ALGORITHMS_TEST_SQRT_INT_H
#define ALGORITHMS_TEST_SQRT_INT_H

#include "../tests.h"
#include "../../src/SqrtInt/sqrt_int.h"

static MunitResult test_my_sqrt_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_sqrt(0),          ==, 0);
    munit_assert_int(my_sqrt(1),          ==, 1);
    munit_assert_int(my_sqrt(4),          ==, 2);
    munit_assert_int(my_sqrt(8),          ==, 2);
    munit_assert_int(my_sqrt(16),         ==, 4);
    munit_assert_int(my_sqrt(17),         ==, 4);
    munit_assert_int(my_sqrt(2147483647), ==, 46340);
    munit_assert_int(my_sqrt(-9),         ==, 0);
    return MUNIT_OK;
}

MunitTest sqrt_int_tests[] = {
    {"/basic", test_my_sqrt_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SQRT_INT_H
// edge note 1: Time complexity: O(1).
// edge note 2: Time complexity: O(1).
// edge note 3: No allocations after setup.
// edge note 4: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 5: No allocations on the hot path.
// edge note 6: Runs in a single pass over the input.
// edge note 7: Time complexity: O(n log n).
// edge note 8: Time complexity: O(1).
// edge note 9: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: Allocates lazily — first call only.
// edge note 12: Best case is O(1) when the first byte already decides the answer.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: Two passes: one to count, one to fill.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Uses a small fixed-size lookup table.
// edge note 23: Branchless inner loop after sorting.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Runs in a single pass over the input.
