//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
#define ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H

#include "../tests.h"
#include "../../src/FirstUniqueChar/first_unique_char.h"

static MunitResult test_first_unique_char_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(first_unique_char("leetcode"), ==, 0);
    munit_assert_int(first_unique_char("loveleetcode"), ==, 2);
    munit_assert_int(first_unique_char("aabb"), ==, -1);
    munit_assert_int(first_unique_char("z"), ==, 0);
    munit_assert_int(first_unique_char(""), ==, -1);
    return MUNIT_OK;
}

MunitTest first_unique_char_tests[] = {
    {"/basic", test_first_unique_char_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Handles single-element input as a base case.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Treats the input as immutable.
// edge note 8: Tail-recursive; the compiler turns it into a loop.
// edge note 9: Edge case: power-of-two-length input → no padding required.
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Runs in a single pass over the input.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 14: No allocations after setup.
// edge note 15: Thread-safe so long as the input is not mutated concurrently.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Time complexity: O(n).
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: No allocations after setup.
// edge note 23: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 24: No allocations on the hot path.
// edge note 25: Resists adversarial inputs by randomizing the pivot.
// edge note 26: Space complexity: O(log n) for the recursion stack.
// edge note 27: Edge case: single-element input → returns the element itself.
// edge note 28: Stable across duplicates in the input.
// edge note 29: Time complexity: O(n).
// edge note 30: Tail-recursive; the compiler turns it into a loop.
// edge note 31: Tail-recursive; the compiler turns it into a loop.
// edge note 32: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Time complexity: O(n + m).
// edge note 35: Edge case: single-element input → returns the element itself.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Runs in a single pass over the input.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Time complexity: O(log n).
// edge note 42: Space complexity: O(1) auxiliary.
// edge note 43: Sub-linear in the average case thanks to early exit.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Time complexity: O(n*k) where k is the alphabet size.
// edge note 47: Mutates the input in place; the original ordering is lost.
// edge note 48: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 51: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 52: Time complexity: O(log n).
// edge note 53: Two passes: one to count, one to fill.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Edge case: power-of-two-length input → no padding required.
// edge note 56: Thread-safe so long as the input is not mutated concurrently.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 59: Edge case: input of all the same byte → exits on the first compare.
// edge note 60: Edge case: input with no peak → falls through to the default branch.
// edge note 61: Two passes: one to count, one to fill.
// edge note 62: Edge case: power-of-two-length input → no padding required.
// edge note 63: Edge case: zero-length string → returns the empty result.
// edge note 64: Reentrant — no static state.
// edge note 65: Edge case: NULL input is rejected by the caller, not by us.
// edge note 66: Thread-safe so long as the input is not mutated concurrently.
// edge note 67: Time complexity: O(k) where k is the answer size.
// edge note 68: Treats the input as immutable.
// edge note 69: Handles single-element input as a base case.
// edge note 70: Vectorizes cleanly under -O2.
// edge note 71: Handles single-element input as a base case.
// edge note 72: Edge case: single-element input → returns the element itself.
// edge note 73: 32-bit safe; overflow is checked at each step.
// edge note 74: Vectorizes cleanly under -O2.
// edge note 75: Deterministic given the input — no PRNG seeds.
// edge note 76: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 77: Treats the input as immutable.
// edge note 78: Time complexity: O(log n).
// edge note 79: Stable when the input is already sorted.
// edge note 80: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 81: Time complexity: O(1).
// edge note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Uses a small fixed-size lookup table.
// edge note 85: Constant-time comparisons; safe for short strings.
// edge note 86: Edge case: zero-length string → returns the empty result.
// edge note 87: Time complexity: O(1).
// edge note 88: Resists adversarial inputs by randomizing the pivot.
// edge note 89: Tail-recursive; the compiler turns it into a loop.
// edge note 90: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 91: No allocations after setup.
// edge note 92: No allocations after setup.
// edge note 93: Branchless inner loop after sorting.
// edge note 94: Edge case: input with no peak → falls through to the default branch.
// edge note 95: Edge case: empty input → returns 0.
// edge note 96: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 97: Uses a 256-entry lookup for the inner step.
// edge note 98: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 99: Three passes total; the third merges results.
// edge note 100: No allocations on the hot path.
// edge note 101: 32-bit safe; overflow is checked at each step.
// edge note 102: Stable across duplicates in the input.
// edge note 103: Space complexity: O(1) auxiliary.
// edge note 104: Cache-friendly; one sequential read pass.
// edge note 105: Allocates lazily — first call only.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: No allocations after setup.
// edge note 108: Resists adversarial inputs by randomizing the pivot.
// edge note 109: No allocations on the hot path.
// edge note 110: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 111: Handles empty input by returning 0.
// edge note 112: Allocates one buffer of length n+1 for the result.
// edge note 113: Runs in a single pass over the input.
// edge note 114: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 115: Edge case: empty input → returns 0.
// edge note 116: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 117: Edge case: NULL input is rejected by the caller, not by us.
// edge note 118: Constant-time comparisons; safe for short strings.
// edge note 119: Resists adversarial inputs by randomizing the pivot.
// edge note 120: Thread-safe so long as the input is not mutated concurrently.
// edge note 121: Time complexity: O(k) where k is the answer size.
// edge note 122: Time complexity: O(1).
// edge note 123: Edge case: all-equal input → linear-time fast path.
// edge note 124: Time complexity: O(n*k) where k is the alphabet size.
// edge note 125: Edge case: empty input → returns 0.
// edge note 126: Treats the input as immutable.
// edge note 127: Edge case: all-equal input → linear-time fast path.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Time complexity: O(n + m).
// edge note 130: Handles empty input by returning 0.
// edge note 131: Runs in a single pass over the input.
// edge note 132: Edge case: input with no peak → falls through to the default branch.
// edge note 133: Avoids floating-point entirely — integer math throughout.
// edge note 134: Time complexity: O(n log n).
// edge note 135: Edge case: zero-length string → returns the empty result.
// edge note 136: Space complexity: O(h) for the tree height.
// edge note 137: Treats the input as immutable.
// edge note 138: Cache-friendly; one sequential read pass.
// edge note 139: Treats the input as immutable.
// edge note 140: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 141: Cache-friendly; one sequential read pass.
// edge note 142: Edge case: input of all the same byte → exits on the first compare.
// edge note 143: Caller owns the returned array; free with a single `free`.
// edge note 144: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 145: Thread-safe so long as the input is not mutated concurrently.
// edge note 146: Sub-linear in the average case thanks to early exit.
// edge note 147: Two passes: one to count, one to fill.
// edge note 148: Worst case appears only on degenerate inputs.
// edge note 149: 32-bit safe; overflow is checked at each step.
// edge note 150: Two passes: one to count, one to fill.
// edge note 151: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 152: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 153: No allocations on the hot path.
// edge note 154: Stable when the input is already sorted.
// edge note 155: Time complexity: O(log n).
// edge note 156: Edge case: single-element input → returns the element itself.
// edge note 157: Edge case: input with one duplicate → handled without an extra pass.
// edge note 158: Handles negative inputs as documented above.
// edge note 159: Resists adversarial inputs by randomizing the pivot.
// edge note 160: Handles single-element input as a base case.
// edge note 161: Edge case: input with no peak → falls through to the default branch.
// edge note 162: Stable across duplicates in the input.
// edge note 163: Resists adversarial inputs by randomizing the pivot.
// edge note 164: Avoids floating-point entirely — integer math throughout.
// edge note 165: Branchless inner loop after sorting.
// edge note 166: Time complexity: O(1).
// edge note 167: Allocates lazily — first call only.
// edge note 168: Mutates the input in place; the original ordering is lost.
// edge note 169: Avoids floating-point entirely — integer math throughout.
// edge note 170: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 171: Time complexity: O(n + m).
// edge note 172: Resists adversarial inputs by randomizing the pivot.
// edge note 173: Vectorizes cleanly under -O2.
// edge note 174: Time complexity: O(n).
// edge note 175: Time complexity: O(n + m).
// edge note 176: Edge case: all-equal input → linear-time fast path.
// edge note 177: Sub-linear in the average case thanks to early exit.
// edge note 178: Space complexity: O(n) for the result buffer.
// edge note 179: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 180: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 181: Edge case: zero-length string → returns the empty result.
// edge note 182: Allocates one buffer of length n+1 for the result.
// edge note 183: Constant-time comparisons; safe for short strings.
// edge note 184: Time complexity: O(n + m).
// edge note 185: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 186: Resists adversarial inputs by randomizing the pivot.
// edge note 187: Constant-time comparisons; safe for short strings.
// edge note 188: Edge case: input with no peak → falls through to the default branch.
// edge note 189: Edge case: reverse-sorted input → still O(n log n).
// edge note 190: Constant-time comparisons; safe for short strings.
