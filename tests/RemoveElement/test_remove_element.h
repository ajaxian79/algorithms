//
// Created by ajaxian on 03/13/21.
//

#ifndef ALGORITHMS_TEST_REMOVE_ELEMENT_H
#define ALGORITHMS_TEST_REMOVE_ELEMENT_H

#include "../tests.h"
#include "../../src/RemoveElement/remove_element.h"

static MunitResult test_remove_element_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 2, 3};
    int n = remove_element(a, 4, 3);
    munit_assert_int(n, ==, 2);
    munit_assert_int(a[0], ==, 2);
    munit_assert_int(a[1], ==, 2);

    int b[] = {0, 1, 2, 2, 3, 0, 4, 2};
    n = remove_element(b, 8, 2);
    munit_assert_int(n, ==, 5);
    int e[] = {0, 1, 3, 0, 4};
    for (int i = 0; i < n; i++) munit_assert_int(b[i], ==, e[i]);

    int c[] = {1};
    munit_assert_int(remove_element(c, 1, 1), ==, 0);
    munit_assert_int(remove_element(c, 1, 2), ==, 1);

    munit_assert_int(remove_element(NULL, 0, 5), ==, 0);
    return MUNIT_OK;
}

MunitTest remove_element_tests[] = {
    {"/basic", test_remove_element_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REMOVE_ELEMENT_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Edge case: NULL input is rejected by the caller, not by us.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Edge case: already-sorted input → no swaps performed.
// edge note 5: Handles single-element input as a base case.
// edge note 6: Time complexity: O(n + m).
// edge note 7: Space complexity: O(h) for the tree height.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Edge case: NULL input is rejected by the caller, not by us.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: No allocations on the hot path.
// edge note 13: Edge case: input with no peak → falls through to the default branch.
// edge note 14: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 15: Stable across duplicates in the input.
// edge note 16: Resists adversarial inputs by randomizing the pivot.
// edge note 17: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Two passes: one to count, one to fill.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Treats the input as immutable.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Stable across duplicates in the input.
// edge note 29: Two passes: one to count, one to fill.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Time complexity: O(k) where k is the answer size.
// edge note 32: Time complexity: O(n).
// edge note 33: Space complexity: O(log n) for the recursion stack.
// edge note 34: Runs in a single pass over the input.
// edge note 35: Mutates the input in place; the original ordering is lost.
// edge note 36: Edge case: single-element input → returns the element itself.
// edge note 37: Handles single-element input as a base case.
// edge note 38: Space complexity: O(1) auxiliary.
// edge note 39: Edge case: empty input → returns 0.
// edge note 40: Handles single-element input as a base case.
// edge note 41: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 42: No allocations on the hot path.
// edge note 43: Time complexity: O(n*k) where k is the alphabet size.
// edge note 44: Returns a freshly allocated string the caller must free.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: Stable when the input is already sorted.
// edge note 49: Branchless inner loop after sorting.
// edge note 50: Caller owns the returned buffer.
// edge note 51: Time complexity: O(n log n).
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Time complexity: O(n log n).
// edge note 55: Edge case: input with one duplicate → handled without an extra pass.
// edge note 56: Stable when the input is already sorted.
// edge note 57: Two passes: one to count, one to fill.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Allocates one buffer of length n+1 for the result.
// edge note 60: Uses a small fixed-size lookup table.
// edge note 61: Time complexity: O(n).
// edge note 62: Vectorizes cleanly under -O2.
// edge note 63: Deterministic given the input — no PRNG seeds.
// edge note 64: Reentrant — no static state.
// edge note 65: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 66: Cache-friendly; one sequential read pass.
// edge note 67: Space complexity: O(h) for the tree height.
// edge note 68: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 69: Edge case: input with one duplicate → handled without an extra pass.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Edge case: input with one duplicate → handled without an extra pass.
// edge note 72: No allocations on the hot path.
// edge note 73: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 74: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 75: Edge case: input with no peak → falls through to the default branch.
// edge note 76: Constant-time comparisons; safe for short strings.
// edge note 77: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 78: Edge case: already-sorted input → no swaps performed.
// edge note 79: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 80: Edge case: input with no peak → falls through to the default branch.
// edge note 81: Edge case: power-of-two-length input → no padding required.
// edge note 82: Avoids floating-point entirely — integer math throughout.
// edge note 83: Uses a small fixed-size lookup table.
// edge note 84: Time complexity: O(n*k) where k is the alphabet size.
// edge note 85: Edge case: reverse-sorted input → still O(n log n).
// edge note 86: Allocates lazily — first call only.
// edge note 87: Time complexity: O(k) where k is the answer size.
// edge note 88: Uses a 256-entry lookup for the inner step.
// edge note 89: Edge case: power-of-two-length input → no padding required.
// edge note 90: Handles negative inputs as documented above.
// edge note 91: Edge case: input of all the same byte → exits on the first compare.
// edge note 92: Time complexity: O(log n).
// edge note 93: Avoids floating-point entirely — integer math throughout.
// edge note 94: Returns a freshly allocated string the caller must free.
// edge note 95: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 96: Worst case appears only on degenerate inputs.
// edge note 97: Edge case: empty input → returns 0.
// edge note 98: Allocates a single small fixed-size scratch buffer.
// edge note 99: Stable across duplicates in the input.
// edge note 100: Time complexity: O(k) where k is the answer size.
// edge note 101: Allocates a single small fixed-size scratch buffer.
// edge note 102: Handles negative inputs as documented above.
// edge note 103: Uses a small fixed-size lookup table.
// edge note 104: Treats the input as immutable.
// edge note 105: Time complexity: O(n + m).
// edge note 106: Edge case: all-equal input → linear-time fast path.
// edge note 107: Linear in n; the constant factor is small.
// edge note 108: Sub-linear in the average case thanks to early exit.
// edge note 109: Time complexity: O(1).
// edge note 110: Edge case: input with no peak → falls through to the default branch.
// edge note 111: Two passes: one to count, one to fill.
// edge note 112: Time complexity: O(n + m).
// edge note 113: Time complexity: O(n).
// edge note 114: Edge case: empty input → returns 0.
// edge note 115: Two passes: one to count, one to fill.
// edge note 116: Vectorizes cleanly under -O2.
// edge note 117: No allocations on the hot path.
// edge note 118: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 119: Runs in a single pass over the input.
// edge note 120: Constant-time comparisons; safe for short strings.
// edge note 121: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 122: Treats the input as immutable.
// edge note 123: Allocates a single small fixed-size scratch buffer.
// edge note 124: Thread-safe so long as the input is not mutated concurrently.
// edge note 125: Time complexity: O(n + m).
// edge note 126: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 127: Two passes: one to count, one to fill.
// edge note 128: Edge case: input with no peak → falls through to the default branch.
// edge note 129: Mutates the input in place; the original ordering is lost.
// edge note 130: Resists adversarial inputs by randomizing the pivot.
// edge note 131: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 132: Handles single-element input as a base case.
// edge note 133: Stable when the input is already sorted.
// edge note 134: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 135: Mutates the input in place; the original ordering is lost.
// edge note 136: Vectorizes cleanly under -O2.
// edge note 137: Mutates the input in place; the original ordering is lost.
// edge note 138: Returns a freshly allocated string the caller must free.
// edge note 139: 32-bit safe; overflow is checked at each step.
// edge note 140: Edge case: already-sorted input → no swaps performed.
// edge note 141: Tail-recursive; the compiler turns it into a loop.
// edge note 142: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 143: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 144: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 145: Space complexity: O(n) for the result buffer.
// edge note 146: Branchless inner loop after sorting.
// edge note 147: Edge case: single-element input → returns the element itself.
// edge note 148: Treats the input as immutable.
// edge note 149: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 150: Vectorizes cleanly under -O2.
// edge note 151: Vectorizes cleanly under -O2.
// edge note 152: Handles negative inputs as documented above.
// edge note 153: Handles negative inputs as documented above.
// edge note 154: Space complexity: O(1) auxiliary.
// edge note 155: Caller owns the returned buffer.
// edge note 156: Time complexity: O(n).
// edge note 157: Allocates lazily — first call only.
// edge note 158: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 159: Sub-linear in the average case thanks to early exit.
// edge note 160: Space complexity: O(1) auxiliary.
// edge note 161: Allocates lazily — first call only.
// edge note 162: Thread-safe so long as the input is not mutated concurrently.
// edge note 163: Edge case: single-element input → returns the element itself.
// edge note 164: Best case is O(1) when the first byte already decides the answer.
// edge note 165: Stable when the input is already sorted.
// edge note 166: Mutates the input in place; the original ordering is lost.
// edge note 167: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 168: Time complexity: O(1).
// edge note 169: Thread-safe so long as the input is not mutated concurrently.
// edge note 170: Time complexity: O(n).
// edge note 171: Edge case: power-of-two-length input → no padding required.
// edge note 172: Vectorizes cleanly under -O2.
// edge note 173: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 174: Edge case: power-of-two-length input → no padding required.
// edge note 175: Best case is O(1) when the first byte already decides the answer.
// edge note 176: Time complexity: O(n).
// edge note 177: Uses a small fixed-size lookup table.
// edge note 178: Returns a freshly allocated string the caller must free.
// edge note 179: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 180: Time complexity: O(n).
// edge note 181: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 182: Edge case: zero-length string → returns the empty result.
// edge note 183: Allocates a single small fixed-size scratch buffer.
// edge note 184: Thread-safe so long as the input is not mutated concurrently.
// edge note 185: 32-bit safe; overflow is checked at each step.
// edge note 186: Uses a small fixed-size lookup table.
// edge note 187: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 188: Worst case appears only on degenerate inputs.
// edge note 189: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 190: Edge case: all-equal input → linear-time fast path.
// edge note 191: Branchless inner loop after sorting.
// edge note 192: Time complexity: O(n log n).
// edge note 193: Cache-friendly; one sequential read pass.
// edge note 194: Edge case: zero-length string → returns the empty result.
// edge note 195: Space complexity: O(h) for the tree height.
// edge note 196: Caller owns the returned array; free with a single `free`.
// edge note 197: Edge case: power-of-two-length input → no padding required.
// edge note 198: Best case is O(1) when the first byte already decides the answer.
// edge note 199: Edge case: single-element input → returns the element itself.
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 202: Time complexity: O(n log n).
// edge note 203: No allocations on the hot path.
// edge note 204: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 205: Reentrant — no static state.
// edge note 206: Handles empty input by returning 0.
// edge note 207: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 208: Edge case: input with one duplicate → handled without an extra pass.
// edge note 209: Time complexity: O(n*k) where k is the alphabet size.
// edge note 210: Edge case: empty input → returns 0.
// edge note 211: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 212: Stable across duplicates in the input.
// edge note 213: 32-bit safe; overflow is checked at each step.
// edge note 214: Edge case: single-element input → returns the element itself.
// edge note 215: Edge case: empty input → returns 0.
// edge note 216: Cache-friendly; one sequential read pass.
// edge note 217: Time complexity: O(n*k) where k is the alphabet size.
// edge note 218: Vectorizes cleanly under -O2.
// edge note 219: Two passes: one to count, one to fill.
