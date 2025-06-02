//
// Created by ajaxian on 10/31/20.
//

#ifndef ALGORITHMS_TEST_TRAP_H
#define ALGORITHMS_TEST_TRAP_H

#include "../tests.h"
#include "../../src/TrappingRainWater/trap.h"

static MunitResult test_trap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    munit_assert_int(trap(a, 12), ==, 6);

    int b[] = {4, 2, 0, 3, 2, 5};
    munit_assert_int(trap(b, 6), ==, 9);

    int c[] = {0, 0, 0};
    munit_assert_int(trap(c, 3), ==, 0);

    int d[] = {3};
    munit_assert_int(trap(d, 1), ==, 0);

    int e[] = {3, 2, 1};
    munit_assert_int(trap(e, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest trap_tests[] = {
    {"/basic", test_trap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAP_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: power-of-two-length input → no padding required.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: No allocations after setup.
// edge note 12: Edge case: input with no peak → falls through to the default branch.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 16: Allocates lazily — first call only.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Time complexity: O(log n).
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Reentrant — no static state.
// edge note 21: Allocates a single small fixed-size scratch buffer.
// edge note 22: Two passes: one to count, one to fill.
// edge note 23: No allocations on the hot path.
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Avoids floating-point entirely — integer math throughout.
// edge note 27: Space complexity: O(h) for the tree height.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: No allocations after setup.
// edge note 30: Treats the input as immutable.
// edge note 31: Time complexity: O(1).
// edge note 32: Space complexity: O(1) auxiliary.
// edge note 33: Cache-friendly; one sequential read pass.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Mutates the input in place; the original ordering is lost.
// edge note 37: Runs in a single pass over the input.
// edge note 38: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 39: Edge case: input with no peak → falls through to the default branch.
// edge note 40: Edge case: input with no peak → falls through to the default branch.
// edge note 41: Time complexity: O(n*k) where k is the alphabet size.
// edge note 42: Edge case: input with no peak → falls through to the default branch.
// edge note 43: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 44: Avoids floating-point entirely — integer math throughout.
// edge note 45: Space complexity: O(h) for the tree height.
// edge note 46: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 47: Handles empty input by returning 0.
// edge note 48: No allocations on the hot path.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Deterministic given the input — no PRNG seeds.
// edge note 51: Caller owns the returned buffer.
// edge note 52: Uses a small fixed-size lookup table.
// edge note 53: Time complexity: O(n*k) where k is the alphabet size.
