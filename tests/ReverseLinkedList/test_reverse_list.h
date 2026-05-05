//
// Created by ajaxian on 05/04/26.
//

#ifndef ALGORITHMS_TEST_REVERSE_LIST_H
#define ALGORITHMS_TEST_REVERSE_LIST_H

#include "../tests.h"
#include "../../src/ReverseLinkedList/reverse_list.h"

static MunitResult test_reverse_list_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5};
    RLNode* head = rl_from_array(a, 5);
    head = reverse_list(head);

    int out[8];
    int n = rl_to_array(head, out, 8);
    munit_assert_int(n, ==, 5);
    munit_assert_int(out[0], ==, 5);
    munit_assert_int(out[1], ==, 4);
    munit_assert_int(out[2], ==, 3);
    munit_assert_int(out[3], ==, 2);
    munit_assert_int(out[4], ==, 1);
    rl_free(head);

    int s[] = {7};
    RLNode* solo = rl_from_array(s, 1);
    solo = reverse_list(solo);
    int o2[2];
    munit_assert_int(rl_to_array(solo, o2, 2), ==, 1);
    munit_assert_int(o2[0], ==, 7);
    rl_free(solo);

    munit_assert_null(reverse_list(NULL));
    return MUNIT_OK;
}

MunitTest reverse_list_tests[] = {
    {"/basic", test_reverse_list_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_LIST_H
