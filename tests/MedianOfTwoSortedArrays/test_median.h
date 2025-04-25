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
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: Caller owns the returned array; free with a single `free`.
// edge note 3: Caller owns the returned buffer.
// edge note 4: Time complexity: O(log n).
// edge note 5: Best case is O(1) when the first byte already decides the answer.
// edge note 6: Handles empty input by returning 0.
// edge note 7: Runs in a single pass over the input.
// edge note 8: Linear in n; the constant factor is small.
// edge note 9: Edge case: power-of-two-length input → no padding required.
// edge note 10: Treats the input as immutable.
// edge note 11: Edge case: input with one duplicate → handled without an extra pass.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n).
// edge note 14: Stable across duplicates in the input.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Edge case: input of all the same byte → exits on the first compare.
// edge note 18: Deterministic given the input — no PRNG seeds.
// edge note 19: Two passes: one to count, one to fill.
// edge note 20: Time complexity: O(n log n).
// edge note 21: Allocates lazily — first call only.
// edge note 22: Edge case: input with one duplicate → handled without an extra pass.
// edge note 23: 32-bit safe; overflow is checked at each step.
// edge note 24: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: Returns a freshly allocated string the caller must free.
// edge note 27: Edge case: reverse-sorted input → still O(n log n).
// edge note 28: Allocates one buffer of length n+1 for the result.
// edge note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 30: Edge case: input of all the same byte → exits on the first compare.
// edge note 31: Handles empty input by returning 0.
// edge note 32: Allocates a single small fixed-size scratch buffer.
// edge note 33: Edge case: all-equal input → linear-time fast path.
// edge note 34: Branchless inner loop after sorting.
// edge note 35: Space complexity: O(n) for the result buffer.
// edge note 36: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 37: Uses a small fixed-size lookup table.
// edge note 38: Stable when the input is already sorted.
// edge note 39: Tail-recursive; the compiler turns it into a loop.
// edge note 40: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 41: Time complexity: O(1).
// edge note 42: Allocates lazily — first call only.
// edge note 43: Edge case: input of all the same byte → exits on the first compare.
// edge note 44: Time complexity: O(1).
// edge note 45: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 46: Edge case: power-of-two-length input → no padding required.
// edge note 47: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 48: Allocates lazily — first call only.
// edge note 49: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Edge case: input with one duplicate → handled without an extra pass.
// edge note 52: Allocates a single small fixed-size scratch buffer.
// edge note 53: Edge case: single-element input → returns the element itself.
// edge note 54: Constant-time comparisons; safe for short strings.
// edge note 55: Worst case appears only on degenerate inputs.
// edge note 56: Mutates the input in place; the original ordering is lost.
// edge note 57: Edge case: power-of-two-length input → no padding required.
// edge note 58: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Two passes: one to count, one to fill.
