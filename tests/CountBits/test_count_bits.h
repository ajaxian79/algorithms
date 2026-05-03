//
// Created by ajaxian on 05/03/26.
//

#ifndef ALGORITHMS_TEST_COUNT_BITS_H
#define ALGORITHMS_TEST_COUNT_BITS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CountBits/count_bits.h"

static int cb_popcount_ref(unsigned int x) {
    int c = 0;
    while (x) { c += (int)(x & 1u); x >>= 1; }
    return c;
}

static MunitResult test_count_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int* a = count_bits(0);
    munit_assert_not_null(a);
    munit_assert_int(a[0], ==, 0);
    free(a);

    int* b = count_bits(5);
    munit_assert_not_null(b);
    munit_assert_int(b[0], ==, 0);
    munit_assert_int(b[1], ==, 1);
    munit_assert_int(b[2], ==, 1);
    munit_assert_int(b[3], ==, 2);
    munit_assert_int(b[4], ==, 1);
    munit_assert_int(b[5], ==, 2);
    free(b);

    int n = 64;
    int* c = count_bits(n);
    munit_assert_not_null(c);
    for (int i = 0; i <= n; i++) {
        munit_assert_int(c[i], ==, cb_popcount_ref((unsigned int)i));
    }
    free(c);

    munit_assert_null(count_bits(-1));
    return MUNIT_OK;
}

MunitTest count_bits_tests[] = {
    {"/basic", test_count_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_BITS_H
