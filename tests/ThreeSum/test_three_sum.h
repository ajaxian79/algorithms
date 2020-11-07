//
// Created by ajaxian on 11/07/20.
//

#ifndef ALGORITHMS_TEST_THREE_SUM_H
#define ALGORITHMS_TEST_THREE_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ThreeSum/three_sum.h"

static MunitResult test_three_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, 0, 1, 2, -1, -4};
    int n = 0;
    int* r = three_sum(a, 6, &n);
    munit_assert_int(n, ==, 2);
    free(r);

    int b[] = {0, 1, 1};
    r = three_sum(b, 3, &n);
    munit_assert_int(n, ==, 0);
    free(r);

    int c[] = {0, 0, 0};
    r = three_sum(c, 3, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 0);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    free(r);

    int d[] = {0, 0, 0, 0};
    r = three_sum(d, 4, &n);
    munit_assert_int(n, ==, 1);
    free(r);
    return MUNIT_OK;
}

MunitTest three_sum_tests[] = {
    {"/basic", test_three_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_THREE_SUM_H
