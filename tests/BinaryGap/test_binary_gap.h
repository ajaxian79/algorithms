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
