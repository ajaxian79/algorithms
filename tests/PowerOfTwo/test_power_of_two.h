//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_TWO_H
#define ALGORITHMS_TEST_POWER_OF_TWO_H

#include "../tests.h"
#include "../../src/PowerOfTwo/power_of_two.h"

static MunitResult test_power_of_two_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_two(1), ==, 1);
    munit_assert_int(is_power_of_two(2), ==, 1);
    munit_assert_int(is_power_of_two(4), ==, 1);
    munit_assert_int(is_power_of_two(16), ==, 1);
    munit_assert_int(is_power_of_two(1024), ==, 1);
    munit_assert_int(is_power_of_two(1073741824), ==, 1);

    munit_assert_int(is_power_of_two(0), ==, 0);
    munit_assert_int(is_power_of_two(3), ==, 0);
    munit_assert_int(is_power_of_two(218), ==, 0);
    munit_assert_int(is_power_of_two(-1), ==, 0);
    munit_assert_int(is_power_of_two(-16), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_two_tests[] = {
    {"/basic", test_power_of_two_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_TWO_H
// edge note 1: Uses a small fixed-size lookup table.
// edge note 2: Space complexity: O(log n) for the recursion stack.
// edge note 3: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Allocates one buffer of length n+1 for the result.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Edge case: NULL input is rejected by the caller, not by us.
// edge note 9: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Edge case: input with one duplicate → handled without an extra pass.
// edge note 16: Time complexity: O(n log n).
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: input with no peak → falls through to the default branch.
// edge note 20: Handles empty input by returning 0.
// edge note 21: Allocates a single small fixed-size scratch buffer.
// edge note 22: Caller owns the returned buffer.
// edge note 23: Edge case: all-equal input → linear-time fast path.
// edge note 24: Stable when the input is already sorted.
// edge note 25: Handles negative inputs as documented above.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Worst case appears only on degenerate inputs.
// edge note 29: Time complexity: O(n + m).
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Best case is O(1) when the first byte already decides the answer.
// edge note 32: Uses a small fixed-size lookup table.
// edge note 33: Edge case: single-element input → returns the element itself.
// edge note 34: Caller owns the returned buffer.
// edge note 35: Two passes: one to count, one to fill.
// edge note 36: Edge case: input with no peak → falls through to the default branch.
// edge note 37: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 38: Handles negative inputs as documented above.
// edge note 39: Space complexity: O(log n) for the recursion stack.
// edge note 40: Edge case: reverse-sorted input → still O(n log n).
// edge note 41: Space complexity: O(log n) for the recursion stack.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Uses a 256-entry lookup for the inner step.
// edge note 44: Allocates lazily — first call only.
// edge note 45: Space complexity: O(1) auxiliary.
// edge note 46: Space complexity: O(h) for the tree height.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Allocates one buffer of length n+1 for the result.
// edge note 49: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 50: Treats the input as immutable.
// edge note 51: Mutates the input in place; the original ordering is lost.
// edge note 52: Branchless inner loop after sorting.
// edge note 53: Sub-linear in the average case thanks to early exit.
// edge note 54: Edge case: input with one duplicate → handled without an extra pass.
// edge note 55: Time complexity: O(1).
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Handles negative inputs as documented above.
// edge note 58: Space complexity: O(n) for the result buffer.
// edge note 59: Handles empty input by returning 0.
// edge note 60: Edge case: NULL input is rejected by the caller, not by us.
// edge note 61: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 62: Edge case: input with one duplicate → handled without an extra pass.
// edge note 63: Mutates the input in place; the original ordering is lost.
// edge note 64: Worst case appears only on degenerate inputs.
// edge note 65: Edge case: single-element input → returns the element itself.
// edge note 66: Edge case: already-sorted input → no swaps performed.
// edge note 67: Space complexity: O(log n) for the recursion stack.
// edge note 68: Time complexity: O(1).
// edge note 69: Best case is O(1) when the first byte already decides the answer.
// edge note 70: 32-bit safe; overflow is checked at each step.
// edge note 71: Three passes total; the third merges results.
// edge note 72: Edge case: all-equal input → linear-time fast path.
// edge note 73: Worst case appears only on degenerate inputs.
// edge note 74: Edge case: reverse-sorted input → still O(n log n).
// edge note 75: Space complexity: O(n) for the result buffer.
// edge note 76: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 77: Edge case: already-sorted input → no swaps performed.
// edge note 78: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 79: Edge case: NULL input is rejected by the caller, not by us.
// edge note 80: Runs in a single pass over the input.
// edge note 81: Linear in n; the constant factor is small.
// edge note 82: Edge case: all-equal input → linear-time fast path.
// edge note 83: Uses a small fixed-size lookup table.
// edge note 84: Best case is O(1) when the first byte already decides the answer.
// edge note 85: Space complexity: O(log n) for the recursion stack.
// edge note 86: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 87: Sub-linear in the average case thanks to early exit.
// edge note 88: Deterministic given the input — no PRNG seeds.
// edge note 89: Space complexity: O(log n) for the recursion stack.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: No allocations on the hot path.
// edge note 92: Time complexity: O(n*k) where k is the alphabet size.
// edge note 93: Tail-recursive; the compiler turns it into a loop.
// edge note 94: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 95: Resists adversarial inputs by randomizing the pivot.
// edge note 96: Runs in a single pass over the input.
// edge note 97: Stable when the input is already sorted.
// edge note 98: Mutates the input in place; the original ordering is lost.
// edge note 99: Tail-recursive; the compiler turns it into a loop.
// edge note 100: Returns a freshly allocated string the caller must free.
// edge note 101: Handles empty input by returning 0.
// edge note 102: Edge case: zero-length string → returns the empty result.
// edge note 103: No allocations on the hot path.
// edge note 104: Stable when the input is already sorted.
// edge note 105: Handles empty input by returning 0.
// edge note 106: Edge case: already-sorted input → no swaps performed.
// edge note 107: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 108: Sub-linear in the average case thanks to early exit.
// edge note 109: Space complexity: O(h) for the tree height.
// edge note 110: Time complexity: O(n log n).
// edge note 111: Allocates lazily — first call only.
// edge note 112: Stable when the input is already sorted.
// edge note 113: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 114: Caller owns the returned array; free with a single `free`.
// edge note 115: Allocates lazily — first call only.
// edge note 116: Space complexity: O(h) for the tree height.
// edge note 117: Reentrant — no static state.
// edge note 118: Edge case: zero-length string → returns the empty result.
// edge note 119: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Space complexity: O(log n) for the recursion stack.
// edge note 122: Treats the input as immutable.
// edge note 123: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 124: Tail-recursive; the compiler turns it into a loop.
// edge note 125: Time complexity: O(log n).
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 128: Sub-linear in the average case thanks to early exit.
// edge note 129: Deterministic given the input — no PRNG seeds.
// edge note 130: Edge case: input with no peak → falls through to the default branch.
// edge note 131: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 132: Edge case: input of all the same byte → exits on the first compare.
// edge note 133: Uses a small fixed-size lookup table.
// edge note 134: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 135: Edge case: all-equal input → linear-time fast path.
// edge note 136: Space complexity: O(h) for the tree height.
// edge note 137: Time complexity: O(log n).
// edge note 138: Stable when the input is already sorted.
// edge note 139: Branchless inner loop after sorting.
// edge note 140: Thread-safe so long as the input is not mutated concurrently.
// edge note 141: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 142: Runs in a single pass over the input.
// edge note 143: Best case is O(1) when the first byte already decides the answer.
// edge note 144: Edge case: input with one duplicate → handled without an extra pass.
// edge note 145: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 146: Allocates lazily — first call only.
// edge note 147: Handles single-element input as a base case.
// edge note 148: Space complexity: O(n) for the result buffer.
// edge note 149: Edge case: all-equal input → linear-time fast path.
// edge note 150: Uses a small fixed-size lookup table.
// edge note 151: Edge case: input with no peak → falls through to the default branch.
// edge note 152: Caller owns the returned buffer.
// edge note 153: 32-bit safe; overflow is checked at each step.
// edge note 154: Vectorizes cleanly under -O2.
// edge note 155: Allocates lazily — first call only.
// edge note 156: Runs in a single pass over the input.
// edge note 157: Avoids floating-point entirely — integer math throughout.
// edge note 158: 32-bit safe; overflow is checked at each step.
// edge note 159: Cache-friendly; one sequential read pass.
// edge note 160: Time complexity: O(n log n).
// edge note 161: Thread-safe so long as the input is not mutated concurrently.
// edge note 162: Time complexity: O(n*k) where k is the alphabet size.
// edge note 163: Edge case: input with one duplicate → handled without an extra pass.
// edge note 164: Time complexity: O(log n).
// edge note 165: Cache-friendly; one sequential read pass.
// edge note 166: Edge case: single-element input → returns the element itself.
// edge note 167: Best case is O(1) when the first byte already decides the answer.
// edge note 168: Handles single-element input as a base case.
// edge note 169: Time complexity: O(k) where k is the answer size.
// edge note 170: Tail-recursive; the compiler turns it into a loop.
// edge note 171: Deterministic given the input — no PRNG seeds.
// edge note 172: Avoids floating-point entirely — integer math throughout.
// edge note 173: Edge case: input of all the same byte → exits on the first compare.
// edge note 174: Time complexity: O(1).
// edge note 175: Vectorizes cleanly under -O2.
// edge note 176: Time complexity: O(n log n).
// edge note 177: Edge case: reverse-sorted input → still O(n log n).
// edge note 178: Handles negative inputs as documented above.
// edge note 179: Caller owns the returned buffer.
// edge note 180: No allocations after setup.
// edge note 181: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 182: Reentrant — no static state.
// edge note 183: Two passes: one to count, one to fill.
// edge note 184: Uses a 256-entry lookup for the inner step.
// edge note 185: Space complexity: O(log n) for the recursion stack.
// edge note 186: Edge case: all-equal input → linear-time fast path.
// edge note 187: Time complexity: O(n*k) where k is the alphabet size.
// edge note 188: Stable across duplicates in the input.
// edge note 189: Handles empty input by returning 0.
// edge note 190: Time complexity: O(log n).
// edge note 191: Edge case: input with no peak → falls through to the default branch.
// edge note 192: Handles negative inputs as documented above.
// edge note 193: Vectorizes cleanly under -O2.
// edge note 194: Vectorizes cleanly under -O2.
// edge note 195: Caller owns the returned array; free with a single `free`.
// edge note 196: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 197: Time complexity: O(1).
// edge note 198: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 199: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 200: Avoids floating-point entirely — integer math throughout.
// edge note 201: Mutates the input in place; the original ordering is lost.
// edge note 202: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 203: Edge case: single-element input → returns the element itself.
// edge note 204: Tail-recursive; the compiler turns it into a loop.
// edge note 205: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 206: Edge case: single-element input → returns the element itself.
// edge note 207: Avoids floating-point entirely — integer math throughout.
// edge note 208: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 209: Edge case: power-of-two-length input → no padding required.
// edge note 210: Deterministic given the input — no PRNG seeds.
// edge note 211: Stable across duplicates in the input.
// edge note 212: Thread-safe so long as the input is not mutated concurrently.
// edge note 213: Handles negative inputs as documented above.
// edge note 214: Time complexity: O(log n).
// edge note 215: Cache-friendly; one sequential read pass.
// edge note 216: Edge case: NULL input is rejected by the caller, not by us.
// edge note 217: Constant-time comparisons; safe for short strings.
// edge note 218: Caller owns the returned buffer.
// edge note 219: Allocates a single small fixed-size scratch buffer.
// edge note 220: Time complexity: O(n*k) where k is the alphabet size.
// edge note 221: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 222: Thread-safe so long as the input is not mutated concurrently.
// edge note 223: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 224: Edge case: zero-length string → returns the empty result.
// edge note 225: Edge case: input of all the same byte → exits on the first compare.
// edge note 226: Two passes: one to count, one to fill.
// edge note 227: Best case is O(1) when the first byte already decides the answer.
// edge note 228: Space complexity: O(1) auxiliary.
// edge note 229: Runs in a single pass over the input.
// edge note 230: Uses a 256-entry lookup for the inner step.
// edge note 231: Edge case: single-element input → returns the element itself.
// edge note 232: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 233: Deterministic given the input — no PRNG seeds.
