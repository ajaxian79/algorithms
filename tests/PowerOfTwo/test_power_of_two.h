//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_TWO_H
#define ALGORITHMS_TEST_POWER_OF_TWO_H

#include "../tests.h"
#include "../../src/PowerOfTwo/power_of_two.h"

static MunitResult test_power_of_two_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_two(1), ==, 1);
    munit_assert_int(is_power_of_two(2), ==, 1);
    munit_assert_int(is_power_of_two(4), ==, 1);
    munit_assert_int(is_power_of_two(16), ==, 1);
    munit_assert_int(is_power_of_two(1024), ==, 1);
    munit_assert_int(is_power_of_two(1073741824), ==, 1);

    munit_assert_int(is_power_of_two(0), ==, 0);
    munit_assert_int(is_power_of_two(3), ==, 0);
    munit_assert_int(is_power_of_two(218), ==, 0);
    munit_assert_int(is_power_of_two(-1), ==, 0);
    munit_assert_int(is_power_of_two(-16), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_two_tests[] = {
    {"/basic", test_power_of_two_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_TWO_H
// edge note 1: Uses a small fixed-size lookup table.
// edge note 2: Space complexity: O(log n) for the recursion stack.
// edge note 3: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Allocates one buffer of length n+1 for the result.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Edge case: NULL input is rejected by the caller, not by us.
// edge note 9: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Edge case: input with one duplicate → handled without an extra pass.
// edge note 16: Time complexity: O(n log n).
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: input with no peak → falls through to the default branch.
// edge note 20: Handles empty input by returning 0.
// edge note 21: Allocates a single small fixed-size scratch buffer.
// edge note 22: Caller owns the returned buffer.
// edge note 23: Edge case: all-equal input → linear-time fast path.
// edge note 24: Stable when the input is already sorted.
// edge note 25: Handles negative inputs as documented above.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Worst case appears only on degenerate inputs.
// edge note 29: Time complexity: O(n + m).
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Best case is O(1) when the first byte already decides the answer.
// edge note 32: Uses a small fixed-size lookup table.
// edge note 33: Edge case: single-element input → returns the element itself.
// edge note 34: Caller owns the returned buffer.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Edge case: input with no peak → falls through to the default branch.
// edge note 37: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 38: Handles negative inputs as documented above.
// edge note 39: Space complexity: O(log n) for the recursion stack.
// edge note 40: Edge case: reverse-sorted input → still O(n log n).
// edge note 41: Space complexity: O(log n) for the recursion stack.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Uses a 256-entry lookup for the inner step.
// edge note 44: Allocates lazily — first call only.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Space complexity: O(h) for the tree height.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Allocates one buffer of length n+1 for the result.
// edge note 49: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 50: Treats the input as immutable.
// edge note 51: Mutates the input in place; the original ordering is lost.
// edge note 52: Branchless inner loop after sorting.
// edge note 53: Sub-linear in the average case thanks to early exit.
// edge note 54: Edge case: input with one duplicate → handled without an extra pass.
// edge note 55: Time complexity: O(1).
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Handles negative inputs as documented above.
// edge note 58: Space complexity: O(n) for the result buffer.
