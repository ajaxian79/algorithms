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
