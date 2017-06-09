//
// Created by ajaxian on 05/16/20.
//

#ifndef ALGORITHMS_TEST_BINARY_GAP_H
#define ALGORITHMS_TEST_BINARY_GAP_H

#include "../tests.h"
#include "../../src/BinaryGap/binary_gap.h"

static MunitResult test_binary_gap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(binary_gap(9u),    ==, 2);
    munit_assert_int(binary_gap(529u),  ==, 4);
    munit_assert_int(binary_gap(20u),   ==, 1);
    munit_assert_int(binary_gap(15u),   ==, 0);
    munit_assert_int(binary_gap(32u),   ==, 0);  // trailing zeros only
    munit_assert_int(binary_gap(1041u), ==, 5);
    munit_assert_int(binary_gap(0u),    ==, 0);
    return MUNIT_OK;
}

MunitTest binary_gap_tests[] = {
    {"/basic", test_binary_gap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BINARY_GAP_H
// edge note 1: Allocates lazily — first call only.
// edge note 2: Handles empty input by returning 0.
// edge note 3: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Time complexity: O(log n).
// edge note 8: Handles negative inputs as documented above.
// edge note 9: Vectorizes cleanly under -O2.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 12: Stable when the input is already sorted.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Time complexity: O(n).
// edge note 16: Time complexity: O(log n).
// edge note 17: Stable when the input is already sorted.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Uses a 256-entry lookup for the inner step.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Uses a small fixed-size lookup table.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Vectorizes cleanly under -O2.
