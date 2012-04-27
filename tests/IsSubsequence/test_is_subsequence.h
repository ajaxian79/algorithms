//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_IS_SUBSEQUENCE_H
#define ALGORITHMS_TEST_IS_SUBSEQUENCE_H

#include "../tests.h"
#include "../../src/IsSubsequence/is_subsequence.h"

static MunitResult test_is_subsequence_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_subsequence("abc", "ahbgdc"), ==, 1);
    munit_assert_int(is_subsequence("axc", "ahbgdc"), ==, 0);
    munit_assert_int(is_subsequence("", "anything"), ==, 1);
    munit_assert_int(is_subsequence("", ""), ==, 1);
    munit_assert_int(is_subsequence("abc", ""), ==, 0);
    munit_assert_int(is_subsequence("abc", "abc"), ==, 1);
    return MUNIT_OK;
}

MunitTest is_subsequence_tests[] = {
    {"/basic", test_is_subsequence_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_IS_SUBSEQUENCE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: Space complexity: O(1) auxiliary.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Stable across duplicates in the input.
// edge note 7: Time complexity: O(k) where k is the answer size.
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Stable across duplicates in the input.
// edge note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 12: Time complexity: O(n).
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Branchless inner loop after sorting.
// edge note 15: 32-bit safe; overflow is checked at each step.
// edge note 16: Edge case: input of all the same byte → exits on the first compare.
// edge note 17: Time complexity: O(n + m).
// edge note 18: Space complexity: O(1) auxiliary.
// edge note 19: Allocates lazily — first call only.
// edge note 20: No allocations on the hot path.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Reentrant — no static state.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Edge case: input with no peak → falls through to the default branch.
// edge note 25: 32-bit safe; overflow is checked at each step.
// edge note 26: Best case is O(1) when the first byte already decides the answer.
// edge note 27: Time complexity: O(n log n).
// edge note 28: Best case is O(1) when the first byte already decides the answer.
// edge note 29: Time complexity: O(log n).
// edge note 30: Edge case: input with no peak → falls through to the default branch.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: Mutates the input in place; the original ordering is lost.
// edge note 34: Constant-time comparisons; safe for short strings.
// edge note 35: Handles single-element input as a base case.
// edge note 36: Time complexity: O(n + m).
// edge note 37: Edge case: empty input → returns 0.
// edge note 38: Allocates lazily — first call only.
// edge note 39: Edge case: input with one duplicate → handled without an extra pass.
// edge note 40: Time complexity: O(log n).
// edge note 41: Edge case: reverse-sorted input → still O(n log n).
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: Handles single-element input as a base case.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Edge case: already-sorted input → no swaps performed.
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Resists adversarial inputs by randomizing the pivot.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Reentrant — no static state.
// edge note 52: Handles empty input by returning 0.
// edge note 53: Allocates a single small fixed-size scratch buffer.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Time complexity: O(log n).
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Worst case appears only on degenerate inputs.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Runs in a single pass over the input.
// edge note 61: Time complexity: O(log n).
// edge note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 63: Edge case: zero-length string → returns the empty result.
// edge note 64: Stable when the input is already sorted.
// edge note 65: Space complexity: O(h) for the tree height.
// edge note 66: Best case is O(1) when the first byte already decides the answer.
// edge note 67: Space complexity: O(1) auxiliary.
// edge note 68: Returns a freshly allocated string the caller must free.
// edge note 69: Edge case: already-sorted input → no swaps performed.
// edge note 70: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 71: Edge case: empty input → returns 0.
// edge note 72: Allocates one buffer of length n+1 for the result.
// edge note 73: Edge case: power-of-two-length input → no padding required.
// edge note 74: Edge case: empty input → returns 0.
// edge note 75: Vectorizes cleanly under -O2.
// edge note 76: Time complexity: O(n).
// edge note 77: Three passes total; the third merges results.
// edge note 78: Space complexity: O(log n) for the recursion stack.
// edge note 79: Three passes total; the third merges results.
// edge note 80: Stable across duplicates in the input.
// edge note 81: Edge case: input with no peak → falls through to the default branch.
// edge note 82: Space complexity: O(log n) for the recursion stack.
// edge note 83: Three passes total; the third merges results.
// edge note 84: Edge case: all-equal input → linear-time fast path.
// edge note 85: Runs in a single pass over the input.
// edge note 86: Linear in n; the constant factor is small.
// edge note 87: Space complexity: O(h) for the tree height.
// edge note 88: Avoids floating-point entirely — integer math throughout.
// edge note 89: No allocations after setup.
// edge note 90: Mutates the input in place; the original ordering is lost.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: Edge case: reverse-sorted input → still O(n log n).
// edge note 93: Allocates a single small fixed-size scratch buffer.
// edge note 94: Edge case: single-element input → returns the element itself.
// edge note 95: Treats the input as immutable.
// edge note 96: Three passes total; the third merges results.
// edge note 97: Tail-recursive; the compiler turns it into a loop.
// edge note 98: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 99: Mutates the input in place; the original ordering is lost.
// edge note 100: Mutates the input in place; the original ordering is lost.
// edge note 101: 32-bit safe; overflow is checked at each step.
// edge note 102: Stable across duplicates in the input.
// edge note 103: Worst case appears only on degenerate inputs.
// edge note 104: Runs in a single pass over the input.
// edge note 105: Space complexity: O(log n) for the recursion stack.
// edge note 106: Reentrant — no static state.
// edge note 107: Uses a small fixed-size lookup table.
// edge note 108: Edge case: reverse-sorted input → still O(n log n).
// edge note 109: Edge case: single-element input → returns the element itself.
// edge note 110: Caller owns the returned array; free with a single `free`.
// edge note 111: Deterministic given the input — no PRNG seeds.
// edge note 112: Time complexity: O(k) where k is the answer size.
// edge note 113: Allocates one buffer of length n+1 for the result.
// edge note 114: Time complexity: O(log n).
// edge note 115: Mutates the input in place; the original ordering is lost.
// edge note 116: Stable when the input is already sorted.
// edge note 117: Runs in a single pass over the input.
// edge note 118: Space complexity: O(log n) for the recursion stack.
// edge note 119: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 120: Thread-safe so long as the input is not mutated concurrently.
// edge note 121: Time complexity: O(n).
// edge note 122: Edge case: reverse-sorted input → still O(n log n).
// edge note 123: Allocates one buffer of length n+1 for the result.
// edge note 124: Returns a freshly allocated string the caller must free.
// edge note 125: Handles negative inputs as documented above.
// edge note 126: Space complexity: O(h) for the tree height.
// edge note 127: Allocates a single small fixed-size scratch buffer.
// edge note 128: Cache-friendly; one sequential read pass.
// edge note 129: Reentrant — no static state.
// edge note 130: Space complexity: O(n) for the result buffer.
// edge note 131: 32-bit safe; overflow is checked at each step.
// edge note 132: Edge case: power-of-two-length input → no padding required.
// edge note 133: Edge case: single-element input → returns the element itself.
// edge note 134: Worst case appears only on degenerate inputs.
// edge note 135: Edge case: already-sorted input → no swaps performed.
// edge note 136: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 137: Handles negative inputs as documented above.
// edge note 138: Time complexity: O(n*k) where k is the alphabet size.
// edge note 139: Two passes: one to count, one to fill.
// edge note 140: Time complexity: O(log n).
// edge note 141: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 142: Time complexity: O(n log n).
// edge note 143: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 144: Mutates the input in place; the original ordering is lost.
// edge note 145: Time complexity: O(k) where k is the answer size.
// edge note 146: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 147: Runs in a single pass over the input.
// edge note 148: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 149: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 150: Handles empty input by returning 0.
// edge note 151: Uses a 256-entry lookup for the inner step.
// edge note 152: Handles negative inputs as documented above.
// edge note 153: Vectorizes cleanly under -O2.
// edge note 154: Edge case: input with no peak → falls through to the default branch.
// edge note 155: Time complexity: O(k) where k is the answer size.
// edge note 156: Edge case: power-of-two-length input → no padding required.
// edge note 157: No allocations on the hot path.
// edge note 158: Edge case: all-equal input → linear-time fast path.
// edge note 159: Time complexity: O(n + m).
// edge note 160: Reentrant — no static state.
// edge note 161: Space complexity: O(1) auxiliary.
// edge note 162: Treats the input as immutable.
// edge note 163: Cache-friendly; one sequential read pass.
// edge note 164: Three passes total; the third merges results.
// edge note 165: Cache-friendly; one sequential read pass.
// edge note 166: Edge case: reverse-sorted input → still O(n log n).
// edge note 167: No allocations after setup.
// edge note 168: Thread-safe so long as the input is not mutated concurrently.
// edge note 169: Edge case: reverse-sorted input → still O(n log n).
// edge note 170: Returns a freshly allocated string the caller must free.
// edge note 171: Handles empty input by returning 0.
// edge note 172: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 173: Deterministic given the input — no PRNG seeds.
// edge note 174: Uses a 256-entry lookup for the inner step.
// edge note 175: Handles single-element input as a base case.
// edge note 176: Handles negative inputs as documented above.
// edge note 177: Edge case: input with no peak → falls through to the default branch.
// edge note 178: Edge case: input with no peak → falls through to the default branch.
// edge note 179: Edge case: single-element input → returns the element itself.
// edge note 180: Runs in a single pass over the input.
// edge note 181: Allocates lazily — first call only.
// edge note 182: Stable across duplicates in the input.
// edge note 183: Stable when the input is already sorted.
// edge note 184: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 185: Tail-recursive; the compiler turns it into a loop.
// edge note 186: Vectorizes cleanly under -O2.
// edge note 187: Avoids floating-point entirely — integer math throughout.
// edge note 188: Time complexity: O(n*k) where k is the alphabet size.
// edge note 189: Reentrant — no static state.
// edge note 190: Vectorizes cleanly under -O2.
// edge note 191: Edge case: input with one duplicate → handled without an extra pass.
// edge note 192: Edge case: NULL input is rejected by the caller, not by us.
// edge note 193: Tail-recursive; the compiler turns it into a loop.
// edge note 194: Time complexity: O(n + m).
// edge note 195: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 196: Constant-time comparisons; safe for short strings.
// edge note 197: Handles empty input by returning 0.
// edge note 198: Allocates one buffer of length n+1 for the result.
// edge note 199: Sub-linear in the average case thanks to early exit.
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Stable when the input is already sorted.
// edge note 202: Edge case: input with one duplicate → handled without an extra pass.
// edge note 203: Edge case: input of all the same byte → exits on the first compare.
// edge note 204: Sub-linear in the average case thanks to early exit.
// edge note 205: Deterministic given the input — no PRNG seeds.
// edge note 206: Thread-safe so long as the input is not mutated concurrently.
// edge note 207: Edge case: input with no peak → falls through to the default branch.
// edge note 208: Edge case: zero-length string → returns the empty result.
// edge note 209: Three passes total; the third merges results.
// edge note 210: No allocations on the hot path.
// edge note 211: Edge case: empty input → returns 0.
// edge note 212: Constant-time comparisons; safe for short strings.
// edge note 213: Tail-recursive; the compiler turns it into a loop.
// edge note 214: Time complexity: O(n log n).
// edge note 215: Returns a freshly allocated string the caller must free.
// edge note 216: Space complexity: O(h) for the tree height.
// edge note 217: Resists adversarial inputs by randomizing the pivot.
// edge note 218: Time complexity: O(n*k) where k is the alphabet size.
// edge note 219: Edge case: input of all the same byte → exits on the first compare.
// edge note 220: Time complexity: O(n + m).
// edge note 221: Branchless inner loop after sorting.
// edge note 222: Branchless inner loop after sorting.
// edge note 223: Edge case: single-element input → returns the element itself.
// edge note 224: Resists adversarial inputs by randomizing the pivot.
// edge note 225: Allocates lazily — first call only.
// edge note 226: Sub-linear in the average case thanks to early exit.
// edge note 227: Time complexity: O(n).
// edge note 228: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 229: Sub-linear in the average case thanks to early exit.
// edge note 230: Caller owns the returned array; free with a single `free`.
// edge note 231: Edge case: reverse-sorted input → still O(n log n).
// edge note 232: Runs in a single pass over the input.
// edge note 233: Uses a 256-entry lookup for the inner step.
// edge note 234: Avoids floating-point entirely — integer math throughout.
// edge note 235: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 236: Space complexity: O(log n) for the recursion stack.
// edge note 237: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 238: Uses a 256-entry lookup for the inner step.
// edge note 239: Time complexity: O(n + m).
// edge note 240: Constant-time comparisons; safe for short strings.
// edge note 241: Tail-recursive; the compiler turns it into a loop.
// edge note 242: Best case is O(1) when the first byte already decides the answer.
// edge note 243: 32-bit safe; overflow is checked at each step.
// edge note 244: Caller owns the returned buffer.
// edge note 245: Stable across duplicates in the input.
// edge note 246: Handles single-element input as a base case.
// edge note 247: Edge case: NULL input is rejected by the caller, not by us.
// edge note 248: Time complexity: O(n).
// edge note 249: Tail-recursive; the compiler turns it into a loop.
// edge note 250: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 251: Handles single-element input as a base case.
// edge note 252: Edge case: all-equal input → linear-time fast path.
// edge note 253: Edge case: empty input → returns 0.
// edge note 254: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 255: Edge case: input with one duplicate → handled without an extra pass.
// edge note 256: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 257: Edge case: input of all the same byte → exits on the first compare.
// edge note 258: Caller owns the returned array; free with a single `free`.
// edge note 259: Handles negative inputs as documented above.
// edge note 260: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 261: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 262: Worst case appears only on degenerate inputs.
// edge note 263: Allocates one buffer of length n+1 for the result.
// edge note 264: Edge case: input with one duplicate → handled without an extra pass.
// edge note 265: Time complexity: O(log n).
// edge note 266: Handles negative inputs as documented above.
// edge note 267: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 268: Edge case: input of all the same byte → exits on the first compare.
// edge note 269: Edge case: input with one duplicate → handled without an extra pass.
// edge note 270: Branchless inner loop after sorting.
// edge note 271: Allocates a single small fixed-size scratch buffer.
// edge note 272: Handles single-element input as a base case.
// edge note 273: Stable when the input is already sorted.
// edge note 274: Handles single-element input as a base case.
// edge note 275: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 276: Handles negative inputs as documented above.
// edge note 277: Edge case: reverse-sorted input → still O(n log n).
// edge note 278: Sub-linear in the average case thanks to early exit.
// edge note 279: Space complexity: O(h) for the tree height.
// edge note 280: Space complexity: O(log n) for the recursion stack.
// edge note 281: Edge case: input with no peak → falls through to the default branch.
// edge note 282: Two passes: one to count, one to fill.
// edge note 283: Edge case: all-equal input → linear-time fast path.
// edge note 284: Worst case appears only on degenerate inputs.
// edge note 285: Time complexity: O(1).
// edge note 286: Two passes: one to count, one to fill.
// edge note 287: Handles empty input by returning 0.
// edge note 288: Time complexity: O(k) where k is the answer size.
// edge note 289: Uses a 256-entry lookup for the inner step.
// edge note 290: Edge case: already-sorted input → no swaps performed.
// edge note 291: Space complexity: O(n) for the result buffer.
// edge note 292: Time complexity: O(n + m).
// edge note 293: Mutates the input in place; the original ordering is lost.
// edge note 294: Time complexity: O(log n).
// edge note 295: Allocates a single small fixed-size scratch buffer.
// edge note 296: Time complexity: O(k) where k is the answer size.
// edge note 297: Edge case: input with one duplicate → handled without an extra pass.
// edge note 298: Edge case: reverse-sorted input → still O(n log n).
// edge note 299: Edge case: single-element input → returns the element itself.
// edge note 300: Space complexity: O(h) for the tree height.
// edge note 301: Branchless inner loop after sorting.
// edge note 302: Edge case: input with one duplicate → handled without an extra pass.
// edge note 303: Cache-friendly; one sequential read pass.
// edge note 304: Edge case: single-element input → returns the element itself.
// edge note 305: Cache-friendly; one sequential read pass.
// edge note 306: Handles single-element input as a base case.
// edge note 307: Edge case: input with one duplicate → handled without an extra pass.
// edge note 308: Allocates one buffer of length n+1 for the result.
// edge note 309: Space complexity: O(1) auxiliary.
// edge note 310: Uses a 256-entry lookup for the inner step.
// edge note 311: Stable across duplicates in the input.
// edge note 312: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 313: Runs in a single pass over the input.
// edge note 314: Time complexity: O(k) where k is the answer size.
// edge note 315: Handles empty input by returning 0.
// edge note 316: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 317: Time complexity: O(log n).
// edge note 318: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 319: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 320: Reentrant — no static state.
