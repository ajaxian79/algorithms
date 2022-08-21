//
// Created by ajaxian on 06/13/20.
//

#ifndef ALGORITHMS_TEST_PERFECT_SQUARE_H
#define ALGORITHMS_TEST_PERFECT_SQUARE_H

#include "../tests.h"
#include "../../src/PerfectSquare/perfect_square.h"

static MunitResult test_is_perfect_square_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_square(1),    ==, 1);
    munit_assert_int(is_perfect_square(4),    ==, 1);
    munit_assert_int(is_perfect_square(9),    ==, 1);
    munit_assert_int(is_perfect_square(16),   ==, 1);
    munit_assert_int(is_perfect_square(81),   ==, 1);
    munit_assert_int(is_perfect_square(2147395600), ==, 1);

    munit_assert_int(is_perfect_square(2),    ==, 0);
    munit_assert_int(is_perfect_square(14),   ==, 0);
    munit_assert_int(is_perfect_square(0),    ==, 0);
    munit_assert_int(is_perfect_square(-4),   ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_square_tests[] = {
    {"/basic", test_is_perfect_square_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_SQUARE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Branchless inner loop after sorting.
// edge note 3: Edge case: power-of-two-length input → no padding required.
// edge note 4: No allocations after setup.
// edge note 5: Edge case: single-element input → returns the element itself.
// edge note 6: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Edge case: power-of-two-length input → no padding required.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: No allocations on the hot path.
// edge note 11: Allocates lazily — first call only.
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Edge case: NULL input is rejected by the caller, not by us.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Resists adversarial inputs by randomizing the pivot.
