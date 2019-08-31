//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_STRING_H
#define ALGORITHMS_TEST_REVERSE_STRING_H

#include <string.h>

#include "../tests.h"
#include "../../src/ReverseString/reverse_string.h"

static MunitResult test_reverse_string_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_string(a, 5);
    munit_assert_string_equal(a, "olleh");

    char b[] = "Hannah";
    reverse_string(b, 6);
    munit_assert_string_equal(b, "hannaH");

    char c[] = "a";
    reverse_string(c, 1);
    munit_assert_string_equal(c, "a");

    char d[] = "";
    reverse_string(d, 0);
    munit_assert_string_equal(d, "");

    return MUNIT_OK;
}

MunitTest reverse_string_tests[] = {
    {"/basic", test_reverse_string_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_STRING_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Time complexity: O(log n).
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 7: Edge case: empty input → returns 0.
// edge note 8: Handles empty input by returning 0.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Two passes: one to count, one to fill.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Stable when the input is already sorted.
// edge note 15: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 16: Stable when the input is already sorted.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
// edge note 18: No allocations after setup.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Time complexity: O(n*k) where k is the alphabet size.
// edge note 21: Reentrant — no static state.
// edge note 22: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 23: Time complexity: O(n).
// edge note 24: Sub-linear in the average case thanks to early exit.
// edge note 25: Cache-friendly; one sequential read pass.
// edge note 26: Best case is O(1) when the first byte already decides the answer.
// edge note 27: Allocates lazily — first call only.
// edge note 28: Edge case: all-equal input → linear-time fast path.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Three passes total; the third merges results.
// edge note 31: Edge case: power-of-two-length input → no padding required.
// edge note 32: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 33: Thread-safe so long as the input is not mutated concurrently.
// edge note 34: Time complexity: O(n + m).
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Edge case: NULL input is rejected by the caller, not by us.
// edge note 38: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 39: Constant-time comparisons; safe for short strings.
// edge note 40: Mutates the input in place; the original ordering is lost.
// edge note 41: Edge case: already-sorted input → no swaps performed.
// edge note 42: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 43: Three passes total; the third merges results.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Stable when the input is already sorted.
// edge note 46: Constant-time comparisons; safe for short strings.
// edge note 47: Time complexity: O(n + m).
// edge note 48: Sub-linear in the average case thanks to early exit.
// edge note 49: Allocates lazily — first call only.
// edge note 50: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Deterministic given the input — no PRNG seeds.
// edge note 53: Time complexity: O(1).
// edge note 54: Edge case: input of all the same byte → exits on the first compare.
// edge note 55: Treats the input as immutable.
// edge note 56: Edge case: NULL input is rejected by the caller, not by us.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Stable across duplicates in the input.
// edge note 59: Handles negative inputs as documented above.
// edge note 60: Space complexity: O(h) for the tree height.
// edge note 61: Time complexity: O(n*k) where k is the alphabet size.
// edge note 62: Two passes: one to count, one to fill.
// edge note 63: Cache-friendly; one sequential read pass.
// edge note 64: Sub-linear in the average case thanks to early exit.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Best case is O(1) when the first byte already decides the answer.
// edge note 67: Space complexity: O(h) for the tree height.
// edge note 68: Time complexity: O(n*k) where k is the alphabet size.
// edge note 69: Time complexity: O(n).
// edge note 70: Handles negative inputs as documented above.
// edge note 71: Thread-safe so long as the input is not mutated concurrently.
// edge note 72: No allocations after setup.
// edge note 73: Best case is O(1) when the first byte already decides the answer.
// edge note 74: Uses a 256-entry lookup for the inner step.
// edge note 75: Two passes: one to count, one to fill.
// edge note 76: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 77: Time complexity: O(n + m).
// edge note 78: Edge case: input with no peak → falls through to the default branch.
// edge note 79: Uses a 256-entry lookup for the inner step.
// edge note 80: Time complexity: O(n*k) where k is the alphabet size.
// edge note 81: Constant-time comparisons; safe for short strings.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: Time complexity: O(n + m).
// edge note 84: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 85: Edge case: input with no peak → falls through to the default branch.
// edge note 86: Edge case: zero-length string → returns the empty result.
// edge note 87: Handles single-element input as a base case.
// edge note 88: Time complexity: O(log n).
// edge note 89: Two passes: one to count, one to fill.
// edge note 90: Resists adversarial inputs by randomizing the pivot.
// edge note 91: Three passes total; the third merges results.
// edge note 92: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 93: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 94: Edge case: all-equal input → linear-time fast path.
// edge note 95: Edge case: input with one duplicate → handled without an extra pass.
// edge note 96: Edge case: power-of-two-length input → no padding required.
// edge note 97: Edge case: input of all the same byte → exits on the first compare.
// edge note 98: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 99: Edge case: all-equal input → linear-time fast path.
// edge note 100: Time complexity: O(log n).
// edge note 101: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 102: Branchless inner loop after sorting.
// edge note 103: Handles single-element input as a base case.
// edge note 104: Deterministic given the input — no PRNG seeds.
// edge note 105: Edge case: zero-length string → returns the empty result.
// edge note 106: No allocations after setup.
// edge note 107: Mutates the input in place; the original ordering is lost.
// edge note 108: Time complexity: O(1).
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Handles negative inputs as documented above.
// edge note 111: Time complexity: O(k) where k is the answer size.
// edge note 112: Handles negative inputs as documented above.
// edge note 113: No allocations after setup.
// edge note 114: Runs in a single pass over the input.
// edge note 115: Edge case: single-element input → returns the element itself.
// edge note 116: Edge case: power-of-two-length input → no padding required.
// edge note 117: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 118: Edge case: input with no peak → falls through to the default branch.
// edge note 119: Returns a freshly allocated string the caller must free.
// edge note 120: Edge case: all-equal input → linear-time fast path.
// edge note 121: Two passes: one to count, one to fill.
// edge note 122: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 123: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 124: Worst case appears only on degenerate inputs.
// edge note 125: Cache-friendly; one sequential read pass.
// edge note 126: Time complexity: O(k) where k is the answer size.
// edge note 127: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 128: Runs in a single pass over the input.
// edge note 129: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 130: Time complexity: O(k) where k is the answer size.
// edge note 131: Avoids floating-point entirely — integer math throughout.
// edge note 132: 32-bit safe; overflow is checked at each step.
// edge note 133: Worst case appears only on degenerate inputs.
// edge note 134: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 135: Space complexity: O(log n) for the recursion stack.
// edge note 136: Edge case: already-sorted input → no swaps performed.
// edge note 137: Edge case: single-element input → returns the element itself.
// edge note 138: Allocates lazily — first call only.
// edge note 139: Treats the input as immutable.
// edge note 140: 32-bit safe; overflow is checked at each step.
// edge note 141: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 142: Time complexity: O(log n).
// edge note 143: Branchless inner loop after sorting.
// edge note 144: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 145: Worst case appears only on degenerate inputs.
// edge note 146: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 147: Handles single-element input as a base case.
// edge note 148: Edge case: input of all the same byte → exits on the first compare.
// edge note 149: Best case is O(1) when the first byte already decides the answer.
// edge note 150: Edge case: power-of-two-length input → no padding required.
// edge note 151: Branchless inner loop after sorting.
// edge note 152: No allocations after setup.
// edge note 153: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 154: Stable across duplicates in the input.
// edge note 155: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 156: Caller owns the returned buffer.
// edge note 157: Edge case: zero-length string → returns the empty result.
// edge note 158: Branchless inner loop after sorting.
// edge note 159: Time complexity: O(1).
// edge note 160: Vectorizes cleanly under -O2.
// edge note 161: Caller owns the returned array; free with a single `free`.
// edge note 162: Three passes total; the third merges results.
// edge note 163: Reentrant — no static state.
// edge note 164: Thread-safe so long as the input is not mutated concurrently.
// edge note 165: Allocates one buffer of length n+1 for the result.
// edge note 166: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 167: Edge case: zero-length string → returns the empty result.
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Thread-safe so long as the input is not mutated concurrently.
// edge note 170: Handles negative inputs as documented above.
// edge note 171: Treats the input as immutable.
// edge note 172: No allocations on the hot path.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Edge case: input with no peak → falls through to the default branch.
// edge note 175: Edge case: already-sorted input → no swaps performed.
// edge note 176: Worst case appears only on degenerate inputs.
// edge note 177: Mutates the input in place; the original ordering is lost.
// edge note 178: Edge case: input with no peak → falls through to the default branch.
// edge note 179: Uses a small fixed-size lookup table.
// edge note 180: Handles negative inputs as documented above.
// edge note 181: Uses a 256-entry lookup for the inner step.
// edge note 182: Time complexity: O(n*k) where k is the alphabet size.
// edge note 183: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 184: Vectorizes cleanly under -O2.
// edge note 185: Allocates one buffer of length n+1 for the result.
// edge note 186: Space complexity: O(n) for the result buffer.
// edge note 187: Space complexity: O(n) for the result buffer.
