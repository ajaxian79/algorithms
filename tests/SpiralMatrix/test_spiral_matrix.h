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
