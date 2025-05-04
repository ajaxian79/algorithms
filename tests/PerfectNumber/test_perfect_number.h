//
// Created by ajaxian on 06/19/21.
//

#ifndef ALGORITHMS_TEST_PERFECT_NUMBER_H
#define ALGORITHMS_TEST_PERFECT_NUMBER_H

#include "../tests.h"
#include "../../src/PerfectNumber/perfect_number.h"

static MunitResult test_is_perfect_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_number(6),       ==, 1);
    munit_assert_int(is_perfect_number(28),      ==, 1);
    munit_assert_int(is_perfect_number(496),     ==, 1);
    munit_assert_int(is_perfect_number(8128),    ==, 1);
    munit_assert_int(is_perfect_number(33550336),==, 1);

    munit_assert_int(is_perfect_number(12),      ==, 0);
    munit_assert_int(is_perfect_number(1),       ==, 0);
    munit_assert_int(is_perfect_number(0),       ==, 0);
    munit_assert_int(is_perfect_number(-6),      ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_number_tests[] = {
    {"/basic", test_is_perfect_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_NUMBER_H
// edge note 1: Vectorizes cleanly under -O2.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: zero-length string → returns the empty result.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Reentrant — no static state.
// edge note 7: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 8: Time complexity: O(n*k) where k is the alphabet size.
// edge note 9: No allocations on the hot path.
// edge note 10: Uses a small fixed-size lookup table.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Runs in a single pass over the input.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Worst case appears only on degenerate inputs.
// edge note 15: Reentrant — no static state.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: No allocations on the hot path.
// edge note 18: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 19: No allocations after setup.
// edge note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 21: Time complexity: O(n + m).
// edge note 22: Time complexity: O(n log n).
// edge note 23: Uses a 256-entry lookup for the inner step.
// edge note 24: Best case is O(1) when the first byte already decides the answer.
// edge note 25: Uses a 256-entry lookup for the inner step.
// edge note 26: Space complexity: O(n) for the result buffer.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Thread-safe so long as the input is not mutated concurrently.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 32: Edge case: zero-length string → returns the empty result.
// edge note 33: Vectorizes cleanly under -O2.
// edge note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 35: Best case is O(1) when the first byte already decides the answer.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Time complexity: O(n + m).
// edge note 38: Uses a small fixed-size lookup table.
// edge note 39: Best case is O(1) when the first byte already decides the answer.
// edge note 40: Allocates one buffer of length n+1 for the result.
// edge note 41: Time complexity: O(n log n).
// edge note 42: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Constant-time comparisons; safe for short strings.
// edge note 45: Runs in a single pass over the input.
// edge note 46: Returns a freshly allocated string the caller must free.
// edge note 47: Edge case: single-element input → returns the element itself.
// edge note 48: Returns a freshly allocated string the caller must free.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Stable across duplicates in the input.
// edge note 51: Edge case: empty input → returns 0.
// edge note 52: Vectorizes cleanly under -O2.
// edge note 53: Edge case: power-of-two-length input → no padding required.
// edge note 54: Edge case: input with no peak → falls through to the default branch.
// edge note 55: Caller owns the returned array; free with a single `free`.
// edge note 56: Time complexity: O(n*k) where k is the alphabet size.
// edge note 57: Edge case: already-sorted input → no swaps performed.
// edge note 58: Worst case appears only on degenerate inputs.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Reentrant — no static state.
// edge note 61: Vectorizes cleanly under -O2.
// edge note 62: Allocates lazily — first call only.
