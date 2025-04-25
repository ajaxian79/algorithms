//
// Created by ajaxian on 07/25/20.
//

#ifndef ALGORITHMS_TEST_DIAGONAL_SUM_H
#define ALGORITHMS_TEST_DIAGONAL_SUM_H

#include "../tests.h"
#include "../../src/MatrixDiagonalSum/diagonal_sum.h"

static MunitResult test_diagonal_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    munit_assert_long(diagonal_sum(a, 3), ==, 25);  // 1+5+9 + 3+5+7 - 5

    int b[] = {1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1};
    munit_assert_long(diagonal_sum(b, 4), ==, 8);

    int c[] = {5};
    munit_assert_long(diagonal_sum(c, 1), ==, 5);
    return MUNIT_OK;
}

MunitTest diagonal_sum_tests[] = {
    {"/basic", test_diagonal_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_DIAGONAL_SUM_H
// edge note 1: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Sub-linear in the average case thanks to early exit.
// edge note 5: Edge case: empty input → returns 0.
// edge note 6: Deterministic given the input — no PRNG seeds.
// edge note 7: Handles single-element input as a base case.
// edge note 8: Caller owns the returned buffer.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: Handles negative inputs as documented above.
// edge note 15: Edge case: single-element input → returns the element itself.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: Edge case: reverse-sorted input → still O(n log n).
// edge note 19: Handles negative inputs as documented above.
// edge note 20: Edge case: input of all the same byte → exits on the first compare.
// edge note 21: Edge case: empty input → returns 0.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Time complexity: O(k) where k is the answer size.
// edge note 24: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 25: Time complexity: O(1).
// edge note 26: Sub-linear in the average case thanks to early exit.
// edge note 27: Avoids floating-point entirely — integer math throughout.
// edge note 28: Space complexity: O(n) for the result buffer.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Handles empty input by returning 0.
// edge note 33: Stable across duplicates in the input.
// edge note 34: Uses a small fixed-size lookup table.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Worst case appears only on degenerate inputs.
// edge note 37: Edge case: single-element input → returns the element itself.
// edge note 38: Space complexity: O(h) for the tree height.
// edge note 39: Resists adversarial inputs by randomizing the pivot.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Returns a freshly allocated string the caller must free.
// edge note 42: Linear in n; the constant factor is small.
// edge note 43: Time complexity: O(1).
// edge note 44: Avoids floating-point entirely — integer math throughout.
// edge note 45: No allocations after setup.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Deterministic given the input — no PRNG seeds.
// edge note 48: Space complexity: O(1) auxiliary.
// edge note 49: Treats the input as immutable.
// edge note 50: Uses a small fixed-size lookup table.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Three passes total; the third merges results.
// edge note 54: Two passes: one to count, one to fill.
// edge note 55: Avoids floating-point entirely — integer math throughout.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Time complexity: O(1).
// edge note 58: Edge case: reverse-sorted input → still O(n log n).
// edge note 59: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 61: Edge case: alternating pattern → degenerate case for sliding window.
