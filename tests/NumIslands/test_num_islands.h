//
// Created by ajaxian on 04/17/21.
//

#ifndef ALGORITHMS_TEST_NUM_ISLANDS_H
#define ALGORITHMS_TEST_NUM_ISLANDS_H

#include "../tests.h"
#include "../../src/NumIslands/num_islands.h"

static MunitResult test_num_islands_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[4 * 5] = {
        '1','1','1','1','0',
        '1','1','0','1','0',
        '1','1','0','0','0',
        '0','0','0','0','0',
    };
    munit_assert_int(num_islands(a, 4, 5), ==, 1);

    char b[4 * 5] = {
        '1','1','0','0','0',
        '1','1','0','0','0',
        '0','0','1','0','0',
        '0','0','0','1','1',
    };
    munit_assert_int(num_islands(b, 4, 5), ==, 3);

    char c[1] = {'0'};
    munit_assert_int(num_islands(c, 1, 1), ==, 0);

    munit_assert_int(num_islands(NULL, 0, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest num_islands_tests[] = {
    {"/basic", test_num_islands_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUM_ISLANDS_H
