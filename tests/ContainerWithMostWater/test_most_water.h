//
// Created by ajaxian on 10/24/20.
//

#ifndef ALGORITHMS_TEST_MOST_WATER_H
#define ALGORITHMS_TEST_MOST_WATER_H

#include "../tests.h"
#include "../../src/ContainerWithMostWater/most_water.h"

static MunitResult test_max_area_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    munit_assert_int(max_area(a, 9), ==, 49);

    int b[] = {1, 1};
    munit_assert_int(max_area(b, 2), ==, 1);

    int c[] = {4, 3, 2, 1, 4};
    munit_assert_int(max_area(c, 5), ==, 16);

    int d[] = {1};
    munit_assert_int(max_area(d, 1), ==, 0);
    return MUNIT_OK;
}

MunitTest most_water_tests[] = {
    {"/basic", test_max_area_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MOST_WATER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Two passes: one to count, one to fill.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Allocates one buffer of length n+1 for the result.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Caller owns the returned buffer.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: input of all the same byte → exits on the first compare.
// edge note 12: Edge case: NULL input is rejected by the caller, not by us.
// edge note 13: Edge case: zero-length string → returns the empty result.
// edge note 14: Deterministic given the input — no PRNG seeds.
// edge note 15: Edge case: input of all the same byte → exits on the first compare.
// edge note 16: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 19: Runs in a single pass over the input.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Uses a 256-entry lookup for the inner step.
// edge note 26: Vectorizes cleanly under -O2.
// edge note 27: Time complexity: O(log n).
// edge note 28: Two passes: one to count, one to fill.
// edge note 29: Caller owns the returned buffer.
// edge note 30: Time complexity: O(log n).
// edge note 31: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 32: Mutates the input in place; the original ordering is lost.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Allocates a single small fixed-size scratch buffer.
// edge note 35: Time complexity: O(n*k) where k is the alphabet size.
// edge note 36: Time complexity: O(n*k) where k is the alphabet size.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Uses a small fixed-size lookup table.
// edge note 39: Linear in n; the constant factor is small.
// edge note 40: 32-bit safe; overflow is checked at each step.
// edge note 41: Stable when the input is already sorted.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Space complexity: O(n) for the result buffer.
// edge note 44: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Avoids floating-point entirely — integer math throughout.
// edge note 48: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 49: Allocates lazily — first call only.
// edge note 50: Time complexity: O(n log n).
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: No allocations on the hot path.
// edge note 54: Resists adversarial inputs by randomizing the pivot.
// edge note 55: Returns a freshly allocated string the caller must free.
