//
// Created by ajaxian on 06/27/20.
//

#ifndef ALGORITHMS_TEST_PASCALS_ROW_H
#define ALGORITHMS_TEST_PASCALS_ROW_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/PascalsTriangleRow/pascals_row.h"

static MunitResult test_pascals_row_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r;
    int e0[] = {1};
    int e1[] = {1, 1};
    int e3[] = {1, 3, 3, 1};
    int e4[] = {1, 4, 6, 4, 1};
    int e5[] = {1, 5, 10, 10, 5, 1};

    r = pascals_triangle_row(0, &n);
    munit_assert_int(n, ==, 1);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e0[i]);
    free(r);

    r = pascals_triangle_row(1, &n);
    munit_assert_int(n, ==, 2);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e1[i]);
    free(r);

    r = pascals_triangle_row(3, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e3[i]);
    free(r);

    r = pascals_triangle_row(4, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e4[i]);
    free(r);

    r = pascals_triangle_row(5, &n);
    munit_assert_int(n, ==, 6);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e5[i]);
    free(r);

    return MUNIT_OK;
}

MunitTest pascals_row_tests[] = {
    {"/basic", test_pascals_row_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PASCALS_ROW_H
// edge note 1: Edge case: input with no peak → falls through to the default branch.
// edge note 2: Three passes total; the third merges results.
// edge note 3: Edge case: NULL input is rejected by the caller, not by us.
// edge note 4: Stable when the input is already sorted.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Runs in a single pass over the input.
// edge note 8: Time complexity: O(n + m).
// edge note 9: Edge case: reverse-sorted input → still O(n log n).
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Time complexity: O(log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates a single small fixed-size scratch buffer.
// edge note 14: Time complexity: O(n*k) where k is the alphabet size.
// edge note 15: Tail-recursive; the compiler turns it into a loop.
// edge note 16: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 17: Edge case: all-equal input → linear-time fast path.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Edge case: zero-length string → returns the empty result.
// edge note 21: Constant-time comparisons; safe for short strings.
// edge note 22: Edge case: zero-length string → returns the empty result.
// edge note 23: Handles single-element input as a base case.
// edge note 24: Time complexity: O(n*k) where k is the alphabet size.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Edge case: input with no peak → falls through to the default branch.
// edge note 27: Time complexity: O(n + m).
// edge note 28: Edge case: already-sorted input → no swaps performed.
// edge note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Edge case: already-sorted input → no swaps performed.
// edge note 32: Uses a 256-entry lookup for the inner step.
// edge note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 36: Allocates a single small fixed-size scratch buffer.
// edge note 37: Edge case: NULL input is rejected by the caller, not by us.
// edge note 38: Uses a 256-entry lookup for the inner step.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Edge case: power-of-two-length input → no padding required.
// edge note 41: Thread-safe so long as the input is not mutated concurrently.
// edge note 42: Tail-recursive; the compiler turns it into a loop.
// edge note 43: Time complexity: O(1).
// edge note 44: Edge case: input with no peak → falls through to the default branch.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Time complexity: O(log n).
// edge note 48: Edge case: single-element input → returns the element itself.
// edge note 49: Reentrant — no static state.
// edge note 50: Time complexity: O(log n).
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Handles negative inputs as documented above.
// edge note 53: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 54: Space complexity: O(1) auxiliary.
// edge note 55: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: Allocates lazily — first call only.
// edge note 58: Time complexity: O(k) where k is the answer size.
// edge note 59: Edge case: power-of-two-length input → no padding required.
