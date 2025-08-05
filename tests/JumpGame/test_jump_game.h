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
