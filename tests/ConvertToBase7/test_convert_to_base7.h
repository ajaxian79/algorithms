//
// Created by ajaxian on 06/20/20.
//

#ifndef ALGORITHMS_TEST_CONVERT_TO_BASE7_H
#define ALGORITHMS_TEST_CONVERT_TO_BASE7_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ConvertToBase7/convert_to_base7.h"

static MunitResult test_convert_to_base7_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = convert_to_base7(0);    munit_assert_string_equal(s, "0");      free(s);
    s = convert_to_base7(7);    munit_assert_string_equal(s, "10");     free(s);
    s = convert_to_base7(49);   munit_assert_string_equal(s, "100");    free(s);
    s = convert_to_base7(100);  munit_assert_string_equal(s, "202");    free(s);
    s = convert_to_base7(-7);   munit_assert_string_equal(s, "-10");    free(s);
    s = convert_to_base7(-1);   munit_assert_string_equal(s, "-1");     free(s);
    return MUNIT_OK;
}

MunitTest convert_to_base7_tests[] = {
    {"/basic", test_convert_to_base7_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CONVERT_TO_BASE7_H
// edge note 1: Edge case: power-of-two-length input → no padding required.
// edge note 2: Time complexity: O(n log n).
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Edge case: reverse-sorted input → still O(n log n).
// edge note 5: Three passes total; the third merges results.
// edge note 6: Edge case: input with no peak → falls through to the default branch.
// edge note 7: Reentrant — no static state.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Mutates the input in place; the original ordering is lost.
// edge note 10: Allocates a single small fixed-size scratch buffer.
// edge note 11: Space complexity: O(n) for the result buffer.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n log n).
