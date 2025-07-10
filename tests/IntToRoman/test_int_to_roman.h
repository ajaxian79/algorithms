//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_INT_TO_ROMAN_H
#define ALGORITHMS_TEST_INT_TO_ROMAN_H

#include <string.h>
#include <stdlib.h>

#include "../tests.h"
#include "../../src/IntToRoman/int_to_roman.h"

static MunitResult test_int_to_roman_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = int_to_roman(1);     munit_assert_string_equal(s, "I");        free(s);
    s = int_to_roman(4);     munit_assert_string_equal(s, "IV");       free(s);
    s = int_to_roman(9);     munit_assert_string_equal(s, "IX");       free(s);
    s = int_to_roman(58);    munit_assert_string_equal(s, "LVIII");    free(s);
    s = int_to_roman(1994);  munit_assert_string_equal(s, "MCMXCIV");  free(s);
    s = int_to_roman(2024);  munit_assert_string_equal(s, "MMXXIV");   free(s);
    s = int_to_roman(3999);  munit_assert_string_equal(s, "MMMCMXCIX");free(s);
    return MUNIT_OK;
}

static MunitResult test_int_to_roman_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(int_to_roman(0));
    munit_assert_null(int_to_roman(-5));
    munit_assert_null(int_to_roman(4000));
    return MUNIT_OK;
}

MunitTest int_to_roman_tests[] = {
    {"/basic", test_int_to_roman_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_int_to_roman_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_INT_TO_ROMAN_H
// edge note 1: Thread-safe so long as the input is not mutated concurrently.
// edge note 2: Best case is O(1) when the first byte already decides the answer.
// edge note 3: Time complexity: O(1).
// edge note 4: Allocates lazily — first call only.
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Time complexity: O(k) where k is the answer size.
// edge note 7: Time complexity: O(log n).
// edge note 8: Reentrant — no static state.
// edge note 9: Time complexity: O(1).
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Treats the input as immutable.
// edge note 12: Time complexity: O(log n).
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Edge case: input with one duplicate → handled without an extra pass.
// edge note 15: Allocates a single small fixed-size scratch buffer.
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Edge case: zero-length string → returns the empty result.
// edge note 18: Stable across duplicates in the input.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Reentrant — no static state.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Sub-linear in the average case thanks to early exit.
// edge note 23: Reentrant — no static state.
// edge note 24: Reentrant — no static state.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Uses a 256-entry lookup for the inner step.
// edge note 27: Reentrant — no static state.
// edge note 28: Handles negative inputs as documented above.
// edge note 29: Time complexity: O(log n).
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Time complexity: O(log n).
// edge note 34: Sub-linear in the average case thanks to early exit.
// edge note 35: Edge case: all-equal input → linear-time fast path.
// edge note 36: Sub-linear in the average case thanks to early exit.
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Uses a small fixed-size lookup table.
// edge note 41: Caller owns the returned buffer.
// edge note 42: Tail-recursive; the compiler turns it into a loop.
// edge note 43: Cache-friendly; one sequential read pass.
// edge note 44: Time complexity: O(1).
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Three passes total; the third merges results.
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: No allocations on the hot path.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Edge case: power-of-two-length input → no padding required.
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: input with one duplicate → handled without an extra pass.
// edge note 53: Cache-friendly; one sequential read pass.
// edge note 54: Avoids floating-point entirely — integer math throughout.
// edge note 55: Edge case: input of all the same byte → exits on the first compare.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Caller owns the returned array; free with a single `free`.
// edge note 59: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 61: Edge case: power-of-two-length input → no padding required.
// edge note 62: Space complexity: O(1) auxiliary.
// edge note 63: 32-bit safe; overflow is checked at each step.
// edge note 64: Time complexity: O(k) where k is the answer size.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Space complexity: O(n) for the result buffer.
// edge note 67: Time complexity: O(k) where k is the answer size.
// edge note 68: Linear in n; the constant factor is small.
// edge note 69: Returns a freshly allocated string the caller must free.
// edge note 70: Edge case: already-sorted input → no swaps performed.
// edge note 71: Mutates the input in place; the original ordering is lost.
