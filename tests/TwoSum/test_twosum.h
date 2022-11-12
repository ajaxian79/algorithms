//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_TWOSUM_H
#define ALGORITHMS_TEST_TWOSUM_H

#include "../tests.h"
#include "../../src/TwoSum/twosum.h"

static MunitResult test_twosum_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {2, 7, 18, -24};
    int target = 9;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 0);
    munit_assert_int(result[1], ==, 1);

    free(result);
    return MUNIT_OK;
}

static MunitResult test_twosum_large_number_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {1,6142,8192,10239};
    int target = 18431;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 2);
    munit_assert_int(result[1], ==, 3);

    free(result);
    return MUNIT_OK;
}

static MunitResult test_twosum_zeros_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {0,4,3,0};
    int target = 0;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 0);
    munit_assert_int(result[1], ==, 3);

    free(result);
    return MUNIT_OK;
}

MunitTest twosum_tests[] = {
    {
        "/basic",
            test_twosum_basic_test,
        NULL,
        NULL,
        MUNIT_TEST_OPTION_NONE,
        NULL
        },{
                "/large",
                test_twosum_large_number_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/zeros",
                test_twosum_zeros_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TWOSUM_H
