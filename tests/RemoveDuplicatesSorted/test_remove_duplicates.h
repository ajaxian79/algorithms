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
