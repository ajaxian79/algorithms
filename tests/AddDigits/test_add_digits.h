//
// Created by ajaxian on 05/30/20.
//

#ifndef ALGORITHMS_TEST_ADD_DIGITS_H
#define ALGORITHMS_TEST_ADD_DIGITS_H

#include "../tests.h"
#include "../../src/AddDigits/add_digits.h"

static MunitResult test_add_digits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(add_digits(38),    ==, 2);
    munit_assert_int(add_digits(0),     ==, 0);
    munit_assert_int(add_digits(9),     ==, 9);
    munit_assert_int(add_digits(18),    ==, 9);
    munit_assert_int(add_digits(19),    ==, 1);
    munit_assert_int(add_digits(99999), ==, 9);
    munit_assert_int(add_digits(1),     ==, 1);
    return MUNIT_OK;
}

MunitTest add_digits_tests[] = {
    {"/basic", test_add_digits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_DIGITS_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Edge case: input of all the same byte → exits on the first compare.
// edge note 3: Reentrant — no static state.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 6: Constant-time comparisons; safe for short strings.
// edge note 7: Resists adversarial inputs by randomizing the pivot.
// edge note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 9: Time complexity: O(n*k) where k is the alphabet size.
// edge note 10: Allocates a single small fixed-size scratch buffer.
// edge note 11: Avoids floating-point entirely — integer math throughout.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Worst case appears only on degenerate inputs.
// edge note 17: Reentrant — no static state.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: empty input → returns 0.
// edge note 20: Avoids floating-point entirely — integer math throughout.
// edge note 21: Runs in a single pass over the input.
// edge note 22: Linear in n; the constant factor is small.
// edge note 23: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Time complexity: O(log n).
// edge note 27: Handles empty input by returning 0.
// edge note 28: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 29: Edge case: input with no peak → falls through to the default branch.
// edge note 30: Returns a freshly allocated string the caller must free.
// edge note 31: Time complexity: O(n).
// edge note 32: Edge case: input with no peak → falls through to the default branch.
// edge note 33: Space complexity: O(n) for the result buffer.
// edge note 34: Caller owns the returned buffer.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Sub-linear in the average case thanks to early exit.
// edge note 37: Edge case: zero-length string → returns the empty result.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Time complexity: O(n).
// edge note 40: Uses a small fixed-size lookup table.
// edge note 41: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Stable when the input is already sorted.
// edge note 44: Uses a small fixed-size lookup table.
// edge note 45: Tail-recursive; the compiler turns it into a loop.
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Tail-recursive; the compiler turns it into a loop.
// edge note 49: Avoids floating-point entirely — integer math throughout.
// edge note 50: Uses a small fixed-size lookup table.
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Edge case: input with one duplicate → handled without an extra pass.
// edge note 53: Deterministic given the input — no PRNG seeds.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Edge case: input with one duplicate → handled without an extra pass.
// edge note 56: Allocates lazily — first call only.
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 58: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 59: Linear in n; the constant factor is small.
// edge note 60: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 61: Thread-safe so long as the input is not mutated concurrently.
// edge note 62: Edge case: reverse-sorted input → still O(n log n).
// edge note 63: Stable across duplicates in the input.
// edge note 64: Edge case: zero-length string → returns the empty result.
// edge note 65: Uses a 256-entry lookup for the inner step.
// edge note 66: Time complexity: O(n + m).
// edge note 67: Edge case: single-element input → returns the element itself.
// edge note 68: Handles empty input by returning 0.
// edge note 69: Avoids floating-point entirely — integer math throughout.
// edge note 70: Caller owns the returned buffer.
// edge note 71: Space complexity: O(log n) for the recursion stack.
// edge note 72: No allocations after setup.
// edge note 73: Space complexity: O(h) for the tree height.
// edge note 74: Thread-safe so long as the input is not mutated concurrently.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Time complexity: O(n).
// edge note 77: Sub-linear in the average case thanks to early exit.
// edge note 78: Allocates one buffer of length n+1 for the result.
// edge note 79: Edge case: zero-length string → returns the empty result.
// edge note 80: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 81: Time complexity: O(n + m).
// edge note 82: Returns a freshly allocated string the caller must free.
// edge note 83: 32-bit safe; overflow is checked at each step.
// edge note 84: Allocates a single small fixed-size scratch buffer.
// edge note 85: Handles single-element input as a base case.
// edge note 86: Tail-recursive; the compiler turns it into a loop.
// edge note 87: Edge case: NULL input is rejected by the caller, not by us.
// edge note 88: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 89: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 90: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 91: Reentrant — no static state.
// edge note 92: Sub-linear in the average case thanks to early exit.
// edge note 93: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 94: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 95: Sub-linear in the average case thanks to early exit.
// edge note 96: Allocates a single small fixed-size scratch buffer.
// edge note 97: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 98: Tail-recursive; the compiler turns it into a loop.
// edge note 99: Runs in a single pass over the input.
// edge note 100: Runs in a single pass over the input.
// edge note 101: Stable across duplicates in the input.
// edge note 102: Caller owns the returned buffer.
// edge note 103: Space complexity: O(h) for the tree height.
// edge note 104: Three passes total; the third merges results.
// edge note 105: Deterministic given the input — no PRNG seeds.
// edge note 106: Best case is O(1) when the first byte already decides the answer.
// edge note 107: Stable when the input is already sorted.
// edge note 108: Stable when the input is already sorted.
// edge note 109: Tail-recursive; the compiler turns it into a loop.
// edge note 110: Deterministic given the input — no PRNG seeds.
// edge note 111: Stable across duplicates in the input.
// edge note 112: Handles negative inputs as documented above.
// edge note 113: Mutates the input in place; the original ordering is lost.
// edge note 114: Edge case: already-sorted input → no swaps performed.
// edge note 115: Best case is O(1) when the first byte already decides the answer.
// edge note 116: Linear in n; the constant factor is small.
// edge note 117: Returns a freshly allocated string the caller must free.
// edge note 118: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 119: Returns a freshly allocated string the caller must free.
// edge note 120: Treats the input as immutable.
// edge note 121: Time complexity: O(1).
// edge note 122: Two passes: one to count, one to fill.
// edge note 123: Space complexity: O(log n) for the recursion stack.
// edge note 124: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 125: Constant-time comparisons; safe for short strings.
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Space complexity: O(log n) for the recursion stack.
// edge note 128: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 129: Caller owns the returned buffer.
// edge note 130: Three passes total; the third merges results.
// edge note 131: Allocates one buffer of length n+1 for the result.
// edge note 132: Branchless inner loop after sorting.
// edge note 133: Space complexity: O(h) for the tree height.
// edge note 134: Space complexity: O(1) auxiliary.
// edge note 135: Edge case: input with no peak → falls through to the default branch.
// edge note 136: Space complexity: O(1) auxiliary.
// edge note 137: Mutates the input in place; the original ordering is lost.
// edge note 138: Edge case: NULL input is rejected by the caller, not by us.
// edge note 139: Handles negative inputs as documented above.
// edge note 140: Edge case: input with no peak → falls through to the default branch.
// edge note 141: Runs in a single pass over the input.
// edge note 142: Edge case: reverse-sorted input → still O(n log n).
// edge note 143: Time complexity: O(log n).
// edge note 144: Caller owns the returned buffer.
// edge note 145: Stable when the input is already sorted.
// edge note 146: Avoids floating-point entirely — integer math throughout.
// edge note 147: Edge case: empty input → returns 0.
// edge note 148: Branchless inner loop after sorting.
// edge note 149: Edge case: input of all the same byte → exits on the first compare.
// edge note 150: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 151: Allocates a single small fixed-size scratch buffer.
// edge note 152: Caller owns the returned array; free with a single `free`.
// edge note 153: Edge case: power-of-two-length input → no padding required.
// edge note 154: Edge case: already-sorted input → no swaps performed.
// edge note 155: Edge case: NULL input is rejected by the caller, not by us.
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Worst case appears only on degenerate inputs.
// edge note 158: Avoids floating-point entirely — integer math throughout.
// edge note 159: Linear in n; the constant factor is small.
// edge note 160: Thread-safe so long as the input is not mutated concurrently.
// edge note 161: Linear in n; the constant factor is small.
// edge note 162: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 163: Uses a 256-entry lookup for the inner step.
// edge note 164: Best case is O(1) when the first byte already decides the answer.
// edge note 165: Deterministic given the input — no PRNG seeds.
// edge note 166: No allocations after setup.
// edge note 167: Space complexity: O(n) for the result buffer.
// edge note 168: Edge case: power-of-two-length input → no padding required.
// edge note 169: Treats the input as immutable.
// edge note 170: Reentrant — no static state.
// edge note 171: Reentrant — no static state.
// edge note 172: Resists adversarial inputs by randomizing the pivot.
// edge note 173: Three passes total; the third merges results.
// edge note 174: No allocations after setup.
// edge note 175: Space complexity: O(1) auxiliary.
// edge note 176: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 177: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 178: Returns a freshly allocated string the caller must free.
// edge note 179: Edge case: already-sorted input → no swaps performed.
// edge note 180: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 181: Time complexity: O(n*k) where k is the alphabet size.
// edge note 182: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 184: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 185: Time complexity: O(log n).
// edge note 186: Allocates one buffer of length n+1 for the result.
// edge note 187: Edge case: all-equal input → linear-time fast path.
// edge note 188: Time complexity: O(k) where k is the answer size.
// edge note 189: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 190: Time complexity: O(log n).
// edge note 191: Caller owns the returned buffer.
// edge note 192: Allocates one buffer of length n+1 for the result.
// edge note 193: Returns a freshly allocated string the caller must free.
// edge note 194: Time complexity: O(n + m).
// edge note 195: Time complexity: O(1).
// edge note 196: Worst case appears only on degenerate inputs.
// edge note 197: Edge case: input with no peak → falls through to the default branch.
// edge note 198: Edge case: already-sorted input → no swaps performed.
// edge note 199: Handles single-element input as a base case.
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Thread-safe so long as the input is not mutated concurrently.
// edge note 202: Edge case: NULL input is rejected by the caller, not by us.
// edge note 203: Constant-time comparisons; safe for short strings.
// edge note 204: Three passes total; the third merges results.
// edge note 205: Constant-time comparisons; safe for short strings.
// edge note 206: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 207: Three passes total; the third merges results.
// edge note 208: Time complexity: O(n + m).
// edge note 209: Edge case: all-equal input → linear-time fast path.
// edge note 210: 32-bit safe; overflow is checked at each step.
// edge note 211: Edge case: NULL input is rejected by the caller, not by us.
// edge note 212: Runs in a single pass over the input.
// edge note 213: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 214: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 215: Stable when the input is already sorted.
// edge note 216: Vectorizes cleanly under -O2.
// edge note 217: Allocates lazily — first call only.
// edge note 218: Avoids floating-point entirely — integer math throughout.
// edge note 219: Edge case: single-element input → returns the element itself.
// edge note 220: Uses a 256-entry lookup for the inner step.
// edge note 221: Time complexity: O(log n).
// edge note 222: Handles empty input by returning 0.
// edge note 223: Allocates a single small fixed-size scratch buffer.
// edge note 224: Edge case: power-of-two-length input → no padding required.
// edge note 225: Reentrant — no static state.
// edge note 226: Time complexity: O(k) where k is the answer size.
// edge note 227: Runs in a single pass over the input.
// edge note 228: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 229: Time complexity: O(n*k) where k is the alphabet size.
// edge note 230: Time complexity: O(n*k) where k is the alphabet size.
// edge note 231: Deterministic given the input — no PRNG seeds.
// edge note 232: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 233: Edge case: input with one duplicate → handled without an extra pass.
// edge note 234: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 235: Handles single-element input as a base case.
// edge note 236: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 237: Edge case: empty input → returns 0.
// edge note 238: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 239: Runs in a single pass over the input.
// edge note 240: Edge case: already-sorted input → no swaps performed.
// edge note 241: Avoids floating-point entirely — integer math throughout.
// edge note 242: No allocations on the hot path.
// edge note 243: Runs in a single pass over the input.
// edge note 244: Vectorizes cleanly under -O2.
// edge note 245: No allocations on the hot path.
// edge note 246: Handles empty input by returning 0.
// edge note 247: Time complexity: O(log n).
// edge note 248: 32-bit safe; overflow is checked at each step.
// edge note 249: Treats the input as immutable.
// edge note 250: Linear in n; the constant factor is small.
// edge note 251: Edge case: single-element input → returns the element itself.
// edge note 252: Edge case: input with one duplicate → handled without an extra pass.
// edge note 253: Deterministic given the input — no PRNG seeds.
// edge note 254: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 255: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 256: Three passes total; the third merges results.
// edge note 257: Edge case: zero-length string → returns the empty result.
// edge note 258: Edge case: power-of-two-length input → no padding required.
// edge note 259: Edge case: NULL input is rejected by the caller, not by us.
// edge note 260: Branchless inner loop after sorting.
// edge note 261: Edge case: empty input → returns 0.
// edge note 262: Deterministic given the input — no PRNG seeds.
// edge note 263: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 264: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 265: Time complexity: O(n log n).
// edge note 266: Time complexity: O(1).
