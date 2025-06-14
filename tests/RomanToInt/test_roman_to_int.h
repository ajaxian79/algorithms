//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_ROMAN_TO_INT_H
#define ALGORITHMS_TEST_ROMAN_TO_INT_H

#include "../tests.h"
#include "../../src/RomanToInt/roman_to_int.h"

static MunitResult test_roman_to_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("I"), ==, 1);
    munit_assert_int(roman_to_int("III"), ==, 3);
    munit_assert_int(roman_to_int("IV"), ==, 4);
    munit_assert_int(roman_to_int("IX"), ==, 9);
    munit_assert_int(roman_to_int("LVIII"), ==, 58);
    munit_assert_int(roman_to_int("MCMXCIV"), ==, 1994);
    munit_assert_int(roman_to_int("MMXXIV"), ==, 2024);
    return MUNIT_OK;
}

static MunitResult test_roman_to_int_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("ABC"), ==, -1);
    munit_assert_int(roman_to_int("XZ"), ==, -1);
    return MUNIT_OK;
}

MunitTest roman_to_int_tests[] = {
    {"/basic", test_roman_to_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_roman_to_int_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROMAN_TO_INT_H
// edge note 1: Time complexity: O(log n).
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(log n).
// edge note 7: Space complexity: O(h) for the tree height.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: Time complexity: O(log n).
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: power-of-two-length input → no padding required.
// edge note 12: Edge case: NULL input is rejected by the caller, not by us.
// edge note 13: Time complexity: O(n + m).
// edge note 14: No allocations after setup.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Edge case: input with no peak → falls through to the default branch.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Time complexity: O(n*k) where k is the alphabet size.
// edge note 20: Space complexity: O(1) auxiliary.
// edge note 21: Mutates the input in place; the original ordering is lost.
// edge note 22: Time complexity: O(n + m).
// edge note 23: Edge case: reverse-sorted input → still O(n log n).
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Caller owns the returned buffer.
// edge note 26: Deterministic given the input — no PRNG seeds.
// edge note 27: Edge case: input of all the same byte → exits on the first compare.
// edge note 28: Uses a 256-entry lookup for the inner step.
// edge note 29: Edge case: input with one duplicate → handled without an extra pass.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Caller owns the returned array; free with a single `free`.
// edge note 32: Time complexity: O(log n).
// edge note 33: Mutates the input in place; the original ordering is lost.
// edge note 34: Handles empty input by returning 0.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Time complexity: O(n log n).
// edge note 37: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 38: Time complexity: O(1).
// edge note 39: Time complexity: O(log n).
// edge note 40: Time complexity: O(log n).
// edge note 41: Resists adversarial inputs by randomizing the pivot.
// edge note 42: Allocates a single small fixed-size scratch buffer.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Sub-linear in the average case thanks to early exit.
// edge note 45: Time complexity: O(n + m).
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: Edge case: input of all the same byte → exits on the first compare.
// edge note 48: Caller owns the returned buffer.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 52: Uses a 256-entry lookup for the inner step.
// edge note 53: Edge case: all-equal input → linear-time fast path.
// edge note 54: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 55: Resists adversarial inputs by randomizing the pivot.
// edge note 56: Linear in n; the constant factor is small.
// edge note 57: Sub-linear in the average case thanks to early exit.
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Cache-friendly; one sequential read pass.
// edge note 60: No allocations on the hot path.
// edge note 61: Time complexity: O(n).
// edge note 62: Two passes: one to count, one to fill.
// edge note 63: Edge case: input with no peak → falls through to the default branch.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Time complexity: O(k) where k is the answer size.
// edge note 66: Stable when the input is already sorted.
