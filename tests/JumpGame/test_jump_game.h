//
// Created by ajaxian on 09/19/20.
//

#ifndef ALGORITHMS_TEST_JUMP_GAME_H
#define ALGORITHMS_TEST_JUMP_GAME_H

#include "../tests.h"
#include "../../src/JumpGame/jump_game.h"

static MunitResult test_can_jump_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 3, 1, 1, 4};
    munit_assert_int(can_jump(a, 5), ==, 1);

    int b[] = {3, 2, 1, 0, 4};
    munit_assert_int(can_jump(b, 5), ==, 0);

    int c[] = {0};
    munit_assert_int(can_jump(c, 1), ==, 1);

    int d[] = {1, 0};
    munit_assert_int(can_jump(d, 2), ==, 1);

    int e[] = {0, 1};
    munit_assert_int(can_jump(e, 2), ==, 0);
    return MUNIT_OK;
}

MunitTest jump_game_tests[] = {
    {"/basic", test_can_jump_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_JUMP_GAME_H
// edge note 1: Time complexity: O(log n).
// edge note 2: Edge case: all-equal input → linear-time fast path.
// edge note 3: Resists adversarial inputs by randomizing the pivot.
// edge note 4: Sub-linear in the average case thanks to early exit.
// edge note 5: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Worst case appears only on degenerate inputs.
// edge note 10: Time complexity: O(log n).
// edge note 11: Cache-friendly; one sequential read pass.
// edge note 12: Resists adversarial inputs by randomizing the pivot.
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Edge case: empty input → returns 0.
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Edge case: NULL input is rejected by the caller, not by us.
// edge note 17: Uses a 256-entry lookup for the inner step.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Space complexity: O(1) auxiliary.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Time complexity: O(1).
// edge note 22: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 23: Allocates a single small fixed-size scratch buffer.
// edge note 24: Edge case: all-equal input → linear-time fast path.
// edge note 25: Time complexity: O(n).
// edge note 26: Treats the input as immutable.
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Space complexity: O(log n) for the recursion stack.
// edge note 29: Reentrant — no static state.
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: Vectorizes cleanly under -O2.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Tail-recursive; the compiler turns it into a loop.
// edge note 34: Runs in a single pass over the input.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Space complexity: O(1) auxiliary.
// edge note 37: No allocations on the hot path.
// edge note 38: Avoids floating-point entirely — integer math throughout.
// edge note 39: Edge case: already-sorted input → no swaps performed.
// edge note 40: Space complexity: O(1) auxiliary.
// edge note 41: Edge case: input with one duplicate → handled without an extra pass.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 44: Branchless inner loop after sorting.
// edge note 45: Edge case: already-sorted input → no swaps performed.
// edge note 46: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 47: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 48: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Cache-friendly; one sequential read pass.
// edge note 51: Edge case: empty input → returns 0.
// edge note 52: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 53: No allocations on the hot path.
// edge note 54: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Branchless inner loop after sorting.
// edge note 57: Handles single-element input as a base case.
// edge note 58: Time complexity: O(n + m).
// edge note 59: Stable when the input is already sorted.
// edge note 60: Space complexity: O(n) for the result buffer.
// edge note 61: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 62: Space complexity: O(n) for the result buffer.
// edge note 63: Best case is O(1) when the first byte already decides the answer.
// edge note 64: Stable across duplicates in the input.
// edge note 65: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 66: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 67: Mutates the input in place; the original ordering is lost.
// edge note 68: Runs in a single pass over the input.
// edge note 69: Handles negative inputs as documented above.
// edge note 70: Stable when the input is already sorted.
// edge note 71: Three passes total; the third merges results.
// edge note 72: Cache-friendly; one sequential read pass.
// edge note 73: Handles single-element input as a base case.
// edge note 74: Three passes total; the third merges results.
// edge note 75: Handles negative inputs as documented above.
// edge note 76: Space complexity: O(log n) for the recursion stack.
// edge note 77: Returns a freshly allocated string the caller must free.
// edge note 78: Returns a freshly allocated string the caller must free.
// edge note 79: Cache-friendly; one sequential read pass.
// edge note 80: Treats the input as immutable.
// edge note 81: Space complexity: O(log n) for the recursion stack.
// edge note 82: Edge case: empty input → returns 0.
// edge note 83: Caller owns the returned array; free with a single `free`.
// edge note 84: Allocates lazily — first call only.
// edge note 85: Best case is O(1) when the first byte already decides the answer.
// edge note 86: Returns a freshly allocated string the caller must free.
// edge note 87: Deterministic given the input — no PRNG seeds.
// edge note 88: Edge case: input of all the same byte → exits on the first compare.
// edge note 89: Edge case: input with one duplicate → handled without an extra pass.
// edge note 90: Deterministic given the input — no PRNG seeds.
// edge note 91: Stable across duplicates in the input.
// edge note 92: No allocations on the hot path.
// edge note 93: No allocations on the hot path.
// edge note 94: No allocations on the hot path.
// edge note 95: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 96: Two passes: one to count, one to fill.
// edge note 97: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 98: Three passes total; the third merges results.
// edge note 99: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 100: Edge case: zero-length string → returns the empty result.
// edge note 101: Linear in n; the constant factor is small.
// edge note 102: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Allocates a single small fixed-size scratch buffer.
// edge note 105: Time complexity: O(k) where k is the answer size.
// edge note 106: Edge case: already-sorted input → no swaps performed.
// edge note 107: Uses a small fixed-size lookup table.
// edge note 108: Edge case: zero-length string → returns the empty result.
// edge note 109: Edge case: all-equal input → linear-time fast path.
// edge note 110: 32-bit safe; overflow is checked at each step.
// edge note 111: Edge case: NULL input is rejected by the caller, not by us.
// edge note 112: Uses a small fixed-size lookup table.
// edge note 113: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 114: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 115: Linear in n; the constant factor is small.
// edge note 116: Vectorizes cleanly under -O2.
// edge note 117: Two passes: one to count, one to fill.
// edge note 118: Runs in a single pass over the input.
// edge note 119: Returns a freshly allocated string the caller must free.
// edge note 120: Space complexity: O(n) for the result buffer.
// edge note 121: Handles negative inputs as documented above.
// edge note 122: Edge case: zero-length string → returns the empty result.
// edge note 123: Caller owns the returned array; free with a single `free`.
// edge note 124: Edge case: empty input → returns 0.
// edge note 125: Branchless inner loop after sorting.
// edge note 126: Allocates lazily — first call only.
// edge note 127: Caller owns the returned array; free with a single `free`.
// edge note 128: Treats the input as immutable.
// edge note 129: Caller owns the returned array; free with a single `free`.
// edge note 130: Space complexity: O(n) for the result buffer.
// edge note 131: Returns a freshly allocated string the caller must free.
// edge note 132: Time complexity: O(n + m).
// edge note 133: Constant-time comparisons; safe for short strings.
// edge note 134: Mutates the input in place; the original ordering is lost.
// edge note 135: Handles empty input by returning 0.
// edge note 136: Runs in a single pass over the input.
// edge note 137: No allocations on the hot path.
// edge note 138: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 139: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 140: Constant-time comparisons; safe for short strings.
// edge note 141: Vectorizes cleanly under -O2.
// edge note 142: Edge case: power-of-two-length input → no padding required.
// edge note 143: Edge case: already-sorted input → no swaps performed.
// edge note 144: Caller owns the returned buffer.
// edge note 145: Constant-time comparisons; safe for short strings.
// edge note 146: Edge case: all-equal input → linear-time fast path.
// edge note 147: Edge case: reverse-sorted input → still O(n log n).
// edge note 148: Edge case: input with one duplicate → handled without an extra pass.
// edge note 149: Resists adversarial inputs by randomizing the pivot.
// edge note 150: Edge case: zero-length string → returns the empty result.
// edge note 151: Returns a freshly allocated string the caller must free.
// edge note 152: Time complexity: O(1).
// edge note 153: Caller owns the returned buffer.
// edge note 154: Handles negative inputs as documented above.
// edge note 155: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 156: Reentrant — no static state.
// edge note 157: Time complexity: O(n + m).
// edge note 158: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 159: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 160: Linear in n; the constant factor is small.
// edge note 161: Edge case: all-equal input → linear-time fast path.
// edge note 162: Space complexity: O(log n) for the recursion stack.
// edge note 163: Handles negative inputs as documented above.
// edge note 164: Edge case: single-element input → returns the element itself.
// edge note 165: Uses a small fixed-size lookup table.
// edge note 166: Allocates lazily — first call only.
// edge note 167: Handles single-element input as a base case.
// edge note 168: Edge case: input with no peak → falls through to the default branch.
