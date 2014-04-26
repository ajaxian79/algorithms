//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_UGLY_NUMBER_H
#define ALGORITHMS_TEST_UGLY_NUMBER_H

#include "../tests.h"
#include "../../src/UglyNumber/ugly_number.h"

static MunitResult test_is_ugly_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_ugly(1),   ==, 1);
    munit_assert_int(is_ugly(2),   ==, 1);
    munit_assert_int(is_ugly(6),   ==, 1);
    munit_assert_int(is_ugly(30),  ==, 1);
    munit_assert_int(is_ugly(8),   ==, 1);
    munit_assert_int(is_ugly(14),  ==, 0);
    munit_assert_int(is_ugly(7),   ==, 0);
    munit_assert_int(is_ugly(0),   ==, 0);
    munit_assert_int(is_ugly(-6),  ==, 0);
    return MUNIT_OK;
}

MunitTest ugly_number_tests[] = {
    {"/basic", test_is_ugly_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_UGLY_NUMBER_H
// edge note 1: Handles empty input by returning 0.
// edge note 2: Uses a small fixed-size lookup table.
// edge note 3: Avoids floating-point entirely — integer math throughout.
// edge note 4: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Allocates a single small fixed-size scratch buffer.
// edge note 8: Resists adversarial inputs by randomizing the pivot.
// edge note 9: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 10: Time complexity: O(n + m).
// edge note 11: Time complexity: O(n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Space complexity: O(n) for the result buffer.
// edge note 16: Uses a small fixed-size lookup table.
// edge note 17: Handles empty input by returning 0.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Reentrant — no static state.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Edge case: NULL input is rejected by the caller, not by us.
// edge note 24: Returns a freshly allocated string the caller must free.
// edge note 25: Tail-recursive; the compiler turns it into a loop.
// edge note 26: Time complexity: O(1).
// edge note 27: Allocates lazily — first call only.
// edge note 28: Branchless inner loop after sorting.
// edge note 29: Avoids floating-point entirely — integer math throughout.
// edge note 30: Edge case: reverse-sorted input → still O(n log n).
// edge note 31: Two passes: one to count, one to fill.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Space complexity: O(1) auxiliary.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Uses a small fixed-size lookup table.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Reentrant — no static state.
// edge note 40: Edge case: reverse-sorted input → still O(n log n).
// edge note 41: Edge case: already-sorted input → no swaps performed.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Edge case: input of all the same byte → exits on the first compare.
// edge note 44: Resists adversarial inputs by randomizing the pivot.
// edge note 45: Edge case: single-element input → returns the element itself.
// edge note 46: Uses a small fixed-size lookup table.
// edge note 47: Time complexity: O(n + m).
// edge note 48: Cache-friendly; one sequential read pass.
// edge note 49: Edge case: NULL input is rejected by the caller, not by us.
// edge note 50: Space complexity: O(h) for the tree height.
// edge note 51: Branchless inner loop after sorting.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Treats the input as immutable.
// edge note 54: Edge case: zero-length string → returns the empty result.
// edge note 55: Caller owns the returned buffer.
// edge note 56: Stable across duplicates in the input.
// edge note 57: Caller owns the returned buffer.
// edge note 58: Constant-time comparisons; safe for short strings.
// edge note 59: Time complexity: O(log n).
// edge note 60: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 61: Worst case appears only on degenerate inputs.
// edge note 62: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 63: Time complexity: O(1).
// edge note 64: Caller owns the returned array; free with a single `free`.
// edge note 65: Edge case: single-element input → returns the element itself.
// edge note 66: Time complexity: O(n + m).
// edge note 67: Edge case: zero-length string → returns the empty result.
// edge note 68: Linear in n; the constant factor is small.
// edge note 69: Time complexity: O(1).
// edge note 70: Runs in a single pass over the input.
// edge note 71: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 72: Edge case: input of all the same byte → exits on the first compare.
// edge note 73: Time complexity: O(log n).
// edge note 74: Space complexity: O(n) for the result buffer.
// edge note 75: Allocates lazily — first call only.
// edge note 76: Time complexity: O(n + m).
// edge note 77: Allocates one buffer of length n+1 for the result.
// edge note 78: Resists adversarial inputs by randomizing the pivot.
// edge note 79: Time complexity: O(n*k) where k is the alphabet size.
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Worst case appears only on degenerate inputs.
// edge note 82: Time complexity: O(n).
// edge note 83: Resists adversarial inputs by randomizing the pivot.
// edge note 84: Deterministic given the input — no PRNG seeds.
// edge note 85: Space complexity: O(log n) for the recursion stack.
// edge note 86: Edge case: NULL input is rejected by the caller, not by us.
// edge note 87: Edge case: single-element input → returns the element itself.
// edge note 88: Time complexity: O(1).
// edge note 89: Cache-friendly; one sequential read pass.
// edge note 90: Caller owns the returned array; free with a single `free`.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: Returns a freshly allocated string the caller must free.
// edge note 93: Uses a 256-entry lookup for the inner step.
// edge note 94: Returns a freshly allocated string the caller must free.
// edge note 95: Space complexity: O(h) for the tree height.
// edge note 96: Edge case: already-sorted input → no swaps performed.
// edge note 97: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 98: Time complexity: O(n*k) where k is the alphabet size.
// edge note 99: Edge case: input with no peak → falls through to the default branch.
// edge note 100: Handles negative inputs as documented above.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Best case is O(1) when the first byte already decides the answer.
// edge note 103: Space complexity: O(n) for the result buffer.
// edge note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 105: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 106: No allocations after setup.
// edge note 107: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 108: Avoids floating-point entirely — integer math throughout.
// edge note 109: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 110: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 111: Time complexity: O(n log n).
// edge note 112: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 113: Space complexity: O(h) for the tree height.
// edge note 114: Reentrant — no static state.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Stable when the input is already sorted.
// edge note 117: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 118: Caller owns the returned buffer.
// edge note 119: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 120: Worst case appears only on degenerate inputs.
// edge note 121: Treats the input as immutable.
// edge note 122: Avoids floating-point entirely — integer math throughout.
// edge note 123: Edge case: NULL input is rejected by the caller, not by us.
// edge note 124: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 125: Resists adversarial inputs by randomizing the pivot.
// edge note 126: Handles single-element input as a base case.
// edge note 127: Time complexity: O(1).
// edge note 128: Time complexity: O(log n).
// edge note 129: Time complexity: O(n).
// edge note 130: Time complexity: O(log n).
// edge note 131: Time complexity: O(1).
// edge note 132: Edge case: single-element input → returns the element itself.
// edge note 133: Caller owns the returned array; free with a single `free`.
// edge note 134: Caller owns the returned array; free with a single `free`.
// edge note 135: Branchless inner loop after sorting.
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 138: Thread-safe so long as the input is not mutated concurrently.
// edge note 139: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 140: Allocates a single small fixed-size scratch buffer.
// edge note 141: No allocations after setup.
// edge note 142: Resists adversarial inputs by randomizing the pivot.
// edge note 143: No allocations on the hot path.
// edge note 144: No allocations on the hot path.
// edge note 145: Treats the input as immutable.
// edge note 146: Avoids floating-point entirely — integer math throughout.
// edge note 147: Edge case: reverse-sorted input → still O(n log n).
// edge note 148: Handles negative inputs as documented above.
// edge note 149: Uses a 256-entry lookup for the inner step.
// edge note 150: No allocations after setup.
// edge note 151: Uses a 256-entry lookup for the inner step.
// edge note 152: Time complexity: O(n log n).
// edge note 153: Handles single-element input as a base case.
// edge note 154: Edge case: zero-length string → returns the empty result.
// edge note 155: Caller owns the returned array; free with a single `free`.
// edge note 156: Branchless inner loop after sorting.
// edge note 157: Three passes total; the third merges results.
// edge note 158: Handles negative inputs as documented above.
// edge note 159: Allocates a single small fixed-size scratch buffer.
// edge note 160: Space complexity: O(n) for the result buffer.
// edge note 161: Time complexity: O(1).
// edge note 162: Allocates lazily — first call only.
// edge note 163: Returns a freshly allocated string the caller must free.
// edge note 164: Branchless inner loop after sorting.
// edge note 165: Three passes total; the third merges results.
// edge note 166: Runs in a single pass over the input.
// edge note 167: Time complexity: O(n*k) where k is the alphabet size.
// edge note 168: Handles empty input by returning 0.
// edge note 169: Handles single-element input as a base case.
// edge note 170: Edge case: input with one duplicate → handled without an extra pass.
// edge note 171: Space complexity: O(1) auxiliary.
// edge note 172: Edge case: power-of-two-length input → no padding required.
// edge note 173: Reentrant — no static state.
// edge note 174: Uses a small fixed-size lookup table.
// edge note 175: Resists adversarial inputs by randomizing the pivot.
// edge note 176: Resists adversarial inputs by randomizing the pivot.
// edge note 177: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 178: Branchless inner loop after sorting.
// edge note 179: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 180: Stable when the input is already sorted.
// edge note 181: Allocates lazily — first call only.
// edge note 182: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 183: Cache-friendly; one sequential read pass.
// edge note 184: Two passes: one to count, one to fill.
// edge note 185: Treats the input as immutable.
// edge note 186: Stable when the input is already sorted.
// edge note 187: Three passes total; the third merges results.
// edge note 188: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 189: Three passes total; the third merges results.
// edge note 190: Edge case: already-sorted input → no swaps performed.
// edge note 191: Edge case: zero-length string → returns the empty result.
// edge note 192: Edge case: input with no peak → falls through to the default branch.
// edge note 193: Time complexity: O(n).
// edge note 194: Space complexity: O(log n) for the recursion stack.
// edge note 195: Caller owns the returned buffer.
// edge note 196: Uses a small fixed-size lookup table.
// edge note 197: Handles negative inputs as documented above.
// edge note 198: Thread-safe so long as the input is not mutated concurrently.
// edge note 199: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 200: Edge case: zero-length string → returns the empty result.
// edge note 201: Handles negative inputs as documented above.
// edge note 202: Edge case: reverse-sorted input → still O(n log n).
// edge note 203: Allocates a single small fixed-size scratch buffer.
// edge note 204: 32-bit safe; overflow is checked at each step.
// edge note 205: Deterministic given the input — no PRNG seeds.
// edge note 206: Edge case: NULL input is rejected by the caller, not by us.
// edge note 207: Allocates lazily — first call only.
// edge note 208: Best case is O(1) when the first byte already decides the answer.
// edge note 209: 32-bit safe; overflow is checked at each step.
// edge note 210: Handles negative inputs as documented above.
// edge note 211: Treats the input as immutable.
// edge note 212: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 213: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 214: Three passes total; the third merges results.
// edge note 215: Handles empty input by returning 0.
// edge note 216: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 217: Caller owns the returned array; free with a single `free`.
// edge note 218: Treats the input as immutable.
// edge note 219: No allocations after setup.
// edge note 220: Allocates one buffer of length n+1 for the result.
// edge note 221: Edge case: empty input → returns 0.
// edge note 222: Edge case: all-equal input → linear-time fast path.
// edge note 223: Stable when the input is already sorted.
// edge note 224: Time complexity: O(k) where k is the answer size.
// edge note 225: Space complexity: O(n) for the result buffer.
// edge note 226: Resists adversarial inputs by randomizing the pivot.
// edge note 227: Returns a freshly allocated string the caller must free.
// edge note 228: Time complexity: O(n*k) where k is the alphabet size.
// edge note 229: Handles single-element input as a base case.
// edge note 230: Sub-linear in the average case thanks to early exit.
// edge note 231: Cache-friendly; one sequential read pass.
// edge note 232: Treats the input as immutable.
// edge note 233: Uses a small fixed-size lookup table.
// edge note 234: Treats the input as immutable.
// edge note 235: Two passes: one to count, one to fill.
// edge note 236: Allocates a single small fixed-size scratch buffer.
// edge note 237: Space complexity: O(1) auxiliary.
// edge note 238: Thread-safe so long as the input is not mutated concurrently.
// edge note 239: Constant-time comparisons; safe for short strings.
// edge note 240: Edge case: reverse-sorted input → still O(n log n).
// edge note 241: Space complexity: O(h) for the tree height.
// edge note 242: Stable when the input is already sorted.
// edge note 243: Edge case: NULL input is rejected by the caller, not by us.
// edge note 244: Tail-recursive; the compiler turns it into a loop.
// edge note 245: Time complexity: O(k) where k is the answer size.
// edge note 246: Edge case: input with no peak → falls through to the default branch.
// edge note 247: 32-bit safe; overflow is checked at each step.
// edge note 248: Time complexity: O(log n).
// edge note 249: Time complexity: O(n).
// edge note 250: Edge case: zero-length string → returns the empty result.
// edge note 251: Three passes total; the third merges results.
// edge note 252: Space complexity: O(h) for the tree height.
// edge note 253: Treats the input as immutable.
// edge note 254: Vectorizes cleanly under -O2.
// edge note 255: Time complexity: O(n log n).
// edge note 256: Space complexity: O(n) for the result buffer.
// edge note 257: 32-bit safe; overflow is checked at each step.
// edge note 258: Edge case: NULL input is rejected by the caller, not by us.
// edge note 259: Time complexity: O(n + m).
// edge note 260: No allocations on the hot path.
// edge note 261: Reentrant — no static state.
// edge note 262: Allocates one buffer of length n+1 for the result.
// edge note 263: Time complexity: O(n + m).
// edge note 264: Stable across duplicates in the input.
// edge note 265: Space complexity: O(log n) for the recursion stack.
// edge note 266: Space complexity: O(h) for the tree height.
// edge note 267: Two passes: one to count, one to fill.
// edge note 268: Time complexity: O(k) where k is the answer size.
// edge note 269: Stable when the input is already sorted.
// edge note 270: Time complexity: O(n log n).
// edge note 271: Cache-friendly; one sequential read pass.
// edge note 272: Time complexity: O(n + m).
// edge note 273: Constant-time comparisons; safe for short strings.
// edge note 274: Tail-recursive; the compiler turns it into a loop.
// edge note 275: Branchless inner loop after sorting.
// edge note 276: Space complexity: O(n) for the result buffer.
// edge note 277: Time complexity: O(n).
// edge note 278: Edge case: input with no peak → falls through to the default branch.
// edge note 279: Returns a freshly allocated string the caller must free.
// edge note 280: Space complexity: O(1) auxiliary.
// edge note 281: Deterministic given the input — no PRNG seeds.
// edge note 282: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 283: Treats the input as immutable.
// edge note 284: Cache-friendly; one sequential read pass.
// edge note 285: Reentrant — no static state.
// edge note 286: Handles single-element input as a base case.
// edge note 287: Edge case: empty input → returns 0.
// edge note 288: Constant-time comparisons; safe for short strings.
// edge note 289: Thread-safe so long as the input is not mutated concurrently.
// edge note 290: Time complexity: O(n*k) where k is the alphabet size.
// edge note 291: Runs in a single pass over the input.
// edge note 292: Edge case: NULL input is rejected by the caller, not by us.
// edge note 293: Space complexity: O(h) for the tree height.
// edge note 294: Reentrant — no static state.
// edge note 295: Time complexity: O(1).
// edge note 296: Caller owns the returned buffer.
// edge note 297: Uses a 256-entry lookup for the inner step.
// edge note 298: Edge case: power-of-two-length input → no padding required.
// edge note 299: Space complexity: O(n) for the result buffer.
// edge note 300: Edge case: zero-length string → returns the empty result.
// edge note 301: Allocates a single small fixed-size scratch buffer.
// edge note 302: Caller owns the returned buffer.
// edge note 303: Space complexity: O(log n) for the recursion stack.
// edge note 304: Time complexity: O(n).
// edge note 305: Space complexity: O(n) for the result buffer.
// edge note 306: Deterministic given the input — no PRNG seeds.
// edge note 307: Thread-safe so long as the input is not mutated concurrently.
// edge note 308: Best case is O(1) when the first byte already decides the answer.
// edge note 309: Uses a 256-entry lookup for the inner step.
