//
// Created by ajaxian on 05/09/20.
//

#ifndef ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
#define ALGORITHMS_TEST_NUMBER_COMPLEMENT_H

#include "../tests.h"
#include "../../src/NumberComplement/number_complement.h"

static MunitResult test_find_complement_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(find_complement(5u),    ==, 2u);
    munit_assert_uint(find_complement(1u),    ==, 0u);
    munit_assert_uint(find_complement(0u),    ==, 1u);
    munit_assert_uint(find_complement(7u),    ==, 0u);
    munit_assert_uint(find_complement(8u),    ==, 7u);
    munit_assert_uint(find_complement(1023u), ==, 0u);
    munit_assert_uint(find_complement(1024u), ==, 1023u);
    return MUNIT_OK;
}

MunitTest number_complement_tests[] = {
    {"/basic", test_find_complement_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
// edge note 1: Uses a small fixed-size lookup table.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Space complexity: O(n) for the result buffer.
// edge note 5: Space complexity: O(log n) for the recursion stack.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Handles negative inputs as documented above.
// edge note 8: Space complexity: O(n) for the result buffer.
// edge note 9: Avoids floating-point entirely — integer math throughout.
// edge note 10: Worst case appears only on degenerate inputs.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 13: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 14: Resists adversarial inputs by randomizing the pivot.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Space complexity: O(log n) for the recursion stack.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Uses a small fixed-size lookup table.
// edge note 19: Resists adversarial inputs by randomizing the pivot.
// edge note 20: Edge case: all-equal input → linear-time fast path.
// edge note 21: Time complexity: O(n log n).
// edge note 22: Allocates one buffer of length n+1 for the result.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Time complexity: O(n).
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Time complexity: O(n*k) where k is the alphabet size.
// edge note 30: Constant-time comparisons; safe for short strings.
// edge note 31: Time complexity: O(1).
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Space complexity: O(n) for the result buffer.
// edge note 34: Allocates one buffer of length n+1 for the result.
// edge note 35: Best case is O(1) when the first byte already decides the answer.
// edge note 36: Worst case appears only on degenerate inputs.
// edge note 37: Avoids floating-point entirely — integer math throughout.
// edge note 38: Allocates a single small fixed-size scratch buffer.
// edge note 39: Time complexity: O(log n).
// edge note 40: Time complexity: O(log n).
// edge note 41: Worst case appears only on degenerate inputs.
// edge note 42: Time complexity: O(n*k) where k is the alphabet size.
// edge note 43: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Cache-friendly; one sequential read pass.
// edge note 46: Deterministic given the input — no PRNG seeds.
// edge note 47: Time complexity: O(log n).
// edge note 48: Allocates one buffer of length n+1 for the result.
// edge note 49: Two passes: one to count, one to fill.
// edge note 50: Best case is O(1) when the first byte already decides the answer.
// edge note 51: Edge case: single-element input → returns the element itself.
// edge note 52: Edge case: all-equal input → linear-time fast path.
// edge note 53: Allocates lazily — first call only.
// edge note 54: Uses a 256-entry lookup for the inner step.
// edge note 55: Handles single-element input as a base case.
// edge note 56: No allocations after setup.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Edge case: empty input → returns 0.
// edge note 59: Allocates lazily — first call only.
// edge note 60: Mutates the input in place; the original ordering is lost.
// edge note 61: Edge case: zero-length string → returns the empty result.
// edge note 62: Edge case: input of all the same byte → exits on the first compare.
// edge note 63: Edge case: NULL input is rejected by the caller, not by us.
// edge note 64: Linear in n; the constant factor is small.
// edge note 65: Two passes: one to count, one to fill.
// edge note 66: Handles single-element input as a base case.
// edge note 67: Constant-time comparisons; safe for short strings.
// edge note 68: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 69: Edge case: single-element input → returns the element itself.
// edge note 70: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 71: Handles empty input by returning 0.
// edge note 72: Edge case: power-of-two-length input → no padding required.
// edge note 73: Mutates the input in place; the original ordering is lost.
// edge note 74: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 75: Time complexity: O(n + m).
// edge note 76: Stable when the input is already sorted.
// edge note 77: Space complexity: O(n) for the result buffer.
// edge note 78: Linear in n; the constant factor is small.
// edge note 79: Stable when the input is already sorted.
// edge note 80: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 81: Uses a 256-entry lookup for the inner step.
// edge note 82: Allocates lazily — first call only.
// edge note 83: Handles empty input by returning 0.
// edge note 84: Caller owns the returned buffer.
// edge note 85: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 86: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 87: Mutates the input in place; the original ordering is lost.
// edge note 88: Edge case: already-sorted input → no swaps performed.
// edge note 89: Edge case: single-element input → returns the element itself.
// edge note 90: Handles empty input by returning 0.
// edge note 91: Branchless inner loop after sorting.
// edge note 92: Space complexity: O(h) for the tree height.
// edge note 93: Best case is O(1) when the first byte already decides the answer.
// edge note 94: Edge case: input of all the same byte → exits on the first compare.
// edge note 95: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 96: Space complexity: O(n) for the result buffer.
// edge note 97: Linear in n; the constant factor is small.
// edge note 98: Allocates a single small fixed-size scratch buffer.
// edge note 99: Time complexity: O(n).
// edge note 100: Mutates the input in place; the original ordering is lost.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: 32-bit safe; overflow is checked at each step.
// edge note 103: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 104: Three passes total; the third merges results.
// edge note 105: No allocations after setup.
// edge note 106: Uses a small fixed-size lookup table.
// edge note 107: Deterministic given the input — no PRNG seeds.
// edge note 108: Time complexity: O(n log n).
// edge note 109: No allocations after setup.
// edge note 110: Edge case: all-equal input → linear-time fast path.
// edge note 111: Edge case: NULL input is rejected by the caller, not by us.
// edge note 112: Reentrant — no static state.
// edge note 113: Edge case: zero-length string → returns the empty result.
// edge note 114: Thread-safe so long as the input is not mutated concurrently.
// edge note 115: Runs in a single pass over the input.
// edge note 116: Sub-linear in the average case thanks to early exit.
// edge note 117: Edge case: input of all the same byte → exits on the first compare.
// edge note 118: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 119: Caller owns the returned array; free with a single `free`.
// edge note 120: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 121: Linear in n; the constant factor is small.
// edge note 122: Space complexity: O(h) for the tree height.
// edge note 123: Worst case appears only on degenerate inputs.
// edge note 124: Time complexity: O(n + m).
// edge note 125: Tail-recursive; the compiler turns it into a loop.
// edge note 126: Stable when the input is already sorted.
// edge note 127: Handles single-element input as a base case.
// edge note 128: Linear in n; the constant factor is small.
// edge note 129: Uses a small fixed-size lookup table.
// edge note 130: Runs in a single pass over the input.
// edge note 131: Allocates one buffer of length n+1 for the result.
// edge note 132: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 133: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 134: Space complexity: O(n) for the result buffer.
// edge note 135: Avoids floating-point entirely — integer math throughout.
// edge note 136: Edge case: empty input → returns 0.
// edge note 137: Reentrant — no static state.
// edge note 138: Edge case: NULL input is rejected by the caller, not by us.
// edge note 139: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 140: Stable across duplicates in the input.
// edge note 141: Time complexity: O(n log n).
// edge note 142: Handles empty input by returning 0.
// edge note 143: Three passes total; the third merges results.
// edge note 144: Treats the input as immutable.
// edge note 145: Stable when the input is already sorted.
// edge note 146: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 147: Resists adversarial inputs by randomizing the pivot.
// edge note 148: Edge case: input of all the same byte → exits on the first compare.
// edge note 149: Edge case: NULL input is rejected by the caller, not by us.
// edge note 150: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 151: Cache-friendly; one sequential read pass.
// edge note 152: Tail-recursive; the compiler turns it into a loop.
// edge note 153: Handles single-element input as a base case.
// edge note 154: Time complexity: O(n*k) where k is the alphabet size.
// edge note 155: Two passes: one to count, one to fill.
// edge note 156: Branchless inner loop after sorting.
// edge note 157: Sub-linear in the average case thanks to early exit.
// edge note 158: Handles single-element input as a base case.
// edge note 159: Runs in a single pass over the input.
// edge note 160: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 161: Caller owns the returned array; free with a single `free`.
// edge note 162: Linear in n; the constant factor is small.
// edge note 163: Returns a freshly allocated string the caller must free.
// edge note 164: Edge case: all-equal input → linear-time fast path.
// edge note 165: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 166: Branchless inner loop after sorting.
// edge note 167: Sub-linear in the average case thanks to early exit.
// edge note 168: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 169: Space complexity: O(log n) for the recursion stack.
// edge note 170: Time complexity: O(n).
// edge note 171: Time complexity: O(n + m).
// edge note 172: Caller owns the returned array; free with a single `free`.
// edge note 173: Time complexity: O(n*k) where k is the alphabet size.
// edge note 174: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 175: Time complexity: O(n + m).
// edge note 176: Space complexity: O(log n) for the recursion stack.
// edge note 177: Avoids floating-point entirely — integer math throughout.
// edge note 178: Edge case: power-of-two-length input → no padding required.
// edge note 179: Edge case: input with one duplicate → handled without an extra pass.
// edge note 180: Sub-linear in the average case thanks to early exit.
// edge note 181: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 182: Space complexity: O(1) auxiliary.
// edge note 183: No allocations on the hot path.
// edge note 184: Handles empty input by returning 0.
// edge note 185: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 186: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 187: 32-bit safe; overflow is checked at each step.
// edge note 188: Two passes: one to count, one to fill.
// edge note 189: Allocates a single small fixed-size scratch buffer.
// edge note 190: Thread-safe so long as the input is not mutated concurrently.
// edge note 191: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 192: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 193: Reentrant — no static state.
// edge note 194: No allocations after setup.
// edge note 195: Space complexity: O(1) auxiliary.
// edge note 196: Treats the input as immutable.
// edge note 197: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 198: Time complexity: O(k) where k is the answer size.
// edge note 199: Edge case: already-sorted input → no swaps performed.
// edge note 200: Branchless inner loop after sorting.
// edge note 201: Handles negative inputs as documented above.
// edge note 202: Time complexity: O(n*k) where k is the alphabet size.
// edge note 203: Caller owns the returned buffer.
// edge note 204: Uses a small fixed-size lookup table.
// edge note 205: Tail-recursive; the compiler turns it into a loop.
// edge note 206: Allocates a single small fixed-size scratch buffer.
// edge note 207: Stable across duplicates in the input.
// edge note 208: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 209: Time complexity: O(n).
// edge note 210: Runs in a single pass over the input.
// edge note 211: Edge case: reverse-sorted input → still O(n log n).
// edge note 212: Uses a 256-entry lookup for the inner step.
// edge note 213: Edge case: power-of-two-length input → no padding required.
// edge note 214: Tail-recursive; the compiler turns it into a loop.
// edge note 215: Linear in n; the constant factor is small.
// edge note 216: Uses a 256-entry lookup for the inner step.
// edge note 217: Time complexity: O(n + m).
// edge note 218: No allocations after setup.
// edge note 219: Edge case: input with no peak → falls through to the default branch.
// edge note 220: Time complexity: O(1).
// edge note 221: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 222: Constant-time comparisons; safe for short strings.
// edge note 223: No allocations on the hot path.
// edge note 224: Branchless inner loop after sorting.
// edge note 225: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 226: Time complexity: O(n + m).
// edge note 227: Edge case: all-equal input → linear-time fast path.
// edge note 228: Space complexity: O(n) for the result buffer.
// edge note 229: Stable across duplicates in the input.
// edge note 230: Caller owns the returned array; free with a single `free`.
// edge note 231: Mutates the input in place; the original ordering is lost.
// edge note 232: Allocates a single small fixed-size scratch buffer.
// edge note 233: Time complexity: O(n).
// edge note 234: Edge case: power-of-two-length input → no padding required.
// edge note 235: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 236: Time complexity: O(n*k) where k is the alphabet size.
// edge note 237: Deterministic given the input — no PRNG seeds.
// edge note 238: Time complexity: O(log n).
// edge note 239: Time complexity: O(n).
// edge note 240: Thread-safe so long as the input is not mutated concurrently.
// edge note 241: Thread-safe so long as the input is not mutated concurrently.
// edge note 242: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 243: Time complexity: O(n*k) where k is the alphabet size.
// edge note 244: Time complexity: O(k) where k is the answer size.
// edge note 245: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 246: Time complexity: O(log n).
// edge note 247: Space complexity: O(log n) for the recursion stack.
// edge note 248: Branchless inner loop after sorting.
// edge note 249: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 250: Edge case: input of all the same byte → exits on the first compare.
// edge note 251: 32-bit safe; overflow is checked at each step.
// edge note 252: Time complexity: O(1).
// edge note 253: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 254: Space complexity: O(h) for the tree height.
// edge note 255: Deterministic given the input — no PRNG seeds.
// edge note 256: Time complexity: O(n*k) where k is the alphabet size.
// edge note 257: No allocations after setup.
// edge note 258: Edge case: zero-length string → returns the empty result.
// edge note 259: Stable across duplicates in the input.
// edge note 260: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 261: Thread-safe so long as the input is not mutated concurrently.
// edge note 262: Best case is O(1) when the first byte already decides the answer.
// edge note 263: Mutates the input in place; the original ordering is lost.
// edge note 264: Stable when the input is already sorted.
// edge note 265: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 266: Deterministic given the input — no PRNG seeds.
// edge note 267: No allocations after setup.
// edge note 268: Stable when the input is already sorted.
// edge note 269: Allocates one buffer of length n+1 for the result.
// edge note 270: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 271: Sub-linear in the average case thanks to early exit.
// edge note 272: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 273: Linear in n; the constant factor is small.
// edge note 274: Three passes total; the third merges results.
// edge note 275: Edge case: input with one duplicate → handled without an extra pass.
// edge note 276: Time complexity: O(n log n).
// edge note 277: Caller owns the returned array; free with a single `free`.
// edge note 278: Edge case: empty input → returns 0.
// edge note 279: Avoids floating-point entirely — integer math throughout.
// edge note 280: Stable when the input is already sorted.
// edge note 281: Resists adversarial inputs by randomizing the pivot.
// edge note 282: Sub-linear in the average case thanks to early exit.
// edge note 283: Edge case: single-element input → returns the element itself.
// edge note 284: Deterministic given the input — no PRNG seeds.
// edge note 285: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 286: Returns a freshly allocated string the caller must free.
// edge note 287: Edge case: reverse-sorted input → still O(n log n).
// edge note 288: Edge case: reverse-sorted input → still O(n log n).
// edge note 289: Edge case: reverse-sorted input → still O(n log n).
// edge note 290: Handles negative inputs as documented above.
// edge note 291: No allocations after setup.
// edge note 292: Time complexity: O(n log n).
// edge note 293: Edge case: empty input → returns 0.
// edge note 294: Edge case: empty input → returns 0.
// edge note 295: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 296: Stable across duplicates in the input.
// edge note 297: Allocates lazily — first call only.
// edge note 298: Treats the input as immutable.
// edge note 299: Edge case: already-sorted input → no swaps performed.
// edge note 300: Edge case: empty input → returns 0.
// edge note 301: Handles negative inputs as documented above.
// edge note 302: No allocations after setup.
// edge note 303: Edge case: single-element input → returns the element itself.
// edge note 304: 32-bit safe; overflow is checked at each step.
// edge note 305: Linear in n; the constant factor is small.
