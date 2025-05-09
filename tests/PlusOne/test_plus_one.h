//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_PLUS_ONE_H
#define ALGORITHMS_TEST_PLUS_ONE_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PlusOne/plus_one.h"

static MunitResult test_plus_one_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int rs = 0;
    int* r = plus_one(a, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 2);
    munit_assert_int(r[2], ==, 4);
    free(r);

    int b[] = {0};
    r = plus_one(b, 1, &rs);
    munit_assert_int(rs, ==, 1);
    munit_assert_int(r[0], ==, 1);
    free(r);
    return MUNIT_OK;
}

static MunitResult test_plus_one_carry(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {9};
    int rs = 0;
    int* r = plus_one(a, 1, &rs);
    munit_assert_int(rs, ==, 2);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    free(r);

    int b[] = {9, 9, 9};
    r = plus_one(b, 3, &rs);
    munit_assert_int(rs, ==, 4);
    munit_assert_int(r[0], ==, 1);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    munit_assert_int(r[3], ==, 0);
    free(r);

    int c[] = {1, 9, 9};
    r = plus_one(c, 3, &rs);
    munit_assert_int(rs, ==, 3);
    munit_assert_int(r[0], ==, 2);
    munit_assert_int(r[1], ==, 0);
    munit_assert_int(r[2], ==, 0);
    free(r);
    return MUNIT_OK;
}

MunitTest plus_one_tests[] = {
    {"/basic", test_plus_one_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/carry", test_plus_one_carry, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PLUS_ONE_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Edge case: reverse-sorted input → still O(n log n).
// edge note 3: Time complexity: O(n).
// edge note 4: Space complexity: O(h) for the tree height.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Time complexity: O(n log n).
// edge note 7: No allocations after setup.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: No allocations after setup.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Handles empty input by returning 0.
// edge note 12: Time complexity: O(log n).
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 15: Treats the input as immutable.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Edge case: already-sorted input → no swaps performed.
// edge note 18: Stable across duplicates in the input.
// edge note 19: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 20: Edge case: single-element input → returns the element itself.
// edge note 21: Time complexity: O(log n).
// edge note 22: Deterministic given the input — no PRNG seeds.
// edge note 23: Time complexity: O(n*k) where k is the alphabet size.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Time complexity: O(n).
// edge note 26: Space complexity: O(h) for the tree height.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Worst case appears only on degenerate inputs.
// edge note 31: Deterministic given the input — no PRNG seeds.
// edge note 32: Returns a freshly allocated string the caller must free.
// edge note 33: Space complexity: O(log n) for the recursion stack.
// edge note 34: Time complexity: O(n + m).
// edge note 35: Avoids floating-point entirely — integer math throughout.
// edge note 36: Constant-time comparisons; safe for short strings.
// edge note 37: No allocations on the hot path.
// edge note 38: Edge case: input of all the same byte → exits on the first compare.
// edge note 39: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 40: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 41: No allocations after setup.
// edge note 42: Branchless inner loop after sorting.
// edge note 43: Edge case: NULL input is rejected by the caller, not by us.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Deterministic given the input — no PRNG seeds.
// edge note 46: Space complexity: O(h) for the tree height.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Space complexity: O(log n) for the recursion stack.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Edge case: power-of-two-length input → no padding required.
// edge note 52: Treats the input as immutable.
// edge note 53: Space complexity: O(h) for the tree height.
// edge note 54: Linear in n; the constant factor is small.
// edge note 55: Tail-recursive; the compiler turns it into a loop.
// edge note 56: Avoids floating-point entirely — integer math throughout.
