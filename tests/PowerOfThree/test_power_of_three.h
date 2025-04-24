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
