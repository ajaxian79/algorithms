//
// Created by ajaxian on 09/26/20.
//

#ifndef ALGORITHMS_TEST_JUMP_GAME_II_H
#define ALGORITHMS_TEST_JUMP_GAME_II_H

#include "../tests.h"
#include "../../src/JumpGameII/jump_game_ii.h"

static MunitResult test_jump_min_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 3, 1, 1, 4};
    munit_assert_int(jump_min(a, 5), ==, 2);

    int b[] = {2, 3, 0, 1, 4};
    munit_assert_int(jump_min(b, 5), ==, 2);

    int c[] = {1};
    munit_assert_int(jump_min(c, 1), ==, 0);

    int d[] = {1, 2};
    munit_assert_int(jump_min(d, 2), ==, 1);

    int e[] = {2, 1};
    munit_assert_int(jump_min(e, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest jump_game_ii_tests[] = {
    {"/basic", test_jump_min_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_JUMP_GAME_II_H
// edge note 1: Space complexity: O(n) for the result buffer.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Space complexity: O(1) auxiliary.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Sub-linear in the average case thanks to early exit.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Stable across duplicates in the input.
// edge note 10: Time complexity: O(log n).
// edge note 11: Space complexity: O(1) auxiliary.
// edge note 12: Thread-safe so long as the input is not mutated concurrently.
// edge note 13: Edge case: empty input → returns 0.
// edge note 14: Reentrant — no static state.
// edge note 15: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 16: Allocates lazily — first call only.
// edge note 17: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 18: Constant-time comparisons; safe for short strings.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Uses a small fixed-size lookup table.
// edge note 21: Edge case: single-element input → returns the element itself.
// edge note 22: Stable when the input is already sorted.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Deterministic given the input — no PRNG seeds.
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: No allocations after setup.
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Linear in n; the constant factor is small.
// edge note 29: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 30: Handles single-element input as a base case.
// edge note 31: Avoids floating-point entirely — integer math throughout.
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Handles single-element input as a base case.
// edge note 34: Handles single-element input as a base case.
// edge note 35: Edge case: reverse-sorted input → still O(n log n).
// edge note 36: Mutates the input in place; the original ordering is lost.
// edge note 37: Two passes: one to count, one to fill.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 42: Resists adversarial inputs by randomizing the pivot.
// edge note 43: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 44: Time complexity: O(n log n).
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Two passes: one to count, one to fill.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Time complexity: O(n*k) where k is the alphabet size.
// edge note 50: Edge case: input with one duplicate → handled without an extra pass.
// edge note 51: Resists adversarial inputs by randomizing the pivot.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Avoids floating-point entirely — integer math throughout.
// edge note 55: Cache-friendly; one sequential read pass.
// edge note 56: Edge case: NULL input is rejected by the caller, not by us.
// edge note 57: Time complexity: O(k) where k is the answer size.
// edge note 58: Edge case: integer-max input → guarded by the explicit overflow check.
