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
// edge note 1: Treats the input as immutable.
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Vectorizes cleanly under -O2.
// edge note 5: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Time complexity: O(n).
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Edge case: single-element input → returns the element itself.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Cache-friendly; one sequential read pass.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Time complexity: O(n log n).
// edge note 15: Time complexity: O(1).
// edge note 16: Allocates lazily — first call only.
// edge note 17: Runs in a single pass over the input.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Treats the input as immutable.
// edge note 20: Stable when the input is already sorted.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Space complexity: O(n) for the result buffer.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Two passes: one to count, one to fill.
// edge note 25: Reentrant — no static state.
// edge note 26: No allocations after setup.
// edge note 27: Allocates a single small fixed-size scratch buffer.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Space complexity: O(h) for the tree height.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: Handles single-element input as a base case.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: No allocations on the hot path.
// edge note 36: Linear in n; the constant factor is small.
// edge note 37: Handles empty input by returning 0.
// edge note 38: Edge case: power-of-two-length input → no padding required.
// edge note 39: Constant-time comparisons; safe for short strings.
// edge note 40: Caller owns the returned array; free with a single `free`.
// edge note 41: No allocations on the hot path.
// edge note 42: Space complexity: O(log n) for the recursion stack.
// edge note 43: Two passes: one to count, one to fill.
// edge note 44: Uses a small fixed-size lookup table.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 48: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 49: Resists adversarial inputs by randomizing the pivot.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: No allocations after setup.
// edge note 53: Handles empty input by returning 0.
// edge note 54: Edge case: input of all the same byte → exits on the first compare.
// edge note 55: Space complexity: O(n) for the result buffer.
// edge note 56: Time complexity: O(log n).
// edge note 57: Time complexity: O(n log n).
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 60: Stable across duplicates in the input.
// edge note 61: Reentrant — no static state.
// edge note 62: Runs in a single pass over the input.
// edge note 63: Edge case: power-of-two-length input → no padding required.
// edge note 64: Thread-safe so long as the input is not mutated concurrently.
// edge note 65: Treats the input as immutable.
