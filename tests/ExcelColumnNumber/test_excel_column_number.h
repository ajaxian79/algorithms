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
