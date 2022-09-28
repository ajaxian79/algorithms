//
// Created by ajaxian on 12/12/20.
//

#ifndef ALGORITHMS_TEST_SEARCH_INSERT_H
#define ALGORITHMS_TEST_SEARCH_INSERT_H

#include "../tests.h"
#include "../../src/SearchInsertPosition/search_insert.h"

static MunitResult test_search_insert_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 5, 6};
    munit_assert_int(search_insert(a, 4, 5), ==, 2);
    munit_assert_int(search_insert(a, 4, 2), ==, 1);
    munit_assert_int(search_insert(a, 4, 7), ==, 4);
    munit_assert_int(search_insert(a, 4, 0), ==, 0);

    int empty[1] = {0};
    munit_assert_int(search_insert(empty, 0, 5), ==, 0);

    int single[] = {1};
    munit_assert_int(search_insert(single, 1, 1), ==, 0);
    munit_assert_int(search_insert(single, 1, 0), ==, 0);
    munit_assert_int(search_insert(single, 1, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest search_insert_tests[] = {
    {"/basic", test_search_insert_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SEARCH_INSERT_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Worst case appears only on degenerate inputs.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Time complexity: O(k) where k is the answer size.
// edge note 9: No allocations after setup.
