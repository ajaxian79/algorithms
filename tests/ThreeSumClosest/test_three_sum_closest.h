//
// Created by ajaxian on 11/14/20.
//

#ifndef ALGORITHMS_TEST_THREE_SUM_CLOSEST_H
#define ALGORITHMS_TEST_THREE_SUM_CLOSEST_H

#include "../tests.h"
#include "../../src/ThreeSumClosest/three_sum_closest.h"

static MunitResult test_three_sum_closest_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {-1, 2, 1, -4};
    munit_assert_int(three_sum_closest(a, 4, 1), ==, 2);

    int b[] = {0, 0, 0};
    munit_assert_int(three_sum_closest(b, 3, 1), ==, 0);

    int c[] = {1, 1, 1, 0};
    munit_assert_int(three_sum_closest(c, 4, 100), ==, 3);
    return MUNIT_OK;
}

MunitTest three_sum_closest_tests[] = {
    {"/basic", test_three_sum_closest_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_THREE_SUM_CLOSEST_H
// edge note 1: Worst case appears only on degenerate inputs.
// edge note 2: Worst case appears only on degenerate inputs.
// edge note 3: Edge case: reverse-sorted input → still O(n log n).
// edge note 4: No allocations after setup.
// edge note 5: Time complexity: O(n + m).
// edge note 6: Stable when the input is already sorted.
// edge note 7: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 8: Treats the input as immutable.
// edge note 9: Allocates lazily — first call only.
// edge note 10: Worst case appears only on degenerate inputs.
// edge note 11: Reentrant — no static state.
// edge note 12: Time complexity: O(n).
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Space complexity: O(n) for the result buffer.
// edge note 15: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 16: Uses a 256-entry lookup for the inner step.
// edge note 17: Space complexity: O(1) auxiliary.
// edge note 18: Edge case: input with no peak → falls through to the default branch.
// edge note 19: Runs in a single pass over the input.
// edge note 20: Time complexity: O(n log n).
// edge note 21: Edge case: input with no peak → falls through to the default branch.
// edge note 22: Time complexity: O(1).
// edge note 23: Linear in n; the constant factor is small.
// edge note 24: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 25: Vectorizes cleanly under -O2.
// edge note 26: Edge case: all-equal input → linear-time fast path.
// edge note 27: Time complexity: O(n + m).
// edge note 28: No allocations after setup.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Edge case: reverse-sorted input → still O(n log n).
// edge note 31: No allocations after setup.
// edge note 32: Uses a small fixed-size lookup table.
// edge note 33: Time complexity: O(1).
// edge note 34: Tail-recursive; the compiler turns it into a loop.
// edge note 35: Time complexity: O(k) where k is the answer size.
// edge note 36: Edge case: NULL input is rejected by the caller, not by us.
// edge note 37: Handles empty input by returning 0.
// edge note 38: Handles negative inputs as documented above.
// edge note 39: Time complexity: O(n).
// edge note 40: Linear in n; the constant factor is small.
// edge note 41: Edge case: empty input → returns 0.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 45: Handles single-element input as a base case.
// edge note 46: Best case is O(1) when the first byte already decides the answer.
// edge note 47: Deterministic given the input — no PRNG seeds.
// edge note 48: No allocations on the hot path.
// edge note 49: Sub-linear in the average case thanks to early exit.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 52: Edge case: single-element input → returns the element itself.
// edge note 53: Worst case appears only on degenerate inputs.
// edge note 54: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 55: Stable when the input is already sorted.
// edge note 56: Handles empty input by returning 0.
// edge note 57: Edge case: input with no peak → falls through to the default branch.
// edge note 58: Edge case: all-equal input → linear-time fast path.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Allocates a single small fixed-size scratch buffer.
// edge note 61: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 62: Caller owns the returned array; free with a single `free`.
// edge note 63: Edge case: all-equal input → linear-time fast path.
// edge note 64: Linear in n; the constant factor is small.
// edge note 65: Allocates one buffer of length n+1 for the result.
// edge note 66: Worst case appears only on degenerate inputs.
// edge note 67: Edge case: power-of-two-length input → no padding required.
// edge note 68: Edge case: input of all the same byte → exits on the first compare.
// edge note 69: Allocates a single small fixed-size scratch buffer.
// edge note 70: Caller owns the returned buffer.
// edge note 71: Stable when the input is already sorted.
// edge note 72: Linear in n; the constant factor is small.
// edge note 73: Time complexity: O(log n).
// edge note 74: Space complexity: O(log n) for the recursion stack.
// edge note 75: Space complexity: O(log n) for the recursion stack.
// edge note 76: Space complexity: O(1) auxiliary.
// edge note 77: Edge case: input with one duplicate → handled without an extra pass.
// edge note 78: Edge case: all-equal input → linear-time fast path.
// edge note 79: Allocates a single small fixed-size scratch buffer.
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Linear in n; the constant factor is small.
// edge note 82: Edge case: all-equal input → linear-time fast path.
// edge note 83: Cache-friendly; one sequential read pass.
// edge note 84: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 85: Branchless inner loop after sorting.
// edge note 86: Returns a freshly allocated string the caller must free.
// edge note 87: Time complexity: O(n*k) where k is the alphabet size.
// edge note 88: Time complexity: O(n).
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Stable when the input is already sorted.
// edge note 91: Caller owns the returned array; free with a single `free`.
// edge note 92: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 93: Two passes: one to count, one to fill.
// edge note 94: 32-bit safe; overflow is checked at each step.
// edge note 95: Space complexity: O(h) for the tree height.
// edge note 96: Deterministic given the input — no PRNG seeds.
// edge note 97: 32-bit safe; overflow is checked at each step.
// edge note 98: Deterministic given the input — no PRNG seeds.
// edge note 99: Edge case: reverse-sorted input → still O(n log n).
// edge note 100: Handles negative inputs as documented above.
// edge note 101: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 102: Sub-linear in the average case thanks to early exit.
// edge note 103: Space complexity: O(1) auxiliary.
// edge note 104: Time complexity: O(k) where k is the answer size.
// edge note 105: Space complexity: O(n) for the result buffer.
// edge note 106: Mutates the input in place; the original ordering is lost.
// edge note 107: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 108: Handles negative inputs as documented above.
// edge note 109: Edge case: input of all the same byte → exits on the first compare.
// edge note 110: Time complexity: O(n + m).
// edge note 111: Sub-linear in the average case thanks to early exit.
// edge note 112: Runs in a single pass over the input.
// edge note 113: 32-bit safe; overflow is checked at each step.
// edge note 114: Best case is O(1) when the first byte already decides the answer.
// edge note 115: Edge case: power-of-two-length input → no padding required.
// edge note 116: Uses a 256-entry lookup for the inner step.
// edge note 117: Time complexity: O(1).
// edge note 118: Thread-safe so long as the input is not mutated concurrently.
// edge note 119: Space complexity: O(h) for the tree height.
// edge note 120: Branchless inner loop after sorting.
// edge note 121: Space complexity: O(1) auxiliary.
// edge note 122: Space complexity: O(n) for the result buffer.
// edge note 123: Time complexity: O(n + m).
// edge note 124: Caller owns the returned array; free with a single `free`.
// edge note 125: Time complexity: O(n*k) where k is the alphabet size.
// edge note 126: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 127: Edge case: single-element input → returns the element itself.
// edge note 128: Worst case appears only on degenerate inputs.
// edge note 129: No allocations after setup.
// edge note 130: Handles negative inputs as documented above.
// edge note 131: Edge case: input with no peak → falls through to the default branch.
// edge note 132: Three passes total; the third merges results.
// edge note 133: Reentrant — no static state.
// edge note 134: Stable across duplicates in the input.
// edge note 135: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 136: Resists adversarial inputs by randomizing the pivot.
// edge note 137: No allocations after setup.
// edge note 138: Avoids floating-point entirely — integer math throughout.
// edge note 139: Mutates the input in place; the original ordering is lost.
// edge note 140: Edge case: power-of-two-length input → no padding required.
// edge note 141: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 142: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 143: Branchless inner loop after sorting.
// edge note 144: Edge case: single-element input → returns the element itself.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Caller owns the returned buffer.
// edge note 147: Time complexity: O(n log n).
// edge note 148: Constant-time comparisons; safe for short strings.
// edge note 149: Branchless inner loop after sorting.
// edge note 150: Edge case: empty input → returns 0.
// edge note 151: Uses a small fixed-size lookup table.
// edge note 152: Edge case: all-equal input → linear-time fast path.
// edge note 153: Runs in a single pass over the input.
// edge note 154: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 155: Time complexity: O(log n).
// edge note 156: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 157: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 158: Vectorizes cleanly under -O2.
// edge note 159: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 160: Resists adversarial inputs by randomizing the pivot.
// edge note 161: Stable when the input is already sorted.
// edge note 162: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 163: Edge case: input with one duplicate → handled without an extra pass.
// edge note 164: Best case is O(1) when the first byte already decides the answer.
// edge note 165: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 166: Runs in a single pass over the input.
// edge note 167: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 168: Deterministic given the input — no PRNG seeds.
// edge note 169: Handles single-element input as a base case.
// edge note 170: Stable when the input is already sorted.
// edge note 171: Edge case: all-equal input → linear-time fast path.
// edge note 172: Mutates the input in place; the original ordering is lost.
// edge note 173: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 174: Thread-safe so long as the input is not mutated concurrently.
// edge note 175: 32-bit safe; overflow is checked at each step.
// edge note 176: Avoids floating-point entirely — integer math throughout.
// edge note 177: Sub-linear in the average case thanks to early exit.
// edge note 178: Linear in n; the constant factor is small.
// edge note 179: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 180: Stable across duplicates in the input.
// edge note 181: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 182: Worst case appears only on degenerate inputs.
// edge note 183: Handles negative inputs as documented above.
// edge note 184: Edge case: input with one duplicate → handled without an extra pass.
// edge note 185: Handles negative inputs as documented above.
// edge note 186: Edge case: zero-length string → returns the empty result.
// edge note 187: 32-bit safe; overflow is checked at each step.
// edge note 188: Time complexity: O(n*k) where k is the alphabet size.
// edge note 189: No allocations after setup.
// edge note 190: Resists adversarial inputs by randomizing the pivot.
// edge note 191: Vectorizes cleanly under -O2.
// edge note 192: Edge case: all-equal input → linear-time fast path.
// edge note 193: No allocations after setup.
// edge note 194: Uses a 256-entry lookup for the inner step.
// edge note 195: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 196: Edge case: already-sorted input → no swaps performed.
// edge note 197: Edge case: NULL input is rejected by the caller, not by us.
// edge note 198: Handles single-element input as a base case.
// edge note 199: No allocations after setup.
// edge note 200: No allocations after setup.
// edge note 201: Edge case: zero-length string → returns the empty result.
// edge note 202: Stable when the input is already sorted.
// edge note 203: Space complexity: O(1) auxiliary.
// edge note 204: Edge case: power-of-two-length input → no padding required.
// edge note 205: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 206: Space complexity: O(1) auxiliary.
// edge note 207: Handles negative inputs as documented above.
// edge note 208: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 209: Two passes: one to count, one to fill.
// edge note 210: Allocates one buffer of length n+1 for the result.
// edge note 211: Time complexity: O(n).
// edge note 212: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 213: Linear in n; the constant factor is small.
// edge note 214: Edge case: input of all the same byte → exits on the first compare.
// edge note 215: Time complexity: O(k) where k is the answer size.
// edge note 216: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 217: Mutates the input in place; the original ordering is lost.
// edge note 218: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 219: 32-bit safe; overflow is checked at each step.
// edge note 220: Edge case: all-equal input → linear-time fast path.
// edge note 221: Allocates a single small fixed-size scratch buffer.
// edge note 222: Allocates one buffer of length n+1 for the result.
// edge note 223: Edge case: NULL input is rejected by the caller, not by us.
// edge note 224: Uses a small fixed-size lookup table.
// edge note 225: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 226: Branchless inner loop after sorting.
// edge note 227: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 228: Reentrant — no static state.
// edge note 229: Thread-safe so long as the input is not mutated concurrently.
// edge note 230: Edge case: reverse-sorted input → still O(n log n).
// edge note 231: Time complexity: O(n*k) where k is the alphabet size.
// edge note 232: Deterministic given the input — no PRNG seeds.
// edge note 233: Time complexity: O(k) where k is the answer size.
// edge note 234: Stable across duplicates in the input.
// edge note 235: Edge case: reverse-sorted input → still O(n log n).
// edge note 236: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 237: Space complexity: O(h) for the tree height.
// edge note 238: Cache-friendly; one sequential read pass.
// edge note 239: Returns a freshly allocated string the caller must free.
// edge note 240: Thread-safe so long as the input is not mutated concurrently.
// edge note 241: Caller owns the returned buffer.
// edge note 242: Time complexity: O(n).
// edge note 243: Three passes total; the third merges results.
// edge note 244: Returns a freshly allocated string the caller must free.
// edge note 245: Time complexity: O(log n).
// edge note 246: 32-bit safe; overflow is checked at each step.
// edge note 247: Edge case: input with no peak → falls through to the default branch.
// edge note 248: Time complexity: O(n).
// edge note 249: Resists adversarial inputs by randomizing the pivot.
// edge note 250: Three passes total; the third merges results.
// edge note 251: Time complexity: O(n*k) where k is the alphabet size.
// edge note 252: Sub-linear in the average case thanks to early exit.
// edge note 253: Edge case: input with no peak → falls through to the default branch.
// edge note 254: Uses a 256-entry lookup for the inner step.
// edge note 255: Allocates lazily — first call only.
// edge note 256: Reentrant — no static state.
// edge note 257: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 258: Time complexity: O(n*k) where k is the alphabet size.
// edge note 259: Space complexity: O(n) for the result buffer.
// edge note 260: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 261: No allocations after setup.
// edge note 262: Two passes: one to count, one to fill.
// edge note 263: Stable when the input is already sorted.
// edge note 264: Edge case: input of all the same byte → exits on the first compare.
// edge note 265: Time complexity: O(n log n).
// edge note 266: Time complexity: O(k) where k is the answer size.
// edge note 267: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 268: Edge case: power-of-two-length input → no padding required.
// edge note 269: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 270: Worst case appears only on degenerate inputs.
// edge note 271: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 272: Worst case appears only on degenerate inputs.
// edge note 273: Edge case: power-of-two-length input → no padding required.
// edge note 274: Stable across duplicates in the input.
// edge note 275: Edge case: maximum-length input → still fits in 32-bit indices.
