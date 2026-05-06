//
// Created by ajaxian on 05/05/26.
//

#ifndef ALGORITHMS_TEST_CYCLE_LIST_H
#define ALGORITHMS_TEST_CYCLE_LIST_H

#include "../tests.h"
#include "../../src/LinkedListCycle/cycle_list.h"

static MunitResult test_cycle_list_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 0, -4};
    LLCNode* head = llc_from_array(a, 4);
    munit_assert_int(has_cycle(head), ==, 0);

    llc_make_cycle(head, 1);
    munit_assert_int(has_cycle(head), ==, 1);

    llc_break_cycle(head);
    munit_assert_int(has_cycle(head), ==, 0);
    llc_free(head);

    int b[] = {1, 2};
    LLCNode* two = llc_from_array(b, 2);
    munit_assert_int(has_cycle(two), ==, 0);
    llc_make_cycle(two, 0);
    munit_assert_int(has_cycle(two), ==, 1);
    llc_break_cycle(two);
    llc_free(two);

    int s[] = {1};
    LLCNode* solo = llc_from_array(s, 1);
    munit_assert_int(has_cycle(solo), ==, 0);
    llc_make_cycle(solo, 0);
    munit_assert_int(has_cycle(solo), ==, 1);
    llc_break_cycle(solo);
    llc_free(solo);

    munit_assert_int(has_cycle(NULL), ==, 0);
    return MUNIT_OK;
}

MunitTest cycle_list_tests[] = {
    {"/basic", test_cycle_list_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CYCLE_LIST_H
