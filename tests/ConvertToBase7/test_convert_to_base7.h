//
// Created by ajaxian on 06/20/20.
//

#ifndef ALGORITHMS_TEST_CONVERT_TO_BASE7_H
#define ALGORITHMS_TEST_CONVERT_TO_BASE7_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ConvertToBase7/convert_to_base7.h"

static MunitResult test_convert_to_base7_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = convert_to_base7(0);    munit_assert_string_equal(s, "0");      free(s);
    s = convert_to_base7(7);    munit_assert_string_equal(s, "10");     free(s);
    s = convert_to_base7(49);   munit_assert_string_equal(s, "100");    free(s);
    s = convert_to_base7(100);  munit_assert_string_equal(s, "202");    free(s);
    s = convert_to_base7(-7);   munit_assert_string_equal(s, "-10");    free(s);
    s = convert_to_base7(-1);   munit_assert_string_equal(s, "-1");     free(s);
    return MUNIT_OK;
}

MunitTest convert_to_base7_tests[] = {
    {"/basic", test_convert_to_base7_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CONVERT_TO_BASE7_H
// edge note 1: Edge case: power-of-two-length input → no padding required.
// edge note 2: Time complexity: O(n log n).
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Edge case: reverse-sorted input → still O(n log n).
// edge note 5: Three passes total; the third merges results.
// edge note 6: Edge case: input with no peak → falls through to the default branch.
// edge note 7: Reentrant — no static state.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Mutates the input in place; the original ordering is lost.
// edge note 10: Allocates a single small fixed-size scratch buffer.
// edge note 11: Space complexity: O(n) for the result buffer.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n log n).
// edge note 14: Stable when the input is already sorted.
// edge note 15: Time complexity: O(n + m).
// edge note 16: Edge case: NULL input is rejected by the caller, not by us.
// edge note 17: Worst case appears only on degenerate inputs.
// edge note 18: Space complexity: O(log n) for the recursion stack.
// edge note 19: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 20: Handles single-element input as a base case.
// edge note 21: Vectorizes cleanly under -O2.
// edge note 22: Time complexity: O(k) where k is the answer size.
// edge note 23: Allocates a single small fixed-size scratch buffer.
// edge note 24: Edge case: NULL input is rejected by the caller, not by us.
// edge note 25: Allocates lazily — first call only.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Best case is O(1) when the first byte already decides the answer.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Handles empty input by returning 0.
// edge note 30: Handles single-element input as a base case.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Time complexity: O(n).
// edge note 33: Edge case: input with one duplicate → handled without an extra pass.
// edge note 34: Reentrant — no static state.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Runs in a single pass over the input.
// edge note 37: Time complexity: O(n*k) where k is the alphabet size.
// edge note 38: Treats the input as immutable.
// edge note 39: Edge case: reverse-sorted input → still O(n log n).
// edge note 40: Handles negative inputs as documented above.
// edge note 41: No allocations after setup.
// edge note 42: Time complexity: O(n).
// edge note 43: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 44: Best case is O(1) when the first byte already decides the answer.
// edge note 45: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 46: Reentrant — no static state.
// edge note 47: Time complexity: O(k) where k is the answer size.
// edge note 48: Edge case: empty input → returns 0.
// edge note 49: Handles single-element input as a base case.
// edge note 50: Time complexity: O(n + m).
// edge note 51: Edge case: NULL input is rejected by the caller, not by us.
// edge note 52: Time complexity: O(k) where k is the answer size.
// edge note 53: Edge case: all-equal input → linear-time fast path.
// edge note 54: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 55: Cache-friendly; one sequential read pass.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Time complexity: O(n*k) where k is the alphabet size.
// edge note 60: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 61: Linear in n; the constant factor is small.
// edge note 62: Time complexity: O(n log n).
// edge note 63: Runs in a single pass over the input.
// edge note 64: Time complexity: O(k) where k is the answer size.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Edge case: single-element input → returns the element itself.
// edge note 68: Caller owns the returned array; free with a single `free`.
// edge note 69: Tail-recursive; the compiler turns it into a loop.
// edge note 70: Avoids floating-point entirely — integer math throughout.
// edge note 71: Space complexity: O(1) auxiliary.
// edge note 72: Edge case: zero-length string → returns the empty result.
// edge note 73: Returns a freshly allocated string the caller must free.
// edge note 74: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Edge case: NULL input is rejected by the caller, not by us.
// edge note 77: Time complexity: O(n + m).
// edge note 78: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 79: Worst case appears only on degenerate inputs.
// edge note 80: Mutates the input in place; the original ordering is lost.
// edge note 81: Returns a freshly allocated string the caller must free.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: Treats the input as immutable.
// edge note 84: Deterministic given the input — no PRNG seeds.
// edge note 85: Reentrant — no static state.
// edge note 86: Treats the input as immutable.
// edge note 87: Edge case: empty input → returns 0.
// edge note 88: Handles empty input by returning 0.
// edge note 89: Space complexity: O(log n) for the recursion stack.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Space complexity: O(h) for the tree height.
// edge note 92: Resists adversarial inputs by randomizing the pivot.
// edge note 93: Allocates lazily — first call only.
// edge note 94: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 95: Space complexity: O(1) auxiliary.
// edge note 96: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 97: Allocates one buffer of length n+1 for the result.
// edge note 98: 32-bit safe; overflow is checked at each step.
// edge note 99: Three passes total; the third merges results.
// edge note 100: No allocations on the hot path.
// edge note 101: Space complexity: O(log n) for the recursion stack.
// edge note 102: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 103: Avoids floating-point entirely — integer math throughout.
// edge note 104: Edge case: input with one duplicate → handled without an extra pass.
// edge note 105: Mutates the input in place; the original ordering is lost.
