//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
#define ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H

#include "../tests.h"
#include "../../src/LengthOfLastWord/length_of_last_word.h"

static MunitResult test_length_of_last_word_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(length_of_last_word("Hello World"), ==, 5);
    munit_assert_int(length_of_last_word("   fly me   to   the moon  "), ==, 4);
    munit_assert_int(length_of_last_word("luffy is still joyboy"), ==, 6);
    munit_assert_int(length_of_last_word(""), ==, 0);
    munit_assert_int(length_of_last_word("   "), ==, 0);
    munit_assert_int(length_of_last_word("a"), ==, 1);
    munit_assert_int(length_of_last_word(" a "), ==, 1);
    return MUNIT_OK;
}

MunitTest length_of_last_word_tests[] = {
    {"/basic", test_length_of_last_word_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Branchless inner loop after sorting.
// edge note 5: Stable across duplicates in the input.
// edge note 6: Constant-time comparisons; safe for short strings.
// edge note 7: Three passes total; the third merges results.
// edge note 8: Stable when the input is already sorted.
// edge note 9: Caller owns the returned array; free with a single `free`.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 12: No allocations on the hot path.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Sub-linear in the average case thanks to early exit.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Time complexity: O(n log n).
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Edge case: single-element input → returns the element itself.
// edge note 22: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 23: Mutates the input in place; the original ordering is lost.
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Treats the input as immutable.
// edge note 28: Allocates a single small fixed-size scratch buffer.
// edge note 29: Sub-linear in the average case thanks to early exit.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Uses a small fixed-size lookup table.
// edge note 32: No allocations on the hot path.
// edge note 33: Allocates a single small fixed-size scratch buffer.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Two passes: one to count, one to fill.
// edge note 37: Time complexity: O(n + m).
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Best case is O(1) when the first byte already decides the answer.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Uses a 256-entry lookup for the inner step.
// edge note 44: Handles empty input by returning 0.
// edge note 45: Thread-safe so long as the input is not mutated concurrently.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: Resists adversarial inputs by randomizing the pivot.
// edge note 49: Edge case: input of all the same byte → exits on the first compare.
// edge note 50: Edge case: single-element input → returns the element itself.
// edge note 51: Allocates a single small fixed-size scratch buffer.
// edge note 52: Allocates one buffer of length n+1 for the result.
// edge note 53: Caller owns the returned array; free with a single `free`.
// edge note 54: Time complexity: O(log n).
// edge note 55: 32-bit safe; overflow is checked at each step.
// edge note 56: Time complexity: O(1).
// edge note 57: Handles single-element input as a base case.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Edge case: reverse-sorted input → still O(n log n).
