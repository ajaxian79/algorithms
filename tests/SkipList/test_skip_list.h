//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_TEST_SKIP_LIST_H
#define ALGORITHMS_TEST_SKIP_LIST_H

#include "../tests.h"
#include "../../src/SkipList/skip_list.h"

static MunitResult test_skip_list_basic(const MunitParameter params[], void* user_data_or_fixture) {
    SkipList l;
    munit_assert_int(skiplist_init(&l, 42), ==, 1);

    int keys[] = {17, 3, 25, 9, 14, 100, 5, 8, 22, 11};
    for (size_t i = 0; i < sizeof(keys) / sizeof(keys[0]); i++) {
        munit_assert_int(skiplist_insert(&l, keys[i]), ==, 1);
    }
    munit_assert_int(skiplist_size(&l), ==, 10);

    // Duplicate insert is a no-op.
    munit_assert_int(skiplist_insert(&l, 9), ==, 0);
    munit_assert_int(skiplist_size(&l), ==, 10);

    int out[16];
    int n = skiplist_to_array(&l, out, 16);
    munit_assert_int(n, ==, 10);
    for (int i = 1; i < n; i++) {
        munit_assert_int(out[i - 1], <, out[i]);
    }

    munit_assert_int(skiplist_contains(&l, 22), ==, 1);
    munit_assert_int(skiplist_contains(&l, 23), ==, 0);
    munit_assert_int(skiplist_contains(&l, 100), ==, 1);
    munit_assert_int(skiplist_contains(&l, -1), ==, 0);

    skiplist_clear(&l);
    munit_assert_int(skiplist_size(&l), ==, 0);
    return MUNIT_OK;
}

MunitTest skip_list_tests[] = {
    {"/basic", test_skip_list_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SKIP_LIST_H
