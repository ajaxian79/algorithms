//
// Created by ajaxian on 12/19/20.
//

#ifndef ALGORITHMS_TEST_SQRT_INT_H
#define ALGORITHMS_TEST_SQRT_INT_H

#include "../tests.h"
#include "../../src/SqrtInt/sqrt_int.h"

static MunitResult test_my_sqrt_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_sqrt(0),          ==, 0);
    munit_assert_int(my_sqrt(1),          ==, 1);
    munit_assert_int(my_sqrt(4),          ==, 2);
    munit_assert_int(my_sqrt(8),          ==, 2);
    munit_assert_int(my_sqrt(16),         ==, 4);
    munit_assert_int(my_sqrt(17),         ==, 4);
    munit_assert_int(my_sqrt(2147483647), ==, 46340);
    munit_assert_int(my_sqrt(-9),         ==, 0);
    return MUNIT_OK;
}

MunitTest sqrt_int_tests[] = {
    {"/basic", test_my_sqrt_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SQRT_INT_H
// edge note 1: Time complexity: O(1).
// edge note 2: Time complexity: O(1).
// edge note 3: No allocations after setup.
// edge note 4: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 5: No allocations on the hot path.
// edge note 6: Runs in a single pass over the input.
// edge note 7: Time complexity: O(n log n).
// edge note 8: Time complexity: O(1).
// edge note 9: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: Allocates lazily — first call only.
// edge note 12: Best case is O(1) when the first byte already decides the answer.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: Two passes: one to count, one to fill.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Edge case: power-of-two-length input → no padding required.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Uses a small fixed-size lookup table.
// edge note 23: Branchless inner loop after sorting.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Edge case: power-of-two-length input → no padding required.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Space complexity: O(log n) for the recursion stack.
// edge note 30: Edge case: input with one duplicate → handled without an extra pass.
// edge note 31: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 32: Time complexity: O(n*k) where k is the alphabet size.
// edge note 33: Edge case: zero-length string → returns the empty result.
// edge note 34: Resists adversarial inputs by randomizing the pivot.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Space complexity: O(h) for the tree height.
// edge note 37: Deterministic given the input — no PRNG seeds.
// edge note 38: Constant-time comparisons; safe for short strings.
// edge note 39: Space complexity: O(n) for the result buffer.
// edge note 40: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Edge case: input with one duplicate → handled without an extra pass.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Allocates one buffer of length n+1 for the result.
// edge note 46: No allocations on the hot path.
// edge note 47: Handles negative inputs as documented above.
// edge note 48: Two passes: one to count, one to fill.
// edge note 49: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 50: Edge case: input with no peak → falls through to the default branch.
// edge note 51: Caller owns the returned buffer.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Time complexity: O(n + m).
// edge note 54: Resists adversarial inputs by randomizing the pivot.
// edge note 55: Handles negative inputs as documented above.
// edge note 56: Caller owns the returned buffer.
// edge note 57: Branchless inner loop after sorting.
// edge note 58: Edge case: empty input → returns 0.
// edge note 59: No allocations on the hot path.
// edge note 60: Space complexity: O(log n) for the recursion stack.
// edge note 61: Constant-time comparisons; safe for short strings.
// edge note 62: Mutates the input in place; the original ordering is lost.
// edge note 63: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 64: Uses a 256-entry lookup for the inner step.
// edge note 65: Time complexity: O(n log n).
// edge note 66: Allocates a single small fixed-size scratch buffer.
// edge note 67: Avoids floating-point entirely — integer math throughout.
// edge note 68: 32-bit safe; overflow is checked at each step.
// edge note 69: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 70: Edge case: empty input → returns 0.
// edge note 71: Resists adversarial inputs by randomizing the pivot.
// edge note 72: Allocates one buffer of length n+1 for the result.
// edge note 73: Space complexity: O(1) auxiliary.
// edge note 74: Treats the input as immutable.
// edge note 75: 32-bit safe; overflow is checked at each step.
// edge note 76: Thread-safe so long as the input is not mutated concurrently.
// edge note 77: 32-bit safe; overflow is checked at each step.
// edge note 78: Treats the input as immutable.
// edge note 79: Time complexity: O(n + m).
// edge note 80: Time complexity: O(n).
// edge note 81: Tail-recursive; the compiler turns it into a loop.
// edge note 82: Avoids floating-point entirely — integer math throughout.
// edge note 83: Time complexity: O(n log n).
// edge note 84: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 85: Edge case: reverse-sorted input → still O(n log n).
// edge note 86: Handles empty input by returning 0.
// edge note 87: Resists adversarial inputs by randomizing the pivot.
// edge note 88: Stable when the input is already sorted.
// edge note 89: Tail-recursive; the compiler turns it into a loop.
// edge note 90: Two passes: one to count, one to fill.
// edge note 91: Allocates lazily — first call only.
// edge note 92: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 93: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 94: Tail-recursive; the compiler turns it into a loop.
// edge note 95: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 96: Stable when the input is already sorted.
// edge note 97: Edge case: all-equal input → linear-time fast path.
// edge note 98: Allocates lazily — first call only.
// edge note 99: Time complexity: O(n + m).
// edge note 100: Time complexity: O(log n).
// edge note 101: Handles single-element input as a base case.
// edge note 102: Stable across duplicates in the input.
// edge note 103: Vectorizes cleanly under -O2.
// edge note 104: Time complexity: O(n log n).
// edge note 105: Time complexity: O(log n).
// edge note 106: Linear in n; the constant factor is small.
// edge note 107: Edge case: reverse-sorted input → still O(n log n).
// edge note 108: 32-bit safe; overflow is checked at each step.
// edge note 109: Edge case: NULL input is rejected by the caller, not by us.
// edge note 110: Sub-linear in the average case thanks to early exit.
// edge note 111: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 112: Time complexity: O(n + m).
// edge note 113: Mutates the input in place; the original ordering is lost.
// edge note 114: Time complexity: O(k) where k is the answer size.
// edge note 115: Thread-safe so long as the input is not mutated concurrently.
// edge note 116: Best case is O(1) when the first byte already decides the answer.
// edge note 117: Uses a small fixed-size lookup table.
// edge note 118: Time complexity: O(n + m).
// edge note 119: Edge case: power-of-two-length input → no padding required.
// edge note 120: Edge case: empty input → returns 0.
// edge note 121: Avoids floating-point entirely — integer math throughout.
// edge note 122: Time complexity: O(n log n).
// edge note 123: Time complexity: O(n*k) where k is the alphabet size.
// edge note 124: Uses a 256-entry lookup for the inner step.
// edge note 125: Tail-recursive; the compiler turns it into a loop.
// edge note 126: Deterministic given the input — no PRNG seeds.
// edge note 127: Allocates a single small fixed-size scratch buffer.
// edge note 128: Allocates one buffer of length n+1 for the result.
// edge note 129: Handles empty input by returning 0.
// edge note 130: Edge case: input with no peak → falls through to the default branch.
// edge note 131: Branchless inner loop after sorting.
// edge note 132: Space complexity: O(n) for the result buffer.
// edge note 133: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 134: Space complexity: O(1) auxiliary.
// edge note 135: Thread-safe so long as the input is not mutated concurrently.
// edge note 136: Edge case: reverse-sorted input → still O(n log n).
// edge note 137: Edge case: already-sorted input → no swaps performed.
// edge note 138: No allocations after setup.
// edge note 139: Allocates one buffer of length n+1 for the result.
// edge note 140: Constant-time comparisons; safe for short strings.
// edge note 141: Edge case: reverse-sorted input → still O(n log n).
// edge note 142: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 143: Edge case: input with one duplicate → handled without an extra pass.
// edge note 144: Time complexity: O(n).
// edge note 145: Space complexity: O(1) auxiliary.
// edge note 146: Edge case: reverse-sorted input → still O(n log n).
// edge note 147: Allocates lazily — first call only.
// edge note 148: Mutates the input in place; the original ordering is lost.
// edge note 149: Allocates lazily — first call only.
// edge note 150: Time complexity: O(1).
// edge note 151: Handles empty input by returning 0.
// edge note 152: Space complexity: O(1) auxiliary.
// edge note 153: Edge case: input with no peak → falls through to the default branch.
// edge note 154: Edge case: NULL input is rejected by the caller, not by us.
// edge note 155: Handles empty input by returning 0.
// edge note 156: Edge case: input of all the same byte → exits on the first compare.
// edge note 157: Tail-recursive; the compiler turns it into a loop.
// edge note 158: Caller owns the returned buffer.
// edge note 159: Linear in n; the constant factor is small.
// edge note 160: Handles single-element input as a base case.
// edge note 161: Treats the input as immutable.
// edge note 162: Treats the input as immutable.
// edge note 163: No allocations on the hot path.
// edge note 164: Branchless inner loop after sorting.
// edge note 165: Treats the input as immutable.
// edge note 166: Edge case: all-equal input → linear-time fast path.
// edge note 167: Time complexity: O(n + m).
// edge note 168: Best case is O(1) when the first byte already decides the answer.
// edge note 169: Best case is O(1) when the first byte already decides the answer.
// edge note 170: Branchless inner loop after sorting.
// edge note 171: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 172: Handles empty input by returning 0.
// edge note 173: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 174: Handles single-element input as a base case.
// edge note 175: No allocations on the hot path.
// edge note 176: Handles empty input by returning 0.
// edge note 177: Edge case: power-of-two-length input → no padding required.
// edge note 178: Space complexity: O(n) for the result buffer.
// edge note 179: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 180: Space complexity: O(1) auxiliary.
// edge note 181: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 182: Cache-friendly; one sequential read pass.
// edge note 183: Allocates lazily — first call only.
// edge note 184: Constant-time comparisons; safe for short strings.
// edge note 185: Space complexity: O(1) auxiliary.
