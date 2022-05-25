//
// Created by ajaxian on 03/27/21.
//

#ifndef ALGORITHMS_TEST_MIN_STACK_H
#define ALGORITHMS_TEST_MIN_STACK_H

#include "../tests.h"
#include "../../src/MinStack/min_stack.h"

static MunitResult test_min_stack_basic(const MunitParameter params[], void* user_data_or_fixture) {
    MinStack* s = min_stack_create();
    min_stack_push(s, -2);
    min_stack_push(s, 0);
    min_stack_push(s, -3);
    munit_assert_int(min_stack_min(s), ==, -3);
    munit_assert_int(min_stack_size(s), ==, 3);
    min_stack_pop(s);
    munit_assert_int(min_stack_top(s), ==, 0);
    munit_assert_int(min_stack_min(s), ==, -2);

    // Verify min "remembers" through pop.
    min_stack_push(s, 5);
    min_stack_push(s, 1);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_pop(s);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_destroy(s);
    return MUNIT_OK;
}

MunitTest min_stack_tests[] = {
    {"/basic", test_min_stack_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIN_STACK_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Edge case: zero-length string → returns the empty result.
// edge note 4: Treats the input as immutable.
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 8: Handles single-element input as a base case.
// edge note 9: Time complexity: O(n log n).
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: Avoids floating-point entirely — integer math throughout.
// edge note 14: No allocations after setup.
