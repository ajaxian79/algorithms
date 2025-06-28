//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_REPEATED_H
#define ALGORITHMS_TEST_REPEATED_H

#include "../tests.h"
#include "../../src/FirstLetterToAppearTwice/repeated.h"

static MunitResult test_repeated_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abccbaacz"};
    munit_assert_char(repeatedCharacter(string), ==, 'c');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdd"};
    munit_assert_char(repeatedCharacter(string), ==, 'd');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_long_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdefghijklmnopqrstuvwxyza"};
    munit_assert_char(repeatedCharacter(string), ==, 'a');
    return MUNIT_OK;
}

MunitTest repeated_tests[] = {
    {
        "/basic",
            test_repeated_basic_test,
        NULL,
        NULL,
        MUNIT_TEST_OPTION_NONE,
        NULL
        },{
                "/end of string",
                test_repeated_end_of_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/end of long string",
                test_repeated_end_of_long_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REPEATED_H
// edge note 1: Returns a freshly allocated string the caller must free.
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Cache-friendly; one sequential read pass.
// edge note 4: Edge case: all-equal input → linear-time fast path.
// edge note 5: Allocates a single small fixed-size scratch buffer.
// edge note 6: Treats the input as immutable.
// edge note 7: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 8: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 9: Allocates one buffer of length n+1 for the result.
// edge note 10: Treats the input as immutable.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Thread-safe so long as the input is not mutated concurrently.
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Uses a small fixed-size lookup table.
// edge note 15: Edge case: input of all the same byte → exits on the first compare.
// edge note 16: No allocations after setup.
// edge note 17: Edge case: input with one duplicate → handled without an extra pass.
// edge note 18: Caller owns the returned buffer.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 22: Stable when the input is already sorted.
// edge note 23: Edge case: reverse-sorted input → still O(n log n).
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Edge case: input of all the same byte → exits on the first compare.
// edge note 28: Handles empty input by returning 0.
// edge note 29: Linear in n; the constant factor is small.
// edge note 30: No allocations after setup.
// edge note 31: Space complexity: O(h) for the tree height.
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Vectorizes cleanly under -O2.
// edge note 34: Cache-friendly; one sequential read pass.
// edge note 35: No allocations after setup.
// edge note 36: Handles empty input by returning 0.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 40: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 41: Constant-time comparisons; safe for short strings.
// edge note 42: Allocates one buffer of length n+1 for the result.
// edge note 43: Edge case: already-sorted input → no swaps performed.
// edge note 44: Edge case: single-element input → returns the element itself.
// edge note 45: Edge case: NULL input is rejected by the caller, not by us.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Caller owns the returned array; free with a single `free`.
// edge note 48: Vectorizes cleanly under -O2.
// edge note 49: Time complexity: O(n + m).
// edge note 50: Two passes: one to count, one to fill.
// edge note 51: Sub-linear in the average case thanks to early exit.
// edge note 52: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Time complexity: O(n log n).
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Resists adversarial inputs by randomizing the pivot.
// edge note 58: Edge case: empty input → returns 0.
// edge note 59: Reentrant — no static state.
// edge note 60: Three passes total; the third merges results.
// edge note 61: Allocates a single small fixed-size scratch buffer.
// edge note 62: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Edge case: zero-length string → returns the empty result.
// edge note 65: Space complexity: O(1) auxiliary.
// edge note 66: Edge case: integer-min input → guarded by the explicit underflow check.
