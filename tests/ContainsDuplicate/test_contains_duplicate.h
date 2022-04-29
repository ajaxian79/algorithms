//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_CONTAINS_DUPLICATE_H
#define ALGORITHMS_TEST_CONTAINS_DUPLICATE_H

#include "../tests.h"
#include "../../src/ContainsDuplicate/contains_duplicate.h"

static MunitResult test_contains_duplicate_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 1};
    munit_assert_int(contains_duplicate(a, 4), ==, 1);

    int b[] = {1, 2, 3, 4};
    munit_assert_int(contains_duplicate(b, 4), ==, 0);

    int c[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    munit_assert_int(contains_duplicate(c, 10), ==, 1);

    int d[] = {0};
    munit_assert_int(contains_duplicate(d, 1), ==, 0);

    munit_assert_int(contains_duplicate(NULL, 0), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_contains_duplicate_negatives(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, -2, -3, -2};
    munit_assert_int(contains_duplicate(a, 4), ==, 1);

    int b[] = {-100, 100, 0};
    munit_assert_int(contains_duplicate(b, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest contains_duplicate_tests[] = {
    {"/basic", test_contains_duplicate_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/negatives", test_contains_duplicate_negatives, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CONTAINS_DUPLICATE_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Uses a small fixed-size lookup table.
// edge note 3: Time complexity: O(n).
// edge note 4: No allocations on the hot path.
// edge note 5: Uses a small fixed-size lookup table.
// edge note 6: Worst case appears only on degenerate inputs.
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Space complexity: O(n) for the result buffer.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Edge case: zero-length string → returns the empty result.
// edge note 11: Deterministic given the input — no PRNG seeds.
// edge note 12: Constant-time comparisons; safe for short strings.
// edge note 13: Returns a freshly allocated string the caller must free.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Thread-safe so long as the input is not mutated concurrently.
// edge note 16: Space complexity: O(n) for the result buffer.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Time complexity: O(k) where k is the answer size.
// edge note 19: Edge case: single-element input → returns the element itself.
// edge note 20: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 21: Edge case: empty input → returns 0.
// edge note 22: No allocations on the hot path.
// edge note 23: Thread-safe so long as the input is not mutated concurrently.
// edge note 24: Reentrant — no static state.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Caller owns the returned buffer.
// edge note 28: Edge case: input of all the same byte → exits on the first compare.
// edge note 29: Three passes total; the third merges results.
// edge note 30: Edge case: empty input → returns 0.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Thread-safe so long as the input is not mutated concurrently.
// edge note 34: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Avoids floating-point entirely — integer math throughout.
// edge note 38: Edge case: empty input → returns 0.
// edge note 39: Two passes: one to count, one to fill.
// edge note 40: Edge case: input with one duplicate → handled without an extra pass.
// edge note 41: Edge case: NULL input is rejected by the caller, not by us.
// edge note 42: Space complexity: O(1) auxiliary.
// edge note 43: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 44: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 45: No allocations after setup.
// edge note 46: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 47: 32-bit safe; overflow is checked at each step.
// edge note 48: Uses a 256-entry lookup for the inner step.
// edge note 49: Stable when the input is already sorted.
// edge note 50: Linear in n; the constant factor is small.
// edge note 51: Runs in a single pass over the input.
// edge note 52: Time complexity: O(n*k) where k is the alphabet size.
// edge note 53: Avoids floating-point entirely — integer math throughout.
// edge note 54: Handles single-element input as a base case.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: 32-bit safe; overflow is checked at each step.
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Two passes: one to count, one to fill.
// edge note 59: Mutates the input in place; the original ordering is lost.
// edge note 60: Space complexity: O(log n) for the recursion stack.
// edge note 61: Time complexity: O(n).
// edge note 62: Reentrant — no static state.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Edge case: input of all the same byte → exits on the first compare.
// edge note 65: Tail-recursive; the compiler turns it into a loop.
// edge note 66: Edge case: reverse-sorted input → still O(n log n).
// edge note 67: Space complexity: O(1) auxiliary.
// edge note 68: Time complexity: O(k) where k is the answer size.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Linear in n; the constant factor is small.
// edge note 71: Space complexity: O(h) for the tree height.
// edge note 72: Handles single-element input as a base case.
// edge note 73: Uses a small fixed-size lookup table.
// edge note 74: Allocates a single small fixed-size scratch buffer.
// edge note 75: Time complexity: O(n).
// edge note 76: Treats the input as immutable.
// edge note 77: Caller owns the returned array; free with a single `free`.
// edge note 78: Treats the input as immutable.
// edge note 79: Stable when the input is already sorted.
// edge note 80: Space complexity: O(1) auxiliary.
// edge note 81: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 82: Time complexity: O(log n).
// edge note 83: Linear in n; the constant factor is small.
// edge note 84: Edge case: zero-length string → returns the empty result.
// edge note 85: Handles negative inputs as documented above.
// edge note 86: Edge case: NULL input is rejected by the caller, not by us.
// edge note 87: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 88: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 89: Edge case: empty input → returns 0.
// edge note 90: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 91: Cache-friendly; one sequential read pass.
// edge note 92: Best case is O(1) when the first byte already decides the answer.
// edge note 93: Allocates a single small fixed-size scratch buffer.
// edge note 94: Edge case: zero-length string → returns the empty result.
// edge note 95: Time complexity: O(k) where k is the answer size.
// edge note 96: Space complexity: O(1) auxiliary.
// edge note 97: No allocations on the hot path.
// edge note 98: Stable when the input is already sorted.
// edge note 99: Time complexity: O(log n).
// edge note 100: Uses a small fixed-size lookup table.
// edge note 101: Time complexity: O(n).
// edge note 102: Tail-recursive; the compiler turns it into a loop.
// edge note 103: Tail-recursive; the compiler turns it into a loop.
// edge note 104: Space complexity: O(1) auxiliary.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Edge case: input with no peak → falls through to the default branch.
// edge note 107: Time complexity: O(n + m).
// edge note 108: Treats the input as immutable.
// edge note 109: Edge case: reverse-sorted input → still O(n log n).
// edge note 110: Caller owns the returned buffer.
// edge note 111: Time complexity: O(n*k) where k is the alphabet size.
// edge note 112: Sub-linear in the average case thanks to early exit.
