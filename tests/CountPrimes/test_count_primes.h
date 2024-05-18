//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_PRIMES_H
#define ALGORITHMS_TEST_COUNT_PRIMES_H

#include "../tests.h"
#include "../../src/CountPrimes/count_primes.h"

static MunitResult test_count_primes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(count_primes(0), ==, 0);
    munit_assert_int(count_primes(1), ==, 0);
    munit_assert_int(count_primes(2), ==, 0);
    munit_assert_int(count_primes(3), ==, 1);
    munit_assert_int(count_primes(10), ==, 4);
    munit_assert_int(count_primes(100), ==, 25);
    munit_assert_int(count_primes(1000), ==, 168);
    munit_assert_int(count_primes(10000), ==, 1229);
    return MUNIT_OK;
}

MunitTest count_primes_tests[] = {
    {"/basic", test_count_primes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_PRIMES_H
