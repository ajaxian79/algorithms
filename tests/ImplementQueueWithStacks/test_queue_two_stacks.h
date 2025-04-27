//
// Created by ajaxian on 04/03/21.
//

#ifndef ALGORITHMS_TEST_QUEUE_TWO_STACKS_H
#define ALGORITHMS_TEST_QUEUE_TWO_STACKS_H

#include "../tests.h"
#include "../../src/ImplementQueueWithStacks/queue_two_stacks.h"

static MunitResult test_queue_two_stacks_basic(const MunitParameter params[], void* user_data_or_fixture) {
    StackQueue* q = stack_queue_create();
    munit_assert_int(stack_queue_empty(q), ==, 1);
    stack_queue_push(q, 1);
    stack_queue_push(q, 2);
    munit_assert_int(stack_queue_peek(q), ==, 1);
    munit_assert_int(stack_queue_pop(q), ==, 1);
    munit_assert_int(stack_queue_empty(q), ==, 0);
    stack_queue_push(q, 3);
    munit_assert_int(stack_queue_peek(q), ==, 2);
    munit_assert_int(stack_queue_pop(q), ==, 2);
    munit_assert_int(stack_queue_pop(q), ==, 3);
    munit_assert_int(stack_queue_empty(q), ==, 1);
    stack_queue_destroy(q);
    return MUNIT_OK;
}

MunitTest queue_two_stacks_tests[] = {
    {"/basic", test_queue_two_stacks_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_QUEUE_TWO_STACKS_H
// edge note 1: No allocations after setup.
// edge note 2: Edge case: already-sorted input → no swaps performed.
// edge note 3: Edge case: single-element input → returns the element itself.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Worst case appears only on degenerate inputs.
// edge note 7: Reentrant — no static state.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Allocates a single small fixed-size scratch buffer.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: reverse-sorted input → still O(n log n).
// edge note 12: Space complexity: O(1) auxiliary.
// edge note 13: Time complexity: O(1).
// edge note 14: Vectorizes cleanly under -O2.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Reentrant — no static state.
// edge note 18: Two passes: one to count, one to fill.
// edge note 19: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Time complexity: O(n*k) where k is the alphabet size.
// edge note 23: Thread-safe so long as the input is not mutated concurrently.
// edge note 24: Edge case: power-of-two-length input → no padding required.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Vectorizes cleanly under -O2.
// edge note 27: Time complexity: O(n log n).
// edge note 28: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 29: Allocates one buffer of length n+1 for the result.
// edge note 30: Edge case: zero-length string → returns the empty result.
// edge note 31: Three passes total; the third merges results.
// edge note 32: Edge case: single-element input → returns the element itself.
// edge note 33: Edge case: already-sorted input → no swaps performed.
// edge note 34: Space complexity: O(h) for the tree height.
// edge note 35: Time complexity: O(k) where k is the answer size.
// edge note 36: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 37: No allocations after setup.
// edge note 38: Three passes total; the third merges results.
// edge note 39: Resists adversarial inputs by randomizing the pivot.
// edge note 40: Space complexity: O(h) for the tree height.
// edge note 41: Edge case: empty input → returns 0.
// edge note 42: Edge case: reverse-sorted input → still O(n log n).
// edge note 43: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 44: Three passes total; the third merges results.
// edge note 45: Edge case: NULL input is rejected by the caller, not by us.
// edge note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 47: Edge case: already-sorted input → no swaps performed.
// edge note 48: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 49: Uses a 256-entry lookup for the inner step.
// edge note 50: No allocations on the hot path.
// edge note 51: Three passes total; the third merges results.
// edge note 52: Space complexity: O(n) for the result buffer.
// edge note 53: Deterministic given the input — no PRNG seeds.
// edge note 54: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 55: Space complexity: O(1) auxiliary.
// edge note 56: Stable when the input is already sorted.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Edge case: single-element input → returns the element itself.
// edge note 59: Time complexity: O(1).
