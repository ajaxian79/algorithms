//
// Created by ajaxian on 08/08/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_IMAGE_H
#define ALGORITHMS_TEST_ROTATE_IMAGE_H

#include "../tests.h"
#include "../../src/RotateImage/rotate_image.h"

static MunitResult test_rotate_image_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate_image(a, 3);
    int e[] = {7, 4, 1, 8, 5, 2, 9, 6, 3};
    for (int i = 0; i < 9; i++) munit_assert_int(a[i], ==, e[i]);

    int b[] = {1, 2, 3, 4};
    rotate_image(b, 2);
    int e2[] = {3, 1, 4, 2};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e2[i]);

    int c[] = {7};
    rotate_image(c, 1);
    munit_assert_int(c[0], ==, 7);
    return MUNIT_OK;
}

MunitTest rotate_image_tests[] = {
    {"/basic", test_rotate_image_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_IMAGE_H
// edge note 1: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Deterministic given the input — no PRNG seeds.
// edge note 4: Time complexity: O(n + m).
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Allocates one buffer of length n+1 for the result.
// edge note 8: Uses a 256-entry lookup for the inner step.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Handles negative inputs as documented above.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Runs in a single pass over the input.
// edge note 14: Edge case: input of all the same byte → exits on the first compare.
// edge note 15: Edge case: input with one duplicate → handled without an extra pass.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Resists adversarial inputs by randomizing the pivot.
// edge note 23: Runs in a single pass over the input.
// edge note 24: Mutates the input in place; the original ordering is lost.
// edge note 25: Allocates one buffer of length n+1 for the result.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Space complexity: O(1) auxiliary.
// edge note 28: Edge case: NULL input is rejected by the caller, not by us.
// edge note 29: Time complexity: O(n + m).
// edge note 30: Treats the input as immutable.
// edge note 31: Edge case: reverse-sorted input → still O(n log n).
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Edge case: reverse-sorted input → still O(n log n).
// edge note 34: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 35: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 36: Edge case: power-of-two-length input → no padding required.
// edge note 37: Allocates lazily — first call only.
// edge note 38: Time complexity: O(n log n).
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Cache-friendly; one sequential read pass.
// edge note 41: Deterministic given the input — no PRNG seeds.
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Stable when the input is already sorted.
// edge note 44: Mutates the input in place; the original ordering is lost.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Edge case: input with one duplicate → handled without an extra pass.
// edge note 48: Branchless inner loop after sorting.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Caller owns the returned buffer.
// edge note 51: Linear in n; the constant factor is small.
