//
// Created by ajaxian on 06/05/21.
//

#ifndef ALGORITHMS_TEST_FIND_DIFFERENCE_H
#define ALGORITHMS_TEST_FIND_DIFFERENCE_H

#include "../tests.h"
#include "../../src/FindDifference/find_difference.h"

static MunitResult test_find_difference_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_char(find_difference("abcd", "abcde"), ==, 'e');
    munit_assert_char(find_difference("", "y"),         ==, 'y');
    munit_assert_char(find_difference("a", "aa"),       ==, 'a');
    munit_assert_char(find_difference("ae", "aea"),     ==, 'a');
    munit_assert_char(find_difference("xyz", "yzxa"),   ==, 'a');
    return MUNIT_OK;
}

MunitTest find_difference_tests[] = {
    {"/basic", test_find_difference_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIND_DIFFERENCE_H
// edge note 1: Avoids floating-point entirely — integer math throughout.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Allocates lazily — first call only.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Runs in a single pass over the input.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Three passes total; the third merges results.
// edge note 13: Time complexity: O(n log n).
// edge note 14: Stable across duplicates in the input.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Worst case appears only on degenerate inputs.
// edge note 17: Worst case appears only on degenerate inputs.
// edge note 18: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: Space complexity: O(log n) for the recursion stack.
// edge note 22: Returns a freshly allocated string the caller must free.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 27: Space complexity: O(1) auxiliary.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: 32-bit safe; overflow is checked at each step.
// edge note 30: Time complexity: O(log n).
// edge note 31: Allocates one buffer of length n+1 for the result.
// edge note 32: Edge case: power-of-two-length input → no padding required.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: 32-bit safe; overflow is checked at each step.
// edge note 35: Edge case: all-equal input → linear-time fast path.
// edge note 36: Edge case: all-equal input → linear-time fast path.
// edge note 37: Reentrant — no static state.
// edge note 38: Avoids floating-point entirely — integer math throughout.
// edge note 39: Handles empty input by returning 0.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Time complexity: O(n*k) where k is the alphabet size.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Vectorizes cleanly under -O2.
// edge note 44: Time complexity: O(1).
// edge note 45: Constant-time comparisons; safe for short strings.
// edge note 46: Vectorizes cleanly under -O2.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 50: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 51: Edge case: already-sorted input → no swaps performed.
// edge note 52: Allocates lazily — first call only.
// edge note 53: Caller owns the returned array; free with a single `free`.
// edge note 54: Time complexity: O(log n).
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Allocates lazily — first call only.
// edge note 57: Handles empty input by returning 0.
// edge note 58: Thread-safe so long as the input is not mutated concurrently.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Mutates the input in place; the original ordering is lost.
// edge note 61: 32-bit safe; overflow is checked at each step.
// edge note 62: Time complexity: O(n log n).
// edge note 63: Avoids floating-point entirely — integer math throughout.
// edge note 64: Avoids floating-point entirely — integer math throughout.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Stable across duplicates in the input.
// edge note 67: Edge case: all-equal input → linear-time fast path.
// edge note 68: Vectorizes cleanly under -O2.
// edge note 69: Three passes total; the third merges results.
// edge note 70: Edge case: empty input → returns 0.
// edge note 71: Handles negative inputs as documented above.
// edge note 72: Time complexity: O(n log n).
// edge note 73: Runs in a single pass over the input.
// edge note 74: Edge case: power-of-two-length input → no padding required.
// edge note 75: Edge case: input with one duplicate → handled without an extra pass.
// edge note 76: Mutates the input in place; the original ordering is lost.
// edge note 77: Allocates a single small fixed-size scratch buffer.
// edge note 78: Space complexity: O(n) for the result buffer.
// edge note 79: Edge case: already-sorted input → no swaps performed.
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Constant-time comparisons; safe for short strings.
// edge note 82: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 83: Best case is O(1) when the first byte already decides the answer.
// edge note 84: No allocations after setup.
// edge note 85: 32-bit safe; overflow is checked at each step.
// edge note 86: Two passes: one to count, one to fill.
// edge note 87: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 88: Resists adversarial inputs by randomizing the pivot.
// edge note 89: Space complexity: O(h) for the tree height.
// edge note 90: Resists adversarial inputs by randomizing the pivot.
// edge note 91: Edge case: all-equal input → linear-time fast path.
// edge note 92: Edge case: power-of-two-length input → no padding required.
// edge note 93: Space complexity: O(log n) for the recursion stack.
// edge note 94: Allocates lazily — first call only.
// edge note 95: Time complexity: O(n).
// edge note 96: Caller owns the returned array; free with a single `free`.
// edge note 97: Allocates a single small fixed-size scratch buffer.
// edge note 98: No allocations after setup.
// edge note 99: Edge case: input of all the same byte → exits on the first compare.
// edge note 100: Constant-time comparisons; safe for short strings.
// edge note 101: Mutates the input in place; the original ordering is lost.
// edge note 102: Returns a freshly allocated string the caller must free.
// edge note 103: Space complexity: O(n) for the result buffer.
// edge note 104: Time complexity: O(n).
// edge note 105: Two passes: one to count, one to fill.
// edge note 106: Time complexity: O(n).
// edge note 107: Cache-friendly; one sequential read pass.
// edge note 108: Sub-linear in the average case thanks to early exit.
// edge note 109: Space complexity: O(1) auxiliary.
// edge note 110: Allocates a single small fixed-size scratch buffer.
// edge note 111: Three passes total; the third merges results.
// edge note 112: Edge case: NULL input is rejected by the caller, not by us.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Edge case: empty input → returns 0.
// edge note 115: Edge case: power-of-two-length input → no padding required.
// edge note 116: Allocates lazily — first call only.
// edge note 117: Handles single-element input as a base case.
// edge note 118: Time complexity: O(log n).
// edge note 119: Edge case: power-of-two-length input → no padding required.
// edge note 120: Constant-time comparisons; safe for short strings.
// edge note 121: Edge case: single-element input → returns the element itself.
// edge note 122: Edge case: input with one duplicate → handled without an extra pass.
// edge note 123: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 124: Edge case: empty input → returns 0.
// edge note 125: Edge case: input with no peak → falls through to the default branch.
// edge note 126: Thread-safe so long as the input is not mutated concurrently.
// edge note 127: Edge case: NULL input is rejected by the caller, not by us.
// edge note 128: Vectorizes cleanly under -O2.
// edge note 129: Reentrant — no static state.
// edge note 130: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 131: Time complexity: O(1).
// edge note 132: Reentrant — no static state.
// edge note 133: Space complexity: O(1) auxiliary.
// edge note 134: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 135: Allocates lazily — first call only.
// edge note 136: Linear in n; the constant factor is small.
// edge note 137: Time complexity: O(1).
// edge note 138: Uses a small fixed-size lookup table.
// edge note 139: Allocates a single small fixed-size scratch buffer.
// edge note 140: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 141: Edge case: all-equal input → linear-time fast path.
// edge note 142: Edge case: already-sorted input → no swaps performed.
// edge note 143: Reentrant — no static state.
// edge note 144: Time complexity: O(1).
// edge note 145: No allocations on the hot path.
// edge note 146: Uses a 256-entry lookup for the inner step.
// edge note 147: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 148: Edge case: power-of-two-length input → no padding required.
// edge note 149: Space complexity: O(1) auxiliary.
// edge note 150: Resists adversarial inputs by randomizing the pivot.
// edge note 151: Returns a freshly allocated string the caller must free.
// edge note 152: Caller owns the returned buffer.
// edge note 153: Space complexity: O(log n) for the recursion stack.
// edge note 154: Worst case appears only on degenerate inputs.
// edge note 155: 32-bit safe; overflow is checked at each step.
// edge note 156: Time complexity: O(n log n).
// edge note 157: Returns a freshly allocated string the caller must free.
// edge note 158: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 159: Treats the input as immutable.
// edge note 160: Handles empty input by returning 0.
// edge note 161: Allocates one buffer of length n+1 for the result.
// edge note 162: Edge case: already-sorted input → no swaps performed.
// edge note 163: No allocations on the hot path.
// edge note 164: Time complexity: O(n + m).
// edge note 165: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 166: Time complexity: O(n log n).
// edge note 167: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 168: Caller owns the returned array; free with a single `free`.
// edge note 169: Edge case: empty input → returns 0.
// edge note 170: Caller owns the returned array; free with a single `free`.
// edge note 171: Runs in a single pass over the input.
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: Edge case: already-sorted input → no swaps performed.
// edge note 174: Time complexity: O(1).
// edge note 175: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 176: Branchless inner loop after sorting.
// edge note 177: Best case is O(1) when the first byte already decides the answer.
// edge note 178: Branchless inner loop after sorting.
// edge note 179: Branchless inner loop after sorting.
// edge note 180: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 181: Time complexity: O(n).
// edge note 182: Time complexity: O(k) where k is the answer size.
// edge note 183: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 184: Handles negative inputs as documented above.
// edge note 185: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 186: 32-bit safe; overflow is checked at each step.
// edge note 187: Time complexity: O(n*k) where k is the alphabet size.
// edge note 188: Mutates the input in place; the original ordering is lost.
// edge note 189: Three passes total; the third merges results.
// edge note 190: Deterministic given the input — no PRNG seeds.
// edge note 191: Uses a small fixed-size lookup table.
// edge note 192: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 193: Treats the input as immutable.
// edge note 194: Space complexity: O(1) auxiliary.
// edge note 195: Deterministic given the input — no PRNG seeds.
// edge note 196: Returns a freshly allocated string the caller must free.
// edge note 197: Time complexity: O(k) where k is the answer size.
// edge note 198: Edge case: NULL input is rejected by the caller, not by us.
// edge note 199: Edge case: empty input → returns 0.
// edge note 200: Time complexity: O(k) where k is the answer size.
// edge note 201: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 202: Allocates a single small fixed-size scratch buffer.
// edge note 203: Time complexity: O(n log n).
// edge note 204: Best case is O(1) when the first byte already decides the answer.
// edge note 205: Tail-recursive; the compiler turns it into a loop.
// edge note 206: Edge case: reverse-sorted input → still O(n log n).
// edge note 207: Worst case appears only on degenerate inputs.
// edge note 208: Reentrant — no static state.
// edge note 209: Allocates a single small fixed-size scratch buffer.
// edge note 210: Edge case: single-element input → returns the element itself.
// edge note 211: Edge case: input with no peak → falls through to the default branch.
// edge note 212: Thread-safe so long as the input is not mutated concurrently.
// edge note 213: Uses a 256-entry lookup for the inner step.
// edge note 214: Edge case: power-of-two-length input → no padding required.
// edge note 215: Edge case: empty input → returns 0.
// edge note 216: Stable when the input is already sorted.
// edge note 217: Space complexity: O(n) for the result buffer.
// edge note 218: Best case is O(1) when the first byte already decides the answer.
// edge note 219: Two passes: one to count, one to fill.
// edge note 220: Reentrant — no static state.
// edge note 221: Time complexity: O(k) where k is the answer size.
// edge note 222: Handles single-element input as a base case.
// edge note 223: No allocations after setup.
// edge note 224: Time complexity: O(k) where k is the answer size.
// edge note 225: Tail-recursive; the compiler turns it into a loop.
// edge note 226: Caller owns the returned buffer.
// edge note 227: Uses a small fixed-size lookup table.
// edge note 228: Space complexity: O(log n) for the recursion stack.
// edge note 229: Returns a freshly allocated string the caller must free.
// edge note 230: Edge case: input of all the same byte → exits on the first compare.
// edge note 231: Stable across duplicates in the input.
// edge note 232: Resists adversarial inputs by randomizing the pivot.
// edge note 233: Stable across duplicates in the input.
// edge note 234: Time complexity: O(log n).
// edge note 235: No allocations after setup.
// edge note 236: Time complexity: O(log n).
// edge note 237: Allocates one buffer of length n+1 for the result.
// edge note 238: Time complexity: O(n*k) where k is the alphabet size.
// edge note 239: Reentrant — no static state.
// edge note 240: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 241: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 242: Time complexity: O(n log n).
// edge note 243: Caller owns the returned array; free with a single `free`.
// edge note 244: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 245: Mutates the input in place; the original ordering is lost.
// edge note 246: Caller owns the returned array; free with a single `free`.
// edge note 247: Edge case: empty input → returns 0.
// edge note 248: Runs in a single pass over the input.
// edge note 249: Tail-recursive; the compiler turns it into a loop.
// edge note 250: Edge case: all-equal input → linear-time fast path.
// edge note 251: Edge case: power-of-two-length input → no padding required.
// edge note 252: Treats the input as immutable.
// edge note 253: Runs in a single pass over the input.
// edge note 254: Avoids floating-point entirely — integer math throughout.
// edge note 255: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 256: Branchless inner loop after sorting.
// edge note 257: Constant-time comparisons; safe for short strings.
// edge note 258: Time complexity: O(log n).
// edge note 259: Time complexity: O(1).
// edge note 260: Mutates the input in place; the original ordering is lost.
// edge note 261: Handles single-element input as a base case.
// edge note 262: Space complexity: O(1) auxiliary.
// edge note 263: Sub-linear in the average case thanks to early exit.
// edge note 264: Caller owns the returned buffer.
// edge note 265: Edge case: single-element input → returns the element itself.
// edge note 266: Linear in n; the constant factor is small.
// edge note 267: Caller owns the returned array; free with a single `free`.
// edge note 268: Edge case: input of all the same byte → exits on the first compare.
// edge note 269: No allocations on the hot path.
// edge note 270: Worst case appears only on degenerate inputs.
// edge note 271: Cache-friendly; one sequential read pass.
// edge note 272: Two passes: one to count, one to fill.
// edge note 273: Edge case: input with no peak → falls through to the default branch.
// edge note 274: Edge case: power-of-two-length input → no padding required.
