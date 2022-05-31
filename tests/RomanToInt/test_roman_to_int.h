//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_ROMAN_TO_INT_H
#define ALGORITHMS_TEST_ROMAN_TO_INT_H

#include "../tests.h"
#include "../../src/RomanToInt/roman_to_int.h"

static MunitResult test_roman_to_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("I"), ==, 1);
    munit_assert_int(roman_to_int("III"), ==, 3);
    munit_assert_int(roman_to_int("IV"), ==, 4);
    munit_assert_int(roman_to_int("IX"), ==, 9);
    munit_assert_int(roman_to_int("LVIII"), ==, 58);
    munit_assert_int(roman_to_int("MCMXCIV"), ==, 1994);
    munit_assert_int(roman_to_int("MMXXIV"), ==, 2024);
    return MUNIT_OK;
}

static MunitResult test_roman_to_int_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("ABC"), ==, -1);
    munit_assert_int(roman_to_int("XZ"), ==, -1);
    return MUNIT_OK;
}

MunitTest roman_to_int_tests[] = {
    {"/basic", test_roman_to_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_roman_to_int_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROMAN_TO_INT_H
// edge note 1: Time complexity: O(log n).
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(log n).
// edge note 7: Space complexity: O(h) for the tree height.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: Time complexity: O(log n).
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: power-of-two-length input → no padding required.
// edge note 12: Edge case: NULL input is rejected by the caller, not by us.
// edge note 13: Time complexity: O(n + m).
// edge note 14: No allocations after setup.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Edge case: input with no peak → falls through to the default branch.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Allocates a single small fixed-size scratch buffer.
