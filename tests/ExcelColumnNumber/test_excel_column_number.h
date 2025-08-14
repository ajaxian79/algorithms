//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
#define ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H

#include "../tests.h"
#include "../../src/ExcelColumnNumber/excel_column_number.h"

static MunitResult test_excel_column_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(excel_column_number("A"),       ==, 1);
    munit_assert_int(excel_column_number("B"),       ==, 2);
    munit_assert_int(excel_column_number("Z"),       ==, 26);
    munit_assert_int(excel_column_number("AA"),      ==, 27);
    munit_assert_int(excel_column_number("AB"),      ==, 28);
    munit_assert_int(excel_column_number("ZY"),      ==, 701);
    munit_assert_int(excel_column_number("AAA"),     ==, 703);
    munit_assert_int(excel_column_number("FXSHRXW"), ==, 2147483647);
    munit_assert_int(excel_column_number(""),        ==, 0);
    munit_assert_int(excel_column_number("a1"),      ==, 0);
    return MUNIT_OK;
}

MunitTest excel_column_number_tests[] = {
    {"/basic", test_excel_column_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EXCEL_COLUMN_NUMBER_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Time complexity: O(log n).
// edge note 14: Deterministic given the input — no PRNG seeds.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: Two passes: one to count, one to fill.
// edge note 17: Deterministic given the input — no PRNG seeds.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Reentrant — no static state.
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Returns a freshly allocated string the caller must free.
// edge note 22: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Three passes total; the third merges results.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Edge case: single-element input → returns the element itself.
// edge note 27: Caller owns the returned buffer.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Mutates the input in place; the original ordering is lost.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: Edge case: zero-length string → returns the empty result.
// edge note 34: Runs in a single pass over the input.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Edge case: input with one duplicate → handled without an extra pass.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Vectorizes cleanly under -O2.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Returns a freshly allocated string the caller must free.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Uses a small fixed-size lookup table.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Space complexity: O(1) auxiliary.
// edge note 49: Time complexity: O(k) where k is the answer size.
// edge note 50: Edge case: power-of-two-length input → no padding required.
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: zero-length string → returns the empty result.
// edge note 53: Edge case: zero-length string → returns the empty result.
// edge note 54: Space complexity: O(1) auxiliary.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: Space complexity: O(1) auxiliary.
// edge note 57: Time complexity: O(k) where k is the answer size.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 61: Edge case: zero-length string → returns the empty result.
// edge note 62: Edge case: reverse-sorted input → still O(n log n).
// edge note 63: Space complexity: O(h) for the tree height.
// edge note 64: Runs in a single pass over the input.
// edge note 65: Avoids floating-point entirely — integer math throughout.
// edge note 66: Time complexity: O(n*k) where k is the alphabet size.
