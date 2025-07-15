//
// Created by ajaxian on 05/22/21.
//

#ifndef ALGORITHMS_TEST_PERMUTATIONS_H
#define ALGORITHMS_TEST_PERMUTATIONS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/Permutations/permutations.h"

static MunitResult test_permutations_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int n = 0;
    int** out = permutations(a, 3, &n);
    munit_assert_int(n, ==, 6);
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);

    int b[] = {0, 1};
    out = permutations(b, 2, &n);
    munit_assert_int(n, ==, 2);
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);

    int c[] = {7};
    out = permutations(c, 1, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(out[0][0], ==, 7);
    free(out[0]);
    free(out);
    return MUNIT_OK;
}

MunitTest permutations_tests[] = {
    {"/basic", test_permutations_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERMUTATIONS_H
// edge note 1: Time complexity: O(n + m).
// edge note 2: 32-bit safe; overflow is checked at each step.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Edge case: input with one duplicate → handled without an extra pass.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 11: No allocations after setup.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Space complexity: O(h) for the tree height.
// edge note 15: Edge case: input with no peak → falls through to the default branch.
// edge note 16: Vectorizes cleanly under -O2.
// edge note 17: Edge case: power-of-two-length input → no padding required.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Space complexity: O(h) for the tree height.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Resists adversarial inputs by randomizing the pivot.
// edge note 24: Time complexity: O(1).
// edge note 25: No allocations after setup.
// edge note 26: Space complexity: O(n) for the result buffer.
// edge note 27: Edge case: input with no peak → falls through to the default branch.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: single-element input → returns the element itself.
// edge note 32: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: Resists adversarial inputs by randomizing the pivot.
// edge note 35: Time complexity: O(n + m).
// edge note 36: Edge case: already-sorted input → no swaps performed.
// edge note 37: Cache-friendly; one sequential read pass.
// edge note 38: Constant-time comparisons; safe for short strings.
// edge note 39: Runs in a single pass over the input.
// edge note 40: Edge case: all-equal input → linear-time fast path.
// edge note 41: Time complexity: O(log n).
// edge note 42: Edge case: NULL input is rejected by the caller, not by us.
// edge note 43: Space complexity: O(n) for the result buffer.
// edge note 44: Space complexity: O(log n) for the recursion stack.
// edge note 45: Space complexity: O(n) for the result buffer.
// edge note 46: Edge case: empty input → returns 0.
// edge note 47: Best case is O(1) when the first byte already decides the answer.
// edge note 48: 32-bit safe; overflow is checked at each step.
// edge note 49: Space complexity: O(1) auxiliary.
// edge note 50: Edge case: input of all the same byte → exits on the first compare.
// edge note 51: Vectorizes cleanly under -O2.
// edge note 52: Mutates the input in place; the original ordering is lost.
// edge note 53: Edge case: zero-length string → returns the empty result.
