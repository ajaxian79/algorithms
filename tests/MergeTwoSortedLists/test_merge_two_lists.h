//
// Created by ajaxian on 01/18/25.
//

#ifndef ALGORITHMS_TEST_MERGE_TWO_LISTS_H
#define ALGORITHMS_TEST_MERGE_TWO_LISTS_H

#include "../tests.h"
#include "../../src/MergeTwoSortedLists/merge_two_lists.h"

static MunitResult test_merge_two_lists_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6};
    ListNode* la = list_from_array(a, 4);
    ListNode* lb = list_from_array(b, 3);
    ListNode* m = merge_two_lists(la, lb);

    int out[16];
    int n = list_to_array(m, out, 16);
    munit_assert_int(n, ==, 7);
    int expected[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++) munit_assert_int(out[i], ==, expected[i]);
    list_free(m);

    munit_assert_ptr_null(merge_two_lists(NULL, NULL));

    int c[] = {0, 0};
    ListNode* lc = list_from_array(c, 2);
    ListNode* m2 = merge_two_lists(lc, NULL);
    int out2[4];
    int n2 = list_to_array(m2, out2, 4);
    munit_assert_int(n2, ==, 2);
    munit_assert_int(out2[0], ==, 0);
    munit_assert_int(out2[1], ==, 0);
    list_free(m2);

    int d1[] = {1};
    int d2[] = {1};
    ListNode* ld1 = list_from_array(d1, 1);
    ListNode* ld2 = list_from_array(d2, 1);
    ListNode* m3 = merge_two_lists(ld1, ld2);
    int out3[4];
    int n3 = list_to_array(m3, out3, 4);
    munit_assert_int(n3, ==, 2);
    munit_assert_int(out3[0], ==, 1);
    munit_assert_int(out3[1], ==, 1);
    list_free(m3);

    return MUNIT_OK;
}

MunitTest merge_two_lists_tests[] = {
    {"/basic", test_merge_two_lists_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MERGE_TWO_LISTS_H
