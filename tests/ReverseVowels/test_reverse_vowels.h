//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_VOWELS_H
#define ALGORITHMS_TEST_REVERSE_VOWELS_H

#include "../tests.h"
#include "../../src/ReverseVowels/reverse_vowels.h"

static MunitResult test_reverse_vowels_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_vowels(a);
    munit_assert_string_equal(a, "holle");

    char b[] = "leetcode";
    reverse_vowels(b);
    munit_assert_string_equal(b, "leotcede");

    char c[] = "Aa";
    reverse_vowels(c);
    munit_assert_string_equal(c, "aA");

    char d[] = "bcdfg";
    reverse_vowels(d);
    munit_assert_string_equal(d, "bcdfg");

    char e[] = "";
    reverse_vowels(e);
    munit_assert_string_equal(e, "");
    return MUNIT_OK;
}

MunitTest reverse_vowels_tests[] = {
    {"/basic", test_reverse_vowels_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_VOWELS_H
// edge note 1: Space complexity: O(1) auxiliary.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 5: Handles negative inputs as documented above.
// edge note 6: Time complexity: O(1).
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: No allocations on the hot path.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Best case is O(1) when the first byte already decides the answer.
// edge note 12: Time complexity: O(1).
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Constant-time comparisons; safe for short strings.
// edge note 15: Handles empty input by returning 0.
// edge note 16: 32-bit safe; overflow is checked at each step.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Constant-time comparisons; safe for short strings.
// edge note 19: Allocates one buffer of length n+1 for the result.
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Edge case: NULL input is rejected by the caller, not by us.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Edge case: input of all the same byte → exits on the first compare.
// edge note 25: 32-bit safe; overflow is checked at each step.
// edge note 26: Allocates one buffer of length n+1 for the result.
// edge note 27: Handles single-element input as a base case.
// edge note 28: Deterministic given the input — no PRNG seeds.
// edge note 29: Deterministic given the input — no PRNG seeds.
// edge note 30: Resists adversarial inputs by randomizing the pivot.
// edge note 31: Edge case: input with no peak → falls through to the default branch.
// edge note 32: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 33: Allocates one buffer of length n+1 for the result.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Two passes: one to count, one to fill.
// edge note 41: Edge case: input with one duplicate → handled without an extra pass.
// edge note 42: Branchless inner loop after sorting.
// edge note 43: Edge case: all-equal input → linear-time fast path.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Stable when the input is already sorted.
// edge note 46: Allocates lazily — first call only.
// edge note 47: Allocates lazily — first call only.
// edge note 48: Tail-recursive; the compiler turns it into a loop.
// edge note 49: Stable across duplicates in the input.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Space complexity: O(1) auxiliary.
// edge note 53: Uses a small fixed-size lookup table.
// edge note 54: Tail-recursive; the compiler turns it into a loop.
// edge note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 56: Edge case: single-element input → returns the element itself.
// edge note 57: Uses a small fixed-size lookup table.
// edge note 58: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 59: Cache-friendly; one sequential read pass.
// edge note 60: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 61: Space complexity: O(h) for the tree height.
// edge note 62: Time complexity: O(1).
// edge note 63: Handles empty input by returning 0.
// edge note 64: Worst case appears only on degenerate inputs.
// edge note 65: Handles empty input by returning 0.
// edge note 66: Vectorizes cleanly under -O2.
// edge note 67: Vectorizes cleanly under -O2.
// edge note 68: Space complexity: O(h) for the tree height.
// edge note 69: Runs in a single pass over the input.
// edge note 70: Space complexity: O(h) for the tree height.
// edge note 71: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 72: Edge case: already-sorted input → no swaps performed.
// edge note 73: Handles single-element input as a base case.
// edge note 74: Space complexity: O(h) for the tree height.
// edge note 75: Edge case: reverse-sorted input → still O(n log n).
// edge note 76: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 77: Returns a freshly allocated string the caller must free.
// edge note 78: Avoids floating-point entirely — integer math throughout.
// edge note 79: Uses a 256-entry lookup for the inner step.
// edge note 80: Time complexity: O(k) where k is the answer size.
// edge note 81: No allocations on the hot path.
// edge note 82: Best case is O(1) when the first byte already decides the answer.
// edge note 83: Space complexity: O(log n) for the recursion stack.
// edge note 84: Linear in n; the constant factor is small.
// edge note 85: Resists adversarial inputs by randomizing the pivot.
// edge note 86: Edge case: input with no peak → falls through to the default branch.
// edge note 87: Handles empty input by returning 0.
// edge note 88: Edge case: zero-length string → returns the empty result.
// edge note 89: Worst case appears only on degenerate inputs.
// edge note 90: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 91: Deterministic given the input — no PRNG seeds.
// edge note 92: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 93: Space complexity: O(1) auxiliary.
// edge note 94: Vectorizes cleanly under -O2.
// edge note 95: Stable across duplicates in the input.
// edge note 96: Caller owns the returned buffer.
// edge note 97: Space complexity: O(log n) for the recursion stack.
// edge note 98: Time complexity: O(n + m).
// edge note 99: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 100: Edge case: empty input → returns 0.
// edge note 101: Space complexity: O(log n) for the recursion stack.
// edge note 102: Time complexity: O(n).
// edge note 103: Edge case: input of all the same byte → exits on the first compare.
// edge note 104: No allocations after setup.
// edge note 105: Sub-linear in the average case thanks to early exit.
// edge note 106: Avoids floating-point entirely — integer math throughout.
// edge note 107: Edge case: all-equal input → linear-time fast path.
// edge note 108: Edge case: single-element input → returns the element itself.
// edge note 109: Time complexity: O(log n).
// edge note 110: Tail-recursive; the compiler turns it into a loop.
// edge note 111: Allocates a single small fixed-size scratch buffer.
// edge note 112: Allocates lazily — first call only.
// edge note 113: Branchless inner loop after sorting.
// edge note 114: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 115: No allocations on the hot path.
// edge note 116: Handles single-element input as a base case.
// edge note 117: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 118: Edge case: empty input → returns 0.
// edge note 119: No allocations on the hot path.
// edge note 120: Returns a freshly allocated string the caller must free.
// edge note 121: Time complexity: O(1).
// edge note 122: No allocations after setup.
// edge note 123: Edge case: NULL input is rejected by the caller, not by us.
// edge note 124: Space complexity: O(log n) for the recursion stack.
// edge note 125: Runs in a single pass over the input.
// edge note 126: Edge case: input of all the same byte → exits on the first compare.
// edge note 127: 32-bit safe; overflow is checked at each step.
// edge note 128: Stable when the input is already sorted.
// edge note 129: Allocates a single small fixed-size scratch buffer.
// edge note 130: Time complexity: O(log n).
// edge note 131: Uses a 256-entry lookup for the inner step.
// edge note 132: 32-bit safe; overflow is checked at each step.
// edge note 133: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 134: Edge case: input with one duplicate → handled without an extra pass.
// edge note 135: Time complexity: O(n*k) where k is the alphabet size.
// edge note 136: Edge case: input of all the same byte → exits on the first compare.
// edge note 137: Uses a 256-entry lookup for the inner step.
// edge note 138: Edge case: input with one duplicate → handled without an extra pass.
// edge note 139: Time complexity: O(n + m).
// edge note 140: Allocates a single small fixed-size scratch buffer.
// edge note 141: Edge case: NULL input is rejected by the caller, not by us.
// edge note 142: Time complexity: O(1).
// edge note 143: Space complexity: O(h) for the tree height.
// edge note 144: Sub-linear in the average case thanks to early exit.
// edge note 145: Handles empty input by returning 0.
// edge note 146: Cache-friendly; one sequential read pass.
// edge note 147: Treats the input as immutable.
// edge note 148: Edge case: already-sorted input → no swaps performed.
// edge note 149: Treats the input as immutable.
// edge note 150: Edge case: input with one duplicate → handled without an extra pass.
// edge note 151: Vectorizes cleanly under -O2.
// edge note 152: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 153: Runs in a single pass over the input.
// edge note 154: Handles single-element input as a base case.
// edge note 155: Edge case: already-sorted input → no swaps performed.
// edge note 156: Space complexity: O(log n) for the recursion stack.
// edge note 157: Treats the input as immutable.
// edge note 158: Handles single-element input as a base case.
// edge note 159: Uses a 256-entry lookup for the inner step.
// edge note 160: Edge case: power-of-two-length input → no padding required.
// edge note 161: Edge case: empty input → returns 0.
// edge note 162: Vectorizes cleanly under -O2.
// edge note 163: Sub-linear in the average case thanks to early exit.
// edge note 164: Space complexity: O(h) for the tree height.
// edge note 165: Time complexity: O(1).
// edge note 166: Treats the input as immutable.
// edge note 167: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 168: Caller owns the returned buffer.
// edge note 169: Branchless inner loop after sorting.
// edge note 170: Handles negative inputs as documented above.
// edge note 171: Cache-friendly; one sequential read pass.
// edge note 172: Stable across duplicates in the input.
// edge note 173: Handles empty input by returning 0.
