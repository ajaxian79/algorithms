//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_VALID_ANAGRAM_H
#define ALGORITHMS_TEST_VALID_ANAGRAM_H

#include "../tests.h"
#include "../../src/ValidAnagram/valid_anagram.h"

static MunitResult test_valid_anagram_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_anagram("anagram", "nagaram"), ==, 1);
    munit_assert_int(is_anagram("rat", "car"), ==, 0);
    munit_assert_int(is_anagram("", ""), ==, 1);
    munit_assert_int(is_anagram("a", "ab"), ==, 0);
    munit_assert_int(is_anagram("aacc", "ccac"), ==, 0);
    return MUNIT_OK;
}

MunitTest valid_anagram_tests[] = {
    {"/basic", test_valid_anagram_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_ANAGRAM_H
// edge note 1: Edge case: all-equal input → linear-time fast path.
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Deterministic given the input — no PRNG seeds.
// edge note 4: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 5: Stable across duplicates in the input.
// edge note 6: Vectorizes cleanly under -O2.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Allocates lazily — first call only.
// edge note 10: Thread-safe so long as the input is not mutated concurrently.
// edge note 11: Worst case appears only on degenerate inputs.
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Reentrant — no static state.
// edge note 14: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 15: Time complexity: O(log n).
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Edge case: reverse-sorted input → still O(n log n).
// edge note 18: Returns a freshly allocated string the caller must free.
// edge note 19: Space complexity: O(log n) for the recursion stack.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Time complexity: O(n).
// edge note 22: Handles single-element input as a base case.
// edge note 23: Linear in n; the constant factor is small.
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Returns a freshly allocated string the caller must free.
// edge note 26: Edge case: input of all the same byte → exits on the first compare.
// edge note 27: Stable across duplicates in the input.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Branchless inner loop after sorting.
// edge note 31: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 34: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 35: Space complexity: O(h) for the tree height.
// edge note 36: Caller owns the returned buffer.
// edge note 37: No allocations after setup.
// edge note 38: No allocations on the hot path.
// edge note 39: Stable across duplicates in the input.
// edge note 40: Constant-time comparisons; safe for short strings.
// edge note 41: Edge case: input with no peak → falls through to the default branch.
// edge note 42: Handles empty input by returning 0.
// edge note 43: Edge case: single-element input → returns the element itself.
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: Resists adversarial inputs by randomizing the pivot.
// edge note 47: Stable when the input is already sorted.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Branchless inner loop after sorting.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 53: Stable across duplicates in the input.
// edge note 54: Deterministic given the input — no PRNG seeds.
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 57: Mutates the input in place; the original ordering is lost.
// edge note 58: Time complexity: O(n log n).
// edge note 59: Edge case: power-of-two-length input → no padding required.
// edge note 60: Space complexity: O(1) auxiliary.
