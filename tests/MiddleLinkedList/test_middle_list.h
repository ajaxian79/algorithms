//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_TEST_MIDDLE_LIST_H
#define ALGORITHMS_TEST_MIDDLE_LIST_H

#include "../tests.h"
#include "../../src/MiddleLinkedList/middle_list.h"

static MunitResult test_middle_list_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5};
    MLNode* head = ml_from_array(a, 5);
    MLNode* mid = middle_node(head);
    munit_assert_not_null(mid);
    munit_assert_int(mid->val, ==, 3);
    ml_free(head);

    int b[] = {1, 2, 3, 4, 5, 6};
    head = ml_from_array(b, 6);
    mid = middle_node(head);
    munit_assert_not_null(mid);
    munit_assert_int(mid->val, ==, 4);
    ml_free(head);

    int s[] = {7};
    head = ml_from_array(s, 1);
    mid = middle_node(head);
    munit_assert_not_null(mid);
    munit_assert_int(mid->val, ==, 7);
    ml_free(head);

    int two[] = {10, 20};
    head = ml_from_array(two, 2);
    mid = middle_node(head);
    munit_assert_not_null(mid);
    munit_assert_int(mid->val, ==, 20);
    ml_free(head);

    munit_assert_null(middle_node(NULL));
    return MUNIT_OK;
}

MunitTest middle_list_tests[] = {
    {"/basic", test_middle_list_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIDDLE_LIST_H
