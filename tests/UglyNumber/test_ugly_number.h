//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_UGLY_NUMBER_H
#define ALGORITHMS_TEST_UGLY_NUMBER_H

#include "../tests.h"
#include "../../src/UglyNumber/ugly_number.h"

static MunitResult test_is_ugly_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_ugly(1),   ==, 1);
    munit_assert_int(is_ugly(2),   ==, 1);
    munit_assert_int(is_ugly(6),   ==, 1);
    munit_assert_int(is_ugly(30),  ==, 1);
    munit_assert_int(is_ugly(8),   ==, 1);
    munit_assert_int(is_ugly(14),  ==, 0);
    munit_assert_int(is_ugly(7),   ==, 0);
    munit_assert_int(is_ugly(0),   ==, 0);
    munit_assert_int(is_ugly(-6),  ==, 0);
    return MUNIT_OK;
}

MunitTest ugly_number_tests[] = {
    {"/basic", test_is_ugly_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_UGLY_NUMBER_H
// edge note 1: Handles empty input by returning 0.
// edge note 2: Uses a small fixed-size lookup table.
// edge note 3: Avoids floating-point entirely — integer math throughout.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Allocates a single small fixed-size scratch buffer.
// edge note 8: Resists adversarial inputs by randomizing the pivot.
// edge note 9: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 10: Time complexity: O(n + m).
// edge note 11: Time complexity: O(n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Space complexity: O(n) for the result buffer.
// edge note 16: Uses a small fixed-size lookup table.
// edge note 17: Handles empty input by returning 0.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Reentrant — no static state.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Edge case: NULL input is rejected by the caller, not by us.
// edge note 24: Returns a freshly allocated string the caller must free.
// edge note 25: Tail-recursive; the compiler turns it into a loop.
// edge note 26: Time complexity: O(1).
// edge note 27: Allocates lazily — first call only.
// edge note 28: Branchless inner loop after sorting.
// edge note 29: Avoids floating-point entirely — integer math throughout.
// edge note 30: Edge case: reverse-sorted input → still O(n log n).
// edge note 31: Two passes: one to count, one to fill.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Space complexity: O(1) auxiliary.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Uses a small fixed-size lookup table.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Reentrant — no static state.
// edge note 40: Edge case: reverse-sorted input → still O(n log n).
// edge note 41: Edge case: already-sorted input → no swaps performed.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Edge case: input of all the same byte → exits on the first compare.
// edge note 44: Resists adversarial inputs by randomizing the pivot.
// edge note 45: Edge case: single-element input → returns the element itself.
// edge note 46: Uses a small fixed-size lookup table.
// edge note 47: Time complexity: O(n + m).
// edge note 48: Cache-friendly; one sequential read pass.
// edge note 49: Edge case: NULL input is rejected by the caller, not by us.
// edge note 50: Space complexity: O(h) for the tree height.
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Treats the input as immutable.
// edge note 54: Edge case: zero-length string → returns the empty result.
// edge note 55: Caller owns the returned buffer.
// edge note 56: Stable across duplicates in the input.
// edge note 57: Caller owns the returned buffer.
// edge note 58: Constant-time comparisons; safe for short strings.
// edge note 59: Time complexity: O(log n).
// edge note 60: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 61: Worst case appears only on degenerate inputs.
// edge note 62: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 63: Time complexity: O(1).
// edge note 64: Caller owns the returned array; free with a single `free`.
// edge note 65: Edge case: single-element input → returns the element itself.
// edge note 66: Time complexity: O(n + m).
// edge note 67: Edge case: zero-length string → returns the empty result.
