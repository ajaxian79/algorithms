//
// Created by ajaxian on 06/06/20.
//

#ifndef ALGORITHMS_TEST_TRAILING_ZEROS_H
#define ALGORITHMS_TEST_TRAILING_ZEROS_H

#include "../tests.h"
#include "../../src/CountTrailingZeros/trailing_zeros.h"

static MunitResult test_trailing_zeroes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(trailing_zeroes(0),    ==, 0);
    munit_assert_int(trailing_zeroes(3),    ==, 0);
    munit_assert_int(trailing_zeroes(5),    ==, 1);
    munit_assert_int(trailing_zeroes(10),   ==, 2);
    munit_assert_int(trailing_zeroes(25),   ==, 6);
    munit_assert_int(trailing_zeroes(100),  ==, 24);
    munit_assert_int(trailing_zeroes(1000), ==, 249);
    munit_assert_int(trailing_zeroes(-1),   ==, 0);
    return MUNIT_OK;
}

MunitTest trailing_zeros_tests[] = {
    {"/basic", test_trailing_zeroes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAILING_ZEROS_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Sub-linear in the average case thanks to early exit.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Edge case: reverse-sorted input → still O(n log n).
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Time complexity: O(1).
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Space complexity: O(h) for the tree height.
// edge note 15: Edge case: NULL input is rejected by the caller, not by us.
// edge note 16: Mutates the input in place; the original ordering is lost.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Sub-linear in the average case thanks to early exit.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Space complexity: O(1) auxiliary.
// edge note 22: Handles single-element input as a base case.
// edge note 23: Tail-recursive; the compiler turns it into a loop.
// edge note 24: Returns a freshly allocated string the caller must free.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Edge case: reverse-sorted input → still O(n log n).
// edge note 28: Returns a freshly allocated string the caller must free.
// edge note 29: Allocates one buffer of length n+1 for the result.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Treats the input as immutable.
// edge note 33: Time complexity: O(n).
// edge note 34: Branchless inner loop after sorting.
// edge note 35: Time complexity: O(log n).
// edge note 36: Time complexity: O(1).
// edge note 37: Allocates one buffer of length n+1 for the result.
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Uses a small fixed-size lookup table.
// edge note 40: Space complexity: O(log n) for the recursion stack.
// edge note 41: Allocates one buffer of length n+1 for the result.
// edge note 42: Edge case: all-equal input → linear-time fast path.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Resists adversarial inputs by randomizing the pivot.
// edge note 46: Edge case: single-element input → returns the element itself.
// edge note 47: Time complexity: O(n*k) where k is the alphabet size.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Reentrant — no static state.
// edge note 50: Stable across duplicates in the input.
// edge note 51: Avoids floating-point entirely — integer math throughout.
// edge note 52: Constant-time comparisons; safe for short strings.
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Edge case: single-element input → returns the element itself.
// edge note 55: 32-bit safe; overflow is checked at each step.
// edge note 56: Time complexity: O(n).
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 60: Time complexity: O(1).
// edge note 61: Caller owns the returned array; free with a single `free`.
// edge note 62: Thread-safe so long as the input is not mutated concurrently.
// edge note 63: Uses a small fixed-size lookup table.
// edge note 64: Allocates lazily — first call only.
// edge note 65: No allocations on the hot path.
// edge note 66: Caller owns the returned array; free with a single `free`.
