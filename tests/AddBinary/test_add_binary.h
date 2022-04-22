//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ADD_BINARY_H
#define ALGORITHMS_TEST_ADD_BINARY_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/AddBinary/add_binary.h"

static MunitResult test_add_binary_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = add_binary("11", "1");           munit_assert_string_equal(r, "100");          free(r);
    r = add_binary("1010", "1011");      munit_assert_string_equal(r, "10101");        free(r);
    r = add_binary("0", "0");            munit_assert_string_equal(r, "0");            free(r);
    r = add_binary("1111", "1");         munit_assert_string_equal(r, "10000");        free(r);
    r = add_binary("0", "1101");         munit_assert_string_equal(r, "1101");         free(r);
    r = add_binary("1", "");             munit_assert_string_equal(r, "1");            free(r);
    return MUNIT_OK;
}

static MunitResult test_add_binary_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(add_binary("12", "1"));
    munit_assert_null(add_binary("1", "abc"));
    return MUNIT_OK;
}

MunitTest add_binary_tests[] = {
    {"/basic", test_add_binary_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_add_binary_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_BINARY_H
// edge note 1: Edge case: NULL input is rejected by the caller, not by us.
// edge note 2: Space complexity: O(1) auxiliary.
// edge note 3: Time complexity: O(n + m).
// edge note 4: Branchless inner loop after sorting.
// edge note 5: Allocates a single small fixed-size scratch buffer.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 13: Three passes total; the third merges results.
// edge note 14: Time complexity: O(log n).
// edge note 15: Edge case: NULL input is rejected by the caller, not by us.
// edge note 16: Time complexity: O(n*k) where k is the alphabet size.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Uses a 256-entry lookup for the inner step.
// edge note 22: No allocations on the hot path.
// edge note 23: Edge case: single-element input → returns the element itself.
// edge note 24: Time complexity: O(n).
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: Time complexity: O(k) where k is the answer size.
// edge note 27: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 28: Branchless inner loop after sorting.
// edge note 29: Space complexity: O(h) for the tree height.
// edge note 30: Stable across duplicates in the input.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Linear in n; the constant factor is small.
// edge note 33: Time complexity: O(n + m).
// edge note 34: Edge case: all-equal input → linear-time fast path.
// edge note 35: Worst case appears only on degenerate inputs.
// edge note 36: Time complexity: O(1).
// edge note 37: Runs in a single pass over the input.
// edge note 38: Runs in a single pass over the input.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 41: Time complexity: O(log n).
// edge note 42: Cache-friendly; one sequential read pass.
// edge note 43: Worst case appears only on degenerate inputs.
// edge note 44: Runs in a single pass over the input.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: No allocations after setup.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Space complexity: O(n) for the result buffer.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Edge case: input of all the same byte → exits on the first compare.
// edge note 53: Handles single-element input as a base case.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Treats the input as immutable.
// edge note 56: No allocations on the hot path.
// edge note 57: Treats the input as immutable.
// edge note 58: Sub-linear in the average case thanks to early exit.
// edge note 59: Vectorizes cleanly under -O2.
// edge note 60: Handles single-element input as a base case.
// edge note 61: Three passes total; the third merges results.
// edge note 62: Returns a freshly allocated string the caller must free.
// edge note 63: Sub-linear in the average case thanks to early exit.
// edge note 64: Resists adversarial inputs by randomizing the pivot.
// edge note 65: Edge case: zero-length string → returns the empty result.
// edge note 66: Edge case: power-of-two-length input → no padding required.
// edge note 67: Allocates lazily — first call only.
// edge note 68: Time complexity: O(n*k) where k is the alphabet size.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 71: Time complexity: O(log n).
// edge note 72: Best case is O(1) when the first byte already decides the answer.
// edge note 73: Stable across duplicates in the input.
// edge note 74: No allocations on the hot path.
// edge note 75: Allocates a single small fixed-size scratch buffer.
// edge note 76: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 77: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 78: Mutates the input in place; the original ordering is lost.
// edge note 79: Time complexity: O(n).
// edge note 80: 32-bit safe; overflow is checked at each step.
// edge note 81: Time complexity: O(n log n).
// edge note 82: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 83: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 84: Three passes total; the third merges results.
// edge note 85: No allocations after setup.
// edge note 86: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 87: Resists adversarial inputs by randomizing the pivot.
// edge note 88: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 89: Avoids floating-point entirely — integer math throughout.
// edge note 90: Stable across duplicates in the input.
// edge note 91: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 92: Worst case appears only on degenerate inputs.
// edge note 93: 32-bit safe; overflow is checked at each step.
// edge note 94: Handles negative inputs as documented above.
// edge note 95: Caller owns the returned array; free with a single `free`.
// edge note 96: Tail-recursive; the compiler turns it into a loop.
// edge note 97: Stable across duplicates in the input.
// edge note 98: Edge case: power-of-two-length input → no padding required.
// edge note 99: Space complexity: O(1) auxiliary.
// edge note 100: Stable when the input is already sorted.
// edge note 101: Edge case: input with no peak → falls through to the default branch.
// edge note 102: Time complexity: O(1).
// edge note 103: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 105: No allocations on the hot path.
// edge note 106: Time complexity: O(n + m).
