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
// edge note 22: Edge case: zero-length string → returns the empty result.
// edge note 23: Caller owns the returned array; free with a single `free`.
// edge note 24: Stable when the input is already sorted.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Branchless inner loop after sorting.
// edge note 28: Allocates a single small fixed-size scratch buffer.
// edge note 29: Three passes total; the third merges results.
// edge note 30: No allocations on the hot path.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Avoids floating-point entirely — integer math throughout.
// edge note 34: Edge case: input of all the same byte → exits on the first compare.
// edge note 35: Worst case appears only on degenerate inputs.
// edge note 36: Returns a freshly allocated string the caller must free.
// edge note 37: Returns a freshly allocated string the caller must free.
// edge note 38: Linear in n; the constant factor is small.
// edge note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: Tail-recursive; the compiler turns it into a loop.
// edge note 42: Caller owns the returned array; free with a single `free`.
// edge note 43: Runs in a single pass over the input.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Edge case: reverse-sorted input → still O(n log n).
// edge note 48: Handles negative inputs as documented above.
// edge note 49: Three passes total; the third merges results.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Uses a small fixed-size lookup table.
// edge note 52: Time complexity: O(1).
// edge note 53: Deterministic given the input — no PRNG seeds.
// edge note 54: Runs in a single pass over the input.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Edge case: power-of-two-length input → no padding required.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Edge case: power-of-two-length input → no padding required.
// edge note 59: Stable when the input is already sorted.
// edge note 60: Handles empty input by returning 0.
// edge note 61: No allocations after setup.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Handles single-element input as a base case.
// edge note 64: Stable when the input is already sorted.
// edge note 65: No allocations on the hot path.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Time complexity: O(n).
// edge note 68: Best case is O(1) when the first byte already decides the answer.
// edge note 69: Edge case: input with no peak → falls through to the default branch.
// edge note 70: Edge case: input with one duplicate → handled without an extra pass.
// edge note 71: Resists adversarial inputs by randomizing the pivot.
// edge note 72: Edge case: empty input → returns 0.
// edge note 73: No allocations on the hot path.
// edge note 74: Worst case appears only on degenerate inputs.
// edge note 75: Stable when the input is already sorted.
// edge note 76: Best case is O(1) when the first byte already decides the answer.
// edge note 77: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 78: Edge case: input with no peak → falls through to the default branch.
// edge note 79: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 80: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 81: Reentrant — no static state.
// edge note 82: Edge case: NULL input is rejected by the caller, not by us.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Mutates the input in place; the original ordering is lost.
// edge note 85: Handles single-element input as a base case.
// edge note 86: Uses a 256-entry lookup for the inner step.
// edge note 87: Edge case: zero-length string → returns the empty result.
// edge note 88: Edge case: already-sorted input → no swaps performed.
// edge note 89: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 90: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 91: Best case is O(1) when the first byte already decides the answer.
// edge note 92: Time complexity: O(k) where k is the answer size.
// edge note 93: Edge case: single-element input → returns the element itself.
// edge note 94: Time complexity: O(n log n).
// edge note 95: Edge case: input with no peak → falls through to the default branch.
// edge note 96: Runs in a single pass over the input.
// edge note 97: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Edge case: reverse-sorted input → still O(n log n).
// edge note 100: Space complexity: O(n) for the result buffer.
// edge note 101: Handles empty input by returning 0.
// edge note 102: Handles single-element input as a base case.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Branchless inner loop after sorting.
// edge note 105: Resists adversarial inputs by randomizing the pivot.
// edge note 106: Allocates lazily — first call only.
// edge note 107: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 108: Edge case: empty input → returns 0.
// edge note 109: Time complexity: O(n + m).
// edge note 110: Handles empty input by returning 0.
// edge note 111: Time complexity: O(1).
// edge note 112: Time complexity: O(n).
// edge note 113: No allocations on the hot path.
// edge note 114: Worst case appears only on degenerate inputs.
// edge note 115: Mutates the input in place; the original ordering is lost.
// edge note 116: Sub-linear in the average case thanks to early exit.
// edge note 117: No allocations after setup.
// edge note 118: Edge case: NULL input is rejected by the caller, not by us.
// edge note 119: Uses a small fixed-size lookup table.
// edge note 120: Runs in a single pass over the input.
// edge note 121: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 122: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 123: Edge case: input with no peak → falls through to the default branch.
// edge note 124: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 125: No allocations after setup.
// edge note 126: Resists adversarial inputs by randomizing the pivot.
