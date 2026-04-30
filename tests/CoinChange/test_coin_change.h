//
// Created by ajaxian on 09/22/24.
//

#ifndef ALGORITHMS_TEST_COIN_CHANGE_H
#define ALGORITHMS_TEST_COIN_CHANGE_H

#include "../tests.h"
#include "../../src/CoinChange/coin_change.h"

static MunitResult test_coin_change_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int c1[] = {1, 2, 5};
    munit_assert_int(coin_change(c1, 3, 11), ==, 3);
    munit_assert_int(coin_change(c1, 3, 0),  ==, 0);
    munit_assert_int(coin_change(c1, 3, 6),  ==, 2);

    int c2[] = {2};
    munit_assert_int(coin_change(c2, 1, 3), ==, -1);

    int c3[] = {1};
    munit_assert_int(coin_change(c3, 1, 7), ==, 7);

    int c4[] = {186, 419, 83, 408};
    munit_assert_int(coin_change(c4, 4, 6249), ==, 20);

    munit_assert_int(coin_change(NULL, 0, 5), ==, -1);
    munit_assert_int(coin_change(c1, 3, -1),  ==, -1);
    return MUNIT_OK;
}

MunitTest coin_change_tests[] = {
    {"/basic", test_coin_change_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COIN_CHANGE_H
