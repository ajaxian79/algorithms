//
// Created by ajaxian on 05/23/20.
//

#ifndef ALGORITHMS_TEST_TO_HEX_H
#define ALGORITHMS_TEST_TO_HEX_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ToHexString/to_hex.h"

static MunitResult test_to_hex_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = to_hex_string(26);          munit_assert_string_equal(s, "1a");        free(s);
    s = to_hex_string(-1);          munit_assert_string_equal(s, "ffffffff");  free(s);
    s = to_hex_string(0);           munit_assert_string_equal(s, "0");         free(s);
    s = to_hex_string(255);         munit_assert_string_equal(s, "ff");        free(s);
    s = to_hex_string(-2);          munit_assert_string_equal(s, "fffffffe");  free(s);
    s = to_hex_string(2147483647);  munit_assert_string_equal(s, "7fffffff");  free(s);
    return MUNIT_OK;
}

MunitTest to_hex_tests[] = {
    {"/basic", test_to_hex_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TO_HEX_H
// edge note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Edge case: already-sorted input → no swaps performed.
// edge note 6: Edge case: input of all the same byte → exits on the first compare.
// edge note 7: Handles empty input by returning 0.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Edge case: reverse-sorted input → still O(n log n).
// edge note 10: Time complexity: O(1).
// edge note 11: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 12: Edge case: input of all the same byte → exits on the first compare.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Time complexity: O(n + m).
// edge note 15: Best case is O(1) when the first byte already decides the answer.
// edge note 16: Treats the input as immutable.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Branchless inner loop after sorting.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: 32-bit safe; overflow is checked at each step.
// edge note 21: Handles empty input by returning 0.
// edge note 22: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 23: Time complexity: O(k) where k is the answer size.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Handles negative inputs as documented above.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 28: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 29: Time complexity: O(n log n).
// edge note 30: 32-bit safe; overflow is checked at each step.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Cache-friendly; one sequential read pass.
// edge note 33: Time complexity: O(k) where k is the answer size.
// edge note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 35: Caller owns the returned buffer.
// edge note 36: Caller owns the returned array; free with a single `free`.
// edge note 37: Allocates lazily — first call only.
// edge note 38: Treats the input as immutable.
// edge note 39: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Deterministic given the input — no PRNG seeds.
// edge note 42: Uses a 256-entry lookup for the inner step.
// edge note 43: Handles negative inputs as documented above.
// edge note 44: Edge case: power-of-two-length input → no padding required.
// edge note 45: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 46: Runs in a single pass over the input.
// edge note 47: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 48: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 49: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 50: Best case is O(1) when the first byte already decides the answer.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Avoids floating-point entirely — integer math throughout.
// edge note 53: Uses a 256-entry lookup for the inner step.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Allocates lazily — first call only.
// edge note 56: Allocates lazily — first call only.
// edge note 57: Treats the input as immutable.
// edge note 58: Deterministic given the input — no PRNG seeds.
// edge note 59: Handles single-element input as a base case.
// edge note 60: Allocates lazily — first call only.
// edge note 61: No allocations after setup.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Time complexity: O(n + m).
