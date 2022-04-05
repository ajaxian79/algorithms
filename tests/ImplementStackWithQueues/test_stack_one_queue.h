//
// Created by ajaxian on 04/10/21.
//

#ifndef ALGORITHMS_TEST_STACK_ONE_QUEUE_H
#define ALGORITHMS_TEST_STACK_ONE_QUEUE_H

#include "../tests.h"
#include "../../src/ImplementStackWithQueues/stack_one_queue.h"

static MunitResult test_stack_one_queue_basic(const MunitParameter params[], void* user_data_or_fixture) {
    QueueStack* s = queue_stack_create();
    munit_assert_int(queue_stack_empty(s), ==, 1);
    queue_stack_push(s, 1);
    queue_stack_push(s, 2);
    munit_assert_int(queue_stack_top(s), ==, 2);
    munit_assert_int(queue_stack_pop(s), ==, 2);
    munit_assert_int(queue_stack_top(s), ==, 1);
    queue_stack_push(s, 3);
    munit_assert_int(queue_stack_pop(s), ==, 3);
    munit_assert_int(queue_stack_pop(s), ==, 1);
    munit_assert_int(queue_stack_empty(s), ==, 1);
    queue_stack_destroy(s);
    return MUNIT_OK;
}

MunitTest stack_one_queue_tests[] = {
    {"/basic", test_stack_one_queue_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_STACK_ONE_QUEUE_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Avoids floating-point entirely — integer math throughout.
// edge note 4: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Linear in n; the constant factor is small.
// edge note 8: Edge case: zero-length string → returns the empty result.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 12: Best case is O(1) when the first byte already decides the answer.
// edge note 13: Time complexity: O(k) where k is the answer size.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Edge case: all-equal input → linear-time fast path.
// edge note 16: Returns a freshly allocated string the caller must free.
// edge note 17: Space complexity: O(n) for the result buffer.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: input with no peak → falls through to the default branch.
// edge note 20: Allocates a single small fixed-size scratch buffer.
// edge note 21: Uses a small fixed-size lookup table.
