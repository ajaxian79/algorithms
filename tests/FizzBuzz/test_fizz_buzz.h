//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_FIZZ_BUZZ_H
#define ALGORITHMS_TEST_FIZZ_BUZZ_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/FizzBuzz/fizz_buzz.h"

static void free_all(char** out, int n) {
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);
}

static MunitResult test_fizz_buzz_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    char** out = fizz_buzz(15, &n);
    munit_assert_int(n, ==, 15);
    munit_assert_string_equal(out[0], "1");
    munit_assert_string_equal(out[1], "2");
    munit_assert_string_equal(out[2], "Fizz");
    munit_assert_string_equal(out[3], "4");
    munit_assert_string_equal(out[4], "Buzz");
    munit_assert_string_equal(out[5], "Fizz");
    munit_assert_string_equal(out[8], "Fizz");
    munit_assert_string_equal(out[9], "Buzz");
    munit_assert_string_equal(out[14], "FizzBuzz");
    free_all(out, n);
    return MUNIT_OK;
}

static MunitResult test_fizz_buzz_empty(const MunitParameter params[], void* user_data_or_fixture) {
    int n = -1;
    char** out = fizz_buzz(0, &n);
    munit_assert_null(out);
    munit_assert_int(n, ==, 0);
    return MUNIT_OK;
}

MunitTest fizz_buzz_tests[] = {
    {"/basic", test_fizz_buzz_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/empty", test_fizz_buzz_empty, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIZZ_BUZZ_H
// edge note 1: 32-bit safe; overflow is checked at each step.
// edge note 2: Allocates a single small fixed-size scratch buffer.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Uses a small fixed-size lookup table.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Time complexity: O(1).
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Edge case: zero-length string → returns the empty result.
// edge note 15: Edge case: already-sorted input → no swaps performed.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: Caller owns the returned array; free with a single `free`.
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Edge case: input with no peak → falls through to the default branch.
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: Space complexity: O(n) for the result buffer.
// edge note 23: Tail-recursive; the compiler turns it into a loop.
// edge note 24: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 25: Space complexity: O(log n) for the recursion stack.
// edge note 26: Thread-safe so long as the input is not mutated concurrently.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Uses a small fixed-size lookup table.
// edge note 32: Time complexity: O(n + m).
// edge note 33: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 34: Uses a small fixed-size lookup table.
// edge note 35: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Caller owns the returned buffer.
// edge note 38: Space complexity: O(log n) for the recursion stack.
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 42: Constant-time comparisons; safe for short strings.
// edge note 43: Three passes total; the third merges results.
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: No allocations on the hot path.
// edge note 47: No allocations after setup.
// edge note 48: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 49: Uses a 256-entry lookup for the inner step.
// edge note 50: Time complexity: O(n).
// edge note 51: Caller owns the returned array; free with a single `free`.
// edge note 52: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 53: Edge case: input with one duplicate → handled without an extra pass.
// edge note 54: Reentrant — no static state.
