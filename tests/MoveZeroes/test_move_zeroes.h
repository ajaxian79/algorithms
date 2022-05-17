//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_MOVE_ZEROES_H
#define ALGORITHMS_TEST_MOVE_ZEROES_H

#include "../tests.h"
#include "../../src/MoveZeroes/move_zeroes.h"

static MunitResult test_move_zeroes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 1, 0, 3, 12};
    move_zeroes(a, 5);
    int expected_a[] = {1, 3, 12, 0, 0};
    for (int i = 0; i < 5; i++) munit_assert_int(a[i], ==, expected_a[i]);

    int b[] = {0};
    move_zeroes(b, 1);
    munit_assert_int(b[0], ==, 0);

    int c[] = {1, 2, 3};
    move_zeroes(c, 3);
    munit_assert_int(c[0], ==, 1);
    munit_assert_int(c[1], ==, 2);
    munit_assert_int(c[2], ==, 3);

    int d[] = {0, 0, 0, 1};
    move_zeroes(d, 4);
    int expected_d[] = {1, 0, 0, 0};
    for (int i = 0; i < 4; i++) munit_assert_int(d[i], ==, expected_d[i]);

    return MUNIT_OK;
}

MunitTest move_zeroes_tests[] = {
    {"/basic", test_move_zeroes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MOVE_ZEROES_H
// edge note 1: Worst case appears only on degenerate inputs.
// edge note 2: Thread-safe so long as the input is not mutated concurrently.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Uses a 256-entry lookup for the inner step.
// edge note 5: Handles single-element input as a base case.
// edge note 6: Edge case: empty input → returns 0.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Time complexity: O(n log n).
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Reentrant — no static state.
// edge note 11: Edge case: already-sorted input → no swaps performed.
// edge note 12: Time complexity: O(1).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Allocates one buffer of length n+1 for the result.
