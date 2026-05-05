//
// Created by ajaxian on 05/04/26.
//

#ifndef ALGORITHMS_TEST_EDIT_DISTANCE_H
#define ALGORITHMS_TEST_EDIT_DISTANCE_H

#include "../tests.h"
#include "../../src/EditDistance/edit_distance.h"

static MunitResult test_edit_distance_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(edit_distance("kitten", "sitting"), ==, 3);
    munit_assert_int(edit_distance("sunday", "saturday"), ==, 3);
    munit_assert_int(edit_distance("abc", "abc"), ==, 0);
    munit_assert_int(edit_distance("abc", ""), ==, 3);
    munit_assert_int(edit_distance("", "xyz"), ==, 3);
    munit_assert_int(edit_distance("", ""), ==, 0);
    munit_assert_int(edit_distance("a", "b"), ==, 1);
    munit_assert_int(edit_distance("intention", "execution"), ==, 5);
    munit_assert_int(edit_distance(NULL, "abc"), ==, 3);
    munit_assert_int(edit_distance("abc", NULL), ==, 3);
    munit_assert_int(edit_distance(NULL, NULL), ==, 0);
    return MUNIT_OK;
}

MunitTest edit_distance_tests[] = {
    {"/basic", test_edit_distance_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EDIT_DISTANCE_H
