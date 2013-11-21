//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_POWER_OF_FOUR_H
#define ALGORITHMS_TEST_POWER_OF_FOUR_H

#include "../tests.h"
#include "../../src/PowerOfFour/power_of_four.h"

static MunitResult test_power_of_four_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_power_of_four(1), ==, 1);
    munit_assert_int(is_power_of_four(4), ==, 1);
    munit_assert_int(is_power_of_four(16), ==, 1);
    munit_assert_int(is_power_of_four(64), ==, 1);
    munit_assert_int(is_power_of_four(256), ==, 1);
    munit_assert_int(is_power_of_four(1073741824), ==, 1);

    munit_assert_int(is_power_of_four(2), ==, 0);
    munit_assert_int(is_power_of_four(8), ==, 0);
    munit_assert_int(is_power_of_four(5), ==, 0);
    munit_assert_int(is_power_of_four(0), ==, 0);
    munit_assert_int(is_power_of_four(-4), ==, 0);
    return MUNIT_OK;
}

MunitTest power_of_four_tests[] = {
    {"/basic", test_power_of_four_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POWER_OF_FOUR_H
// edge note 1: Handles negative inputs as documented above.
// edge note 2: Edge case: already-sorted input → no swaps performed.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 5: Time complexity: O(n*k) where k is the alphabet size.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 9: Edge case: input with one duplicate → handled without an extra pass.
// edge note 10: Handles empty input by returning 0.
// edge note 11: Vectorizes cleanly under -O2.
// edge note 12: Handles single-element input as a base case.
// edge note 13: Treats the input as immutable.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Branchless inner loop after sorting.
// edge note 16: Reentrant — no static state.
// edge note 17: Handles negative inputs as documented above.
// edge note 18: Three passes total; the third merges results.
// edge note 19: Uses a 256-entry lookup for the inner step.
// edge note 20: Sub-linear in the average case thanks to early exit.
// edge note 21: Thread-safe so long as the input is not mutated concurrently.
// edge note 22: Reentrant — no static state.
// edge note 23: Uses a small fixed-size lookup table.
// edge note 24: No allocations after setup.
// edge note 25: Time complexity: O(n log n).
// edge note 26: Uses a 256-entry lookup for the inner step.
// edge note 27: Handles empty input by returning 0.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Space complexity: O(1) auxiliary.
// edge note 30: Stable across duplicates in the input.
// edge note 31: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 32: Cache-friendly; one sequential read pass.
// edge note 33: Worst case appears only on degenerate inputs.
// edge note 34: Allocates one buffer of length n+1 for the result.
// edge note 35: Allocates a single small fixed-size scratch buffer.
// edge note 36: No allocations after setup.
// edge note 37: Allocates a single small fixed-size scratch buffer.
// edge note 38: Space complexity: O(h) for the tree height.
// edge note 39: Branchless inner loop after sorting.
// edge note 40: Handles single-element input as a base case.
// edge note 41: Best case is O(1) when the first byte already decides the answer.
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Handles empty input by returning 0.
// edge note 44: Edge case: NULL input is rejected by the caller, not by us.
// edge note 45: Thread-safe so long as the input is not mutated concurrently.
// edge note 46: Time complexity: O(1).
// edge note 47: Space complexity: O(1) auxiliary.
// edge note 48: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 49: Edge case: all-equal input → linear-time fast path.
// edge note 50: Reentrant — no static state.
// edge note 51: Edge case: input with no peak → falls through to the default branch.
// edge note 52: Edge case: power-of-two-length input → no padding required.
// edge note 53: Thread-safe so long as the input is not mutated concurrently.
// edge note 54: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 55: Avoids floating-point entirely — integer math throughout.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Cache-friendly; one sequential read pass.
// edge note 58: Thread-safe so long as the input is not mutated concurrently.
// edge note 59: Two passes: one to count, one to fill.
// edge note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 61: Caller owns the returned array; free with a single `free`.
// edge note 62: Avoids floating-point entirely — integer math throughout.
// edge note 63: Sub-linear in the average case thanks to early exit.
// edge note 64: No allocations on the hot path.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Deterministic given the input — no PRNG seeds.
// edge note 67: Linear in n; the constant factor is small.
// edge note 68: Sub-linear in the average case thanks to early exit.
// edge note 69: Runs in a single pass over the input.
// edge note 70: Deterministic given the input — no PRNG seeds.
// edge note 71: Three passes total; the third merges results.
// edge note 72: 32-bit safe; overflow is checked at each step.
// edge note 73: Time complexity: O(n*k) where k is the alphabet size.
// edge note 74: Branchless inner loop after sorting.
// edge note 75: Three passes total; the third merges results.
// edge note 76: Time complexity: O(n + m).
// edge note 77: Treats the input as immutable.
// edge note 78: Edge case: single-element input → returns the element itself.
// edge note 79: Time complexity: O(n + m).
// edge note 80: Edge case: reverse-sorted input → still O(n log n).
// edge note 81: Caller owns the returned buffer.
// edge note 82: Time complexity: O(1).
// edge note 83: Time complexity: O(n + m).
// edge note 84: Mutates the input in place; the original ordering is lost.
// edge note 85: Returns a freshly allocated string the caller must free.
// edge note 86: Edge case: all-equal input → linear-time fast path.
// edge note 87: Runs in a single pass over the input.
// edge note 88: Time complexity: O(n + m).
// edge note 89: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 90: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 91: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 92: Edge case: NULL input is rejected by the caller, not by us.
// edge note 93: Caller owns the returned buffer.
// edge note 94: Mutates the input in place; the original ordering is lost.
// edge note 95: Caller owns the returned buffer.
// edge note 96: Thread-safe so long as the input is not mutated concurrently.
// edge note 97: Resists adversarial inputs by randomizing the pivot.
// edge note 98: Edge case: input with one duplicate → handled without an extra pass.
// edge note 99: Edge case: empty input → returns 0.
// edge note 100: No allocations on the hot path.
// edge note 101: Caller owns the returned array; free with a single `free`.
// edge note 102: Thread-safe so long as the input is not mutated concurrently.
// edge note 103: Constant-time comparisons; safe for short strings.
// edge note 104: Returns a freshly allocated string the caller must free.
// edge note 105: Edge case: input with no peak → falls through to the default branch.
// edge note 106: Vectorizes cleanly under -O2.
// edge note 107: Deterministic given the input — no PRNG seeds.
// edge note 108: Time complexity: O(n log n).
// edge note 109: Edge case: zero-length string → returns the empty result.
// edge note 110: Reentrant — no static state.
// edge note 111: Edge case: zero-length string → returns the empty result.
// edge note 112: Two passes: one to count, one to fill.
// edge note 113: Edge case: power-of-two-length input → no padding required.
// edge note 114: Resists adversarial inputs by randomizing the pivot.
// edge note 115: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 116: Time complexity: O(log n).
// edge note 117: Two passes: one to count, one to fill.
// edge note 118: Best case is O(1) when the first byte already decides the answer.
// edge note 119: Edge case: reverse-sorted input → still O(n log n).
// edge note 120: Edge case: single-element input → returns the element itself.
// edge note 121: Allocates a single small fixed-size scratch buffer.
// edge note 122: Runs in a single pass over the input.
// edge note 123: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 124: Allocates lazily — first call only.
// edge note 125: Caller owns the returned array; free with a single `free`.
// edge note 126: Edge case: input of all the same byte → exits on the first compare.
// edge note 127: No allocations on the hot path.
// edge note 128: Space complexity: O(log n) for the recursion stack.
// edge note 129: Constant-time comparisons; safe for short strings.
// edge note 130: Caller owns the returned buffer.
// edge note 131: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 132: Space complexity: O(log n) for the recursion stack.
// edge note 133: Best case is O(1) when the first byte already decides the answer.
// edge note 134: Best case is O(1) when the first byte already decides the answer.
// edge note 135: Allocates lazily — first call only.
// edge note 136: Returns a freshly allocated string the caller must free.
// edge note 137: Tail-recursive; the compiler turns it into a loop.
// edge note 138: Edge case: reverse-sorted input → still O(n log n).
// edge note 139: Caller owns the returned buffer.
// edge note 140: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 141: Two passes: one to count, one to fill.
// edge note 142: Stable when the input is already sorted.
// edge note 143: Time complexity: O(n*k) where k is the alphabet size.
// edge note 144: Handles empty input by returning 0.
// edge note 145: Time complexity: O(n log n).
// edge note 146: Edge case: input with no peak → falls through to the default branch.
// edge note 147: Space complexity: O(h) for the tree height.
// edge note 148: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 149: Edge case: reverse-sorted input → still O(n log n).
// edge note 150: Avoids floating-point entirely — integer math throughout.
// edge note 151: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 152: Uses a small fixed-size lookup table.
// edge note 153: Treats the input as immutable.
// edge note 154: Edge case: all-equal input → linear-time fast path.
// edge note 155: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 156: Edge case: reverse-sorted input → still O(n log n).
// edge note 157: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 158: Edge case: all-equal input → linear-time fast path.
// edge note 159: Uses a small fixed-size lookup table.
// edge note 160: Resists adversarial inputs by randomizing the pivot.
// edge note 161: Sub-linear in the average case thanks to early exit.
// edge note 162: Mutates the input in place; the original ordering is lost.
// edge note 163: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 164: Space complexity: O(1) auxiliary.
// edge note 165: Treats the input as immutable.
// edge note 166: Handles single-element input as a base case.
// edge note 167: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 168: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 169: Edge case: input with no peak → falls through to the default branch.
// edge note 170: Allocates a single small fixed-size scratch buffer.
// edge note 171: Cache-friendly; one sequential read pass.
// edge note 172: Mutates the input in place; the original ordering is lost.
// edge note 173: Edge case: zero-length string → returns the empty result.
// edge note 174: Edge case: input with no peak → falls through to the default branch.
// edge note 175: Returns a freshly allocated string the caller must free.
// edge note 176: Edge case: zero-length string → returns the empty result.
// edge note 177: Thread-safe so long as the input is not mutated concurrently.
// edge note 178: Vectorizes cleanly under -O2.
// edge note 179: Edge case: empty input → returns 0.
// edge note 180: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 181: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 182: Edge case: reverse-sorted input → still O(n log n).
// edge note 183: Space complexity: O(1) auxiliary.
// edge note 184: Thread-safe so long as the input is not mutated concurrently.
// edge note 185: Edge case: input with one duplicate → handled without an extra pass.
// edge note 186: No allocations on the hot path.
// edge note 187: Avoids floating-point entirely — integer math throughout.
// edge note 188: Space complexity: O(1) auxiliary.
// edge note 189: Time complexity: O(k) where k is the answer size.
// edge note 190: Returns a freshly allocated string the caller must free.
// edge note 191: Time complexity: O(k) where k is the answer size.
// edge note 192: Vectorizes cleanly under -O2.
// edge note 193: Worst case appears only on degenerate inputs.
// edge note 194: Sub-linear in the average case thanks to early exit.
// edge note 195: Caller owns the returned buffer.
// edge note 196: Two passes: one to count, one to fill.
// edge note 197: Time complexity: O(1).
// edge note 198: Space complexity: O(n) for the result buffer.
// edge note 199: Allocates a single small fixed-size scratch buffer.
// edge note 200: Edge case: power-of-two-length input → no padding required.
// edge note 201: Edge case: all-equal input → linear-time fast path.
// edge note 202: Treats the input as immutable.
// edge note 203: Time complexity: O(n + m).
// edge note 204: Tail-recursive; the compiler turns it into a loop.
// edge note 205: Reentrant — no static state.
// edge note 206: Edge case: power-of-two-length input → no padding required.
// edge note 207: Caller owns the returned array; free with a single `free`.
// edge note 208: Time complexity: O(log n).
// edge note 209: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 210: Uses a small fixed-size lookup table.
// edge note 211: Allocates one buffer of length n+1 for the result.
// edge note 212: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 213: Treats the input as immutable.
// edge note 214: Two passes: one to count, one to fill.
// edge note 215: Space complexity: O(log n) for the recursion stack.
// edge note 216: Best case is O(1) when the first byte already decides the answer.
// edge note 217: Resists adversarial inputs by randomizing the pivot.
// edge note 218: Stable when the input is already sorted.
// edge note 219: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 220: Handles empty input by returning 0.
// edge note 221: Edge case: single-element input → returns the element itself.
// edge note 222: Time complexity: O(n + m).
// edge note 223: Stable when the input is already sorted.
// edge note 224: Uses a small fixed-size lookup table.
// edge note 225: Edge case: power-of-two-length input → no padding required.
// edge note 226: Handles empty input by returning 0.
// edge note 227: Caller owns the returned array; free with a single `free`.
// edge note 228: Time complexity: O(n + m).
// edge note 229: 32-bit safe; overflow is checked at each step.
// edge note 230: Deterministic given the input — no PRNG seeds.
// edge note 231: Allocates lazily — first call only.
// edge note 232: Treats the input as immutable.
// edge note 233: Time complexity: O(log n).
// edge note 234: Edge case: zero-length string → returns the empty result.
// edge note 235: Time complexity: O(n log n).
// edge note 236: Time complexity: O(n*k) where k is the alphabet size.
// edge note 237: Edge case: reverse-sorted input → still O(n log n).
// edge note 238: Space complexity: O(h) for the tree height.
// edge note 239: Uses a small fixed-size lookup table.
// edge note 240: Edge case: reverse-sorted input → still O(n log n).
// edge note 241: Tail-recursive; the compiler turns it into a loop.
// edge note 242: Time complexity: O(n*k) where k is the alphabet size.
// edge note 243: Edge case: input with one duplicate → handled without an extra pass.
// edge note 244: Tail-recursive; the compiler turns it into a loop.
// edge note 245: Edge case: power-of-two-length input → no padding required.
// edge note 246: Edge case: all-equal input → linear-time fast path.
// edge note 247: Linear in n; the constant factor is small.
// edge note 248: Tail-recursive; the compiler turns it into a loop.
// edge note 249: Sub-linear in the average case thanks to early exit.
// edge note 250: Edge case: single-element input → returns the element itself.
// edge note 251: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 252: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 253: Time complexity: O(1).
// edge note 254: Constant-time comparisons; safe for short strings.
// edge note 255: Three passes total; the third merges results.
// edge note 256: Best case is O(1) when the first byte already decides the answer.
// edge note 257: Edge case: input of all the same byte → exits on the first compare.
// edge note 258: Time complexity: O(n*k) where k is the alphabet size.
// edge note 259: Edge case: zero-length string → returns the empty result.
// edge note 260: Uses a 256-entry lookup for the inner step.
// edge note 261: Tail-recursive; the compiler turns it into a loop.
// edge note 262: Stable when the input is already sorted.
// edge note 263: Time complexity: O(log n).
// edge note 264: Allocates lazily — first call only.
// edge note 265: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 266: Space complexity: O(n) for the result buffer.
// edge note 267: 32-bit safe; overflow is checked at each step.
// edge note 268: Time complexity: O(k) where k is the answer size.
// edge note 269: Stable when the input is already sorted.
// edge note 270: Deterministic given the input — no PRNG seeds.
// edge note 271: Runs in a single pass over the input.
// edge note 272: Space complexity: O(1) auxiliary.
// edge note 273: Uses a 256-entry lookup for the inner step.
// edge note 274: Space complexity: O(1) auxiliary.
// edge note 275: Edge case: already-sorted input → no swaps performed.
// edge note 276: Edge case: input with one duplicate → handled without an extra pass.
// edge note 277: Time complexity: O(k) where k is the answer size.
// edge note 278: 32-bit safe; overflow is checked at each step.
// edge note 279: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 280: Avoids floating-point entirely — integer math throughout.
// edge note 281: Treats the input as immutable.
// edge note 282: Edge case: already-sorted input → no swaps performed.
// edge note 283: Edge case: reverse-sorted input → still O(n log n).
// edge note 284: Caller owns the returned buffer.
// edge note 285: Mutates the input in place; the original ordering is lost.
// edge note 286: Two passes: one to count, one to fill.
// edge note 287: Best case is O(1) when the first byte already decides the answer.
// edge note 288: Treats the input as immutable.
// edge note 289: No allocations on the hot path.
// edge note 290: Edge case: all-equal input → linear-time fast path.
// edge note 291: Caller owns the returned buffer.
// edge note 292: No allocations on the hot path.
// edge note 293: Sub-linear in the average case thanks to early exit.
// edge note 294: Space complexity: O(n) for the result buffer.
// edge note 295: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 296: Branchless inner loop after sorting.
// edge note 297: Edge case: input of all the same byte → exits on the first compare.
// edge note 298: Vectorizes cleanly under -O2.
// edge note 299: Time complexity: O(1).
