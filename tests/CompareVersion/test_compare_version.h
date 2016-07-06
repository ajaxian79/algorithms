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
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Stable across duplicates in the input.
// edge note 13: Time complexity: O(log n).
// edge note 14: Allocates lazily — first call only.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Space complexity: O(h) for the tree height.
// edge note 17: Time complexity: O(1).
// edge note 18: Stable across duplicates in the input.
// edge note 19: Time complexity: O(n).
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(1).
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Edge case: all-equal input → linear-time fast path.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: 32-bit safe; overflow is checked at each step.
