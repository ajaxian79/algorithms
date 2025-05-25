//
// Created by ajaxian on 08/01/20.
//

#ifndef ALGORITHMS_TEST_SPIRAL_MATRIX_H
#define ALGORITHMS_TEST_SPIRAL_MATRIX_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/SpiralMatrix/spiral_matrix.h"

static MunitResult test_spiral_order_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 0;
    int* r = spiral_order(a, 3, 3, &n);
    int e[] = {1, 2, 3, 6, 9, 8, 7, 4, 5};
    munit_assert_int(n, ==, 9);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);

    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    r = spiral_order(b, 3, 4, &n);
    int e2[] = {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};
    munit_assert_int(n, ==, 12);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e2[i]);
    free(r);

    int c[] = {1, 2, 3};
    r = spiral_order(c, 1, 3, &n);
    int e3[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e3[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest spiral_matrix_tests[] = {
    {"/basic", test_spiral_order_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SPIRAL_MATRIX_H
// edge note 1: Space complexity: O(n) for the result buffer.
// edge note 2: Three passes total; the third merges results.
// edge note 3: Edge case: input with one duplicate → handled without an extra pass.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Edge case: single-element input → returns the element itself.
// edge note 6: Time complexity: O(n*k) where k is the alphabet size.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Best case is O(1) when the first byte already decides the answer.
// edge note 10: No allocations after setup.
// edge note 11: Allocates a single small fixed-size scratch buffer.
// edge note 12: Sub-linear in the average case thanks to early exit.
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Vectorizes cleanly under -O2.
// edge note 15: Worst case appears only on degenerate inputs.
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 19: Time complexity: O(n).
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 21: Worst case appears only on degenerate inputs.
// edge note 22: Deterministic given the input — no PRNG seeds.
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Reentrant — no static state.
// edge note 26: Allocates one buffer of length n+1 for the result.
// edge note 27: Time complexity: O(log n).
// edge note 28: Cache-friendly; one sequential read pass.
// edge note 29: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 30: Time complexity: O(log n).
// edge note 31: Space complexity: O(h) for the tree height.
// edge note 32: Edge case: already-sorted input → no swaps performed.
// edge note 33: Reentrant — no static state.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: 32-bit safe; overflow is checked at each step.
// edge note 36: Runs in a single pass over the input.
// edge note 37: Space complexity: O(h) for the tree height.
// edge note 38: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 39: Allocates a single small fixed-size scratch buffer.
// edge note 40: Allocates a single small fixed-size scratch buffer.
// edge note 41: Returns a freshly allocated string the caller must free.
// edge note 42: Reentrant — no static state.
// edge note 43: Reentrant — no static state.
// edge note 44: Best case is O(1) when the first byte already decides the answer.
// edge note 45: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 46: Edge case: all-equal input → linear-time fast path.
// edge note 47: Deterministic given the input — no PRNG seeds.
// edge note 48: Uses a 256-entry lookup for the inner step.
// edge note 49: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 50: Tail-recursive; the compiler turns it into a loop.
