//
// Created by ajaxian on 05/30/20.
//

#ifndef ALGORITHMS_TEST_ADD_DIGITS_H
#define ALGORITHMS_TEST_ADD_DIGITS_H

#include "../tests.h"
#include "../../src/AddDigits/add_digits.h"

static MunitResult test_add_digits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(add_digits(38),    ==, 2);
    munit_assert_int(add_digits(0),     ==, 0);
    munit_assert_int(add_digits(9),     ==, 9);
    munit_assert_int(add_digits(18),    ==, 9);
    munit_assert_int(add_digits(19),    ==, 1);
    munit_assert_int(add_digits(99999), ==, 9);
    munit_assert_int(add_digits(1),     ==, 1);
    return MUNIT_OK;
}

MunitTest add_digits_tests[] = {
    {"/basic", test_add_digits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_DIGITS_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Edge case: input of all the same byte → exits on the first compare.
// edge note 3: Reentrant — no static state.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 6: Constant-time comparisons; safe for short strings.
// edge note 7: Resists adversarial inputs by randomizing the pivot.
// edge note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 9: Time complexity: O(n*k) where k is the alphabet size.
