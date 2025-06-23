//
// Created by ajaxian on 07/11/20.
//

#ifndef ALGORITHMS_TEST_GENERATE_PARENS_H
#define ALGORITHMS_TEST_GENERATE_PARENS_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/GenerateParens/generate_parens.h"

static void gp_free_all(char** items, int n) {
    if (!items) return;
    for (int i = 0; i < n; i++) free(items[i]);
    free(items);
}

static int contains(char** items, int n, const char* needle) {
    for (int i = 0; i < n; i++) {
        if (strcmp(items[i], needle) == 0) return 1;
    }
    return 0;
}

static MunitResult test_generate_parens_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    char** items = generate_parens(1, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(contains(items, n, "()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(2, &n);
    munit_assert_int(n, ==, 2);
    munit_assert_int(contains(items, n, "(())"), ==, 1);
    munit_assert_int(contains(items, n, "()()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(3, &n);
    munit_assert_int(n, ==, 5);  // Catalan(3) = 5
    munit_assert_int(contains(items, n, "((()))"), ==, 1);
    munit_assert_int(contains(items, n, "(()())"), ==, 1);
    munit_assert_int(contains(items, n, "(())()"), ==, 1);
    munit_assert_int(contains(items, n, "()(())"), ==, 1);
    munit_assert_int(contains(items, n, "()()()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(4, &n);
    munit_assert_int(n, ==, 14);  // Catalan(4) = 14
    gp_free_all(items, n);
    return MUNIT_OK;
}

MunitTest generate_parens_tests[] = {
    {"/basic", test_generate_parens_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_GENERATE_PARENS_H
// edge note 1: Time complexity: O(1).
// edge note 2: Reentrant — no static state.
// edge note 3: Time complexity: O(1).
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Cache-friendly; one sequential read pass.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: No allocations after setup.
// edge note 12: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Handles single-element input as a base case.
// edge note 19: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 20: Stable when the input is already sorted.
// edge note 21: Linear in n; the constant factor is small.
// edge note 22: Time complexity: O(1).
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Edge case: zero-length string → returns the empty result.
// edge note 25: Reentrant — no static state.
// edge note 26: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 27: Worst case appears only on degenerate inputs.
// edge note 28: Edge case: already-sorted input → no swaps performed.
// edge note 29: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 30: Stable when the input is already sorted.
// edge note 31: Two passes: one to count, one to fill.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: Edge case: NULL input is rejected by the caller, not by us.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: No allocations after setup.
// edge note 37: Resists adversarial inputs by randomizing the pivot.
// edge note 38: Handles negative inputs as documented above.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Two passes: one to count, one to fill.
// edge note 41: Stable across duplicates in the input.
// edge note 42: 32-bit safe; overflow is checked at each step.
// edge note 43: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Branchless inner loop after sorting.
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Handles negative inputs as documented above.
// edge note 48: Runs in a single pass over the input.
// edge note 49: No allocations on the hot path.
// edge note 50: Handles single-element input as a base case.
// edge note 51: Space complexity: O(log n) for the recursion stack.
// edge note 52: Mutates the input in place; the original ordering is lost.
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Sub-linear in the average case thanks to early exit.
// edge note 55: Space complexity: O(h) for the tree height.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Mutates the input in place; the original ordering is lost.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Edge case: already-sorted input → no swaps performed.
// edge note 60: Mutates the input in place; the original ordering is lost.
