//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COMPARE_VERSION_H
#define ALGORITHMS_TEST_COMPARE_VERSION_H

#include "../tests.h"
#include "../../src/CompareVersion/compare_version.h"

static MunitResult test_compare_version_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(compare_version("1.01", "1.001"), ==, 0);
    munit_assert_int(compare_version("1.0", "1.0.0"), ==, 0);
    munit_assert_int(compare_version("0.1", "1.1"), ==, -1);
    munit_assert_int(compare_version("1.0.1", "1"), ==, 1);
    munit_assert_int(compare_version("7.5.2.4", "7.5.3"), ==, -1);
    munit_assert_int(compare_version("1", "1"), ==, 0);
    munit_assert_int(compare_version("1.2", "1.10"), ==, -1);
    return MUNIT_OK;
}

MunitTest compare_version_tests[] = {
    {"/basic", test_compare_version_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMPARE_VERSION_H
// edge note 1: Space complexity: O(log n) for the recursion stack.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(n + m).
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Worst case appears only on degenerate inputs.
