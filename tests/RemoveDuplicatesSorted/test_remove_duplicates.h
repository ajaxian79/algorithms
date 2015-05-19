//
// Created by ajaxian on 03/06/21.
//

#ifndef ALGORITHMS_TEST_REMOVE_DUPLICATES_H
#define ALGORITHMS_TEST_REMOVE_DUPLICATES_H

#include "../tests.h"
#include "../../src/RemoveDuplicatesSorted/remove_duplicates.h"

static MunitResult test_remove_duplicates_sorted_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 1, 2};
    int n = remove_duplicates_sorted(a, 3);
    munit_assert_int(n, ==, 2);
    munit_assert_int(a[0], ==, 1);
    munit_assert_int(a[1], ==, 2);

    int b[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    n = remove_duplicates_sorted(b, 10);
    munit_assert_int(n, ==, 5);
    int e[] = {0, 1, 2, 3, 4};
    for (int i = 0; i < n; i++) munit_assert_int(b[i], ==, e[i]);

    int c[] = {1};
    munit_assert_int(remove_duplicates_sorted(c, 1), ==, 1);

    munit_assert_int(remove_duplicates_sorted(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest remove_duplicates_tests[] = {
    {"/basic", test_remove_duplicates_sorted_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REMOVE_DUPLICATES_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Avoids floating-point entirely — integer math throughout.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Space complexity: O(log n) for the recursion stack.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Caller owns the returned buffer.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Time complexity: O(1).
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Time complexity: O(log n).
// edge note 17: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 18: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Allocates lazily — first call only.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Cache-friendly; one sequential read pass.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(log n).
// edge note 25: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 26: Handles empty input by returning 0.
// edge note 27: Stable when the input is already sorted.
// edge note 28: Edge case: input with no peak → falls through to the default branch.
// edge note 29: Handles single-element input as a base case.
// edge note 30: Handles negative inputs as documented above.
