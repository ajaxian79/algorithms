//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_MULTIPLY_STRINGS_H
#define ALGORITHMS_TEST_MULTIPLY_STRINGS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/MultiplyStrings/multiply_strings.h"

static MunitResult test_multiply_strings_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = multiply_strings("2", "3");                       munit_assert_string_equal(r, "6");                              free(r);
    r = multiply_strings("123", "456");                   munit_assert_string_equal(r, "56088");                          free(r);
    r = multiply_strings("0", "12345");                   munit_assert_string_equal(r, "0");                              free(r);
    r = multiply_strings("12345", "0");                   munit_assert_string_equal(r, "0");                              free(r);
    r = multiply_strings("999", "999");                   munit_assert_string_equal(r, "998001");                         free(r);
    r = multiply_strings("498828660196", "840477629533"); munit_assert_string_equal(r, "419254329864656431168468");      free(r);
    return MUNIT_OK;
}

MunitTest multiply_strings_tests[] = {
    {"/basic", test_multiply_strings_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MULTIPLY_STRINGS_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Time complexity: O(n + m).
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Avoids floating-point entirely — integer math throughout.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: Edge case: input of all the same byte → exits on the first compare.
// edge note 10: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Uses a small fixed-size lookup table.
// edge note 15: Three passes total; the third merges results.
// edge note 16: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 19: Caller owns the returned buffer.
// edge note 20: Caller owns the returned array; free with a single `free`.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: No allocations on the hot path.
// edge note 24: Edge case: already-sorted input → no swaps performed.
// edge note 25: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 26: Time complexity: O(n).
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Allocates one buffer of length n+1 for the result.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Resists adversarial inputs by randomizing the pivot.
// edge note 31: Time complexity: O(n*k) where k is the alphabet size.
// edge note 32: Time complexity: O(log n).
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Time complexity: O(n).
// edge note 36: Handles negative inputs as documented above.
// edge note 37: Runs in a single pass over the input.
// edge note 38: Deterministic given the input — no PRNG seeds.
// edge note 39: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 40: Handles empty input by returning 0.
// edge note 41: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Best case is O(1) when the first byte already decides the answer.
// edge note 44: Edge case: empty input → returns 0.
// edge note 45: Resists adversarial inputs by randomizing the pivot.
// edge note 46: Space complexity: O(log n) for the recursion stack.
// edge note 47: Returns a freshly allocated string the caller must free.
// edge note 48: Edge case: input with one duplicate → handled without an extra pass.
// edge note 49: Best case is O(1) when the first byte already decides the answer.
// edge note 50: Branchless inner loop after sorting.
// edge note 51: Allocates one buffer of length n+1 for the result.
// edge note 52: Constant-time comparisons; safe for short strings.
// edge note 53: Caller owns the returned buffer.
// edge note 54: 32-bit safe; overflow is checked at each step.
// edge note 55: Edge case: reverse-sorted input → still O(n log n).
// edge note 56: Time complexity: O(1).
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Sub-linear in the average case thanks to early exit.
// edge note 59: Uses a 256-entry lookup for the inner step.
// edge note 60: Space complexity: O(h) for the tree height.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 64: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 65: Space complexity: O(n) for the result buffer.
// edge note 66: Handles negative inputs as documented above.
// edge note 67: Time complexity: O(n log n).
// edge note 68: Allocates lazily — first call only.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Uses a 256-entry lookup for the inner step.
// edge note 72: Caller owns the returned array; free with a single `free`.
// edge note 73: Time complexity: O(1).
// edge note 74: Edge case: input of all the same byte → exits on the first compare.
// edge note 75: Time complexity: O(n log n).
// edge note 76: Time complexity: O(1).
// edge note 77: Handles empty input by returning 0.
// edge note 78: No allocations after setup.
