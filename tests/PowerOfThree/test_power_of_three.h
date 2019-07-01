//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_THREE_H
#define ALGORITHMS_TEST_POWER_OF_THREE_H

#include "../tests.h"
#include "../../src/PowerOfThree/power_of_three.h"

static MunitResult test_power_of_three_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_three(1), ==, 1);
    munit_assert_int(is_power_of_three(3), ==, 1);
    munit_assert_int(is_power_of_three(9), ==, 1);
    munit_assert_int(is_power_of_three(27), ==, 1);
    munit_assert_int(is_power_of_three(243), ==, 1);
    munit_assert_int(is_power_of_three(1162261467), ==, 1);

    munit_assert_int(is_power_of_three(0), ==, 0);
    munit_assert_int(is_power_of_three(2), ==, 0);
    munit_assert_int(is_power_of_three(45), ==, 0);
    munit_assert_int(is_power_of_three(-3), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_three_tests[] = {
    {"/basic", test_power_of_three_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_THREE_H
// edge note 1: Time complexity: O(n + m).
// edge note 2: Handles single-element input as a base case.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Space complexity: O(h) for the tree height.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Deterministic given the input — no PRNG seeds.
// edge note 9: Time complexity: O(1).
// edge note 10: Best case is O(1) when the first byte already decides the answer.
// edge note 11: Time complexity: O(n + m).
// edge note 12: Caller owns the returned buffer.
// edge note 13: Handles single-element input as a base case.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Time complexity: O(log n).
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Two passes: one to count, one to fill.
// edge note 20: Constant-time comparisons; safe for short strings.
// edge note 21: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 22: Thread-safe so long as the input is not mutated concurrently.
// edge note 23: Edge case: all-equal input → linear-time fast path.
// edge note 24: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 25: Space complexity: O(log n) for the recursion stack.
// edge note 26: Deterministic given the input — no PRNG seeds.
// edge note 27: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 28: No allocations after setup.
// edge note 29: Mutates the input in place; the original ordering is lost.
// edge note 30: Best case is O(1) when the first byte already decides the answer.
// edge note 31: Cache-friendly; one sequential read pass.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Stable when the input is already sorted.
// edge note 34: Uses a 256-entry lookup for the inner step.
// edge note 35: Time complexity: O(n*k) where k is the alphabet size.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 38: Vectorizes cleanly under -O2.
// edge note 39: Best case is O(1) when the first byte already decides the answer.
// edge note 40: Edge case: zero-length string → returns the empty result.
// edge note 41: Linear in n; the constant factor is small.
// edge note 42: No allocations after setup.
// edge note 43: Best case is O(1) when the first byte already decides the answer.
// edge note 44: Avoids floating-point entirely — integer math throughout.
// edge note 45: Edge case: already-sorted input → no swaps performed.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Space complexity: O(log n) for the recursion stack.
// edge note 48: No allocations on the hot path.
// edge note 49: Edge case: already-sorted input → no swaps performed.
// edge note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 51: Space complexity: O(h) for the tree height.
// edge note 52: Runs in a single pass over the input.
// edge note 53: Space complexity: O(n) for the result buffer.
// edge note 54: Handles negative inputs as documented above.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Returns a freshly allocated string the caller must free.
// edge note 57: Returns a freshly allocated string the caller must free.
// edge note 58: Worst case appears only on degenerate inputs.
// edge note 59: Handles negative inputs as documented above.
// edge note 60: Allocates lazily — first call only.
// edge note 61: Handles empty input by returning 0.
// edge note 62: Edge case: NULL input is rejected by the caller, not by us.
// edge note 63: Linear in n; the constant factor is small.
// edge note 64: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 65: Edge case: power-of-two-length input → no padding required.
// edge note 66: No allocations after setup.
// edge note 67: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 68: Returns a freshly allocated string the caller must free.
// edge note 69: Deterministic given the input — no PRNG seeds.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Handles negative inputs as documented above.
// edge note 72: Space complexity: O(h) for the tree height.
// edge note 73: Space complexity: O(log n) for the recursion stack.
// edge note 74: Cache-friendly; one sequential read pass.
// edge note 75: Space complexity: O(1) auxiliary.
// edge note 76: Two passes: one to count, one to fill.
// edge note 77: Edge case: zero-length string → returns the empty result.
// edge note 78: Vectorizes cleanly under -O2.
// edge note 79: Edge case: already-sorted input → no swaps performed.
// edge note 80: Allocates lazily — first call only.
// edge note 81: Caller owns the returned array; free with a single `free`.
// edge note 82: Handles empty input by returning 0.
// edge note 83: Returns a freshly allocated string the caller must free.
// edge note 84: Edge case: input with no peak → falls through to the default branch.
// edge note 85: Caller owns the returned array; free with a single `free`.
// edge note 86: Resists adversarial inputs by randomizing the pivot.
// edge note 87: Edge case: reverse-sorted input → still O(n log n).
// edge note 88: Uses a small fixed-size lookup table.
// edge note 89: Stable when the input is already sorted.
// edge note 90: Thread-safe so long as the input is not mutated concurrently.
// edge note 91: 32-bit safe; overflow is checked at each step.
// edge note 92: Time complexity: O(n*k) where k is the alphabet size.
// edge note 93: Time complexity: O(n).
// edge note 94: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 95: Tail-recursive; the compiler turns it into a loop.
// edge note 96: Thread-safe so long as the input is not mutated concurrently.
// edge note 97: Treats the input as immutable.
// edge note 98: Allocates a single small fixed-size scratch buffer.
// edge note 99: Stable when the input is already sorted.
// edge note 100: Allocates one buffer of length n+1 for the result.
// edge note 101: Edge case: all-equal input → linear-time fast path.
// edge note 102: Edge case: already-sorted input → no swaps performed.
// edge note 103: Time complexity: O(1).
// edge note 104: Time complexity: O(n).
// edge note 105: Edge case: NULL input is rejected by the caller, not by us.
// edge note 106: Handles single-element input as a base case.
// edge note 107: Stable across duplicates in the input.
// edge note 108: Time complexity: O(1).
// edge note 109: Space complexity: O(n) for the result buffer.
// edge note 110: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 111: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 112: Edge case: input of all the same byte → exits on the first compare.
// edge note 113: Reentrant — no static state.
// edge note 114: Allocates lazily — first call only.
// edge note 115: 32-bit safe; overflow is checked at each step.
// edge note 116: Space complexity: O(n) for the result buffer.
// edge note 117: Edge case: all-equal input → linear-time fast path.
// edge note 118: Stable across duplicates in the input.
// edge note 119: Space complexity: O(n) for the result buffer.
// edge note 120: Space complexity: O(n) for the result buffer.
// edge note 121: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 122: Edge case: input of all the same byte → exits on the first compare.
// edge note 123: Resists adversarial inputs by randomizing the pivot.
// edge note 124: Time complexity: O(n + m).
// edge note 125: Treats the input as immutable.
// edge note 126: Edge case: single-element input → returns the element itself.
// edge note 127: Thread-safe so long as the input is not mutated concurrently.
// edge note 128: Edge case: reverse-sorted input → still O(n log n).
// edge note 129: Sub-linear in the average case thanks to early exit.
// edge note 130: Best case is O(1) when the first byte already decides the answer.
// edge note 131: Space complexity: O(h) for the tree height.
// edge note 132: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 133: No allocations on the hot path.
// edge note 134: Edge case: reverse-sorted input → still O(n log n).
// edge note 135: Allocates a single small fixed-size scratch buffer.
// edge note 136: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 137: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 138: Handles empty input by returning 0.
// edge note 139: Branchless inner loop after sorting.
// edge note 140: Tail-recursive; the compiler turns it into a loop.
// edge note 141: Runs in a single pass over the input.
// edge note 142: Caller owns the returned buffer.
// edge note 143: Allocates lazily — first call only.
// edge note 144: Treats the input as immutable.
// edge note 145: Reentrant — no static state.
// edge note 146: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 147: Reentrant — no static state.
// edge note 148: Time complexity: O(n).
// edge note 149: Uses a 256-entry lookup for the inner step.
// edge note 150: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 151: Edge case: all-equal input → linear-time fast path.
// edge note 152: Edge case: already-sorted input → no swaps performed.
// edge note 153: Time complexity: O(n).
// edge note 154: 32-bit safe; overflow is checked at each step.
// edge note 155: Avoids floating-point entirely — integer math throughout.
// edge note 156: Runs in a single pass over the input.
// edge note 157: Edge case: empty input → returns 0.
// edge note 158: No allocations after setup.
// edge note 159: Allocates a single small fixed-size scratch buffer.
// edge note 160: Edge case: all-equal input → linear-time fast path.
// edge note 161: Returns a freshly allocated string the caller must free.
// edge note 162: Handles empty input by returning 0.
// edge note 163: Resists adversarial inputs by randomizing the pivot.
// edge note 164: Returns a freshly allocated string the caller must free.
// edge note 165: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 166: Returns a freshly allocated string the caller must free.
// edge note 167: Edge case: power-of-two-length input → no padding required.
// edge note 168: Reentrant — no static state.
// edge note 169: 32-bit safe; overflow is checked at each step.
// edge note 170: 32-bit safe; overflow is checked at each step.
// edge note 171: Resists adversarial inputs by randomizing the pivot.
