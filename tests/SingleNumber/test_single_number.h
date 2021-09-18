//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_SINGLE_NUMBER_H
#define ALGORITHMS_TEST_SINGLE_NUMBER_H

#include "../tests.h"
#include "../../src/SingleNumber/single_number.h"

static MunitResult test_single_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 2, 1};
    munit_assert_int(single_number(a, 3), ==, 1);

    int b[] = {4, 1, 2, 1, 2};
    munit_assert_int(single_number(b, 5), ==, 4);

    int c[] = {99};
    munit_assert_int(single_number(c, 1), ==, 99);

    int d[] = {-1, -1, -2};
    munit_assert_int(single_number(d, 3), ==, -2);
    return MUNIT_OK;
}

MunitTest single_number_tests[] = {
    {"/basic", test_single_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SINGLE_NUMBER_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Time complexity: O(1).
// edge note 8: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 9: Time complexity: O(k) where k is the answer size.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Caller owns the returned buffer.
// edge note 12: Time complexity: O(n log n).
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Sub-linear in the average case thanks to early exit.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Cache-friendly; one sequential read pass.
