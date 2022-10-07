//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_PLUS_ONE_H
#define ALGORITHMS_TEST_PLUS_ONE_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PlusOne/plus_one.h"

static MunitResult test_plus_one_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int rs = 0;
    int* r = plus_one(a, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 4);
    free(r);

    int b[] = {0};
    r = plus_one(b, 1, &rs);
    munit_assert_int(rs, ==, 1);
    munit_assert_int(r[0], ==, 1);
    free(r);
    return MUNIT_OK;
}

static MunitResult test_plus_one_carry(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {9};
    int rs = 0;
    int* r = plus_one(a, 1, &rs);
    munit_assert_int(rs, ==, 2);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    free(r);

    int b[] = {9, 9, 9};
    r = plus_one(b, 3, &rs);
    munit_assert_int(rs, ==, 4);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    munit_assert_int(r[3], ==, 0);
    free(r);

    int c[] = {1, 9, 9};
    r = plus_one(c, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest plus_one_tests[] = {
    {"/basic", test_plus_one_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/carry", test_plus_one_carry, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PLUS_ONE_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Edge case: reverse-sorted input → still O(n log n).
// edge note 3: Time complexity: O(n).
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Time complexity: O(n log n).
// edge note 7: No allocations after setup.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: No allocations after setup.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Handles empty input by returning 0.
// edge note 12: Time complexity: O(log n).
// edge note 13: Best case is O(1) when the first byte already decides the answer.
