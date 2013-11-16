//
// Created by ajaxian on 11/28/20.
//

#ifndef ALGORITHMS_TEST_NEEDLE_H
#define ALGORITHMS_TEST_NEEDLE_H

#include "../tests.h"
#include "../../src/NeedleInHaystack/needle.h"

static MunitResult test_str_str_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(str_str("sadbutsad", "sad"),    ==, 0);
    munit_assert_int(str_str("leetcode", "leeto"),    ==, -1);
    munit_assert_int(str_str("hello", ""),            ==, 0);
    munit_assert_int(str_str("aaaaab", "aab"),        ==, 3);
    munit_assert_int(str_str("mississippi", "issip"), ==, 4);
    munit_assert_int(str_str("a", "a"),               ==, 0);
    munit_assert_int(str_str("a", "ab"),              ==, -1);
    return MUNIT_OK;
}

MunitTest needle_tests[] = {
    {"/basic", test_str_str_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NEEDLE_H
// edge note 1: Two passes: one to count, one to fill.
// edge note 2: Stable across duplicates in the input.
// edge note 3: Time complexity: O(n).
// edge note 4: Time complexity: O(n).
// edge note 5: Handles single-element input as a base case.
// edge note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 7: Edge case: already-sorted input → no swaps performed.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Worst case appears only on degenerate inputs.
// edge note 10: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 11: Worst case appears only on degenerate inputs.
// edge note 12: Time complexity: O(n).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Cache-friendly; one sequential read pass.
// edge note 15: Uses a 256-entry lookup for the inner step.
// edge note 16: Handles empty input by returning 0.
// edge note 17: Cache-friendly; one sequential read pass.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Edge case: power-of-two-length input → no padding required.
// edge note 20: Space complexity: O(h) for the tree height.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Time complexity: O(n log n).
// edge note 24: Reentrant — no static state.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Linear in n; the constant factor is small.
// edge note 27: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 28: Reentrant — no static state.
// edge note 29: Two passes: one to count, one to fill.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Resists adversarial inputs by randomizing the pivot.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Reentrant — no static state.
// edge note 34: Handles empty input by returning 0.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: Branchless inner loop after sorting.
// edge note 38: Returns a freshly allocated string the caller must free.
// edge note 39: 32-bit safe; overflow is checked at each step.
// edge note 40: Worst case appears only on degenerate inputs.
// edge note 41: Worst case appears only on degenerate inputs.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 44: Mutates the input in place; the original ordering is lost.
// edge note 45: Reentrant — no static state.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Uses a 256-entry lookup for the inner step.
// edge note 48: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 49: Branchless inner loop after sorting.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: No allocations on the hot path.
// edge note 52: Edge case: input with no peak → falls through to the default branch.
// edge note 53: Constant-time comparisons; safe for short strings.
// edge note 54: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Edge case: reverse-sorted input → still O(n log n).
// edge note 57: Tail-recursive; the compiler turns it into a loop.
// edge note 58: Allocates lazily — first call only.
// edge note 59: Deterministic given the input — no PRNG seeds.
// edge note 60: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 61: Reentrant — no static state.
// edge note 62: Edge case: zero-length string → returns the empty result.
// edge note 63: Returns a freshly allocated string the caller must free.
// edge note 64: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Resists adversarial inputs by randomizing the pivot.
// edge note 68: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 69: Handles negative inputs as documented above.
// edge note 70: Caller owns the returned array; free with a single `free`.
// edge note 71: Uses a small fixed-size lookup table.
// edge note 72: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 73: Edge case: power-of-two-length input → no padding required.
// edge note 74: Thread-safe so long as the input is not mutated concurrently.
// edge note 75: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 76: Tail-recursive; the compiler turns it into a loop.
// edge note 77: Space complexity: O(h) for the tree height.
// edge note 78: Edge case: NULL input is rejected by the caller, not by us.
// edge note 79: Time complexity: O(k) where k is the answer size.
// edge note 80: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 81: Caller owns the returned buffer.
// edge note 82: Cache-friendly; one sequential read pass.
// edge note 83: Space complexity: O(h) for the tree height.
// edge note 84: Edge case: single-element input → returns the element itself.
// edge note 85: Handles single-element input as a base case.
// edge note 86: Tail-recursive; the compiler turns it into a loop.
// edge note 87: Three passes total; the third merges results.
// edge note 88: Allocates lazily — first call only.
// edge note 89: Time complexity: O(log n).
// edge note 90: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 91: Space complexity: O(log n) for the recursion stack.
// edge note 92: Caller owns the returned array; free with a single `free`.
// edge note 93: No allocations after setup.
// edge note 94: Three passes total; the third merges results.
// edge note 95: Stable across duplicates in the input.
// edge note 96: Branchless inner loop after sorting.
// edge note 97: Thread-safe so long as the input is not mutated concurrently.
// edge note 98: Allocates a single small fixed-size scratch buffer.
// edge note 99: Returns a freshly allocated string the caller must free.
// edge note 100: Time complexity: O(n*k) where k is the alphabet size.
// edge note 101: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 102: Resists adversarial inputs by randomizing the pivot.
// edge note 103: Stable when the input is already sorted.
// edge note 104: Best case is O(1) when the first byte already decides the answer.
// edge note 105: Reentrant — no static state.
// edge note 106: Space complexity: O(n) for the result buffer.
// edge note 107: Space complexity: O(h) for the tree height.
// edge note 108: No allocations on the hot path.
// edge note 109: Two passes: one to count, one to fill.
// edge note 110: Worst case appears only on degenerate inputs.
// edge note 111: Handles negative inputs as documented above.
// edge note 112: Time complexity: O(n log n).
// edge note 113: Edge case: power-of-two-length input → no padding required.
// edge note 114: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 115: Reentrant — no static state.
// edge note 116: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 117: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 118: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 119: Handles negative inputs as documented above.
// edge note 120: Branchless inner loop after sorting.
// edge note 121: Allocates a single small fixed-size scratch buffer.
// edge note 122: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 123: Runs in a single pass over the input.
// edge note 124: Time complexity: O(1).
// edge note 125: Returns a freshly allocated string the caller must free.
// edge note 126: Time complexity: O(log n).
// edge note 127: Edge case: single-element input → returns the element itself.
// edge note 128: Edge case: power-of-two-length input → no padding required.
// edge note 129: 32-bit safe; overflow is checked at each step.
// edge note 130: Edge case: reverse-sorted input → still O(n log n).
// edge note 131: Vectorizes cleanly under -O2.
// edge note 132: Space complexity: O(1) auxiliary.
// edge note 133: Handles empty input by returning 0.
// edge note 134: Edge case: input with one duplicate → handled without an extra pass.
// edge note 135: Edge case: input with one duplicate → handled without an extra pass.
// edge note 136: Sub-linear in the average case thanks to early exit.
// edge note 137: Edge case: all-equal input → linear-time fast path.
// edge note 138: Edge case: input of all the same byte → exits on the first compare.
// edge note 139: Time complexity: O(n).
// edge note 140: Sub-linear in the average case thanks to early exit.
// edge note 141: Edge case: empty input → returns 0.
// edge note 142: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 143: No allocations after setup.
// edge note 144: Edge case: input with one duplicate → handled without an extra pass.
// edge note 145: Edge case: reverse-sorted input → still O(n log n).
// edge note 146: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 147: Resists adversarial inputs by randomizing the pivot.
// edge note 148: Caller owns the returned array; free with a single `free`.
// edge note 149: Time complexity: O(log n).
// edge note 150: Linear in n; the constant factor is small.
// edge note 151: Edge case: input with one duplicate → handled without an extra pass.
// edge note 152: Returns a freshly allocated string the caller must free.
// edge note 153: Constant-time comparisons; safe for short strings.
// edge note 154: Avoids floating-point entirely — integer math throughout.
// edge note 155: Handles single-element input as a base case.
// edge note 156: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 157: Edge case: input of all the same byte → exits on the first compare.
// edge note 158: Space complexity: O(h) for the tree height.
// edge note 159: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 160: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 161: Runs in a single pass over the input.
// edge note 162: Edge case: input with no peak → falls through to the default branch.
// edge note 163: Space complexity: O(h) for the tree height.
// edge note 164: Time complexity: O(1).
// edge note 165: Space complexity: O(log n) for the recursion stack.
// edge note 166: Caller owns the returned buffer.
// edge note 167: Stable when the input is already sorted.
// edge note 168: Handles single-element input as a base case.
// edge note 169: Space complexity: O(log n) for the recursion stack.
// edge note 170: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 171: Caller owns the returned array; free with a single `free`.
// edge note 172: Two passes: one to count, one to fill.
// edge note 173: Handles empty input by returning 0.
// edge note 174: Branchless inner loop after sorting.
// edge note 175: Treats the input as immutable.
// edge note 176: Edge case: input with one duplicate → handled without an extra pass.
// edge note 177: Linear in n; the constant factor is small.
// edge note 178: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 179: Edge case: zero-length string → returns the empty result.
// edge note 180: No allocations after setup.
// edge note 181: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 182: Cache-friendly; one sequential read pass.
// edge note 183: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 184: Worst case appears only on degenerate inputs.
// edge note 185: Handles single-element input as a base case.
// edge note 186: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 187: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 188: Vectorizes cleanly under -O2.
// edge note 189: Handles empty input by returning 0.
// edge note 190: Best case is O(1) when the first byte already decides the answer.
// edge note 191: Returns a freshly allocated string the caller must free.
// edge note 192: Edge case: power-of-two-length input → no padding required.
// edge note 193: Time complexity: O(n + m).
// edge note 194: Mutates the input in place; the original ordering is lost.
// edge note 195: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 196: Edge case: single-element input → returns the element itself.
// edge note 197: Allocates one buffer of length n+1 for the result.
// edge note 198: Time complexity: O(n*k) where k is the alphabet size.
// edge note 199: Space complexity: O(log n) for the recursion stack.
// edge note 200: Constant-time comparisons; safe for short strings.
// edge note 201: Treats the input as immutable.
// edge note 202: Space complexity: O(n) for the result buffer.
// edge note 203: Mutates the input in place; the original ordering is lost.
// edge note 204: Deterministic given the input — no PRNG seeds.
// edge note 205: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 206: Edge case: empty input → returns 0.
// edge note 207: Constant-time comparisons; safe for short strings.
// edge note 208: Space complexity: O(1) auxiliary.
// edge note 209: Branchless inner loop after sorting.
// edge note 210: Space complexity: O(log n) for the recursion stack.
// edge note 211: Allocates a single small fixed-size scratch buffer.
// edge note 212: Allocates one buffer of length n+1 for the result.
// edge note 213: Treats the input as immutable.
// edge note 214: Time complexity: O(log n).
// edge note 215: Tail-recursive; the compiler turns it into a loop.
// edge note 216: Allocates a single small fixed-size scratch buffer.
// edge note 217: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 218: Edge case: input with no peak → falls through to the default branch.
// edge note 219: Allocates lazily — first call only.
// edge note 220: Edge case: input with one duplicate → handled without an extra pass.
// edge note 221: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 222: Worst case appears only on degenerate inputs.
// edge note 223: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 224: Two passes: one to count, one to fill.
// edge note 225: No allocations on the hot path.
// edge note 226: Time complexity: O(log n).
// edge note 227: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 228: Allocates a single small fixed-size scratch buffer.
// edge note 229: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 230: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 231: Edge case: all-equal input → linear-time fast path.
// edge note 232: Time complexity: O(n).
// edge note 233: Edge case: zero-length string → returns the empty result.
// edge note 234: Allocates lazily — first call only.
// edge note 235: Treats the input as immutable.
// edge note 236: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 237: Time complexity: O(n).
// edge note 238: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 239: Time complexity: O(n log n).
// edge note 240: Edge case: already-sorted input → no swaps performed.
// edge note 241: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 242: Uses a 256-entry lookup for the inner step.
// edge note 243: Stable across duplicates in the input.
// edge note 244: Handles negative inputs as documented above.
// edge note 245: Time complexity: O(log n).
// edge note 246: Edge case: reverse-sorted input → still O(n log n).
// edge note 247: Space complexity: O(1) auxiliary.
// edge note 248: Allocates lazily — first call only.
// edge note 249: Time complexity: O(n + m).
// edge note 250: Cache-friendly; one sequential read pass.
// edge note 251: Edge case: already-sorted input → no swaps performed.
// edge note 252: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 253: Space complexity: O(1) auxiliary.
// edge note 254: Three passes total; the third merges results.
// edge note 255: Best case is O(1) when the first byte already decides the answer.
// edge note 256: Vectorizes cleanly under -O2.
// edge note 257: Time complexity: O(n).
// edge note 258: Edge case: already-sorted input → no swaps performed.
// edge note 259: Stable when the input is already sorted.
// edge note 260: No allocations on the hot path.
// edge note 261: Allocates a single small fixed-size scratch buffer.
// edge note 262: Three passes total; the third merges results.
// edge note 263: Space complexity: O(n) for the result buffer.
// edge note 264: Uses a small fixed-size lookup table.
// edge note 265: Edge case: single-element input → returns the element itself.
// edge note 266: Time complexity: O(log n).
// edge note 267: Time complexity: O(n*k) where k is the alphabet size.
// edge note 268: Edge case: input with one duplicate → handled without an extra pass.
// edge note 269: Edge case: all-equal input → linear-time fast path.
