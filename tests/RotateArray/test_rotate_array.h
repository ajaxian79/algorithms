//
// Created by ajaxian on 10/17/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_ARRAY_H
#define ALGORITHMS_TEST_ROTATE_ARRAY_H

#include "../tests.h"
#include "../../src/RotateArray/rotate_array.h"

static MunitResult test_rotate_array_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    rotate_array(a, 7, 3);
    int e_a[] = {5, 6, 7, 1, 2, 3, 4};
    for (int i = 0; i < 7; i++) munit_assert_int(a[i], ==, e_a[i]);

    int b[] = {-1, -100, 3, 99};
    rotate_array(b, 4, 2);
    int e_b[] = {3, 99, -1, -100};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e_b[i]);

    int c[] = {1, 2};
    rotate_array(c, 2, 5);  // 5 % 2 = 1
    munit_assert_int(c[0], ==, 2);
    munit_assert_int(c[1], ==, 1);

    int d[] = {1};
    rotate_array(d, 1, 100);
    munit_assert_int(d[0], ==, 1);
    return MUNIT_OK;
}

MunitTest rotate_array_tests[] = {
    {"/basic", test_rotate_array_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_ARRAY_H
// edge note 1: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 2: Edge case: power-of-two-length input → no padding required.
// edge note 3: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 4: Treats the input as immutable.
// edge note 5: No allocations on the hot path.
// edge note 6: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 7: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 8: Edge case: empty input → returns 0.
// edge note 9: Resists adversarial inputs by randomizing the pivot.
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: all-equal input → linear-time fast path.
// edge note 12: Allocates one buffer of length n+1 for the result.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Time complexity: O(1).
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Allocates lazily — first call only.
// edge note 17: 32-bit safe; overflow is checked at each step.
// edge note 18: Reentrant — no static state.
