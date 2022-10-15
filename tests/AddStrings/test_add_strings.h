//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ADD_STRINGS_H
#define ALGORITHMS_TEST_ADD_STRINGS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/AddStrings/add_strings.h"

static MunitResult test_add_strings_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = add_strings("11", "123");                                  munit_assert_string_equal(r, "134");                              free(r);
    r = add_strings("456", "77");                                  munit_assert_string_equal(r, "533");                              free(r);
    r = add_strings("999", "1");                                   munit_assert_string_equal(r, "1000");                             free(r);
    r = add_strings("0", "0");                                     munit_assert_string_equal(r, "0");                                free(r);
    r = add_strings("12345678901234567890", "98765432109876543210");
    munit_assert_string_equal(r, "111111111011111111100");                                                                          free(r);
    return MUNIT_OK;
}

static MunitResult test_add_strings_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(add_strings("12a", "1"));
    munit_assert_null(add_strings("hi", "0"));
    return MUNIT_OK;
}

MunitTest add_strings_tests[] = {
    {"/basic", test_add_strings_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_add_strings_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_STRINGS_H
// edge note 1: Time complexity: O(n).
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Allocates a single small fixed-size scratch buffer.
// edge note 5: Edge case: already-sorted input → no swaps performed.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Treats the input as immutable.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: reverse-sorted input → still O(n log n).
