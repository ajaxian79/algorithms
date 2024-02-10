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
