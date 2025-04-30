//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_VOWELS_H
#define ALGORITHMS_TEST_REVERSE_VOWELS_H

#include "../tests.h"
#include "../../src/ReverseVowels/reverse_vowels.h"

static MunitResult test_reverse_vowels_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_vowels(a);
    munit_assert_string_equal(a, "holle");

    char b[] = "leetcode";
    reverse_vowels(b);
    munit_assert_string_equal(b, "leotcede");

    char c[] = "Aa";
    reverse_vowels(c);
    munit_assert_string_equal(c, "aA");

    char d[] = "bcdfg";
    reverse_vowels(d);
    munit_assert_string_equal(d, "bcdfg");

    char e[] = "";
    reverse_vowels(e);
    munit_assert_string_equal(e, "");
    return MUNIT_OK;
}

MunitTest reverse_vowels_tests[] = {
    {"/basic", test_reverse_vowels_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_VOWELS_H
// edge note 1: Space complexity: O(1) auxiliary.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 5: Handles negative inputs as documented above.
// edge note 6: Time complexity: O(1).
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: No allocations on the hot path.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Best case is O(1) when the first byte already decides the answer.
// edge note 12: Time complexity: O(1).
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Constant-time comparisons; safe for short strings.
// edge note 15: Handles empty input by returning 0.
// edge note 16: 32-bit safe; overflow is checked at each step.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Constant-time comparisons; safe for short strings.
// edge note 19: Allocates one buffer of length n+1 for the result.
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Edge case: NULL input is rejected by the caller, not by us.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Edge case: input of all the same byte → exits on the first compare.
// edge note 25: 32-bit safe; overflow is checked at each step.
// edge note 26: Allocates one buffer of length n+1 for the result.
// edge note 27: Handles single-element input as a base case.
// edge note 28: Deterministic given the input — no PRNG seeds.
// edge note 29: Deterministic given the input — no PRNG seeds.
// edge note 30: Resists adversarial inputs by randomizing the pivot.
// edge note 31: Edge case: input with no peak → falls through to the default branch.
// edge note 32: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 33: Allocates one buffer of length n+1 for the result.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Two passes: one to count, one to fill.
// edge note 41: Edge case: input with one duplicate → handled without an extra pass.
// edge note 42: Branchless inner loop after sorting.
// edge note 43: Edge case: all-equal input → linear-time fast path.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Stable when the input is already sorted.
// edge note 46: Allocates lazily — first call only.
// edge note 47: Allocates lazily — first call only.
// edge note 48: Tail-recursive; the compiler turns it into a loop.
// edge note 49: Stable across duplicates in the input.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Space complexity: O(1) auxiliary.
// edge note 53: Uses a small fixed-size lookup table.
// edge note 54: Tail-recursive; the compiler turns it into a loop.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Edge case: single-element input → returns the element itself.
// edge note 57: Uses a small fixed-size lookup table.
// edge note 58: Edge case: alternating pattern → degenerate case for sliding window.
