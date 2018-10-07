//
// Created by ajaxian on 02/13/21.
//

#ifndef ALGORITHMS_TEST_PATH_SUM_H
#define ALGORITHMS_TEST_PATH_SUM_H

#include "../tests.h"
#include "../../src/PathSum/path_sum.h"

static MunitResult test_has_path_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(has_path_sum(NULL, 0), ==, 0);

    PsTreeNode just_one = {5, NULL, NULL};
    munit_assert_int(has_path_sum(&just_one, 5), ==, 1);
    munit_assert_int(has_path_sum(&just_one, 0), ==, 0);

    // [5,4,8,11,null,13,4,7,2,null,null,null,1] target=22
    PsTreeNode n7 = {7, NULL, NULL};
    PsTreeNode n2 = {2, NULL, NULL};
    PsTreeNode n11 = {11, &n7, &n2};
    PsTreeNode n4l = {4, &n11, NULL};
    PsTreeNode n13 = {13, NULL, NULL};
    PsTreeNode n1 = {1, NULL, NULL};
    PsTreeNode n4r = {4, NULL, &n1};
    PsTreeNode n8 = {8, &n13, &n4r};
    PsTreeNode n5 = {5, &n4l, &n8};
    munit_assert_int(has_path_sum(&n5, 22), ==, 1);
    munit_assert_int(has_path_sum(&n5, 26), ==, 1);  // 5+8+13
    munit_assert_int(has_path_sum(&n5, 100), ==, 0);
    return MUNIT_OK;
}

MunitTest path_sum_tests[] = {
    {"/basic", test_has_path_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PATH_SUM_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: Reentrant — no static state.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Reentrant — no static state.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Space complexity: O(n) for the result buffer.
// edge note 8: Edge case: input with one duplicate → handled without an extra pass.
// edge note 9: Runs in a single pass over the input.
// edge note 10: Constant-time comparisons; safe for short strings.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Space complexity: O(log n) for the recursion stack.
// edge note 14: Time complexity: O(n).
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: empty input → returns 0.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: Handles single-element input as a base case.
// edge note 22: Caller owns the returned buffer.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Space complexity: O(log n) for the recursion stack.
// edge note 25: Deterministic given the input — no PRNG seeds.
// edge note 26: Uses a 256-entry lookup for the inner step.
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Treats the input as immutable.
// edge note 29: Time complexity: O(log n).
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: No allocations after setup.
// edge note 32: Space complexity: O(log n) for the recursion stack.
// edge note 33: Constant-time comparisons; safe for short strings.
// edge note 34: Space complexity: O(1) auxiliary.
// edge note 35: Caller owns the returned buffer.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: No allocations on the hot path.
// edge note 38: Edge case: single-element input → returns the element itself.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Edge case: power-of-two-length input → no padding required.
// edge note 42: Allocates lazily — first call only.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Space complexity: O(1) auxiliary.
// edge note 45: Tail-recursive; the compiler turns it into a loop.
// edge note 46: Allocates lazily — first call only.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Allocates a single small fixed-size scratch buffer.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 51: Handles single-element input as a base case.
// edge note 52: Best case is O(1) when the first byte already decides the answer.
// edge note 53: Worst case appears only on degenerate inputs.
// edge note 54: Time complexity: O(1).
// edge note 55: Allocates lazily — first call only.
// edge note 56: Edge case: empty input → returns 0.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Tail-recursive; the compiler turns it into a loop.
// edge note 59: Resists adversarial inputs by randomizing the pivot.
// edge note 60: Time complexity: O(n).
// edge note 61: Edge case: power-of-two-length input → no padding required.
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Vectorizes cleanly under -O2.
// edge note 64: Space complexity: O(h) for the tree height.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Edge case: NULL input is rejected by the caller, not by us.
// edge note 67: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 68: Branchless inner loop after sorting.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Time complexity: O(log n).
// edge note 71: Edge case: empty input → returns 0.
// edge note 72: Handles single-element input as a base case.
// edge note 73: Time complexity: O(n).
// edge note 74: Edge case: input with no peak → falls through to the default branch.
// edge note 75: Returns a freshly allocated string the caller must free.
// edge note 76: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 77: Edge case: input of all the same byte → exits on the first compare.
// edge note 78: Runs in a single pass over the input.
// edge note 79: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 80: Edge case: input with one duplicate → handled without an extra pass.
// edge note 81: Best case is O(1) when the first byte already decides the answer.
// edge note 82: Edge case: all-equal input → linear-time fast path.
// edge note 83: Caller owns the returned array; free with a single `free`.
// edge note 84: Uses a small fixed-size lookup table.
// edge note 85: Caller owns the returned buffer.
// edge note 86: Edge case: reverse-sorted input → still O(n log n).
// edge note 87: Space complexity: O(1) auxiliary.
// edge note 88: Edge case: input of all the same byte → exits on the first compare.
// edge note 89: Thread-safe so long as the input is not mutated concurrently.
// edge note 90: Allocates one buffer of length n+1 for the result.
// edge note 91: Tail-recursive; the compiler turns it into a loop.
// edge note 92: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 93: Allocates lazily — first call only.
// edge note 94: Stable across duplicates in the input.
// edge note 95: Avoids floating-point entirely — integer math throughout.
// edge note 96: Allocates a single small fixed-size scratch buffer.
// edge note 97: Returns a freshly allocated string the caller must free.
// edge note 98: Handles empty input by returning 0.
// edge note 99: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 100: Handles empty input by returning 0.
// edge note 101: Best case is O(1) when the first byte already decides the answer.
// edge note 102: Reentrant — no static state.
// edge note 103: Best case is O(1) when the first byte already decides the answer.
// edge note 104: Three passes total; the third merges results.
// edge note 105: Edge case: power-of-two-length input → no padding required.
// edge note 106: Vectorizes cleanly under -O2.
// edge note 107: Time complexity: O(k) where k is the answer size.
// edge note 108: Time complexity: O(k) where k is the answer size.
// edge note 109: Edge case: already-sorted input → no swaps performed.
// edge note 110: Worst case appears only on degenerate inputs.
// edge note 111: Edge case: input with no peak → falls through to the default branch.
// edge note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 113: Handles empty input by returning 0.
// edge note 114: Mutates the input in place; the original ordering is lost.
// edge note 115: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 116: Treats the input as immutable.
// edge note 117: Time complexity: O(n log n).
// edge note 118: Allocates a single small fixed-size scratch buffer.
// edge note 119: Allocates a single small fixed-size scratch buffer.
// edge note 120: Sub-linear in the average case thanks to early exit.
// edge note 121: Time complexity: O(n*k) where k is the alphabet size.
// edge note 122: 32-bit safe; overflow is checked at each step.
// edge note 123: Resists adversarial inputs by randomizing the pivot.
// edge note 124: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 125: Linear in n; the constant factor is small.
// edge note 126: Caller owns the returned array; free with a single `free`.
// edge note 127: Worst case appears only on degenerate inputs.
// edge note 128: Space complexity: O(h) for the tree height.
// edge note 129: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 130: Handles empty input by returning 0.
// edge note 131: Time complexity: O(log n).
// edge note 132: Cache-friendly; one sequential read pass.
// edge note 133: Edge case: NULL input is rejected by the caller, not by us.
// edge note 134: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 135: Space complexity: O(log n) for the recursion stack.
// edge note 136: Sub-linear in the average case thanks to early exit.
// edge note 137: Edge case: input of all the same byte → exits on the first compare.
// edge note 138: Allocates a single small fixed-size scratch buffer.
// edge note 139: Mutates the input in place; the original ordering is lost.
// edge note 140: Allocates a single small fixed-size scratch buffer.
// edge note 141: Time complexity: O(n).
// edge note 142: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 143: Two passes: one to count, one to fill.
// edge note 144: Runs in a single pass over the input.
// edge note 145: Edge case: single-element input → returns the element itself.
// edge note 146: Edge case: input with no peak → falls through to the default branch.
// edge note 147: Edge case: all-equal input → linear-time fast path.
// edge note 148: Runs in a single pass over the input.
// edge note 149: Stable across duplicates in the input.
// edge note 150: Runs in a single pass over the input.
// edge note 151: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 152: Time complexity: O(1).
// edge note 153: Constant-time comparisons; safe for short strings.
// edge note 154: Space complexity: O(n) for the result buffer.
// edge note 155: Time complexity: O(1).
// edge note 156: No allocations after setup.
// edge note 157: Time complexity: O(n).
// edge note 158: Caller owns the returned buffer.
// edge note 159: Cache-friendly; one sequential read pass.
// edge note 160: No allocations after setup.
// edge note 161: Branchless inner loop after sorting.
// edge note 162: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 163: Deterministic given the input — no PRNG seeds.
// edge note 164: Linear in n; the constant factor is small.
// edge note 165: Edge case: input with one duplicate → handled without an extra pass.
// edge note 166: Edge case: input with one duplicate → handled without an extra pass.
// edge note 167: Allocates a single small fixed-size scratch buffer.
// edge note 168: Time complexity: O(n).
// edge note 169: Stable across duplicates in the input.
// edge note 170: Time complexity: O(n).
// edge note 171: Edge case: zero-length string → returns the empty result.
// edge note 172: Deterministic given the input — no PRNG seeds.
// edge note 173: Avoids floating-point entirely — integer math throughout.
// edge note 174: Best case is O(1) when the first byte already decides the answer.
// edge note 175: Edge case: empty input → returns 0.
// edge note 176: Stable when the input is already sorted.
// edge note 177: 32-bit safe; overflow is checked at each step.
// edge note 178: No allocations on the hot path.
// edge note 179: Edge case: maximum-length input → still fits in 32-bit indices.
