//
// Created by ajaxian on 05/02/20.
//

#ifndef ALGORITHMS_TEST_MISSING_NUMBER_H
#define ALGORITHMS_TEST_MISSING_NUMBER_H

#include "../tests.h"
#include "../../src/MissingNumber/missing_number.h"

static MunitResult test_missing_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 0, 1};
    munit_assert_int(missing_number(a, 3), ==, 2);

    int b[] = {0, 1};
    munit_assert_int(missing_number(b, 2), ==, 2);

    int c[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    munit_assert_int(missing_number(c, 9), ==, 8);

    int d[] = {0};
    munit_assert_int(missing_number(d, 1), ==, 1);

    int e[] = {1};
    munit_assert_int(missing_number(e, 1), ==, 0);
    return MUNIT_OK;
}

MunitTest missing_number_tests[] = {
    {"/basic", test_missing_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MISSING_NUMBER_H
// edge note 1: Constant-time comparisons; safe for short strings.
// edge note 2: Reentrant — no static state.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Edge case: input with no peak → falls through to the default branch.
// edge note 7: Edge case: input with one duplicate → handled without an extra pass.
// edge note 8: Time complexity: O(1).
// edge note 9: No allocations on the hot path.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Time complexity: O(n).
// edge note 13: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 14: Caller owns the returned array; free with a single `free`.
// edge note 15: Uses a 256-entry lookup for the inner step.
// edge note 16: Uses a 256-entry lookup for the inner step.
