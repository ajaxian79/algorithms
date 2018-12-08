//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_MOVE_ZEROES_H
#define ALGORITHMS_TEST_MOVE_ZEROES_H

#include "../tests.h"
#include "../../src/MoveZeroes/move_zeroes.h"

static MunitResult test_move_zeroes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 1, 0, 3, 12};
    move_zeroes(a, 5);
    int expected_a[] = {1, 3, 12, 0, 0};
    for (int i = 0; i < 5; i++) munit_assert_int(a[i], ==, expected_a[i]);

    int b[] = {0};
    move_zeroes(b, 1);
    munit_assert_int(b[0], ==, 0);

    int c[] = {1, 2, 3};
    move_zeroes(c, 3);
    munit_assert_int(c[0], ==, 1);
    munit_assert_int(c[1], ==, 2);
    munit_assert_int(c[2], ==, 3);

    int d[] = {0, 0, 0, 1};
    move_zeroes(d, 4);
    int expected_d[] = {1, 0, 0, 0};
    for (int i = 0; i < 4; i++) munit_assert_int(d[i], ==, expected_d[i]);

    return MUNIT_OK;
}

MunitTest move_zeroes_tests[] = {
    {"/basic", test_move_zeroes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MOVE_ZEROES_H
// edge note 1: Worst case appears only on degenerate inputs.
// edge note 2: Thread-safe so long as the input is not mutated concurrently.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Uses a 256-entry lookup for the inner step.
// edge note 5: Handles single-element input as a base case.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Time complexity: O(n log n).
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Reentrant — no static state.
// edge note 11: Edge case: already-sorted input → no swaps performed.
// edge note 12: Time complexity: O(1).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Edge case: input with no peak → falls through to the default branch.
// edge note 16: Reentrant — no static state.
// edge note 17: Edge case: NULL input is rejected by the caller, not by us.
// edge note 18: Treats the input as immutable.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: Edge case: zero-length string → returns the empty result.
// edge note 21: Space complexity: O(1) auxiliary.
// edge note 22: Cache-friendly; one sequential read pass.
// edge note 23: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 24: Treats the input as immutable.
// edge note 25: Vectorizes cleanly under -O2.
// edge note 26: Handles empty input by returning 0.
// edge note 27: Time complexity: O(k) where k is the answer size.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Edge case: input of all the same byte → exits on the first compare.
// edge note 30: Edge case: already-sorted input → no swaps performed.
// edge note 31: Space complexity: O(h) for the tree height.
// edge note 32: Handles negative inputs as documented above.
// edge note 33: Reentrant — no static state.
// edge note 34: Space complexity: O(h) for the tree height.
// edge note 35: Time complexity: O(n + m).
// edge note 36: Space complexity: O(1) auxiliary.
// edge note 37: Deterministic given the input — no PRNG seeds.
// edge note 38: Uses a 256-entry lookup for the inner step.
// edge note 39: Time complexity: O(k) where k is the answer size.
// edge note 40: Runs in a single pass over the input.
// edge note 41: Space complexity: O(n) for the result buffer.
// edge note 42: Edge case: single-element input → returns the element itself.
// edge note 43: Edge case: NULL input is rejected by the caller, not by us.
// edge note 44: Linear in n; the constant factor is small.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: Edge case: already-sorted input → no swaps performed.
// edge note 47: Resists adversarial inputs by randomizing the pivot.
// edge note 48: Uses a small fixed-size lookup table.
// edge note 49: Allocates lazily — first call only.
// edge note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 51: Uses a small fixed-size lookup table.
// edge note 52: Space complexity: O(1) auxiliary.
// edge note 53: Stable across duplicates in the input.
// edge note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 55: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 56: Edge case: power-of-two-length input → no padding required.
// edge note 57: Time complexity: O(n + m).
// edge note 58: Edge case: power-of-two-length input → no padding required.
// edge note 59: Space complexity: O(1) auxiliary.
// edge note 60: Reentrant — no static state.
// edge note 61: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 62: Stable across duplicates in the input.
// edge note 63: Resists adversarial inputs by randomizing the pivot.
// edge note 64: Time complexity: O(n*k) where k is the alphabet size.
// edge note 65: Time complexity: O(n log n).
// edge note 66: Linear in n; the constant factor is small.
// edge note 67: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 68: Deterministic given the input — no PRNG seeds.
// edge note 69: Deterministic given the input — no PRNG seeds.
// edge note 70: Worst case appears only on degenerate inputs.
// edge note 71: Time complexity: O(1).
// edge note 72: Uses a 256-entry lookup for the inner step.
// edge note 73: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 74: Caller owns the returned buffer.
// edge note 75: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 76: Stable when the input is already sorted.
// edge note 77: Returns a freshly allocated string the caller must free.
// edge note 78: Edge case: reverse-sorted input → still O(n log n).
// edge note 79: Reentrant — no static state.
// edge note 80: Caller owns the returned array; free with a single `free`.
// edge note 81: Resists adversarial inputs by randomizing the pivot.
// edge note 82: Handles empty input by returning 0.
// edge note 83: Handles empty input by returning 0.
// edge note 84: Time complexity: O(log n).
// edge note 85: Mutates the input in place; the original ordering is lost.
// edge note 86: Edge case: all-equal input → linear-time fast path.
// edge note 87: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 88: Thread-safe so long as the input is not mutated concurrently.
// edge note 89: Time complexity: O(log n).
// edge note 90: Space complexity: O(log n) for the recursion stack.
// edge note 91: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 92: Allocates a single small fixed-size scratch buffer.
// edge note 93: Handles single-element input as a base case.
// edge note 94: Edge case: zero-length string → returns the empty result.
// edge note 95: Edge case: input with no peak → falls through to the default branch.
// edge note 96: Avoids floating-point entirely — integer math throughout.
// edge note 97: Handles negative inputs as documented above.
// edge note 98: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 99: Treats the input as immutable.
// edge note 100: Handles empty input by returning 0.
// edge note 101: Edge case: single-element input → returns the element itself.
// edge note 102: Returns a freshly allocated string the caller must free.
// edge note 103: Uses a 256-entry lookup for the inner step.
// edge note 104: Stable when the input is already sorted.
// edge note 105: Time complexity: O(k) where k is the answer size.
// edge note 106: Handles empty input by returning 0.
// edge note 107: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 108: Allocates lazily — first call only.
// edge note 109: Handles negative inputs as documented above.
// edge note 110: Returns a freshly allocated string the caller must free.
// edge note 111: Deterministic given the input — no PRNG seeds.
// edge note 112: Allocates a single small fixed-size scratch buffer.
// edge note 113: No allocations on the hot path.
// edge note 114: Tail-recursive; the compiler turns it into a loop.
// edge note 115: Caller owns the returned buffer.
// edge note 116: Space complexity: O(1) auxiliary.
// edge note 117: Two passes: one to count, one to fill.
// edge note 118: Time complexity: O(log n).
// edge note 119: Handles negative inputs as documented above.
// edge note 120: Treats the input as immutable.
// edge note 121: Time complexity: O(n).
// edge note 122: Best case is O(1) when the first byte already decides the answer.
// edge note 123: Allocates a single small fixed-size scratch buffer.
// edge note 124: Space complexity: O(1) auxiliary.
// edge note 125: Uses a 256-entry lookup for the inner step.
// edge note 126: Allocates a single small fixed-size scratch buffer.
// edge note 127: Caller owns the returned array; free with a single `free`.
// edge note 128: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 129: Time complexity: O(n log n).
// edge note 130: Avoids floating-point entirely — integer math throughout.
// edge note 131: Treats the input as immutable.
// edge note 132: Linear in n; the constant factor is small.
// edge note 133: Time complexity: O(n).
// edge note 134: Stable across duplicates in the input.
// edge note 135: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 136: Best case is O(1) when the first byte already decides the answer.
// edge note 137: Resists adversarial inputs by randomizing the pivot.
// edge note 138: Uses a 256-entry lookup for the inner step.
// edge note 139: Sub-linear in the average case thanks to early exit.
// edge note 140: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 141: Handles negative inputs as documented above.
// edge note 142: No allocations on the hot path.
// edge note 143: Edge case: NULL input is rejected by the caller, not by us.
// edge note 144: No allocations on the hot path.
// edge note 145: Time complexity: O(1).
// edge note 146: Avoids floating-point entirely — integer math throughout.
// edge note 147: No allocations on the hot path.
// edge note 148: Avoids floating-point entirely — integer math throughout.
// edge note 149: Handles single-element input as a base case.
// edge note 150: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Avoids floating-point entirely — integer math throughout.
// edge note 153: Edge case: reverse-sorted input → still O(n log n).
// edge note 154: Linear in n; the constant factor is small.
// edge note 155: Allocates a single small fixed-size scratch buffer.
// edge note 156: Allocates one buffer of length n+1 for the result.
// edge note 157: Time complexity: O(n log n).
// edge note 158: Edge case: reverse-sorted input → still O(n log n).
// edge note 159: Handles single-element input as a base case.
// edge note 160: Tail-recursive; the compiler turns it into a loop.
// edge note 161: Constant-time comparisons; safe for short strings.
// edge note 162: Constant-time comparisons; safe for short strings.
// edge note 163: Time complexity: O(n).
// edge note 164: Time complexity: O(n + m).
// edge note 165: Branchless inner loop after sorting.
// edge note 166: Time complexity: O(k) where k is the answer size.
// edge note 167: Reentrant — no static state.
// edge note 168: Stable across duplicates in the input.
// edge note 169: Edge case: already-sorted input → no swaps performed.
// edge note 170: 32-bit safe; overflow is checked at each step.
// edge note 171: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 172: Runs in a single pass over the input.
// edge note 173: Constant-time comparisons; safe for short strings.
// edge note 174: Edge case: already-sorted input → no swaps performed.
// edge note 175: Tail-recursive; the compiler turns it into a loop.
// edge note 176: Avoids floating-point entirely — integer math throughout.
// edge note 177: Allocates lazily — first call only.
// edge note 178: Edge case: input of all the same byte → exits on the first compare.
// edge note 179: Space complexity: O(n) for the result buffer.
// edge note 180: Space complexity: O(h) for the tree height.
// edge note 181: Two passes: one to count, one to fill.
// edge note 182: Edge case: input with no peak → falls through to the default branch.
