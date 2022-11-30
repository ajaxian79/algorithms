//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_MEDIAN_H
#define ALGORITHMS_TEST_MEDIAN_H

#include "../tests.h"
#include "../../src/MedianOfTwoSortedArrays/median.h"

static MunitResult test_median_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,2,3};
    int num1_size = 3;
    int nums2[] = {2};
    int num2_size = 1;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 2.0);
    return MUNIT_OK;
}

static MunitResult test_median_extended_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,2,3};
    int num1_size = 3;
    int nums2[] = {2, 3, 4};
    int num2_size = 3;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 2.5);
    return MUNIT_OK;
}

static MunitResult test_median_overlay_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,2,3,4,5};
    int num1_size = 3;
    int nums2[] = {2, 3, 4,5};
    int num2_size = 3;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 3);
    return MUNIT_OK;
}

static MunitResult test_median_gap_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,3};
    int num1_size = 2;
    int nums2[] = {2};
    int num2_size = 1;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 2.0);
    return MUNIT_OK;
}

static MunitResult test_median_complimentary_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,3};
    int num1_size = 2;
    int nums2[] = {2, 4};
    int num2_size = 2;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 2.5);
    return MUNIT_OK;
}

static MunitResult test_median_mixed_complimentary_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums1[] = {1,3, 5};
    int num1_size = 3;
    int nums2[] = {2, 4, 5};
    int num2_size = 3;

    munit_assert_double(findMedianSortedArrays(nums1, num1_size, nums2, num2_size), ==, 3);
    return MUNIT_OK;
}

MunitTest median_tests[] = {
        {
                "/basic",
                test_median_basic_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/extended",
                test_median_extended_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/overlay",
                test_median_overlay_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/gap",
                test_median_gap_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/complimentary",
                test_median_complimentary_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/mixed complimentary",
                test_median_mixed_complimentary_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MEDIAN_H
