//
// Created by ajaxian on 10/10/20.
//

#ifndef ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
#define ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ProductExceptSelf/product_except_self.h"

static MunitResult test_product_except_self_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4};
    int e_a[] = {24, 12, 8, 6};
    int n = 0;
    int* r = product_except_self(a, 4, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_a[i]);
    free(r);

    int b[] = {-1, 1, 0, -3, 3};
    int e_b[] = {0, 0, 9, 0, 0};
    r = product_except_self(b, 5, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_b[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest product_except_self_tests[] = {
    {"/basic", test_product_except_self_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
// edge note 1: Stable when the input is already sorted.
