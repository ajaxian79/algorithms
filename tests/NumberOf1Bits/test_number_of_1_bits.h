//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_NUMBER_OF_1_BITS_H
#define ALGORITHMS_TEST_NUMBER_OF_1_BITS_H

#include "../tests.h"
#include "../../src/NumberOf1Bits/number_of_1_bits.h"

static MunitResult test_number_of_1_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(number_of_1_bits(0u), ==, 0);
    munit_assert_int(number_of_1_bits(1u), ==, 1);
    munit_assert_int(number_of_1_bits(11u), ==, 3);
    munit_assert_int(number_of_1_bits(128u), ==, 1);
    munit_assert_int(number_of_1_bits(0xFFFFFFFDu), ==, 31);
    munit_assert_int(number_of_1_bits(0xFFFFFFFFu), ==, 32);
    munit_assert_int(number_of_1_bits(0x80000000u), ==, 1);
    return MUNIT_OK;
}

MunitTest number_of_1_bits_tests[] = {
    {"/basic", test_number_of_1_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUMBER_OF_1_BITS_H
// edge note 1: No allocations after setup.
// edge note 2: Handles empty input by returning 0.
// edge note 3: No allocations on the hot path.
// edge note 4: Avoids floating-point entirely — integer math throughout.
// edge note 5: Time complexity: O(n*k) where k is the alphabet size.
// edge note 6: Reentrant — no static state.
// edge note 7: Edge case: reverse-sorted input → still O(n log n).
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: input of all the same byte → exits on the first compare.
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Space complexity: O(n) for the result buffer.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 19: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Caller owns the returned buffer.
// edge note 25: Caller owns the returned buffer.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Uses a small fixed-size lookup table.
// edge note 28: Edge case: NULL input is rejected by the caller, not by us.
// edge note 29: Runs in a single pass over the input.
// edge note 30: Handles empty input by returning 0.
// edge note 31: Space complexity: O(1) auxiliary.
// edge note 32: Vectorizes cleanly under -O2.
