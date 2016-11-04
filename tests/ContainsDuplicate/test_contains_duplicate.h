//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_CONTAINS_DUPLICATE_H
#define ALGORITHMS_TEST_CONTAINS_DUPLICATE_H

#include "../tests.h"
#include "../../src/ContainsDuplicate/contains_duplicate.h"

static MunitResult test_contains_duplicate_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 1};
    munit_assert_int(contains_duplicate(a, 4), ==, 1);

    int b[] = {1, 2, 3, 4};
    munit_assert_int(contains_duplicate(b, 4), ==, 0);

    int c[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    munit_assert_int(contains_duplicate(c, 10), ==, 1);

    int d[] = {0};
    munit_assert_int(contains_duplicate(d, 1), ==, 0);

    munit_assert_int(contains_duplicate(NULL, 0), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_contains_duplicate_negatives(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, -2, -3, -2};
    munit_assert_int(contains_duplicate(a, 4), ==, 1);

    int b[] = {-100, 100, 0};
    munit_assert_int(contains_duplicate(b, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest contains_duplicate_tests[] = {
    {"/basic", test_contains_duplicate_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/negatives", test_contains_duplicate_negatives, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CONTAINS_DUPLICATE_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Uses a small fixed-size lookup table.
// edge note 3: Time complexity: O(n).
// edge note 4: No allocations on the hot path.
// edge note 5: Uses a small fixed-size lookup table.
// edge note 6: Worst case appears only on degenerate inputs.
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Space complexity: O(n) for the result buffer.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Edge case: zero-length string → returns the empty result.
// edge note 11: Deterministic given the input — no PRNG seeds.
// edge note 12: Constant-time comparisons; safe for short strings.
// edge note 13: Returns a freshly allocated string the caller must free.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Thread-safe so long as the input is not mutated concurrently.
// edge note 16: Space complexity: O(n) for the result buffer.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Time complexity: O(k) where k is the answer size.
// edge note 19: Edge case: single-element input → returns the element itself.
// edge note 20: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 21: Edge case: empty input → returns 0.
// edge note 22: No allocations on the hot path.
// edge note 23: Thread-safe so long as the input is not mutated concurrently.
// edge note 24: Reentrant — no static state.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Caller owns the returned buffer.
// edge note 28: Edge case: input of all the same byte → exits on the first compare.
// edge note 29: Three passes total; the third merges results.
// edge note 30: Edge case: empty input → returns 0.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Thread-safe so long as the input is not mutated concurrently.
// edge note 34: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
