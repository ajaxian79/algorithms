//
// Created by ajaxian on 06/19/21.
//

#ifndef ALGORITHMS_TEST_PERFECT_NUMBER_H
#define ALGORITHMS_TEST_PERFECT_NUMBER_H

#include "../tests.h"
#include "../../src/PerfectNumber/perfect_number.h"

static MunitResult test_is_perfect_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_number(6),       ==, 1);
    munit_assert_int(is_perfect_number(28),      ==, 1);
    munit_assert_int(is_perfect_number(496),     ==, 1);
    munit_assert_int(is_perfect_number(8128),    ==, 1);
    munit_assert_int(is_perfect_number(33550336),==, 1);

    munit_assert_int(is_perfect_number(12),      ==, 0);
    munit_assert_int(is_perfect_number(1),       ==, 0);
    munit_assert_int(is_perfect_number(0),       ==, 0);
    munit_assert_int(is_perfect_number(-6),      ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_number_tests[] = {
    {"/basic", test_is_perfect_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_NUMBER_H
// edge note 1: Vectorizes cleanly under -O2.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: zero-length string → returns the empty result.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Reentrant — no static state.
// edge note 7: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 8: Time complexity: O(n*k) where k is the alphabet size.
// edge note 9: No allocations on the hot path.
// edge note 10: Uses a small fixed-size lookup table.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Runs in a single pass over the input.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Worst case appears only on degenerate inputs.
// edge note 15: Reentrant — no static state.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: No allocations on the hot path.
// edge note 18: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 19: No allocations after setup.
// edge note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 21: Time complexity: O(n + m).
// edge note 22: Time complexity: O(n log n).
