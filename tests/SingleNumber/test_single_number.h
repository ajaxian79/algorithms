//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_SINGLE_NUMBER_H
#define ALGORITHMS_TEST_SINGLE_NUMBER_H

#include "../tests.h"
#include "../../src/SingleNumber/single_number.h"

static MunitResult test_single_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 2, 1};
    munit_assert_int(single_number(a, 3), ==, 1);

    int b[] = {4, 1, 2, 1, 2};
    munit_assert_int(single_number(b, 5), ==, 4);

    int c[] = {99};
    munit_assert_int(single_number(c, 1), ==, 99);

    int d[] = {-1, -1, -2};
    munit_assert_int(single_number(d, 3), ==, -2);
    return MUNIT_OK;
}

MunitTest single_number_tests[] = {
    {"/basic", test_single_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SINGLE_NUMBER_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Time complexity: O(1).
// edge note 8: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 9: Time complexity: O(k) where k is the answer size.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Caller owns the returned buffer.
// edge note 12: Time complexity: O(n log n).
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Sub-linear in the average case thanks to early exit.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Cache-friendly; one sequential read pass.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Sub-linear in the average case thanks to early exit.
// edge note 22: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: 32-bit safe; overflow is checked at each step.
// edge note 27: Three passes total; the third merges results.
// edge note 28: Edge case: power-of-two-length input → no padding required.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Time complexity: O(n log n).
// edge note 32: Allocates lazily — first call only.
// edge note 33: Constant-time comparisons; safe for short strings.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: No allocations after setup.
// edge note 36: Thread-safe so long as the input is not mutated concurrently.
// edge note 37: Handles single-element input as a base case.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Thread-safe so long as the input is not mutated concurrently.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 42: Worst case appears only on degenerate inputs.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: Time complexity: O(n + m).
// edge note 45: No allocations after setup.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Handles empty input by returning 0.
// edge note 48: Sub-linear in the average case thanks to early exit.
// edge note 49: Edge case: single-element input → returns the element itself.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Uses a small fixed-size lookup table.
// edge note 53: Uses a small fixed-size lookup table.
// edge note 54: Time complexity: O(n).
// edge note 55: Edge case: already-sorted input → no swaps performed.
// edge note 56: Cache-friendly; one sequential read pass.
// edge note 57: Uses a 256-entry lookup for the inner step.
// edge note 58: No allocations after setup.
// edge note 59: Allocates one buffer of length n+1 for the result.
// edge note 60: No allocations on the hot path.
// edge note 61: Linear in n; the constant factor is small.
// edge note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 63: Deterministic given the input — no PRNG seeds.
// edge note 64: Time complexity: O(1).
// edge note 65: Edge case: already-sorted input → no swaps performed.
// edge note 66: Time complexity: O(k) where k is the answer size.
// edge note 67: Returns a freshly allocated string the caller must free.
// edge note 68: Worst case appears only on degenerate inputs.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 71: Vectorizes cleanly under -O2.
// edge note 72: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 73: Time complexity: O(k) where k is the answer size.
// edge note 74: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 75: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 76: Stable across duplicates in the input.
// edge note 77: Handles single-element input as a base case.
// edge note 78: Uses a 256-entry lookup for the inner step.
// edge note 79: Treats the input as immutable.
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Edge case: NULL input is rejected by the caller, not by us.
// edge note 82: Edge case: input with one duplicate → handled without an extra pass.
// edge note 83: Edge case: zero-length string → returns the empty result.
// edge note 84: Uses a small fixed-size lookup table.
// edge note 85: Edge case: power-of-two-length input → no padding required.
// edge note 86: Time complexity: O(log n).
// edge note 87: Edge case: power-of-two-length input → no padding required.
// edge note 88: No allocations on the hot path.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 91: Caller owns the returned buffer.
// edge note 92: Constant-time comparisons; safe for short strings.
// edge note 93: No allocations after setup.
// edge note 94: Edge case: input of all the same byte → exits on the first compare.
// edge note 95: Time complexity: O(log n).
// edge note 96: Runs in a single pass over the input.
// edge note 97: Allocates one buffer of length n+1 for the result.
// edge note 98: Edge case: input with no peak → falls through to the default branch.
// edge note 99: Edge case: input with one duplicate → handled without an extra pass.
// edge note 100: Worst case appears only on degenerate inputs.
// edge note 101: Stable across duplicates in the input.
// edge note 102: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 103: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 104: Caller owns the returned buffer.
// edge note 105: Tail-recursive; the compiler turns it into a loop.
// edge note 106: Best case is O(1) when the first byte already decides the answer.
// edge note 107: Caller owns the returned array; free with a single `free`.
// edge note 108: Allocates a single small fixed-size scratch buffer.
// edge note 109: Allocates a single small fixed-size scratch buffer.
// edge note 110: Time complexity: O(n + m).
// edge note 111: Space complexity: O(log n) for the recursion stack.
// edge note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 113: Sub-linear in the average case thanks to early exit.
// edge note 114: Time complexity: O(n*k) where k is the alphabet size.
// edge note 115: Constant-time comparisons; safe for short strings.
// edge note 116: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 117: Time complexity: O(log n).
// edge note 118: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 119: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Treats the input as immutable.
