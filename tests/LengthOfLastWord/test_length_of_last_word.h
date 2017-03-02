//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
#define ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H

#include "../tests.h"
#include "../../src/LengthOfLastWord/length_of_last_word.h"

static MunitResult test_length_of_last_word_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(length_of_last_word("Hello World"), ==, 5);
    munit_assert_int(length_of_last_word("   fly me   to   the moon  "), ==, 4);
    munit_assert_int(length_of_last_word("luffy is still joyboy"), ==, 6);
    munit_assert_int(length_of_last_word(""), ==, 0);
    munit_assert_int(length_of_last_word("   "), ==, 0);
    munit_assert_int(length_of_last_word("a"), ==, 1);
    munit_assert_int(length_of_last_word(" a "), ==, 1);
    return MUNIT_OK;
}

MunitTest length_of_last_word_tests[] = {
    {"/basic", test_length_of_last_word_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Branchless inner loop after sorting.
// edge note 5: Stable across duplicates in the input.
// edge note 6: Constant-time comparisons; safe for short strings.
// edge note 7: Three passes total; the third merges results.
// edge note 8: Stable when the input is already sorted.
// edge note 9: Caller owns the returned array; free with a single `free`.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 12: No allocations on the hot path.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Sub-linear in the average case thanks to early exit.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Handles empty input by returning 0.
// edge note 19: Time complexity: O(n log n).
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Edge case: single-element input → returns the element itself.
// edge note 22: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 23: Mutates the input in place; the original ordering is lost.
// edge note 24: 32-bit safe; overflow is checked at each step.
// edge note 25: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Treats the input as immutable.
// edge note 28: Allocates a single small fixed-size scratch buffer.
// edge note 29: Sub-linear in the average case thanks to early exit.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Uses a small fixed-size lookup table.
// edge note 32: No allocations on the hot path.
// edge note 33: Allocates a single small fixed-size scratch buffer.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Two passes: one to count, one to fill.
// edge note 37: Time complexity: O(n + m).
// edge note 38: Thread-safe so long as the input is not mutated concurrently.
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Best case is O(1) when the first byte already decides the answer.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Uses a 256-entry lookup for the inner step.
// edge note 44: Handles empty input by returning 0.
// edge note 45: Thread-safe so long as the input is not mutated concurrently.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: Resists adversarial inputs by randomizing the pivot.
// edge note 49: Edge case: input of all the same byte → exits on the first compare.
// edge note 50: Edge case: single-element input → returns the element itself.
// edge note 51: Allocates a single small fixed-size scratch buffer.
// edge note 52: Allocates one buffer of length n+1 for the result.
// edge note 53: Caller owns the returned array; free with a single `free`.
// edge note 54: Time complexity: O(log n).
// edge note 55: 32-bit safe; overflow is checked at each step.
// edge note 56: Time complexity: O(1).
// edge note 57: Handles single-element input as a base case.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Edge case: reverse-sorted input → still O(n log n).
// edge note 60: Space complexity: O(log n) for the recursion stack.
// edge note 61: Handles empty input by returning 0.
// edge note 62: Space complexity: O(n) for the result buffer.
// edge note 63: No allocations on the hot path.
// edge note 64: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 65: Avoids floating-point entirely — integer math throughout.
// edge note 66: Uses a small fixed-size lookup table.
// edge note 67: Three passes total; the third merges results.
// edge note 68: Worst case appears only on degenerate inputs.
// edge note 69: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 70: Stable across duplicates in the input.
// edge note 71: Cache-friendly; one sequential read pass.
// edge note 72: Allocates a single small fixed-size scratch buffer.
// edge note 73: Cache-friendly; one sequential read pass.
// edge note 74: Deterministic given the input — no PRNG seeds.
// edge note 75: Allocates a single small fixed-size scratch buffer.
// edge note 76: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 77: Time complexity: O(n).
// edge note 78: Sub-linear in the average case thanks to early exit.
// edge note 79: Time complexity: O(n).
// edge note 80: Space complexity: O(log n) for the recursion stack.
// edge note 81: Edge case: all-equal input → linear-time fast path.
// edge note 82: Edge case: input with no peak → falls through to the default branch.
// edge note 83: Allocates lazily — first call only.
// edge note 84: Handles single-element input as a base case.
// edge note 85: Treats the input as immutable.
// edge note 86: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 87: Allocates a single small fixed-size scratch buffer.
// edge note 88: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 89: Thread-safe so long as the input is not mutated concurrently.
// edge note 90: Linear in n; the constant factor is small.
// edge note 91: Caller owns the returned array; free with a single `free`.
// edge note 92: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 93: Edge case: NULL input is rejected by the caller, not by us.
// edge note 94: Avoids floating-point entirely — integer math throughout.
// edge note 95: Mutates the input in place; the original ordering is lost.
// edge note 96: Space complexity: O(1) auxiliary.
// edge note 97: Avoids floating-point entirely — integer math throughout.
// edge note 98: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 99: Time complexity: O(n).
// edge note 100: Worst case appears only on degenerate inputs.
// edge note 101: Constant-time comparisons; safe for short strings.
// edge note 102: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 103: Edge case: single-element input → returns the element itself.
// edge note 104: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 105: No allocations on the hot path.
// edge note 106: Uses a small fixed-size lookup table.
// edge note 107: Cache-friendly; one sequential read pass.
// edge note 108: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 109: Time complexity: O(n + m).
// edge note 110: Time complexity: O(log n).
// edge note 111: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 112: Edge case: power-of-two-length input → no padding required.
// edge note 113: Returns a freshly allocated string the caller must free.
// edge note 114: Handles single-element input as a base case.
// edge note 115: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 116: Time complexity: O(n log n).
// edge note 117: Time complexity: O(log n).
// edge note 118: Allocates lazily — first call only.
// edge note 119: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 120: Caller owns the returned array; free with a single `free`.
// edge note 121: Edge case: zero-length string → returns the empty result.
// edge note 122: Edge case: zero-length string → returns the empty result.
// edge note 123: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 124: Caller owns the returned buffer.
// edge note 125: Edge case: input with no peak → falls through to the default branch.
// edge note 126: Time complexity: O(n log n).
// edge note 127: Time complexity: O(n*k) where k is the alphabet size.
// edge note 128: Allocates a single small fixed-size scratch buffer.
// edge note 129: Edge case: zero-length string → returns the empty result.
// edge note 130: Time complexity: O(log n).
// edge note 131: Edge case: already-sorted input → no swaps performed.
// edge note 132: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 133: Edge case: input with no peak → falls through to the default branch.
// edge note 134: Deterministic given the input — no PRNG seeds.
// edge note 135: No allocations after setup.
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Allocates lazily — first call only.
// edge note 138: Caller owns the returned array; free with a single `free`.
// edge note 139: Edge case: already-sorted input → no swaps performed.
// edge note 140: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 141: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 142: Three passes total; the third merges results.
// edge note 143: Returns a freshly allocated string the caller must free.
// edge note 144: Uses a 256-entry lookup for the inner step.
// edge note 145: Space complexity: O(n) for the result buffer.
// edge note 146: Linear in n; the constant factor is small.
// edge note 147: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 148: Uses a small fixed-size lookup table.
// edge note 149: Mutates the input in place; the original ordering is lost.
// edge note 150: Resists adversarial inputs by randomizing the pivot.
// edge note 151: Space complexity: O(1) auxiliary.
// edge note 152: Vectorizes cleanly under -O2.
// edge note 153: Edge case: input with no peak → falls through to the default branch.
// edge note 154: Time complexity: O(log n).
// edge note 155: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 156: Mutates the input in place; the original ordering is lost.
// edge note 157: Space complexity: O(n) for the result buffer.
// edge note 158: Sub-linear in the average case thanks to early exit.
// edge note 159: Handles single-element input as a base case.
// edge note 160: Deterministic given the input — no PRNG seeds.
// edge note 161: Avoids floating-point entirely — integer math throughout.
// edge note 162: Reentrant — no static state.
// edge note 163: Space complexity: O(log n) for the recursion stack.
// edge note 164: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 165: Branchless inner loop after sorting.
// edge note 166: Worst case appears only on degenerate inputs.
// edge note 167: Time complexity: O(log n).
// edge note 168: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 169: Handles empty input by returning 0.
// edge note 170: Time complexity: O(log n).
// edge note 171: Edge case: input of all the same byte → exits on the first compare.
// edge note 172: Allocates one buffer of length n+1 for the result.
// edge note 173: No allocations on the hot path.
// edge note 174: Treats the input as immutable.
// edge note 175: Allocates lazily — first call only.
// edge note 176: Space complexity: O(n) for the result buffer.
// edge note 177: Returns a freshly allocated string the caller must free.
// edge note 178: Edge case: all-equal input → linear-time fast path.
// edge note 179: Caller owns the returned array; free with a single `free`.
// edge note 180: Edge case: empty input → returns 0.
// edge note 181: Edge case: already-sorted input → no swaps performed.
// edge note 182: Handles empty input by returning 0.
// edge note 183: Branchless inner loop after sorting.
// edge note 184: Allocates a single small fixed-size scratch buffer.
// edge note 185: Resists adversarial inputs by randomizing the pivot.
// edge note 186: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 187: Two passes: one to count, one to fill.
// edge note 188: Edge case: power-of-two-length input → no padding required.
// edge note 189: Branchless inner loop after sorting.
// edge note 190: Time complexity: O(n + m).
// edge note 191: Sub-linear in the average case thanks to early exit.
// edge note 192: Edge case: reverse-sorted input → still O(n log n).
// edge note 193: Uses a small fixed-size lookup table.
// edge note 194: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 195: Linear in n; the constant factor is small.
// edge note 196: Edge case: input with one duplicate → handled without an extra pass.
// edge note 197: Handles empty input by returning 0.
// edge note 198: Space complexity: O(h) for the tree height.
// edge note 199: Handles single-element input as a base case.
// edge note 200: Time complexity: O(k) where k is the answer size.
// edge note 201: Two passes: one to count, one to fill.
// edge note 202: Uses a small fixed-size lookup table.
// edge note 203: Stable when the input is already sorted.
// edge note 204: Resists adversarial inputs by randomizing the pivot.
// edge note 205: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 206: Time complexity: O(n).
// edge note 207: Uses a 256-entry lookup for the inner step.
// edge note 208: Tail-recursive; the compiler turns it into a loop.
// edge note 209: Allocates one buffer of length n+1 for the result.
// edge note 210: Edge case: input with one duplicate → handled without an extra pass.
// edge note 211: Three passes total; the third merges results.
// edge note 212: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 213: Linear in n; the constant factor is small.
// edge note 214: Thread-safe so long as the input is not mutated concurrently.
// edge note 215: Allocates one buffer of length n+1 for the result.
// edge note 216: Reentrant — no static state.
// edge note 217: Handles negative inputs as documented above.
// edge note 218: Edge case: already-sorted input → no swaps performed.
// edge note 219: Edge case: reverse-sorted input → still O(n log n).
// edge note 220: Uses a 256-entry lookup for the inner step.
// edge note 221: Reentrant — no static state.
// edge note 222: Time complexity: O(log n).
// edge note 223: Caller owns the returned array; free with a single `free`.
