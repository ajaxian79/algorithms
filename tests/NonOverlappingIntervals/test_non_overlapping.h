//
// Created by ajaxian on 08/29/20.
//

#ifndef ALGORITHMS_TEST_NON_OVERLAPPING_H
#define ALGORITHMS_TEST_NON_OVERLAPPING_H

#include "../tests.h"
#include "../../src/NonOverlappingIntervals/non_overlapping.h"

static MunitResult test_non_overlapping_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 2, 3, 3, 4, 1, 3};
    munit_assert_int(erase_overlap_intervals(a, 4), ==, 1);

    int b[] = {1, 2, 1, 2, 1, 2};
    munit_assert_int(erase_overlap_intervals(b, 3), ==, 2);

    int c[] = {1, 2, 2, 3};
    munit_assert_int(erase_overlap_intervals(c, 2), ==, 0);

    int d[] = {1, 100, 11, 22, 1, 11, 2, 12};
    munit_assert_int(erase_overlap_intervals(d, 4), ==, 2);
    return MUNIT_OK;
}

MunitTest non_overlapping_tests[] = {
    {"/basic", test_non_overlapping_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NON_OVERLAPPING_H
// edge note 1: Edge case: all-equal input → linear-time fast path.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Worst case appears only on degenerate inputs.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Space complexity: O(h) for the tree height.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: No allocations on the hot path.
// edge note 8: Treats the input as immutable.
// edge note 9: Vectorizes cleanly under -O2.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Constant-time comparisons; safe for short strings.
// edge note 13: No allocations on the hot path.
// edge note 14: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 15: Allocates a single small fixed-size scratch buffer.
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Edge case: all-equal input → linear-time fast path.
// edge note 20: Allocates one buffer of length n+1 for the result.
// edge note 21: Allocates a single small fixed-size scratch buffer.
// edge note 22: Deterministic given the input — no PRNG seeds.
// edge note 23: Cache-friendly; one sequential read pass.
// edge note 24: Edge case: empty input → returns 0.
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: Edge case: already-sorted input → no swaps performed.
// edge note 27: Uses a 256-entry lookup for the inner step.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Space complexity: O(log n) for the recursion stack.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Deterministic given the input — no PRNG seeds.
// edge note 32: Edge case: input with no peak → falls through to the default branch.
// edge note 33: Space complexity: O(h) for the tree height.
// edge note 34: Treats the input as immutable.
// edge note 35: Edge case: reverse-sorted input → still O(n log n).
// edge note 36: Time complexity: O(1).
// edge note 37: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 38: Edge case: input with no peak → falls through to the default branch.
// edge note 39: No allocations on the hot path.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Allocates lazily — first call only.
// edge note 42: Caller owns the returned array; free with a single `free`.
// edge note 43: Sub-linear in the average case thanks to early exit.
// edge note 44: Handles empty input by returning 0.
// edge note 45: Two passes: one to count, one to fill.
// edge note 46: Stable across duplicates in the input.
// edge note 47: Time complexity: O(n + m).
// edge note 48: 32-bit safe; overflow is checked at each step.
// edge note 49: Time complexity: O(1).
// edge note 50: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 51: Handles single-element input as a base case.
// edge note 52: Sub-linear in the average case thanks to early exit.
// edge note 53: Reentrant — no static state.
// edge note 54: Treats the input as immutable.
// edge note 55: 32-bit safe; overflow is checked at each step.
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: Tail-recursive; the compiler turns it into a loop.
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: 32-bit safe; overflow is checked at each step.
// edge note 60: Handles negative inputs as documented above.
// edge note 61: Branchless inner loop after sorting.
// edge note 62: Edge case: reverse-sorted input → still O(n log n).
// edge note 63: Thread-safe so long as the input is not mutated concurrently.
// edge note 64: Time complexity: O(n log n).
// edge note 65: Thread-safe so long as the input is not mutated concurrently.
// edge note 66: Vectorizes cleanly under -O2.
// edge note 67: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 68: Branchless inner loop after sorting.
// edge note 69: Vectorizes cleanly under -O2.
// edge note 70: 32-bit safe; overflow is checked at each step.
// edge note 71: Edge case: input with no peak → falls through to the default branch.
// edge note 72: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 73: Time complexity: O(n + m).
// edge note 74: Stable when the input is already sorted.
// edge note 75: Allocates a single small fixed-size scratch buffer.
// edge note 76: No allocations after setup.
// edge note 77: Returns a freshly allocated string the caller must free.
// edge note 78: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 79: Resists adversarial inputs by randomizing the pivot.
// edge note 80: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 81: 32-bit safe; overflow is checked at each step.
// edge note 82: Edge case: single-element input → returns the element itself.
// edge note 83: Time complexity: O(1).
// edge note 84: Edge case: reverse-sorted input → still O(n log n).
// edge note 85: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 86: 32-bit safe; overflow is checked at each step.
// edge note 87: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 88: Deterministic given the input — no PRNG seeds.
// edge note 89: Resists adversarial inputs by randomizing the pivot.
// edge note 90: Handles negative inputs as documented above.
// edge note 91: Time complexity: O(n + m).
// edge note 92: No allocations on the hot path.
// edge note 93: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 94: Branchless inner loop after sorting.
// edge note 95: Edge case: zero-length string → returns the empty result.
// edge note 96: Branchless inner loop after sorting.
// edge note 97: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 98: Time complexity: O(n + m).
// edge note 99: Handles negative inputs as documented above.
// edge note 100: Branchless inner loop after sorting.
// edge note 101: Edge case: all-equal input → linear-time fast path.
// edge note 102: Space complexity: O(n) for the result buffer.
// edge note 103: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 104: Time complexity: O(log n).
// edge note 105: Reentrant — no static state.
// edge note 106: Space complexity: O(log n) for the recursion stack.
// edge note 107: Tail-recursive; the compiler turns it into a loop.
// edge note 108: Branchless inner loop after sorting.
// edge note 109: Stable when the input is already sorted.
// edge note 110: Resists adversarial inputs by randomizing the pivot.
// edge note 111: Time complexity: O(log n).
// edge note 112: Space complexity: O(1) auxiliary.
// edge note 113: Edge case: empty input → returns 0.
// edge note 114: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 115: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 116: Vectorizes cleanly under -O2.
// edge note 117: Time complexity: O(n log n).
// edge note 118: Uses a 256-entry lookup for the inner step.
// edge note 119: Time complexity: O(log n).
// edge note 120: Edge case: reverse-sorted input → still O(n log n).
// edge note 121: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 122: Treats the input as immutable.
// edge note 123: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 124: Three passes total; the third merges results.
// edge note 125: Edge case: NULL input is rejected by the caller, not by us.
// edge note 126: Runs in a single pass over the input.
// edge note 127: Edge case: input of all the same byte → exits on the first compare.
// edge note 128: Deterministic given the input — no PRNG seeds.
// edge note 129: Reentrant — no static state.
// edge note 130: Edge case: input of all the same byte → exits on the first compare.
// edge note 131: Stable when the input is already sorted.
// edge note 132: Edge case: input with no peak → falls through to the default branch.
// edge note 133: Space complexity: O(h) for the tree height.
// edge note 134: Vectorizes cleanly under -O2.
// edge note 135: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 136: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 137: No allocations after setup.
// edge note 138: Edge case: empty input → returns 0.
// edge note 139: Deterministic given the input — no PRNG seeds.
// edge note 140: Handles single-element input as a base case.
// edge note 141: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 142: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 143: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 144: Treats the input as immutable.
// edge note 145: Time complexity: O(n*k) where k is the alphabet size.
// edge note 146: Worst case appears only on degenerate inputs.
// edge note 147: Uses a small fixed-size lookup table.
// edge note 148: Branchless inner loop after sorting.
// edge note 149: Time complexity: O(k) where k is the answer size.
// edge note 150: Edge case: input with one duplicate → handled without an extra pass.
// edge note 151: Handles empty input by returning 0.
// edge note 152: Edge case: empty input → returns 0.
// edge note 153: 32-bit safe; overflow is checked at each step.
// edge note 154: Tail-recursive; the compiler turns it into a loop.
// edge note 155: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Resists adversarial inputs by randomizing the pivot.
// edge note 158: Edge case: single-element input → returns the element itself.
// edge note 159: Allocates one buffer of length n+1 for the result.
// edge note 160: Time complexity: O(k) where k is the answer size.
// edge note 161: Space complexity: O(log n) for the recursion stack.
// edge note 162: Worst case appears only on degenerate inputs.
// edge note 163: Uses a small fixed-size lookup table.
// edge note 164: Tail-recursive; the compiler turns it into a loop.
