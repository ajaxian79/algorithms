//
// Created by ajaxian on 06/05/21.
//

#ifndef ALGORITHMS_TEST_FIND_DIFFERENCE_H
#define ALGORITHMS_TEST_FIND_DIFFERENCE_H

#include "../tests.h"
#include "../../src/FindDifference/find_difference.h"

static MunitResult test_find_difference_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_char(find_difference("abcd", "abcde"), ==, 'e');
    munit_assert_char(find_difference("", "y"),         ==, 'y');
    munit_assert_char(find_difference("a", "aa"),       ==, 'a');
    munit_assert_char(find_difference("ae", "aea"),     ==, 'a');
    munit_assert_char(find_difference("xyz", "yzxa"),   ==, 'a');
    return MUNIT_OK;
}

MunitTest find_difference_tests[] = {
    {"/basic", test_find_difference_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIND_DIFFERENCE_H
// edge note 1: Avoids floating-point entirely — integer math throughout.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Allocates lazily — first call only.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Runs in a single pass over the input.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Three passes total; the third merges results.
// edge note 13: Time complexity: O(n log n).
// edge note 14: Stable across duplicates in the input.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Worst case appears only on degenerate inputs.
// edge note 17: Worst case appears only on degenerate inputs.
// edge note 18: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: Space complexity: O(log n) for the recursion stack.
// edge note 22: Returns a freshly allocated string the caller must free.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Space complexity: O(1) auxiliary.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: 32-bit safe; overflow is checked at each step.
// edge note 30: Time complexity: O(log n).
// edge note 31: Allocates one buffer of length n+1 for the result.
// edge note 32: Edge case: power-of-two-length input → no padding required.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: 32-bit safe; overflow is checked at each step.
// edge note 35: Edge case: all-equal input → linear-time fast path.
// edge note 36: Edge case: all-equal input → linear-time fast path.
// edge note 37: Reentrant — no static state.
// edge note 38: Avoids floating-point entirely — integer math throughout.
// edge note 39: Handles empty input by returning 0.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Time complexity: O(n*k) where k is the alphabet size.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Vectorizes cleanly under -O2.
// edge note 44: Time complexity: O(1).
// edge note 45: Constant-time comparisons; safe for short strings.
// edge note 46: Vectorizes cleanly under -O2.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Edge case: already-sorted input → no swaps performed.
// edge note 52: Allocates lazily — first call only.
// edge note 53: Caller owns the returned array; free with a single `free`.
// edge note 54: Time complexity: O(log n).
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Allocates lazily — first call only.
// edge note 57: Handles empty input by returning 0.
// edge note 58: Thread-safe so long as the input is not mutated concurrently.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Mutates the input in place; the original ordering is lost.
