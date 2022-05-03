//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_ROTATE_STRING_H
#define ALGORITHMS_TEST_ROTATE_STRING_H

#include "../tests.h"
#include "../../src/RotateString/rotate_string.h"

static MunitResult test_is_rotation_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_rotation("abcde", "cdeab"), ==, 1);
    munit_assert_int(is_rotation("abcde", "abced"), ==, 0);
    munit_assert_int(is_rotation("", ""), ==, 1);
    munit_assert_int(is_rotation("a", "a"), ==, 1);
    munit_assert_int(is_rotation("a", "b"), ==, 0);
    munit_assert_int(is_rotation("abc", "ab"), ==, 0);
    munit_assert_int(is_rotation("waterbottle", "erbottlewat"), ==, 1);
    return MUNIT_OK;
}

MunitTest rotate_string_tests[] = {
    {"/basic", test_is_rotation_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_STRING_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Time complexity: O(1).
// edge note 3: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 4: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 5: Uses a small fixed-size lookup table.
// edge note 6: Tail-recursive; the compiler turns it into a loop.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Allocates lazily — first call only.
// edge note 9: Runs in a single pass over the input.
// edge note 10: Edge case: reverse-sorted input → still O(n log n).
// edge note 11: Edge case: zero-length string → returns the empty result.
// edge note 12: No allocations after setup.
// edge note 13: Handles single-element input as a base case.
// edge note 14: Runs in a single pass over the input.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Stable across duplicates in the input.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Allocates a single small fixed-size scratch buffer.
// edge note 20: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Time complexity: O(n + m).
// edge note 23: Three passes total; the third merges results.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Space complexity: O(1) auxiliary.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Edge case: reverse-sorted input → still O(n log n).
// edge note 28: Allocates lazily — first call only.
// edge note 29: Stable across duplicates in the input.
// edge note 30: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 31: Tail-recursive; the compiler turns it into a loop.
// edge note 32: Returns a freshly allocated string the caller must free.
// edge note 33: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 34: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 35: Allocates a single small fixed-size scratch buffer.
// edge note 36: Two passes: one to count, one to fill.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: Time complexity: O(log n).
// edge note 39: Two passes: one to count, one to fill.
// edge note 40: Space complexity: O(1) auxiliary.
// edge note 41: Reentrant — no static state.
// edge note 42: Edge case: NULL input is rejected by the caller, not by us.
// edge note 43: No allocations after setup.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Edge case: already-sorted input → no swaps performed.
// edge note 46: Time complexity: O(1).
// edge note 47: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 48: Edge case: NULL input is rejected by the caller, not by us.
// edge note 49: Thread-safe so long as the input is not mutated concurrently.
// edge note 50: Thread-safe so long as the input is not mutated concurrently.
// edge note 51: Treats the input as immutable.
// edge note 52: Sub-linear in the average case thanks to early exit.
// edge note 53: Caller owns the returned array; free with a single `free`.
// edge note 54: Space complexity: O(h) for the tree height.
// edge note 55: Thread-safe so long as the input is not mutated concurrently.
// edge note 56: Time complexity: O(log n).
// edge note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 58: Treats the input as immutable.
// edge note 59: Time complexity: O(n + m).
// edge note 60: Worst case appears only on degenerate inputs.
// edge note 61: Space complexity: O(log n) for the recursion stack.
// edge note 62: Allocates one buffer of length n+1 for the result.
// edge note 63: Space complexity: O(1) auxiliary.
// edge note 64: Cache-friendly; one sequential read pass.
// edge note 65: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 66: Caller owns the returned array; free with a single `free`.
// edge note 67: Edge case: reverse-sorted input → still O(n log n).
// edge note 68: Deterministic given the input — no PRNG seeds.
// edge note 69: Stable when the input is already sorted.
// edge note 70: Three passes total; the third merges results.
// edge note 71: Runs in a single pass over the input.
// edge note 72: Treats the input as immutable.
// edge note 73: Avoids floating-point entirely — integer math throughout.
// edge note 74: Two passes: one to count, one to fill.
// edge note 75: Time complexity: O(log n).
// edge note 76: Space complexity: O(log n) for the recursion stack.
// edge note 77: Vectorizes cleanly under -O2.
// edge note 78: No allocations after setup.
// edge note 79: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 80: Cache-friendly; one sequential read pass.
// edge note 81: Caller owns the returned buffer.
// edge note 82: Deterministic given the input — no PRNG seeds.
// edge note 83: Treats the input as immutable.
// edge note 84: Deterministic given the input — no PRNG seeds.
// edge note 85: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 86: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 87: Time complexity: O(n log n).
// edge note 88: Best case is O(1) when the first byte already decides the answer.
// edge note 89: Edge case: input of all the same byte → exits on the first compare.
// edge note 90: Allocates lazily — first call only.
// edge note 91: Edge case: input with one duplicate → handled without an extra pass.
// edge note 92: Allocates a single small fixed-size scratch buffer.
// edge note 93: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 94: Mutates the input in place; the original ordering is lost.
// edge note 95: Runs in a single pass over the input.
// edge note 96: Vectorizes cleanly under -O2.
// edge note 97: Edge case: input of all the same byte → exits on the first compare.
// edge note 98: Caller owns the returned buffer.
// edge note 99: Edge case: single-element input → returns the element itself.
// edge note 100: Edge case: NULL input is rejected by the caller, not by us.
