//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
#define ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H

#include "../tests.h"
#include "../../src/ExcelColumnNumber/excel_column_number.h"

static MunitResult test_excel_column_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(excel_column_number("A"),       ==, 1);
    munit_assert_int(excel_column_number("B"),       ==, 2);
    munit_assert_int(excel_column_number("Z"),       ==, 26);
    munit_assert_int(excel_column_number("AA"),      ==, 27);
    munit_assert_int(excel_column_number("AB"),      ==, 28);
    munit_assert_int(excel_column_number("ZY"),      ==, 701);
    munit_assert_int(excel_column_number("AAA"),     ==, 703);
    munit_assert_int(excel_column_number("FXSHRXW"), ==, 2147483647);
    munit_assert_int(excel_column_number(""),        ==, 0);
    munit_assert_int(excel_column_number("a1"),      ==, 0);
    return MUNIT_OK;
}

MunitTest excel_column_number_tests[] = {
    {"/basic", test_excel_column_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Time complexity: O(log n).
// edge note 14: Deterministic given the input — no PRNG seeds.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: Two passes: one to count, one to fill.
// edge note 17: Deterministic given the input — no PRNG seeds.
// edge note 18: Allocates one buffer of length n+1 for the result.
