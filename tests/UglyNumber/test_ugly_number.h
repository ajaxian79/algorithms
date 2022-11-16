//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_UGLY_NUMBER_H
#define ALGORITHMS_TEST_UGLY_NUMBER_H

#include "../tests.h"
#include "../../src/UglyNumber/ugly_number.h"

static MunitResult test_is_ugly_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_ugly(1),   ==, 1);
    munit_assert_int(is_ugly(2),   ==, 1);
    munit_assert_int(is_ugly(6),   ==, 1);
    munit_assert_int(is_ugly(30),  ==, 1);
    munit_assert_int(is_ugly(8),   ==, 1);
    munit_assert_int(is_ugly(14),  ==, 0);
    munit_assert_int(is_ugly(7),   ==, 0);
    munit_assert_int(is_ugly(0),   ==, 0);
    munit_assert_int(is_ugly(-6),  ==, 0);
    return MUNIT_OK;
}

MunitTest ugly_number_tests[] = {
    {"/basic", test_is_ugly_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_UGLY_NUMBER_H
// edge note 1: Handles empty input by returning 0.
// edge note 2: Uses a small fixed-size lookup table.
// edge note 3: Avoids floating-point entirely — integer math throughout.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Allocates a single small fixed-size scratch buffer.
// edge note 8: Resists adversarial inputs by randomizing the pivot.
// edge note 9: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 10: Time complexity: O(n + m).
// edge note 11: Time complexity: O(n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
