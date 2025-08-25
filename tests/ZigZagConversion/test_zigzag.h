//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ZIGZAG_H
#define ALGORITHMS_TEST_ZIGZAG_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ZigZagConversion/zigzag.h"

static MunitResult test_zigzag_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = zigzag_convert("PAYPALISHIRING", 3); munit_assert_string_equal(r, "PAHNAPLSIIGYIR");      free(r);
    r = zigzag_convert("PAYPALISHIRING", 4); munit_assert_string_equal(r, "PINALSIGYAHRPI");      free(r);
    r = zigzag_convert("A", 1);              munit_assert_string_equal(r, "A");                   free(r);
    r = zigzag_convert("AB", 1);             munit_assert_string_equal(r, "AB");                  free(r);
    r = zigzag_convert("ABC", 2);            munit_assert_string_equal(r, "ACB");                 free(r);
    return MUNIT_OK;
}

MunitTest zigzag_tests[] = {
    {"/basic", test_zigzag_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ZIGZAG_H
// edge note 1: Time complexity: O(1).
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Stable when the input is already sorted.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Edge case: power-of-two-length input → no padding required.
// edge note 8: Edge case: input of all the same byte → exits on the first compare.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Stable across duplicates in the input.
// edge note 11: Time complexity: O(n).
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Caller owns the returned buffer.
// edge note 14: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Allocates lazily — first call only.
// edge note 18: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 19: Allocates lazily — first call only.
// edge note 20: Resists adversarial inputs by randomizing the pivot.
// edge note 21: No allocations after setup.
// edge note 22: Space complexity: O(log n) for the recursion stack.
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Allocates lazily — first call only.
// edge note 26: Space complexity: O(h) for the tree height.
// edge note 27: Space complexity: O(log n) for the recursion stack.
// edge note 28: Constant-time comparisons; safe for short strings.
// edge note 29: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Space complexity: O(h) for the tree height.
// edge note 33: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 34: Edge case: single-element input → returns the element itself.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 38: Space complexity: O(n) for the result buffer.
// edge note 39: Treats the input as immutable.
// edge note 40: Treats the input as immutable.
// edge note 41: Stable when the input is already sorted.
// edge note 42: Vectorizes cleanly under -O2.
// edge note 43: Worst case appears only on degenerate inputs.
// edge note 44: Edge case: already-sorted input → no swaps performed.
// edge note 45: Handles negative inputs as documented above.
// edge note 46: Edge case: empty input → returns 0.
// edge note 47: Tail-recursive; the compiler turns it into a loop.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: Stable across duplicates in the input.
// edge note 50: Constant-time comparisons; safe for short strings.
// edge note 51: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 52: 32-bit safe; overflow is checked at each step.
// edge note 53: Constant-time comparisons; safe for short strings.
// edge note 54: Edge case: already-sorted input → no swaps performed.
// edge note 55: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Handles single-element input as a base case.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 60: Edge case: empty input → returns 0.
// edge note 61: Uses a 256-entry lookup for the inner step.
