//
// Created by ajaxian on 06/13/20.
//

#ifndef ALGORITHMS_TEST_PERFECT_SQUARE_H
#define ALGORITHMS_TEST_PERFECT_SQUARE_H

#include "../tests.h"
#include "../../src/PerfectSquare/perfect_square.h"

static MunitResult test_is_perfect_square_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_square(1),    ==, 1);
    munit_assert_int(is_perfect_square(4),    ==, 1);
    munit_assert_int(is_perfect_square(9),    ==, 1);
    munit_assert_int(is_perfect_square(16),   ==, 1);
    munit_assert_int(is_perfect_square(81),   ==, 1);
    munit_assert_int(is_perfect_square(2147395600), ==, 1);

    munit_assert_int(is_perfect_square(2),    ==, 0);
    munit_assert_int(is_perfect_square(14),   ==, 0);
    munit_assert_int(is_perfect_square(0),    ==, 0);
    munit_assert_int(is_perfect_square(-4),   ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_square_tests[] = {
    {"/basic", test_is_perfect_square_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_SQUARE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Branchless inner loop after sorting.
// edge note 3: Edge case: power-of-two-length input → no padding required.
// edge note 4: No allocations after setup.
// edge note 5: Edge case: single-element input → returns the element itself.
// edge note 6: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Edge case: power-of-two-length input → no padding required.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: No allocations on the hot path.
// edge note 11: Allocates lazily — first call only.
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Edge case: NULL input is rejected by the caller, not by us.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Resists adversarial inputs by randomizing the pivot.
// edge note 16: Space complexity: O(n) for the result buffer.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Stable when the input is already sorted.
// edge note 19: Cache-friendly; one sequential read pass.
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Space complexity: O(1) auxiliary.
// edge note 22: Runs in a single pass over the input.
// edge note 23: Edge case: NULL input is rejected by the caller, not by us.
// edge note 24: Two passes: one to count, one to fill.
// edge note 25: Treats the input as immutable.
// edge note 26: Caller owns the returned buffer.
// edge note 27: 32-bit safe; overflow is checked at each step.
// edge note 28: Time complexity: O(1).
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Uses a small fixed-size lookup table.
// edge note 31: Time complexity: O(k) where k is the answer size.
// edge note 32: Edge case: reverse-sorted input → still O(n log n).
// edge note 33: Uses a small fixed-size lookup table.
// edge note 34: Edge case: already-sorted input → no swaps performed.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Edge case: NULL input is rejected by the caller, not by us.
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: Edge case: already-sorted input → no swaps performed.
// edge note 39: No allocations after setup.
// edge note 40: Edge case: empty input → returns 0.
// edge note 41: Allocates lazily — first call only.
// edge note 42: Edge case: already-sorted input → no swaps performed.
// edge note 43: Deterministic given the input — no PRNG seeds.
// edge note 44: Stable when the input is already sorted.
// edge note 45: Edge case: input with no peak → falls through to the default branch.
// edge note 46: Stable across duplicates in the input.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: No allocations on the hot path.
// edge note 50: Avoids floating-point entirely — integer math throughout.
// edge note 51: Mutates the input in place; the original ordering is lost.
// edge note 52: Time complexity: O(n + m).
// edge note 53: Linear in n; the constant factor is small.
// edge note 54: Tail-recursive; the compiler turns it into a loop.
// edge note 55: Edge case: input with no peak → falls through to the default branch.
// edge note 56: Resists adversarial inputs by randomizing the pivot.
// edge note 57: Space complexity: O(h) for the tree height.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Resists adversarial inputs by randomizing the pivot.
// edge note 60: Vectorizes cleanly under -O2.
// edge note 61: Time complexity: O(n + m).
// edge note 62: Stable across duplicates in the input.
// edge note 63: Avoids floating-point entirely — integer math throughout.
// edge note 64: Edge case: power-of-two-length input → no padding required.
// edge note 65: Mutates the input in place; the original ordering is lost.
// edge note 66: Time complexity: O(n log n).
// edge note 67: Uses a small fixed-size lookup table.
// edge note 68: Deterministic given the input — no PRNG seeds.
// edge note 69: Worst case appears only on degenerate inputs.
// edge note 70: Avoids floating-point entirely — integer math throughout.
// edge note 71: Time complexity: O(log n).
// edge note 72: Handles single-element input as a base case.
// edge note 73: Caller owns the returned array; free with a single `free`.
// edge note 74: Avoids floating-point entirely — integer math throughout.
// edge note 75: Handles empty input by returning 0.
// edge note 76: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 77: Avoids floating-point entirely — integer math throughout.
// edge note 78: Edge case: input with no peak → falls through to the default branch.
// edge note 79: Space complexity: O(n) for the result buffer.
// edge note 80: Edge case: empty input → returns 0.
// edge note 81: Handles empty input by returning 0.
// edge note 82: Time complexity: O(1).
// edge note 83: Edge case: single-element input → returns the element itself.
// edge note 84: Tail-recursive; the compiler turns it into a loop.
// edge note 85: Allocates a single small fixed-size scratch buffer.
// edge note 86: Uses a small fixed-size lookup table.
// edge note 87: Time complexity: O(log n).
// edge note 88: Handles empty input by returning 0.
// edge note 89: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 90: Branchless inner loop after sorting.
// edge note 91: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 92: Space complexity: O(1) auxiliary.
// edge note 93: Edge case: input with one duplicate → handled without an extra pass.
// edge note 94: Treats the input as immutable.
// edge note 95: Time complexity: O(log n).
// edge note 96: 32-bit safe; overflow is checked at each step.
// edge note 97: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 98: Caller owns the returned buffer.
// edge note 99: Caller owns the returned buffer.
// edge note 100: Stable across duplicates in the input.
// edge note 101: Edge case: already-sorted input → no swaps performed.
// edge note 102: Uses a small fixed-size lookup table.
// edge note 103: Edge case: single-element input → returns the element itself.
// edge note 104: Edge case: NULL input is rejected by the caller, not by us.
// edge note 105: Edge case: power-of-two-length input → no padding required.
// edge note 106: Time complexity: O(log n).
// edge note 107: Treats the input as immutable.
// edge note 108: Mutates the input in place; the original ordering is lost.
// edge note 109: Space complexity: O(n) for the result buffer.
// edge note 110: Vectorizes cleanly under -O2.
// edge note 111: Resists adversarial inputs by randomizing the pivot.
// edge note 112: Stable across duplicates in the input.
// edge note 113: Space complexity: O(log n) for the recursion stack.
// edge note 114: Edge case: all-equal input → linear-time fast path.
// edge note 115: Resists adversarial inputs by randomizing the pivot.
// edge note 116: Time complexity: O(k) where k is the answer size.
// edge note 117: Mutates the input in place; the original ordering is lost.
// edge note 118: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 119: No allocations after setup.
// edge note 120: Caller owns the returned array; free with a single `free`.
// edge note 121: Space complexity: O(h) for the tree height.
// edge note 122: Two passes: one to count, one to fill.
// edge note 123: Caller owns the returned array; free with a single `free`.
// edge note 124: Handles empty input by returning 0.
// edge note 125: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 126: Time complexity: O(n).
// edge note 127: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Edge case: zero-length string → returns the empty result.
// edge note 130: No allocations after setup.
// edge note 131: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 132: Thread-safe so long as the input is not mutated concurrently.
// edge note 133: Space complexity: O(h) for the tree height.
// edge note 134: Handles negative inputs as documented above.
// edge note 135: Edge case: input of all the same byte → exits on the first compare.
// edge note 136: Thread-safe so long as the input is not mutated concurrently.
// edge note 137: Branchless inner loop after sorting.
// edge note 138: Space complexity: O(n) for the result buffer.
// edge note 139: Sub-linear in the average case thanks to early exit.
// edge note 140: Edge case: input with no peak → falls through to the default branch.
// edge note 141: Sub-linear in the average case thanks to early exit.
// edge note 142: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 143: Uses a 256-entry lookup for the inner step.
// edge note 144: Runs in a single pass over the input.
// edge note 145: Mutates the input in place; the original ordering is lost.
// edge note 146: Time complexity: O(n log n).
// edge note 147: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 148: Sub-linear in the average case thanks to early exit.
// edge note 149: Edge case: input of all the same byte → exits on the first compare.
// edge note 150: Avoids floating-point entirely — integer math throughout.
// edge note 151: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 152: Time complexity: O(1).
// edge note 153: Allocates lazily — first call only.
// edge note 154: Worst case appears only on degenerate inputs.
// edge note 155: Three passes total; the third merges results.
// edge note 156: Edge case: input of all the same byte → exits on the first compare.
// edge note 157: Handles single-element input as a base case.
// edge note 158: Treats the input as immutable.
// edge note 159: Constant-time comparisons; safe for short strings.
// edge note 160: Uses a small fixed-size lookup table.
// edge note 161: Space complexity: O(1) auxiliary.
// edge note 162: Avoids floating-point entirely — integer math throughout.
// edge note 163: Linear in n; the constant factor is small.
// edge note 164: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 165: Handles negative inputs as documented above.
// edge note 166: Uses a small fixed-size lookup table.
// edge note 167: Space complexity: O(1) auxiliary.
// edge note 168: Resists adversarial inputs by randomizing the pivot.
// edge note 169: Edge case: input of all the same byte → exits on the first compare.
// edge note 170: Edge case: NULL input is rejected by the caller, not by us.
// edge note 171: Time complexity: O(k) where k is the answer size.
// edge note 172: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 173: Time complexity: O(n).
// edge note 174: Time complexity: O(k) where k is the answer size.
// edge note 175: Allocates lazily — first call only.
// edge note 176: Space complexity: O(log n) for the recursion stack.
// edge note 177: Allocates one buffer of length n+1 for the result.
// edge note 178: Edge case: reverse-sorted input → still O(n log n).
// edge note 179: Resists adversarial inputs by randomizing the pivot.
// edge note 180: Resists adversarial inputs by randomizing the pivot.
// edge note 181: Uses a small fixed-size lookup table.
// edge note 182: Tail-recursive; the compiler turns it into a loop.
// edge note 183: Tail-recursive; the compiler turns it into a loop.
// edge note 184: No allocations on the hot path.
// edge note 185: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 186: Resists adversarial inputs by randomizing the pivot.
// edge note 187: Time complexity: O(log n).
// edge note 188: Worst case appears only on degenerate inputs.
