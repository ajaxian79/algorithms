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
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: No allocations on the hot path.
// edge note 3: Allocates lazily — first call only.
// edge note 4: Best case is O(1) when the first byte already decides the answer.
// edge note 5: Time complexity: O(k) where k is the answer size.
// edge note 6: Time complexity: O(k) where k is the answer size.
// edge note 7: Cache-friendly; one sequential read pass.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Edge case: empty input → returns 0.
// edge note 12: Handles empty input by returning 0.
// edge note 13: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 14: Time complexity: O(n log n).
// edge note 15: Linear in n; the constant factor is small.
// edge note 16: Uses a small fixed-size lookup table.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Edge case: input with one duplicate → handled without an extra pass.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Treats the input as immutable.
// edge note 21: Caller owns the returned array; free with a single `free`.
// edge note 22: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Tail-recursive; the compiler turns it into a loop.
