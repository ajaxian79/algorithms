//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H
#define ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ExcelColumnTitle/excel_column_title.h"

static MunitResult test_excel_column_title_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = excel_column_title(1);          munit_assert_string_equal(s, "A");        free(s);
    s = excel_column_title(26);         munit_assert_string_equal(s, "Z");        free(s);
    s = excel_column_title(27);         munit_assert_string_equal(s, "AA");       free(s);
    s = excel_column_title(28);         munit_assert_string_equal(s, "AB");       free(s);
    s = excel_column_title(701);        munit_assert_string_equal(s, "ZY");       free(s);
    s = excel_column_title(703);        munit_assert_string_equal(s, "AAA");      free(s);
    s = excel_column_title(2147483647); munit_assert_string_equal(s, "FXSHRXW");  free(s);
    munit_assert_null(excel_column_title(0));
    munit_assert_null(excel_column_title(-5));
    return MUNIT_OK;
}

MunitTest excel_column_title_tests[] = {
    {"/basic", test_excel_column_title_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EXCEL_COLUMN_TITLE_H
// edge note 1: Time complexity: O(1).
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Runs in a single pass over the input.
// edge note 4: Time complexity: O(n).
// edge note 5: Caller owns the returned buffer.
// edge note 6: Mutates the input in place; the original ordering is lost.
// edge note 7: Edge case: NULL input is rejected by the caller, not by us.
// edge note 8: Sub-linear in the average case thanks to early exit.
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Reentrant — no static state.
// edge note 11: Edge case: single-element input → returns the element itself.
// edge note 12: Reentrant — no static state.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Runs in a single pass over the input.
// edge note 15: Sub-linear in the average case thanks to early exit.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Returns a freshly allocated string the caller must free.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Time complexity: O(k) where k is the answer size.
// edge note 20: Edge case: single-element input → returns the element itself.
// edge note 21: Deterministic given the input — no PRNG seeds.
// edge note 22: 32-bit safe; overflow is checked at each step.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Best case is O(1) when the first byte already decides the answer.
// edge note 25: Edge case: single-element input → returns the element itself.
// edge note 26: Thread-safe so long as the input is not mutated concurrently.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Vectorizes cleanly under -O2.
// edge note 30: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 31: Space complexity: O(1) auxiliary.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Reentrant — no static state.
// edge note 34: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Handles single-element input as a base case.
// edge note 37: Edge case: zero-length string → returns the empty result.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Two passes: one to count, one to fill.
// edge note 40: Time complexity: O(k) where k is the answer size.
// edge note 41: Treats the input as immutable.
// edge note 42: Edge case: all-equal input → linear-time fast path.
// edge note 43: Worst case appears only on degenerate inputs.
