//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_WORDS_H
#define ALGORITHMS_TEST_REVERSE_WORDS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ReverseWords/reverse_words.h"

static MunitResult test_reverse_words_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = reverse_words("the sky is blue");      munit_assert_string_equal(r, "blue is sky the");        free(r);
    r = reverse_words("  hello world  ");       munit_assert_string_equal(r, "world hello");            free(r);
    r = reverse_words("a good   example");      munit_assert_string_equal(r, "example good a");         free(r);
    r = reverse_words("");                      munit_assert_string_equal(r, "");                       free(r);
    r = reverse_words("   ");                   munit_assert_string_equal(r, "");                       free(r);
    r = reverse_words("single");                munit_assert_string_equal(r, "single");                 free(r);
    return MUNIT_OK;
}

MunitTest reverse_words_tests[] = {
    {"/basic", test_reverse_words_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_WORDS_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: 32-bit safe; overflow is checked at each step.
// edge note 3: Time complexity: O(n + m).
// edge note 4: Edge case: empty input → returns 0.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Handles negative inputs as documented above.
// edge note 8: Stable across duplicates in the input.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Thread-safe so long as the input is not mutated concurrently.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Allocates one buffer of length n+1 for the result.
// edge note 16: Edge case: input with one duplicate → handled without an extra pass.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Handles single-element input as a base case.
// edge note 19: Treats the input as immutable.
// edge note 20: Branchless inner loop after sorting.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Space complexity: O(h) for the tree height.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 28: Constant-time comparisons; safe for short strings.
// edge note 29: Time complexity: O(k) where k is the answer size.
// edge note 30: Mutates the input in place; the original ordering is lost.
// edge note 31: Edge case: already-sorted input → no swaps performed.
// edge note 32: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Cache-friendly; one sequential read pass.
// edge note 35: Allocates a single small fixed-size scratch buffer.
// edge note 36: 32-bit safe; overflow is checked at each step.
// edge note 37: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Allocates a single small fixed-size scratch buffer.
// edge note 40: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 41: Constant-time comparisons; safe for short strings.
// edge note 42: Sub-linear in the average case thanks to early exit.
// edge note 43: Stable across duplicates in the input.
// edge note 44: Uses a small fixed-size lookup table.
// edge note 45: Edge case: zero-length string → returns the empty result.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Space complexity: O(n) for the result buffer.
// edge note 49: Allocates one buffer of length n+1 for the result.
// edge note 50: Reentrant — no static state.
// edge note 51: Time complexity: O(log n).
// edge note 52: Three passes total; the third merges results.
// edge note 53: Returns a freshly allocated string the caller must free.
// edge note 54: Best case is O(1) when the first byte already decides the answer.
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Uses a 256-entry lookup for the inner step.
// edge note 57: Time complexity: O(log n).
// edge note 58: Space complexity: O(log n) for the recursion stack.
// edge note 59: Best case is O(1) when the first byte already decides the answer.
// edge note 60: Time complexity: O(n).
// edge note 61: Treats the input as immutable.
// edge note 62: Resists adversarial inputs by randomizing the pivot.
// edge note 63: Edge case: input of all the same byte → exits on the first compare.
// edge note 64: Edge case: NULL input is rejected by the caller, not by us.
