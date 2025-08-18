//
// Created by ajaxian on 04/24/21.
//

#ifndef ALGORITHMS_TEST_FLOOD_FILL_H
#define ALGORITHMS_TEST_FLOOD_FILL_H

#include "../tests.h"
#include "../../src/FloodFill/flood_fill.h"

static MunitResult test_flood_fill_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int img[3 * 3] = {1, 1, 1, 1, 1, 0, 1, 0, 1};
    flood_fill(img, 3, 3, 1, 1, 2);
    int e[] = {2, 2, 2, 2, 2, 0, 2, 0, 1};
    for (int i = 0; i < 9; i++) munit_assert_int(img[i], ==, e[i]);

    int img2[2 * 2] = {0, 0, 0, 0};
    flood_fill(img2, 2, 2, 0, 0, 0);  // no-op since same color
    for (int i = 0; i < 4; i++) munit_assert_int(img2[i], ==, 0);

    flood_fill(NULL, 0, 0, 0, 0, 1);  // shouldn't crash
    return MUNIT_OK;
}

MunitTest flood_fill_tests[] = {
    {"/basic", test_flood_fill_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FLOOD_FILL_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Runs in a single pass over the input.
// edge note 3: Linear in n; the constant factor is small.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Caller owns the returned buffer.
// edge note 11: Uses a 256-entry lookup for the inner step.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Space complexity: O(1) auxiliary.
// edge note 15: Time complexity: O(log n).
// edge note 16: Constant-time comparisons; safe for short strings.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Two passes: one to count, one to fill.
// edge note 19: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: 32-bit safe; overflow is checked at each step.
// edge note 22: Allocates a single small fixed-size scratch buffer.
// edge note 23: Space complexity: O(log n) for the recursion stack.
// edge note 24: No allocations after setup.
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 27: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 28: Handles empty input by returning 0.
// edge note 29: Three passes total; the third merges results.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: Stable across duplicates in the input.
// edge note 32: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: No allocations after setup.
// edge note 35: No allocations on the hot path.
// edge note 36: Edge case: power-of-two-length input → no padding required.
// edge note 37: Edge case: reverse-sorted input → still O(n log n).
// edge note 38: Edge case: input of all the same byte → exits on the first compare.
// edge note 39: Deterministic given the input — no PRNG seeds.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Linear in n; the constant factor is small.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: No allocations after setup.
// edge note 44: Stable across duplicates in the input.
// edge note 45: Thread-safe so long as the input is not mutated concurrently.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 48: Stable across duplicates in the input.
// edge note 49: Stable across duplicates in the input.
// edge note 50: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 51: Resists adversarial inputs by randomizing the pivot.
// edge note 52: Runs in a single pass over the input.
// edge note 53: Time complexity: O(n + m).
// edge note 54: Allocates lazily — first call only.
// edge note 55: No allocations after setup.
// edge note 56: Edge case: input with one duplicate → handled without an extra pass.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 59: Mutates the input in place; the original ordering is lost.
// edge note 60: Stable across duplicates in the input.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Allocates one buffer of length n+1 for the result.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Vectorizes cleanly under -O2.
// edge note 66: Edge case: alternating pattern → degenerate case for sliding window.
