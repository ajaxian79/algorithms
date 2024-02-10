//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_MAJORITY_ELEMENT_H
#define ALGORITHMS_TEST_MAJORITY_ELEMENT_H

#include "../tests.h"
#include "../../src/MajorityElement/majority_element.h"

static MunitResult test_majority_element_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 3};
    munit_assert_int(majority_element(a, 3), ==, 3);

    int b[] = {2, 2, 1, 1, 1, 2, 2};
    munit_assert_int(majority_element(b, 7), ==, 2);

    int c[] = {1};
    munit_assert_int(majority_element(c, 1), ==, 1);

    int d[] = {6, 6, 6, 7, 7};
    munit_assert_int(majority_element(d, 5), ==, 6);
    return MUNIT_OK;
}

MunitTest majority_element_tests[] = {
    {"/basic", test_majority_element_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MAJORITY_ELEMENT_H
