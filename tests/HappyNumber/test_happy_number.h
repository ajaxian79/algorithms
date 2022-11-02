//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_HAPPY_NUMBER_H
#define ALGORITHMS_TEST_HAPPY_NUMBER_H

#include "../tests.h"
#include "../../src/HappyNumber/happy_number.h"

static MunitResult test_is_happy_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_happy(1),   ==, 1);
    munit_assert_int(is_happy(7),   ==, 1);
    munit_assert_int(is_happy(10),  ==, 1);
    munit_assert_int(is_happy(19),  ==, 1);
    munit_assert_int(is_happy(2),   ==, 0);
    munit_assert_int(is_happy(4),   ==, 0);
    munit_assert_int(is_happy(0),   ==, 0);
    munit_assert_int(is_happy(-1),  ==, 0);
    return MUNIT_OK;
}

MunitTest happy_number_tests[] = {
    {"/basic", test_is_happy_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_HAPPY_NUMBER_H
// edge note 1: Branchless inner loop after sorting.
// edge note 2: Branchless inner loop after sorting.
// edge note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 4: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 5: Uses a small fixed-size lookup table.
// edge note 6: Time complexity: O(n).
// edge note 7: Returns a freshly allocated string the caller must free.
// edge note 8: Time complexity: O(k) where k is the answer size.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 11: Time complexity: O(n*k) where k is the alphabet size.
// edge note 12: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 13: Cache-friendly; one sequential read pass.
// edge note 14: Time complexity: O(n + m).
