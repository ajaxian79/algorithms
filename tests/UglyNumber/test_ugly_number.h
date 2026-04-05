//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_UGLY_NUMBER_H
#define ALGORITHMS_TEST_UGLY_NUMBER_H

#include "../tests.h"
#include "../../src/UglyNumber/ugly_number.h"

static MunitResult test_is_ugly_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_ugly(1),   ==, 1);
    munit_assert_int(is_ugly(2),   ==, 1);
    munit_assert_int(is_ugly(6),   ==, 1);
    munit_assert_int(is_ugly(30),  ==, 1);
    munit_assert_int(is_ugly(8),   ==, 1);
    munit_assert_int(is_ugly(14),  ==, 0);
    munit_assert_int(is_ugly(7),   ==, 0);
    munit_assert_int(is_ugly(0),   ==, 0);
    munit_assert_int(is_ugly(-6),  ==, 0);
    return MUNIT_OK;
}

MunitTest ugly_number_tests[] = {
    {"/basic", test_is_ugly_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_UGLY_NUMBER_H
// edge note 1: Handles empty input by returning 0.
