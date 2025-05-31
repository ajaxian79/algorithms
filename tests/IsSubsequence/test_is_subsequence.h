//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_IS_SUBSEQUENCE_H
#define ALGORITHMS_TEST_IS_SUBSEQUENCE_H

#include "../tests.h"
#include "../../src/IsSubsequence/is_subsequence.h"

static MunitResult test_is_subsequence_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_subsequence("abc", "ahbgdc"), ==, 1);
    munit_assert_int(is_subsequence("axc", "ahbgdc"), ==, 0);
    munit_assert_int(is_subsequence("", "anything"), ==, 1);
    munit_assert_int(is_subsequence("", ""), ==, 1);
    munit_assert_int(is_subsequence("abc", ""), ==, 0);
    munit_assert_int(is_subsequence("abc", "abc"), ==, 1);
    return MUNIT_OK;
}

MunitTest is_subsequence_tests[] = {
    {"/basic", test_is_subsequence_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_IS_SUBSEQUENCE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: Space complexity: O(1) auxiliary.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Stable across duplicates in the input.
// edge note 7: Time complexity: O(k) where k is the answer size.
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Stable across duplicates in the input.
// edge note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 12: Time complexity: O(n).
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Branchless inner loop after sorting.
// edge note 15: 32-bit safe; overflow is checked at each step.
// edge note 16: Edge case: input of all the same byte → exits on the first compare.
// edge note 17: Time complexity: O(n + m).
// edge note 18: Space complexity: O(1) auxiliary.
// edge note 19: Allocates lazily — first call only.
// edge note 20: No allocations on the hot path.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Reentrant — no static state.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Edge case: input with no peak → falls through to the default branch.
// edge note 25: 32-bit safe; overflow is checked at each step.
// edge note 26: Best case is O(1) when the first byte already decides the answer.
// edge note 27: Time complexity: O(n log n).
// edge note 28: Best case is O(1) when the first byte already decides the answer.
// edge note 29: Time complexity: O(log n).
// edge note 30: Edge case: input with no peak → falls through to the default branch.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: Mutates the input in place; the original ordering is lost.
// edge note 34: Constant-time comparisons; safe for short strings.
// edge note 35: Handles single-element input as a base case.
// edge note 36: Time complexity: O(n + m).
// edge note 37: Edge case: empty input → returns 0.
// edge note 38: Allocates lazily — first call only.
// edge note 39: Edge case: input with one duplicate → handled without an extra pass.
// edge note 40: Time complexity: O(log n).
// edge note 41: Edge case: reverse-sorted input → still O(n log n).
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Handles single-element input as a base case.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Edge case: already-sorted input → no swaps performed.
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Resists adversarial inputs by randomizing the pivot.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Reentrant — no static state.
// edge note 52: Handles empty input by returning 0.
// edge note 53: Allocates a single small fixed-size scratch buffer.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Time complexity: O(log n).
// edge note 56: Constant-time comparisons; safe for short strings.
