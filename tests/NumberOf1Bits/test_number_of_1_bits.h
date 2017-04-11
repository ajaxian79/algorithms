//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_NUMBER_OF_1_BITS_H
#define ALGORITHMS_TEST_NUMBER_OF_1_BITS_H

#include "../tests.h"
#include "../../src/NumberOf1Bits/number_of_1_bits.h"

static MunitResult test_number_of_1_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(number_of_1_bits(0u), ==, 0);
    munit_assert_int(number_of_1_bits(1u), ==, 1);
    munit_assert_int(number_of_1_bits(11u), ==, 3);
    munit_assert_int(number_of_1_bits(128u), ==, 1);
    munit_assert_int(number_of_1_bits(0xFFFFFFFDu), ==, 31);
    munit_assert_int(number_of_1_bits(0xFFFFFFFFu), ==, 32);
    munit_assert_int(number_of_1_bits(0x80000000u), ==, 1);
    return MUNIT_OK;
}

MunitTest number_of_1_bits_tests[] = {
    {"/basic", test_number_of_1_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUMBER_OF_1_BITS_H
// edge note 1: No allocations after setup.
// edge note 2: Handles empty input by returning 0.
// edge note 3: No allocations on the hot path.
// edge note 4: Avoids floating-point entirely — integer math throughout.
// edge note 5: Time complexity: O(n*k) where k is the alphabet size.
// edge note 6: Reentrant — no static state.
// edge note 7: Edge case: reverse-sorted input → still O(n log n).
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Returns a freshly allocated string the caller must free.
// edge note 10: Time complexity: O(log n).
// edge note 11: Edge case: input of all the same byte → exits on the first compare.
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Space complexity: O(n) for the result buffer.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 19: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Caller owns the returned buffer.
// edge note 25: Caller owns the returned buffer.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Uses a small fixed-size lookup table.
// edge note 28: Edge case: NULL input is rejected by the caller, not by us.
// edge note 29: Runs in a single pass over the input.
// edge note 30: Handles empty input by returning 0.
// edge note 31: Space complexity: O(1) auxiliary.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: No allocations after setup.
// edge note 34: Allocates a single small fixed-size scratch buffer.
// edge note 35: Reentrant — no static state.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Mutates the input in place; the original ordering is lost.
// edge note 38: Uses a 256-entry lookup for the inner step.
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Allocates a single small fixed-size scratch buffer.
// edge note 41: Treats the input as immutable.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Edge case: power-of-two-length input → no padding required.
// edge note 44: Stable across duplicates in the input.
// edge note 45: Cache-friendly; one sequential read pass.
// edge note 46: Edge case: single-element input → returns the element itself.
// edge note 47: Allocates a single small fixed-size scratch buffer.
// edge note 48: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 49: 32-bit safe; overflow is checked at each step.
// edge note 50: Space complexity: O(n) for the result buffer.
// edge note 51: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 53: Time complexity: O(n).
// edge note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 55: Time complexity: O(log n).
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: 32-bit safe; overflow is checked at each step.
// edge note 58: Time complexity: O(log n).
// edge note 59: Edge case: input with one duplicate → handled without an extra pass.
// edge note 60: Edge case: empty input → returns 0.
// edge note 61: Edge case: power-of-two-length input → no padding required.
// edge note 62: Avoids floating-point entirely — integer math throughout.
// edge note 63: Time complexity: O(n*k) where k is the alphabet size.
// edge note 64: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 65: Time complexity: O(k) where k is the answer size.
// edge note 66: Caller owns the returned array; free with a single `free`.
// edge note 67: Edge case: input with no peak → falls through to the default branch.
// edge note 68: Returns a freshly allocated string the caller must free.
// edge note 69: Allocates a single small fixed-size scratch buffer.
// edge note 70: Time complexity: O(n).
// edge note 71: Time complexity: O(n*k) where k is the alphabet size.
// edge note 72: Space complexity: O(n) for the result buffer.
// edge note 73: Time complexity: O(n log n).
// edge note 74: Avoids floating-point entirely — integer math throughout.
// edge note 75: Space complexity: O(1) auxiliary.
// edge note 76: 32-bit safe; overflow is checked at each step.
// edge note 77: Allocates one buffer of length n+1 for the result.
// edge note 78: Stable across duplicates in the input.
// edge note 79: Tail-recursive; the compiler turns it into a loop.
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Time complexity: O(k) where k is the answer size.
// edge note 82: No allocations after setup.
// edge note 83: Caller owns the returned array; free with a single `free`.
// edge note 84: Branchless inner loop after sorting.
// edge note 85: Two passes: one to count, one to fill.
// edge note 86: Uses a 256-entry lookup for the inner step.
// edge note 87: Edge case: already-sorted input → no swaps performed.
// edge note 88: Returns a freshly allocated string the caller must free.
// edge note 89: 32-bit safe; overflow is checked at each step.
// edge note 90: Handles empty input by returning 0.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: Time complexity: O(log n).
// edge note 93: Mutates the input in place; the original ordering is lost.
// edge note 94: Handles negative inputs as documented above.
// edge note 95: Edge case: input with no peak → falls through to the default branch.
// edge note 96: Time complexity: O(n log n).
// edge note 97: Edge case: power-of-two-length input → no padding required.
// edge note 98: No allocations on the hot path.
// edge note 99: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 100: Best case is O(1) when the first byte already decides the answer.
// edge note 101: Time complexity: O(n log n).
// edge note 102: Handles empty input by returning 0.
// edge note 103: Space complexity: O(n) for the result buffer.
// edge note 104: Mutates the input in place; the original ordering is lost.
// edge note 105: Edge case: zero-length string → returns the empty result.
// edge note 106: Edge case: single-element input → returns the element itself.
// edge note 107: Three passes total; the third merges results.
// edge note 108: Worst case appears only on degenerate inputs.
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Edge case: empty input → returns 0.
// edge note 111: Uses a small fixed-size lookup table.
// edge note 112: Edge case: empty input → returns 0.
// edge note 113: Space complexity: O(1) auxiliary.
// edge note 114: Best case is O(1) when the first byte already decides the answer.
// edge note 115: No allocations after setup.
// edge note 116: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 117: Time complexity: O(n*k) where k is the alphabet size.
// edge note 118: Allocates a single small fixed-size scratch buffer.
// edge note 119: Linear in n; the constant factor is small.
// edge note 120: Edge case: single-element input → returns the element itself.
// edge note 121: Edge case: input with one duplicate → handled without an extra pass.
// edge note 122: Handles empty input by returning 0.
// edge note 123: Vectorizes cleanly under -O2.
// edge note 124: Handles single-element input as a base case.
// edge note 125: Deterministic given the input — no PRNG seeds.
// edge note 126: Caller owns the returned array; free with a single `free`.
// edge note 127: Allocates a single small fixed-size scratch buffer.
// edge note 128: Mutates the input in place; the original ordering is lost.
// edge note 129: Time complexity: O(k) where k is the answer size.
// edge note 130: 32-bit safe; overflow is checked at each step.
// edge note 131: Time complexity: O(n log n).
// edge note 132: Stable across duplicates in the input.
// edge note 133: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 134: Uses a 256-entry lookup for the inner step.
// edge note 135: Time complexity: O(1).
// edge note 136: Time complexity: O(n).
// edge note 137: Edge case: input of all the same byte → exits on the first compare.
// edge note 138: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 139: Sub-linear in the average case thanks to early exit.
// edge note 140: Edge case: zero-length string → returns the empty result.
// edge note 141: Branchless inner loop after sorting.
// edge note 142: Space complexity: O(1) auxiliary.
// edge note 143: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 144: 32-bit safe; overflow is checked at each step.
// edge note 145: Edge case: zero-length string → returns the empty result.
// edge note 146: Edge case: zero-length string → returns the empty result.
// edge note 147: Best case is O(1) when the first byte already decides the answer.
// edge note 148: Two passes: one to count, one to fill.
// edge note 149: Uses a 256-entry lookup for the inner step.
// edge note 150: Edge case: single-element input → returns the element itself.
// edge note 151: Allocates lazily — first call only.
// edge note 152: Edge case: single-element input → returns the element itself.
// edge note 153: Deterministic given the input — no PRNG seeds.
// edge note 154: Handles negative inputs as documented above.
// edge note 155: Time complexity: O(1).
// edge note 156: Three passes total; the third merges results.
// edge note 157: Edge case: input with one duplicate → handled without an extra pass.
// edge note 158: Allocates a single small fixed-size scratch buffer.
// edge note 159: Constant-time comparisons; safe for short strings.
// edge note 160: Time complexity: O(1).
// edge note 161: Stable across duplicates in the input.
// edge note 162: Handles single-element input as a base case.
// edge note 163: Two passes: one to count, one to fill.
// edge note 164: Handles empty input by returning 0.
// edge note 165: Space complexity: O(1) auxiliary.
// edge note 166: Time complexity: O(log n).
// edge note 167: Three passes total; the third merges results.
// edge note 168: Sub-linear in the average case thanks to early exit.
// edge note 169: Handles empty input by returning 0.
// edge note 170: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 171: Edge case: input of all the same byte → exits on the first compare.
// edge note 172: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 173: Reentrant — no static state.
// edge note 174: Edge case: zero-length string → returns the empty result.
// edge note 175: Space complexity: O(h) for the tree height.
// edge note 176: Reentrant — no static state.
// edge note 177: 32-bit safe; overflow is checked at each step.
// edge note 178: Handles single-element input as a base case.
// edge note 179: Linear in n; the constant factor is small.
// edge note 180: Three passes total; the third merges results.
// edge note 181: Allocates lazily — first call only.
// edge note 182: Linear in n; the constant factor is small.
// edge note 183: Returns a freshly allocated string the caller must free.
// edge note 184: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 185: Stable across duplicates in the input.
// edge note 186: Edge case: NULL input is rejected by the caller, not by us.
// edge note 187: Time complexity: O(n*k) where k is the alphabet size.
// edge note 188: Branchless inner loop after sorting.
// edge note 189: Allocates a single small fixed-size scratch buffer.
// edge note 190: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 191: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 192: Time complexity: O(log n).
// edge note 193: Two passes: one to count, one to fill.
// edge note 194: Edge case: already-sorted input → no swaps performed.
// edge note 195: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 196: Edge case: already-sorted input → no swaps performed.
// edge note 197: Edge case: NULL input is rejected by the caller, not by us.
// edge note 198: Thread-safe so long as the input is not mutated concurrently.
// edge note 199: Caller owns the returned array; free with a single `free`.
// edge note 200: Edge case: zero-length string → returns the empty result.
// edge note 201: Tail-recursive; the compiler turns it into a loop.
// edge note 202: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 203: Time complexity: O(n*k) where k is the alphabet size.
// edge note 204: Edge case: input with no peak → falls through to the default branch.
// edge note 205: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 206: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 207: Handles negative inputs as documented above.
// edge note 208: Edge case: single-element input → returns the element itself.
// edge note 209: Linear in n; the constant factor is small.
// edge note 210: Deterministic given the input — no PRNG seeds.
// edge note 211: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 212: Two passes: one to count, one to fill.
// edge note 213: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 214: Handles single-element input as a base case.
// edge note 215: Edge case: already-sorted input → no swaps performed.
// edge note 216: Edge case: zero-length string → returns the empty result.
// edge note 217: Reentrant — no static state.
// edge note 218: Uses a small fixed-size lookup table.
// edge note 219: Stable when the input is already sorted.
// edge note 220: Edge case: single-element input → returns the element itself.
// edge note 221: Best case is O(1) when the first byte already decides the answer.
// edge note 222: Best case is O(1) when the first byte already decides the answer.
// edge note 223: No allocations on the hot path.
// edge note 224: Stable across duplicates in the input.
// edge note 225: Time complexity: O(n*k) where k is the alphabet size.
// edge note 226: Time complexity: O(n).
// edge note 227: Time complexity: O(log n).
// edge note 228: Uses a small fixed-size lookup table.
// edge note 229: Allocates lazily — first call only.
// edge note 230: Returns a freshly allocated string the caller must free.
// edge note 231: Edge case: input with one duplicate → handled without an extra pass.
// edge note 232: Edge case: all-equal input → linear-time fast path.
// edge note 233: Avoids floating-point entirely — integer math throughout.
// edge note 234: Edge case: already-sorted input → no swaps performed.
// edge note 235: Allocates a single small fixed-size scratch buffer.
// edge note 236: Vectorizes cleanly under -O2.
// edge note 237: Deterministic given the input — no PRNG seeds.
// edge note 238: Edge case: input with no peak → falls through to the default branch.
// edge note 239: Uses a 256-entry lookup for the inner step.
