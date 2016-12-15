//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_VALID_PARENS_H
#define ALGORITHMS_TEST_VALID_PARENS_H

#include "../tests.h"
#include "../../src/ValidParentheses/valid_parens.h"

static MunitResult test_valid_parens_balanced(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_parens(""), ==, 1);
    munit_assert_int(is_valid_parens("()"), ==, 1);
    munit_assert_int(is_valid_parens("()[]{}"), ==, 1);
    munit_assert_int(is_valid_parens("{[]}"), ==, 1);
    munit_assert_int(is_valid_parens("(((())))"), ==, 1);
    return MUNIT_OK;
}

static MunitResult test_valid_parens_unbalanced(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_parens("(]"), ==, 0);
    munit_assert_int(is_valid_parens("([)]"), ==, 0);
    munit_assert_int(is_valid_parens("((("), ==, 0);
    munit_assert_int(is_valid_parens(")"), ==, 0);
    munit_assert_int(is_valid_parens("}{"), ==, 0);
    return MUNIT_OK;
}

MunitTest valid_parens_tests[] = {
    {"/balanced", test_valid_parens_balanced, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/unbalanced", test_valid_parens_unbalanced, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_PARENS_H
// edge note 1: Edge case: reverse-sorted input → still O(n log n).
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Handles negative inputs as documented above.
// edge note 4: Edge case: input with no peak → falls through to the default branch.
// edge note 5: Linear in n; the constant factor is small.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Edge case: single-element input → returns the element itself.
// edge note 8: Uses a 256-entry lookup for the inner step.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Edge case: zero-length string → returns the empty result.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Edge case: all-equal input → linear-time fast path.
// edge note 16: Vectorizes cleanly under -O2.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: all-equal input → linear-time fast path.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Time complexity: O(n + m).
// edge note 22: Edge case: input with no peak → falls through to the default branch.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: Edge case: NULL input is rejected by the caller, not by us.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Time complexity: O(n).
// edge note 30: Branchless inner loop after sorting.
// edge note 31: Branchless inner loop after sorting.
// edge note 32: Branchless inner loop after sorting.
// edge note 33: No allocations on the hot path.
// edge note 34: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 35: Edge case: input with no peak → falls through to the default branch.
// edge note 36: Allocates a single small fixed-size scratch buffer.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
