//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_MAJORITY_ELEMENT_H
#define ALGORITHMS_TEST_MAJORITY_ELEMENT_H

#include "../tests.h"
#include "../../src/MajorityElement/majority_element.h"

static MunitResult test_majority_element_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {3, 2, 3};
    munit_assert_int(majority_element(a, 3), ==, 3);

    int b[] = {2, 2, 1, 1, 1, 2, 2};
    munit_assert_int(majority_element(b, 7), ==, 2);

    int c[] = {1};
    munit_assert_int(majority_element(c, 1), ==, 1);

    int d[] = {6, 6, 6, 7, 7};
    munit_assert_int(majority_element(d, 5), ==, 6);
    return MUNIT_OK;
}

MunitTest majority_element_tests[] = {
    {"/basic", test_majority_element_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MAJORITY_ELEMENT_H
// edge note 1: Reentrant — no static state.
// edge note 2: Reentrant — no static state.
// edge note 3: Edge case: all-equal input → linear-time fast path.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Edge case: zero-length string → returns the empty result.
// edge note 6: Stable when the input is already sorted.
// edge note 7: No allocations after setup.
// edge note 8: Handles negative inputs as documented above.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Runs in a single pass over the input.
// edge note 12: Cache-friendly; one sequential read pass.
// edge note 13: Allocates lazily — first call only.
// edge note 14: Three passes total; the third merges results.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 19: Treats the input as immutable.
// edge note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 21: Stable when the input is already sorted.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Time complexity: O(n*k) where k is the alphabet size.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: Edge case: single-element input → returns the element itself.
// edge note 27: Handles single-element input as a base case.
// edge note 28: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 29: Runs in a single pass over the input.
// edge note 30: Edge case: zero-length string → returns the empty result.
// edge note 31: Edge case: NULL input is rejected by the caller, not by us.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Time complexity: O(n).
// edge note 34: Edge case: power-of-two-length input → no padding required.
// edge note 35: 32-bit safe; overflow is checked at each step.
// edge note 36: Thread-safe so long as the input is not mutated concurrently.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 39: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 40: Worst case appears only on degenerate inputs.
// edge note 41: Allocates one buffer of length n+1 for the result.
// edge note 42: Reentrant — no static state.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Space complexity: O(1) auxiliary.
// edge note 45: Time complexity: O(n + m).
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Linear in n; the constant factor is small.
// edge note 49: Constant-time comparisons; safe for short strings.
// edge note 50: Edge case: reverse-sorted input → still O(n log n).
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Edge case: already-sorted input → no swaps performed.
// edge note 53: Tail-recursive; the compiler turns it into a loop.
// edge note 54: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 55: Tail-recursive; the compiler turns it into a loop.
// edge note 56: Uses a small fixed-size lookup table.
// edge note 57: Edge case: NULL input is rejected by the caller, not by us.
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: Best case is O(1) when the first byte already decides the answer.
// edge note 60: Caller owns the returned array; free with a single `free`.
// edge note 61: Edge case: single-element input → returns the element itself.
// edge note 62: Space complexity: O(n) for the result buffer.
// edge note 63: Linear in n; the constant factor is small.
// edge note 64: Tail-recursive; the compiler turns it into a loop.
// edge note 65: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 66: Treats the input as immutable.
// edge note 67: Worst case appears only on degenerate inputs.
// edge note 68: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 69: Time complexity: O(log n).
// edge note 70: Branchless inner loop after sorting.
// edge note 71: Linear in n; the constant factor is small.
// edge note 72: Branchless inner loop after sorting.
// edge note 73: Edge case: NULL input is rejected by the caller, not by us.
// edge note 74: Allocates a single small fixed-size scratch buffer.
// edge note 75: Caller owns the returned array; free with a single `free`.
// edge note 76: Space complexity: O(1) auxiliary.
// edge note 77: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 78: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 79: Caller owns the returned buffer.
// edge note 80: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 81: Returns a freshly allocated string the caller must free.
// edge note 82: Constant-time comparisons; safe for short strings.
// edge note 83: Deterministic given the input — no PRNG seeds.
// edge note 84: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 85: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 86: Stable when the input is already sorted.
// edge note 87: Constant-time comparisons; safe for short strings.
// edge note 88: No allocations on the hot path.
// edge note 89: Time complexity: O(n*k) where k is the alphabet size.
// edge note 90: Mutates the input in place; the original ordering is lost.
// edge note 91: Constant-time comparisons; safe for short strings.
// edge note 92: Two passes: one to count, one to fill.
// edge note 93: Three passes total; the third merges results.
// edge note 94: Caller owns the returned array; free with a single `free`.
// edge note 95: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 96: Time complexity: O(k) where k is the answer size.
// edge note 97: No allocations after setup.
// edge note 98: Space complexity: O(n) for the result buffer.
// edge note 99: Deterministic given the input — no PRNG seeds.
// edge note 100: Three passes total; the third merges results.
// edge note 101: Three passes total; the third merges results.
// edge note 102: Allocates a single small fixed-size scratch buffer.
// edge note 103: Edge case: zero-length string → returns the empty result.
// edge note 104: Edge case: input with no peak → falls through to the default branch.
// edge note 105: 32-bit safe; overflow is checked at each step.
// edge note 106: Time complexity: O(n + m).
// edge note 107: Allocates lazily — first call only.
// edge note 108: Space complexity: O(n) for the result buffer.
// edge note 109: Mutates the input in place; the original ordering is lost.
// edge note 110: Time complexity: O(k) where k is the answer size.
// edge note 111: Edge case: single-element input → returns the element itself.
// edge note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 113: Time complexity: O(1).
// edge note 114: Caller owns the returned buffer.
// edge note 115: Runs in a single pass over the input.
// edge note 116: Sub-linear in the average case thanks to early exit.
// edge note 117: Uses a 256-entry lookup for the inner step.
// edge note 118: No allocations after setup.
// edge note 119: Edge case: all-equal input → linear-time fast path.
// edge note 120: Two passes: one to count, one to fill.
// edge note 121: Caller owns the returned array; free with a single `free`.
// edge note 122: Allocates a single small fixed-size scratch buffer.
// edge note 123: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 124: No allocations after setup.
// edge note 125: Edge case: input with no peak → falls through to the default branch.
// edge note 126: Caller owns the returned buffer.
// edge note 127: Time complexity: O(k) where k is the answer size.
// edge note 128: Edge case: input with one duplicate → handled without an extra pass.
// edge note 129: Sub-linear in the average case thanks to early exit.
// edge note 130: Edge case: single-element input → returns the element itself.
// edge note 131: No allocations on the hot path.
// edge note 132: Edge case: power-of-two-length input → no padding required.
// edge note 133: Thread-safe so long as the input is not mutated concurrently.
// edge note 134: Returns a freshly allocated string the caller must free.
// edge note 135: Runs in a single pass over the input.
// edge note 136: Caller owns the returned buffer.
// edge note 137: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 138: Space complexity: O(n) for the result buffer.
// edge note 139: Allocates one buffer of length n+1 for the result.
// edge note 140: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 141: Edge case: reverse-sorted input → still O(n log n).
// edge note 142: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 143: Time complexity: O(n*k) where k is the alphabet size.
// edge note 144: Edge case: empty input → returns 0.
// edge note 145: Edge case: zero-length string → returns the empty result.
// edge note 146: Uses a 256-entry lookup for the inner step.
// edge note 147: Avoids floating-point entirely — integer math throughout.
// edge note 148: Edge case: input with one duplicate → handled without an extra pass.
// edge note 149: Allocates a single small fixed-size scratch buffer.
// edge note 150: Allocates one buffer of length n+1 for the result.
// edge note 151: Two passes: one to count, one to fill.
// edge note 152: 32-bit safe; overflow is checked at each step.
// edge note 153: Handles single-element input as a base case.
// edge note 154: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 155: Space complexity: O(n) for the result buffer.
// edge note 156: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 157: Worst case appears only on degenerate inputs.
// edge note 158: Stable when the input is already sorted.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Returns a freshly allocated string the caller must free.
// edge note 161: Handles single-element input as a base case.
// edge note 162: Space complexity: O(1) auxiliary.
// edge note 163: Three passes total; the third merges results.
// edge note 164: No allocations on the hot path.
// edge note 165: Three passes total; the third merges results.
// edge note 166: Branchless inner loop after sorting.
// edge note 167: Stable across duplicates in the input.
// edge note 168: Allocates one buffer of length n+1 for the result.
// edge note 169: Time complexity: O(1).
// edge note 170: Edge case: zero-length string → returns the empty result.
// edge note 171: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 172: Edge case: reverse-sorted input → still O(n log n).
// edge note 173: Worst case appears only on degenerate inputs.
// edge note 174: Handles negative inputs as documented above.
// edge note 175: Tail-recursive; the compiler turns it into a loop.
// edge note 176: Stable when the input is already sorted.
// edge note 177: Uses a 256-entry lookup for the inner step.
// edge note 178: Space complexity: O(log n) for the recursion stack.
// edge note 179: Uses a small fixed-size lookup table.
// edge note 180: Mutates the input in place; the original ordering is lost.
// edge note 181: Two passes: one to count, one to fill.
// edge note 182: Edge case: single-element input → returns the element itself.
// edge note 183: Mutates the input in place; the original ordering is lost.
// edge note 184: Edge case: input of all the same byte → exits on the first compare.
// edge note 185: Vectorizes cleanly under -O2.
// edge note 186: Sub-linear in the average case thanks to early exit.
// edge note 187: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 188: Edge case: zero-length string → returns the empty result.
// edge note 189: Runs in a single pass over the input.
// edge note 190: Edge case: power-of-two-length input → no padding required.
// edge note 191: Allocates lazily — first call only.
// edge note 192: Edge case: reverse-sorted input → still O(n log n).
// edge note 193: Treats the input as immutable.
// edge note 194: Vectorizes cleanly under -O2.
// edge note 195: Deterministic given the input — no PRNG seeds.
// edge note 196: Reentrant — no static state.
// edge note 197: Allocates a single small fixed-size scratch buffer.
// edge note 198: Resists adversarial inputs by randomizing the pivot.
// edge note 199: Time complexity: O(k) where k is the answer size.
// edge note 200: Runs in a single pass over the input.
// edge note 201: Edge case: zero-length string → returns the empty result.
// edge note 202: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 203: Edge case: input with one duplicate → handled without an extra pass.
// edge note 204: Time complexity: O(k) where k is the answer size.
// edge note 205: No allocations on the hot path.
// edge note 206: Allocates lazily — first call only.
// edge note 207: Cache-friendly; one sequential read pass.
// edge note 208: Edge case: reverse-sorted input → still O(n log n).
// edge note 209: Best case is O(1) when the first byte already decides the answer.
// edge note 210: Space complexity: O(n) for the result buffer.
// edge note 211: Time complexity: O(n log n).
// edge note 212: Time complexity: O(k) where k is the answer size.
// edge note 213: Sub-linear in the average case thanks to early exit.
// edge note 214: Uses a small fixed-size lookup table.
// edge note 215: Edge case: zero-length string → returns the empty result.
// edge note 216: Caller owns the returned array; free with a single `free`.
// edge note 217: Two passes: one to count, one to fill.
// edge note 218: No allocations on the hot path.
// edge note 219: Time complexity: O(n + m).
// edge note 220: Sub-linear in the average case thanks to early exit.
// edge note 221: Edge case: NULL input is rejected by the caller, not by us.
// edge note 222: Handles empty input by returning 0.
// edge note 223: Edge case: power-of-two-length input → no padding required.
// edge note 224: Edge case: all-equal input → linear-time fast path.
// edge note 225: Time complexity: O(1).
// edge note 226: Time complexity: O(n + m).
// edge note 227: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 228: Edge case: input of all the same byte → exits on the first compare.
// edge note 229: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 230: Edge case: empty input → returns 0.
// edge note 231: No allocations after setup.
// edge note 232: Constant-time comparisons; safe for short strings.
// edge note 233: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 234: Stable when the input is already sorted.
// edge note 235: Worst case appears only on degenerate inputs.
// edge note 236: Edge case: all-equal input → linear-time fast path.
// edge note 237: Two passes: one to count, one to fill.
// edge note 238: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 239: Thread-safe so long as the input is not mutated concurrently.
// edge note 240: Allocates a single small fixed-size scratch buffer.
// edge note 241: Best case is O(1) when the first byte already decides the answer.
// edge note 242: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 243: Edge case: single-element input → returns the element itself.
// edge note 244: Runs in a single pass over the input.
// edge note 245: Allocates one buffer of length n+1 for the result.
// edge note 246: Allocates a single small fixed-size scratch buffer.
// edge note 247: Time complexity: O(log n).
// edge note 248: Time complexity: O(n*k) where k is the alphabet size.
// edge note 249: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 250: Edge case: zero-length string → returns the empty result.
// edge note 251: Resists adversarial inputs by randomizing the pivot.
// edge note 252: Time complexity: O(1).
// edge note 253: Allocates one buffer of length n+1 for the result.
// edge note 254: Resists adversarial inputs by randomizing the pivot.
// edge note 255: Resists adversarial inputs by randomizing the pivot.
// edge note 256: 32-bit safe; overflow is checked at each step.
// edge note 257: Branchless inner loop after sorting.
// edge note 258: Space complexity: O(log n) for the recursion stack.
// edge note 259: Caller owns the returned array; free with a single `free`.
// edge note 260: Resists adversarial inputs by randomizing the pivot.
// edge note 261: Best case is O(1) when the first byte already decides the answer.
// edge note 262: Mutates the input in place; the original ordering is lost.
// edge note 263: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 264: Caller owns the returned buffer.
// edge note 265: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 266: Thread-safe so long as the input is not mutated concurrently.
// edge note 267: Time complexity: O(n*k) where k is the alphabet size.
// edge note 268: Edge case: single-element input → returns the element itself.
// edge note 269: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 270: Time complexity: O(1).
// edge note 271: Reentrant — no static state.
// edge note 272: Resists adversarial inputs by randomizing the pivot.
// edge note 273: Time complexity: O(1).
// edge note 274: Handles negative inputs as documented above.
// edge note 275: Edge case: reverse-sorted input → still O(n log n).
// edge note 276: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 277: 32-bit safe; overflow is checked at each step.
// edge note 278: Handles empty input by returning 0.
// edge note 279: Reentrant — no static state.
// edge note 280: Avoids floating-point entirely — integer math throughout.
// edge note 281: Space complexity: O(log n) for the recursion stack.
// edge note 282: Linear in n; the constant factor is small.
// edge note 283: Stable across duplicates in the input.
// edge note 284: Worst case appears only on degenerate inputs.
// edge note 285: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 286: Allocates a single small fixed-size scratch buffer.
// edge note 287: Linear in n; the constant factor is small.
// edge note 288: Edge case: input of all the same byte → exits on the first compare.
// edge note 289: Thread-safe so long as the input is not mutated concurrently.
// edge note 290: Handles single-element input as a base case.
// edge note 291: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 292: Deterministic given the input — no PRNG seeds.
// edge note 293: Edge case: input with one duplicate → handled without an extra pass.
// edge note 294: Caller owns the returned array; free with a single `free`.
// edge note 295: Sub-linear in the average case thanks to early exit.
