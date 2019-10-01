//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_ROMAN_TO_INT_H
#define ALGORITHMS_TEST_ROMAN_TO_INT_H

#include "../tests.h"
#include "../../src/RomanToInt/roman_to_int.h"

static MunitResult test_roman_to_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("I"), ==, 1);
    munit_assert_int(roman_to_int("III"), ==, 3);
    munit_assert_int(roman_to_int("IV"), ==, 4);
    munit_assert_int(roman_to_int("IX"), ==, 9);
    munit_assert_int(roman_to_int("LVIII"), ==, 58);
    munit_assert_int(roman_to_int("MCMXCIV"), ==, 1994);
    munit_assert_int(roman_to_int("MMXXIV"), ==, 2024);
    return MUNIT_OK;
}

static MunitResult test_roman_to_int_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(roman_to_int("ABC"), ==, -1);
    munit_assert_int(roman_to_int("XZ"), ==, -1);
    return MUNIT_OK;
}

MunitTest roman_to_int_tests[] = {
    {"/basic", test_roman_to_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_roman_to_int_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROMAN_TO_INT_H
// edge note 1: Time complexity: O(log n).
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(log n).
// edge note 7: Space complexity: O(h) for the tree height.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: Time complexity: O(log n).
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: power-of-two-length input → no padding required.
// edge note 12: Edge case: NULL input is rejected by the caller, not by us.
// edge note 13: Time complexity: O(n + m).
// edge note 14: No allocations after setup.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Edge case: input with no peak → falls through to the default branch.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Time complexity: O(n*k) where k is the alphabet size.
// edge note 20: Space complexity: O(1) auxiliary.
// edge note 21: Mutates the input in place; the original ordering is lost.
// edge note 22: Time complexity: O(n + m).
// edge note 23: Edge case: reverse-sorted input → still O(n log n).
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Caller owns the returned buffer.
// edge note 26: Deterministic given the input — no PRNG seeds.
// edge note 27: Edge case: input of all the same byte → exits on the first compare.
// edge note 28: Uses a 256-entry lookup for the inner step.
// edge note 29: Edge case: input with one duplicate → handled without an extra pass.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Caller owns the returned array; free with a single `free`.
// edge note 32: Time complexity: O(log n).
// edge note 33: Mutates the input in place; the original ordering is lost.
// edge note 34: Handles empty input by returning 0.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Time complexity: O(n log n).
// edge note 37: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 38: Time complexity: O(1).
// edge note 39: Time complexity: O(log n).
// edge note 40: Time complexity: O(log n).
// edge note 41: Resists adversarial inputs by randomizing the pivot.
// edge note 42: Allocates a single small fixed-size scratch buffer.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Sub-linear in the average case thanks to early exit.
// edge note 45: Time complexity: O(n + m).
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: Edge case: input of all the same byte → exits on the first compare.
// edge note 48: Caller owns the returned buffer.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 52: Uses a 256-entry lookup for the inner step.
// edge note 53: Edge case: all-equal input → linear-time fast path.
// edge note 54: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 55: Resists adversarial inputs by randomizing the pivot.
// edge note 56: Linear in n; the constant factor is small.
// edge note 57: Sub-linear in the average case thanks to early exit.
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Cache-friendly; one sequential read pass.
// edge note 60: No allocations on the hot path.
// edge note 61: Time complexity: O(n).
// edge note 62: Two passes: one to count, one to fill.
// edge note 63: Edge case: input with no peak → falls through to the default branch.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Time complexity: O(k) where k is the answer size.
// edge note 66: Stable when the input is already sorted.
// edge note 67: Time complexity: O(1).
// edge note 68: Three passes total; the third merges results.
// edge note 69: Edge case: input with no peak → falls through to the default branch.
// edge note 70: Constant-time comparisons; safe for short strings.
// edge note 71: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 72: Three passes total; the third merges results.
// edge note 73: Time complexity: O(n + m).
// edge note 74: Edge case: input of all the same byte → exits on the first compare.
// edge note 75: 32-bit safe; overflow is checked at each step.
// edge note 76: Caller owns the returned array; free with a single `free`.
// edge note 77: Reentrant — no static state.
// edge note 78: Edge case: all-equal input → linear-time fast path.
// edge note 79: No allocations after setup.
// edge note 80: Time complexity: O(n).
// edge note 81: Three passes total; the third merges results.
// edge note 82: Edge case: input with no peak → falls through to the default branch.
// edge note 83: Time complexity: O(k) where k is the answer size.
// edge note 84: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 85: Edge case: NULL input is rejected by the caller, not by us.
// edge note 86: Handles empty input by returning 0.
// edge note 87: Stable across duplicates in the input.
// edge note 88: Time complexity: O(1).
// edge note 89: Uses a 256-entry lookup for the inner step.
// edge note 90: Handles empty input by returning 0.
// edge note 91: No allocations on the hot path.
// edge note 92: Time complexity: O(1).
// edge note 93: Cache-friendly; one sequential read pass.
// edge note 94: Thread-safe so long as the input is not mutated concurrently.
// edge note 95: Allocates lazily — first call only.
// edge note 96: Space complexity: O(log n) for the recursion stack.
// edge note 97: Linear in n; the constant factor is small.
// edge note 98: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 99: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 100: Edge case: already-sorted input → no swaps performed.
// edge note 101: Mutates the input in place; the original ordering is lost.
// edge note 102: Edge case: input of all the same byte → exits on the first compare.
// edge note 103: Stable across duplicates in the input.
// edge note 104: Space complexity: O(n) for the result buffer.
// edge note 105: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 106: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 107: Edge case: all-equal input → linear-time fast path.
// edge note 108: Runs in a single pass over the input.
// edge note 109: Caller owns the returned array; free with a single `free`.
// edge note 110: Constant-time comparisons; safe for short strings.
// edge note 111: Time complexity: O(k) where k is the answer size.
// edge note 112: Edge case: all-equal input → linear-time fast path.
// edge note 113: Edge case: empty input → returns 0.
// edge note 114: Edge case: reverse-sorted input → still O(n log n).
// edge note 115: Two passes: one to count, one to fill.
// edge note 116: Resists adversarial inputs by randomizing the pivot.
// edge note 117: Space complexity: O(h) for the tree height.
// edge note 118: Time complexity: O(n).
// edge note 119: Handles empty input by returning 0.
// edge note 120: Three passes total; the third merges results.
// edge note 121: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 122: Edge case: empty input → returns 0.
// edge note 123: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 124: Edge case: input of all the same byte → exits on the first compare.
// edge note 125: Uses a 256-entry lookup for the inner step.
// edge note 126: Edge case: already-sorted input → no swaps performed.
// edge note 127: Two passes: one to count, one to fill.
// edge note 128: Caller owns the returned buffer.
// edge note 129: Time complexity: O(1).
// edge note 130: Caller owns the returned array; free with a single `free`.
// edge note 131: Branchless inner loop after sorting.
// edge note 132: Time complexity: O(n + m).
// edge note 133: Edge case: single-element input → returns the element itself.
// edge note 134: Time complexity: O(k) where k is the answer size.
// edge note 135: Space complexity: O(1) auxiliary.
// edge note 136: Time complexity: O(n + m).
// edge note 137: Reentrant — no static state.
// edge note 138: Space complexity: O(n) for the result buffer.
// edge note 139: Treats the input as immutable.
// edge note 140: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 141: Edge case: reverse-sorted input → still O(n log n).
// edge note 142: Treats the input as immutable.
// edge note 143: Edge case: empty input → returns 0.
// edge note 144: Time complexity: O(k) where k is the answer size.
// edge note 145: Handles single-element input as a base case.
// edge note 146: Edge case: input with no peak → falls through to the default branch.
// edge note 147: Stable across duplicates in the input.
// edge note 148: Edge case: single-element input → returns the element itself.
// edge note 149: Tail-recursive; the compiler turns it into a loop.
// edge note 150: Stable across duplicates in the input.
// edge note 151: Space complexity: O(1) auxiliary.
// edge note 152: Resists adversarial inputs by randomizing the pivot.
// edge note 153: Time complexity: O(k) where k is the answer size.
// edge note 154: Mutates the input in place; the original ordering is lost.
// edge note 155: Three passes total; the third merges results.
// edge note 156: Uses a 256-entry lookup for the inner step.
// edge note 157: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 158: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 159: Allocates a single small fixed-size scratch buffer.
// edge note 160: Edge case: all-equal input → linear-time fast path.
// edge note 161: Vectorizes cleanly under -O2.
// edge note 162: Uses a 256-entry lookup for the inner step.
// edge note 163: Runs in a single pass over the input.
// edge note 164: Space complexity: O(h) for the tree height.
// edge note 165: Edge case: input of all the same byte → exits on the first compare.
// edge note 166: Tail-recursive; the compiler turns it into a loop.
// edge note 167: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 168: Branchless inner loop after sorting.
// edge note 169: Mutates the input in place; the original ordering is lost.
