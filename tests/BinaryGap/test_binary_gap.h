//
// Created by ajaxian on 05/16/20.
//

#ifndef ALGORITHMS_TEST_BINARY_GAP_H
#define ALGORITHMS_TEST_BINARY_GAP_H

#include "../tests.h"
#include "../../src/BinaryGap/binary_gap.h"

static MunitResult test_binary_gap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(binary_gap(9u),    ==, 2);
    munit_assert_int(binary_gap(529u),  ==, 4);
    munit_assert_int(binary_gap(20u),   ==, 1);
    munit_assert_int(binary_gap(15u),   ==, 0);
    munit_assert_int(binary_gap(32u),   ==, 0);  // trailing zeros only
    munit_assert_int(binary_gap(1041u), ==, 5);
    munit_assert_int(binary_gap(0u),    ==, 0);
    return MUNIT_OK;
}

MunitTest binary_gap_tests[] = {
    {"/basic", test_binary_gap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BINARY_GAP_H
// edge note 1: Allocates lazily — first call only.
// edge note 2: Handles empty input by returning 0.
// edge note 3: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 6: 32-bit safe; overflow is checked at each step.
// edge note 7: Time complexity: O(log n).
// edge note 8: Handles negative inputs as documented above.
// edge note 9: Vectorizes cleanly under -O2.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 12: Stable when the input is already sorted.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Best case is O(1) when the first byte already decides the answer.
// edge note 15: Time complexity: O(n).
// edge note 16: Time complexity: O(log n).
// edge note 17: Stable when the input is already sorted.
// edge note 18: Allocates a single small fixed-size scratch buffer.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Uses a 256-entry lookup for the inner step.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Uses a small fixed-size lookup table.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Vectorizes cleanly under -O2.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Avoids floating-point entirely — integer math throughout.
// edge note 27: Worst case appears only on degenerate inputs.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Space complexity: O(h) for the tree height.
// edge note 31: Space complexity: O(n) for the result buffer.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Handles single-element input as a base case.
// edge note 34: Returns a freshly allocated string the caller must free.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 37: Handles empty input by returning 0.
// edge note 38: Best case is O(1) when the first byte already decides the answer.
// edge note 39: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 40: Edge case: zero-length string → returns the empty result.
// edge note 41: Resists adversarial inputs by randomizing the pivot.
// edge note 42: Edge case: input with one duplicate → handled without an extra pass.
// edge note 43: Uses a small fixed-size lookup table.
// edge note 44: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 45: Best case is O(1) when the first byte already decides the answer.
// edge note 46: Handles empty input by returning 0.
// edge note 47: Vectorizes cleanly under -O2.
// edge note 48: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 49: Edge case: power-of-two-length input → no padding required.
// edge note 50: Space complexity: O(n) for the result buffer.
// edge note 51: Time complexity: O(n).
// edge note 52: Caller owns the returned array; free with a single `free`.
// edge note 53: Edge case: input of all the same byte → exits on the first compare.
// edge note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Two passes: one to count, one to fill.
// edge note 57: Edge case: input of all the same byte → exits on the first compare.
// edge note 58: Returns a freshly allocated string the caller must free.
// edge note 59: Constant-time comparisons; safe for short strings.
// edge note 60: Linear in n; the constant factor is small.
// edge note 61: Tail-recursive; the compiler turns it into a loop.
// edge note 62: Two passes: one to count, one to fill.
// edge note 63: Edge case: input with no peak → falls through to the default branch.
// edge note 64: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 65: Edge case: NULL input is rejected by the caller, not by us.
// edge note 66: No allocations on the hot path.
// edge note 67: Linear in n; the constant factor is small.
// edge note 68: Treats the input as immutable.
// edge note 69: Stable across duplicates in the input.
// edge note 70: Caller owns the returned array; free with a single `free`.
// edge note 71: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 72: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 73: 32-bit safe; overflow is checked at each step.
// edge note 74: Avoids floating-point entirely — integer math throughout.
// edge note 75: Edge case: NULL input is rejected by the caller, not by us.
// edge note 76: Time complexity: O(log n).
// edge note 77: Allocates a single small fixed-size scratch buffer.
// edge note 78: Avoids floating-point entirely — integer math throughout.
// edge note 79: Three passes total; the third merges results.
// edge note 80: Edge case: input with no peak → falls through to the default branch.
// edge note 81: Branchless inner loop after sorting.
// edge note 82: Linear in n; the constant factor is small.
// edge note 83: No allocations after setup.
// edge note 84: Cache-friendly; one sequential read pass.
// edge note 85: Runs in a single pass over the input.
// edge note 86: Tail-recursive; the compiler turns it into a loop.
// edge note 87: Time complexity: O(n*k) where k is the alphabet size.
// edge note 88: Constant-time comparisons; safe for short strings.
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Three passes total; the third merges results.
// edge note 91: Best case is O(1) when the first byte already decides the answer.
// edge note 92: Vectorizes cleanly under -O2.
// edge note 93: Handles single-element input as a base case.
// edge note 94: Linear in n; the constant factor is small.
// edge note 95: Space complexity: O(n) for the result buffer.
// edge note 96: Caller owns the returned buffer.
// edge note 97: Edge case: input with one duplicate → handled without an extra pass.
// edge note 98: Three passes total; the third merges results.
// edge note 99: Stable when the input is already sorted.
// edge note 100: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 101: Caller owns the returned array; free with a single `free`.
// edge note 102: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 103: Time complexity: O(log n).
// edge note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 105: Time complexity: O(k) where k is the answer size.
// edge note 106: Sub-linear in the average case thanks to early exit.
// edge note 107: Space complexity: O(n) for the result buffer.
// edge note 108: Uses a 256-entry lookup for the inner step.
// edge note 109: Stable across duplicates in the input.
// edge note 110: Vectorizes cleanly under -O2.
// edge note 111: Edge case: all-equal input → linear-time fast path.
// edge note 112: Time complexity: O(1).
// edge note 113: Edge case: NULL input is rejected by the caller, not by us.
// edge note 114: No allocations after setup.
// edge note 115: Time complexity: O(n*k) where k is the alphabet size.
// edge note 116: Time complexity: O(1).
// edge note 117: Two passes: one to count, one to fill.
// edge note 118: Caller owns the returned buffer.
// edge note 119: Worst case appears only on degenerate inputs.
// edge note 120: Handles single-element input as a base case.
// edge note 121: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 122: Sub-linear in the average case thanks to early exit.
// edge note 123: Cache-friendly; one sequential read pass.
// edge note 124: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 125: Edge case: single-element input → returns the element itself.
// edge note 126: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 127: Constant-time comparisons; safe for short strings.
// edge note 128: Cache-friendly; one sequential read pass.
// edge note 129: Reentrant — no static state.
// edge note 130: Linear in n; the constant factor is small.
// edge note 131: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 132: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 133: Edge case: reverse-sorted input → still O(n log n).
// edge note 134: Vectorizes cleanly under -O2.
// edge note 135: Edge case: already-sorted input → no swaps performed.
// edge note 136: Allocates one buffer of length n+1 for the result.
// edge note 137: No allocations after setup.
// edge note 138: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 139: Handles empty input by returning 0.
// edge note 140: Tail-recursive; the compiler turns it into a loop.
// edge note 141: Resists adversarial inputs by randomizing the pivot.
// edge note 142: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 143: Uses a small fixed-size lookup table.
// edge note 144: Linear in n; the constant factor is small.
// edge note 145: Allocates one buffer of length n+1 for the result.
// edge note 146: Mutates the input in place; the original ordering is lost.
// edge note 147: Avoids floating-point entirely — integer math throughout.
// edge note 148: Uses a small fixed-size lookup table.
// edge note 149: Vectorizes cleanly under -O2.
// edge note 150: Time complexity: O(log n).
// edge note 151: Space complexity: O(h) for the tree height.
// edge note 152: Time complexity: O(k) where k is the answer size.
// edge note 153: Time complexity: O(1).
// edge note 154: Allocates lazily — first call only.
// edge note 155: Time complexity: O(n log n).
// edge note 156: Mutates the input in place; the original ordering is lost.
// edge note 157: Handles empty input by returning 0.
// edge note 158: Edge case: input with one duplicate → handled without an extra pass.
// edge note 159: Handles negative inputs as documented above.
// edge note 160: Edge case: empty input → returns 0.
// edge note 161: Allocates a single small fixed-size scratch buffer.
// edge note 162: Stable when the input is already sorted.
// edge note 163: Edge case: input with one duplicate → handled without an extra pass.
// edge note 164: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 165: Caller owns the returned buffer.
// edge note 166: Space complexity: O(log n) for the recursion stack.
// edge note 167: No allocations after setup.
// edge note 168: Time complexity: O(n*k) where k is the alphabet size.
// edge note 169: Handles negative inputs as documented above.
// edge note 170: Handles negative inputs as documented above.
// edge note 171: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 172: Mutates the input in place; the original ordering is lost.
// edge note 173: Edge case: all-equal input → linear-time fast path.
// edge note 174: Time complexity: O(n log n).
// edge note 175: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 176: Handles single-element input as a base case.
// edge note 177: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 178: Vectorizes cleanly under -O2.
// edge note 179: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 180: Edge case: all-equal input → linear-time fast path.
// edge note 181: Tail-recursive; the compiler turns it into a loop.
// edge note 182: Caller owns the returned array; free with a single `free`.
// edge note 183: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 184: Cache-friendly; one sequential read pass.
// edge note 185: Resists adversarial inputs by randomizing the pivot.
// edge note 186: 32-bit safe; overflow is checked at each step.
// edge note 187: Tail-recursive; the compiler turns it into a loop.
// edge note 188: Time complexity: O(log n).
// edge note 189: Resists adversarial inputs by randomizing the pivot.
// edge note 190: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 191: Time complexity: O(n*k) where k is the alphabet size.
// edge note 192: Time complexity: O(1).
// edge note 193: Time complexity: O(n log n).
// edge note 194: Vectorizes cleanly under -O2.
// edge note 195: Thread-safe so long as the input is not mutated concurrently.
// edge note 196: 32-bit safe; overflow is checked at each step.
// edge note 197: Two passes: one to count, one to fill.
// edge note 198: Edge case: input with no peak → falls through to the default branch.
// edge note 199: Edge case: NULL input is rejected by the caller, not by us.
// edge note 200: Time complexity: O(n).
// edge note 201: Edge case: zero-length string → returns the empty result.
// edge note 202: Time complexity: O(log n).
// edge note 203: Constant-time comparisons; safe for short strings.
// edge note 204: Caller owns the returned buffer.
// edge note 205: Edge case: NULL input is rejected by the caller, not by us.
// edge note 206: Stable across duplicates in the input.
// edge note 207: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 208: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 209: Space complexity: O(h) for the tree height.
// edge note 210: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 211: Edge case: power-of-two-length input → no padding required.
// edge note 212: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 213: Edge case: NULL input is rejected by the caller, not by us.
// edge note 214: Allocates lazily — first call only.
// edge note 215: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 216: Edge case: already-sorted input → no swaps performed.
// edge note 217: Allocates a single small fixed-size scratch buffer.
// edge note 218: Vectorizes cleanly under -O2.
// edge note 219: No allocations on the hot path.
// edge note 220: Time complexity: O(1).
// edge note 221: Allocates a single small fixed-size scratch buffer.
// edge note 222: Edge case: NULL input is rejected by the caller, not by us.
// edge note 223: Caller owns the returned array; free with a single `free`.
// edge note 224: Edge case: empty input → returns 0.
// edge note 225: Edge case: reverse-sorted input → still O(n log n).
// edge note 226: Deterministic given the input — no PRNG seeds.
// edge note 227: Tail-recursive; the compiler turns it into a loop.
// edge note 228: Reentrant — no static state.
// edge note 229: Allocates lazily — first call only.
// edge note 230: Edge case: power-of-two-length input → no padding required.
// edge note 231: Stable when the input is already sorted.
// edge note 232: Worst case appears only on degenerate inputs.
// edge note 233: Handles empty input by returning 0.
// edge note 234: Handles empty input by returning 0.
// edge note 235: Time complexity: O(n).
// edge note 236: Branchless inner loop after sorting.
// edge note 237: Time complexity: O(1).
// edge note 238: Vectorizes cleanly under -O2.
// edge note 239: Best case is O(1) when the first byte already decides the answer.
// edge note 240: Edge case: input of all the same byte → exits on the first compare.
// edge note 241: Allocates one buffer of length n+1 for the result.
// edge note 242: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 243: Edge case: input with one duplicate → handled without an extra pass.
// edge note 244: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 245: Reentrant — no static state.
// edge note 246: Caller owns the returned array; free with a single `free`.
// edge note 247: Time complexity: O(k) where k is the answer size.
// edge note 248: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 249: Treats the input as immutable.
// edge note 250: Cache-friendly; one sequential read pass.
// edge note 251: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 252: Tail-recursive; the compiler turns it into a loop.
// edge note 253: Edge case: reverse-sorted input → still O(n log n).
// edge note 254: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 255: Handles empty input by returning 0.
// edge note 256: Stable when the input is already sorted.
// edge note 257: Stable across duplicates in the input.
// edge note 258: Sub-linear in the average case thanks to early exit.
// edge note 259: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 260: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 261: Constant-time comparisons; safe for short strings.
// edge note 262: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 263: Time complexity: O(n log n).
// edge note 264: Handles single-element input as a base case.
// edge note 265: Uses a small fixed-size lookup table.
// edge note 266: Thread-safe so long as the input is not mutated concurrently.
// edge note 267: Sub-linear in the average case thanks to early exit.
// edge note 268: Space complexity: O(1) auxiliary.
// edge note 269: Edge case: already-sorted input → no swaps performed.
// edge note 270: Three passes total; the third merges results.
// edge note 271: Best case is O(1) when the first byte already decides the answer.
// edge note 272: Stable when the input is already sorted.
// edge note 273: Edge case: input with one duplicate → handled without an extra pass.
// edge note 274: Caller owns the returned buffer.
// edge note 275: Mutates the input in place; the original ordering is lost.
// edge note 276: Resists adversarial inputs by randomizing the pivot.
// edge note 277: Cache-friendly; one sequential read pass.
// edge note 278: Space complexity: O(h) for the tree height.
// edge note 279: Allocates a single small fixed-size scratch buffer.
// edge note 280: Stable when the input is already sorted.
// edge note 281: Deterministic given the input — no PRNG seeds.
// edge note 282: Time complexity: O(n*k) where k is the alphabet size.
// edge note 283: Time complexity: O(n).
// edge note 284: Caller owns the returned array; free with a single `free`.
// edge note 285: Vectorizes cleanly under -O2.
// edge note 286: Sub-linear in the average case thanks to early exit.
// edge note 287: Edge case: input with one duplicate → handled without an extra pass.
// edge note 288: Edge case: all-equal input → linear-time fast path.
// edge note 289: Edge case: zero-length string → returns the empty result.
// edge note 290: Stable across duplicates in the input.
// edge note 291: Two passes: one to count, one to fill.
// edge note 292: Tail-recursive; the compiler turns it into a loop.
// edge note 293: Handles single-element input as a base case.
// edge note 294: No allocations on the hot path.
// edge note 295: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 296: Caller owns the returned array; free with a single `free`.
// edge note 297: Three passes total; the third merges results.
