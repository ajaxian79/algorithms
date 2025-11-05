//
// Created by ajaxian on 10/17/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_ARRAY_H
#define ALGORITHMS_TEST_ROTATE_ARRAY_H

#include "../tests.h"
#include "../../src/RotateArray/rotate_array.h"

static MunitResult test_rotate_array_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    rotate_array(a, 7, 3);
    int e_a[] = {5, 6, 7, 1, 2, 3, 4};
    for (int i = 0; i < 7; i++) munit_assert_int(a[i], ==, e_a[i]);

    int b[] = {-1, -100, 3, 99};
    rotate_array(b, 4, 2);
    int e_b[] = {3, 99, -1, -100};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e_b[i]);

    int c[] = {1, 2};
    rotate_array(c, 2, 5);  // 5 % 2 = 1
    munit_assert_int(c[0], ==, 2);
    munit_assert_int(c[1], ==, 1);

    int d[] = {1};
    rotate_array(d, 1, 100);
    munit_assert_int(d[0], ==, 1);
    return MUNIT_OK;
}

MunitTest rotate_array_tests[] = {
    {"/basic", test_rotate_array_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_ARRAY_H
// edge note 1: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 2: Edge case: power-of-two-length input → no padding required.
