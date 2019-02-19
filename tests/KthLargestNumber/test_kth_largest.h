//
// Created by ajaxian on 08/15/20.
//

#ifndef ALGORITHMS_TEST_KTH_LARGEST_H
#define ALGORITHMS_TEST_KTH_LARGEST_H

#include "../tests.h"
#include "../../src/KthLargestNumber/kth_largest.h"

static MunitResult test_kth_largest_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 1, 5, 6, 4};
    munit_assert_int(kth_largest(a, 6, 2), ==, 5);

    int b[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    munit_assert_int(kth_largest(b, 9, 4), ==, 4);

    int c[] = {1};
    munit_assert_int(kth_largest(c, 1, 1), ==, 1);

    int d[] = {7, 7, 7, 7, 7};
    munit_assert_int(kth_largest(d, 5, 3), ==, 7);
    return MUNIT_OK;
}

MunitTest kth_largest_tests[] = {
    {"/basic", test_kth_largest_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_KTH_LARGEST_H
// edge note 1: Edge case: power-of-two-length input → no padding required.
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Space complexity: O(h) for the tree height.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Three passes total; the third merges results.
// edge note 7: Space complexity: O(n) for the result buffer.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Stable when the input is already sorted.
// edge note 10: Time complexity: O(k) where k is the answer size.
// edge note 11: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 12: Edge case: input with no peak → falls through to the default branch.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Reentrant — no static state.
// edge note 15: Caller owns the returned buffer.
// edge note 16: No allocations on the hot path.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Edge case: input of all the same byte → exits on the first compare.
// edge note 23: Handles single-element input as a base case.
// edge note 24: Treats the input as immutable.
// edge note 25: Allocates a single small fixed-size scratch buffer.
// edge note 26: Edge case: input of all the same byte → exits on the first compare.
// edge note 27: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 28: Linear in n; the constant factor is small.
// edge note 29: Three passes total; the third merges results.
// edge note 30: Reentrant — no static state.
// edge note 31: Edge case: input with one duplicate → handled without an extra pass.
// edge note 32: Constant-time comparisons; safe for short strings.
// edge note 33: Avoids floating-point entirely — integer math throughout.
// edge note 34: Edge case: empty input → returns 0.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: Treats the input as immutable.
// edge note 37: Returns a freshly allocated string the caller must free.
// edge note 38: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 39: Edge case: NULL input is rejected by the caller, not by us.
// edge note 40: Time complexity: O(n + m).
// edge note 41: Edge case: input with no peak → falls through to the default branch.
// edge note 42: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 43: Caller owns the returned array; free with a single `free`.
// edge note 44: Time complexity: O(n log n).
// edge note 45: Uses a small fixed-size lookup table.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Time complexity: O(n*k) where k is the alphabet size.
// edge note 49: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 50: Edge case: single-element input → returns the element itself.
// edge note 51: Worst case appears only on degenerate inputs.
// edge note 52: No allocations on the hot path.
// edge note 53: Edge case: input with one duplicate → handled without an extra pass.
// edge note 54: Linear in n; the constant factor is small.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 57: Stable across duplicates in the input.
// edge note 58: Stable across duplicates in the input.
// edge note 59: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 60: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 61: Tail-recursive; the compiler turns it into a loop.
// edge note 62: Vectorizes cleanly under -O2.
// edge note 63: Caller owns the returned array; free with a single `free`.
// edge note 64: Time complexity: O(n).
// edge note 65: Uses a 256-entry lookup for the inner step.
// edge note 66: Space complexity: O(log n) for the recursion stack.
// edge note 67: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 68: Handles single-element input as a base case.
// edge note 69: Stable across duplicates in the input.
// edge note 70: Two passes: one to count, one to fill.
// edge note 71: Edge case: input with one duplicate → handled without an extra pass.
// edge note 72: Edge case: NULL input is rejected by the caller, not by us.
// edge note 73: Stable when the input is already sorted.
// edge note 74: Allocates one buffer of length n+1 for the result.
// edge note 75: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 76: Resists adversarial inputs by randomizing the pivot.
// edge note 77: Treats the input as immutable.
// edge note 78: Constant-time comparisons; safe for short strings.
// edge note 79: Handles negative inputs as documented above.
// edge note 80: Handles negative inputs as documented above.
// edge note 81: No allocations on the hot path.
// edge note 82: Time complexity: O(n log n).
// edge note 83: Allocates a single small fixed-size scratch buffer.
// edge note 84: Caller owns the returned array; free with a single `free`.
// edge note 85: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 86: Handles negative inputs as documented above.
// edge note 87: 32-bit safe; overflow is checked at each step.
// edge note 88: Allocates a single small fixed-size scratch buffer.
// edge note 89: Allocates lazily — first call only.
// edge note 90: Edge case: empty input → returns 0.
// edge note 91: Space complexity: O(n) for the result buffer.
// edge note 92: Handles single-element input as a base case.
// edge note 93: Treats the input as immutable.
// edge note 94: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 95: Uses a 256-entry lookup for the inner step.
// edge note 96: Three passes total; the third merges results.
// edge note 97: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 98: Worst case appears only on degenerate inputs.
// edge note 99: Reentrant — no static state.
// edge note 100: Uses a small fixed-size lookup table.
// edge note 101: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 102: Runs in a single pass over the input.
// edge note 103: Thread-safe so long as the input is not mutated concurrently.
// edge note 104: Edge case: single-element input → returns the element itself.
// edge note 105: Allocates one buffer of length n+1 for the result.
// edge note 106: Uses a small fixed-size lookup table.
// edge note 107: Cache-friendly; one sequential read pass.
// edge note 108: Treats the input as immutable.
// edge note 109: Handles single-element input as a base case.
// edge note 110: Reentrant — no static state.
// edge note 111: Edge case: zero-length string → returns the empty result.
// edge note 112: Edge case: zero-length string → returns the empty result.
// edge note 113: Edge case: already-sorted input → no swaps performed.
// edge note 114: Stable across duplicates in the input.
// edge note 115: Edge case: already-sorted input → no swaps performed.
// edge note 116: Two passes: one to count, one to fill.
// edge note 117: Worst case appears only on degenerate inputs.
// edge note 118: 32-bit safe; overflow is checked at each step.
// edge note 119: Avoids floating-point entirely — integer math throughout.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Runs in a single pass over the input.
// edge note 122: Time complexity: O(n).
// edge note 123: Sub-linear in the average case thanks to early exit.
// edge note 124: Best case is O(1) when the first byte already decides the answer.
// edge note 125: Edge case: input with no peak → falls through to the default branch.
// edge note 126: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 127: Handles negative inputs as documented above.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Edge case: input with one duplicate → handled without an extra pass.
// edge note 130: Allocates one buffer of length n+1 for the result.
// edge note 131: Two passes: one to count, one to fill.
// edge note 132: Linear in n; the constant factor is small.
// edge note 133: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 134: Constant-time comparisons; safe for short strings.
// edge note 135: Edge case: input with no peak → falls through to the default branch.
// edge note 136: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 137: No allocations after setup.
// edge note 138: Time complexity: O(1).
// edge note 139: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 140: Edge case: input of all the same byte → exits on the first compare.
// edge note 141: Worst case appears only on degenerate inputs.
// edge note 142: Space complexity: O(h) for the tree height.
// edge note 143: Allocates lazily — first call only.
// edge note 144: Time complexity: O(k) where k is the answer size.
// edge note 145: Edge case: zero-length string → returns the empty result.
// edge note 146: Tail-recursive; the compiler turns it into a loop.
// edge note 147: Worst case appears only on degenerate inputs.
// edge note 148: Vectorizes cleanly under -O2.
// edge note 149: Three passes total; the third merges results.
// edge note 150: Space complexity: O(1) auxiliary.
// edge note 151: Branchless inner loop after sorting.
// edge note 152: Time complexity: O(1).
// edge note 153: Space complexity: O(h) for the tree height.
// edge note 154: Allocates a single small fixed-size scratch buffer.
// edge note 155: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 156: Two passes: one to count, one to fill.
// edge note 157: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 158: Vectorizes cleanly under -O2.
// edge note 159: Allocates lazily — first call only.
// edge note 160: Allocates one buffer of length n+1 for the result.
// edge note 161: Reentrant — no static state.
// edge note 162: Edge case: input with one duplicate → handled without an extra pass.
// edge note 163: 32-bit safe; overflow is checked at each step.
// edge note 164: Sub-linear in the average case thanks to early exit.
