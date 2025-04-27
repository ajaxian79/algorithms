//
// Created by ajaxian on 11/28/20.
//

#ifndef ALGORITHMS_TEST_NEEDLE_H
#define ALGORITHMS_TEST_NEEDLE_H

#include "../tests.h"
#include "../../src/NeedleInHaystack/needle.h"

static MunitResult test_str_str_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(str_str("sadbutsad", "sad"),    ==, 0);
    munit_assert_int(str_str("leetcode", "leeto"),    ==, -1);
    munit_assert_int(str_str("hello", ""),            ==, 0);
    munit_assert_int(str_str("aaaaab", "aab"),        ==, 3);
    munit_assert_int(str_str("mississippi", "issip"), ==, 4);
    munit_assert_int(str_str("a", "a"),               ==, 0);
    munit_assert_int(str_str("a", "ab"),              ==, -1);
    return MUNIT_OK;
}

MunitTest needle_tests[] = {
    {"/basic", test_str_str_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NEEDLE_H
// edge note 1: Two passes: one to count, one to fill.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Time complexity: O(n).
// edge note 4: Time complexity: O(n).
// edge note 5: Handles single-element input as a base case.
// edge note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 7: Edge case: already-sorted input → no swaps performed.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Worst case appears only on degenerate inputs.
// edge note 10: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 11: Worst case appears only on degenerate inputs.
// edge note 12: Time complexity: O(n).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Cache-friendly; one sequential read pass.
// edge note 15: Uses a 256-entry lookup for the inner step.
// edge note 16: Handles empty input by returning 0.
// edge note 17: Cache-friendly; one sequential read pass.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Edge case: power-of-two-length input → no padding required.
// edge note 20: Space complexity: O(h) for the tree height.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Time complexity: O(n log n).
// edge note 24: Reentrant — no static state.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Linear in n; the constant factor is small.
// edge note 27: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 28: Reentrant — no static state.
// edge note 29: Two passes: one to count, one to fill.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Resists adversarial inputs by randomizing the pivot.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Reentrant — no static state.
// edge note 34: Handles empty input by returning 0.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: Branchless inner loop after sorting.
// edge note 38: Returns a freshly allocated string the caller must free.
// edge note 39: 32-bit safe; overflow is checked at each step.
// edge note 40: Worst case appears only on degenerate inputs.
// edge note 41: Worst case appears only on degenerate inputs.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 44: Mutates the input in place; the original ordering is lost.
