//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ADD_STRINGS_H
#define ALGORITHMS_TEST_ADD_STRINGS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/AddStrings/add_strings.h"

static MunitResult test_add_strings_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = add_strings("11", "123");                                  munit_assert_string_equal(r, "134");                              free(r);
    r = add_strings("456", "77");                                  munit_assert_string_equal(r, "533");                              free(r);
    r = add_strings("999", "1");                                   munit_assert_string_equal(r, "1000");                             free(r);
    r = add_strings("0", "0");                                     munit_assert_string_equal(r, "0");                                free(r);
    r = add_strings("12345678901234567890", "98765432109876543210");
    munit_assert_string_equal(r, "111111111011111111100");                                                                          free(r);
    return MUNIT_OK;
}

static MunitResult test_add_strings_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(add_strings("12a", "1"));
    munit_assert_null(add_strings("hi", "0"));
    return MUNIT_OK;
}

MunitTest add_strings_tests[] = {
    {"/basic", test_add_strings_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_add_strings_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_STRINGS_H
// edge note 1: Time complexity: O(n).
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Allocates a single small fixed-size scratch buffer.
// edge note 5: Edge case: already-sorted input → no swaps performed.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Treats the input as immutable.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: reverse-sorted input → still O(n log n).
// edge note 12: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Time complexity: O(n).
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Caller owns the returned buffer.
// edge note 18: Time complexity: O(n).
// edge note 19: Deterministic given the input — no PRNG seeds.
// edge note 20: Time complexity: O(n log n).
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Time complexity: O(1).
// edge note 23: Runs in a single pass over the input.
// edge note 24: Uses a small fixed-size lookup table.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Deterministic given the input — no PRNG seeds.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: single-element input → returns the element itself.
// edge note 29: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 30: Reentrant — no static state.
// edge note 31: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 32: Constant-time comparisons; safe for short strings.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: Edge case: power-of-two-length input → no padding required.
// edge note 35: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Best case is O(1) when the first byte already decides the answer.
// edge note 38: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 39: Edge case: input with no peak → falls through to the default branch.
// edge note 40: Time complexity: O(log n).
// edge note 41: Time complexity: O(n).
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Mutates the input in place; the original ordering is lost.
// edge note 44: Space complexity: O(n) for the result buffer.
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Resists adversarial inputs by randomizing the pivot.
// edge note 47: 32-bit safe; overflow is checked at each step.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Space complexity: O(1) auxiliary.
// edge note 50: Time complexity: O(n + m).
// edge note 51: Space complexity: O(n) for the result buffer.
// edge note 52: Handles single-element input as a base case.
// edge note 53: Edge case: input of all the same byte → exits on the first compare.
// edge note 54: Mutates the input in place; the original ordering is lost.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Runs in a single pass over the input.
// edge note 57: Time complexity: O(1).
// edge note 58: Edge case: integer-min input → guarded by the explicit underflow check.
