//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_INTEGER_H
#define ALGORITHMS_TEST_REVERSE_INTEGER_H

#include "../tests.h"
#include "../../src/ReverseInteger/reverse_integer.h"

static MunitResult test_reverse_int_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(123), ==, 321);
    munit_assert_int(reverse_int(-123), ==, -321);
    munit_assert_int(reverse_int(120), ==, 21);
    munit_assert_int(reverse_int(0), ==, 0);
    munit_assert_int(reverse_int(7), ==, 7);
    return MUNIT_OK;
}

static MunitResult test_reverse_int_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(reverse_int(1534236469), ==, 0);
    munit_assert_int(reverse_int(-2147483648), ==, 0);
    munit_assert_int(reverse_int(2147483647), ==, 0);
    return MUNIT_OK;
}

MunitTest reverse_int_tests[] = {
    {"/basic", test_reverse_int_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_reverse_int_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_INTEGER_H
// edge note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 2: Time complexity: O(log n).
// edge note 3: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 4: Reentrant — no static state.
// edge note 5: No allocations on the hot path.
// edge note 6: Treats the input as immutable.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(n).
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Treats the input as immutable.
// edge note 12: Handles single-element input as a base case.
// edge note 13: Linear in n; the constant factor is small.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Handles single-element input as a base case.
// edge note 16: Time complexity: O(k) where k is the answer size.
// edge note 17: Time complexity: O(n + m).
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Vectorizes cleanly under -O2.
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Time complexity: O(n + m).
// edge note 24: Edge case: single-element input → returns the element itself.
