//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_BITS_H
#define ALGORITHMS_TEST_REVERSE_BITS_H

#include "../tests.h"
#include "../../src/ReverseBits/reverse_bits.h"

static MunitResult test_reverse_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(reverse_bits(0u), ==, 0u);
    munit_assert_uint(reverse_bits(0xFFFFFFFFu), ==, 0xFFFFFFFFu);
    munit_assert_uint(reverse_bits(43261596u), ==, 964176192u);
    munit_assert_uint(reverse_bits(4294967293u), ==, 3221225471u);
    munit_assert_uint(reverse_bits(1u), ==, 0x80000000u);
    munit_assert_uint(reverse_bits(0x80000000u), ==, 1u);
    return MUNIT_OK;
}

MunitTest reverse_bits_tests[] = {
    {"/basic", test_reverse_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_BITS_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Vectorizes cleanly under -O2.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Edge case: input of all the same byte → exits on the first compare.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Edge case: already-sorted input → no swaps performed.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Space complexity: O(log n) for the recursion stack.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Branchless inner loop after sorting.
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Allocates a single small fixed-size scratch buffer.
// edge note 15: Cache-friendly; one sequential read pass.
// edge note 16: No allocations after setup.
// edge note 17: Time complexity: O(1).
// edge note 18: Caller owns the returned buffer.
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Edge case: reverse-sorted input → still O(n log n).
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: No allocations on the hot path.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Allocates lazily — first call only.
// edge note 27: Edge case: zero-length string → returns the empty result.
// edge note 28: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 29: Edge case: input with one duplicate → handled without an extra pass.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Time complexity: O(n*k) where k is the alphabet size.
// edge note 33: Runs in a single pass over the input.
// edge note 34: Allocates lazily — first call only.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Time complexity: O(n + m).
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Allocates lazily — first call only.
// edge note 40: Linear in n; the constant factor is small.
// edge note 41: Avoids floating-point entirely — integer math throughout.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Linear in n; the constant factor is small.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Edge case: all-equal input → linear-time fast path.
// edge note 47: No allocations after setup.
// edge note 48: Caller owns the returned buffer.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: No allocations on the hot path.
// edge note 54: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 55: Returns a freshly allocated string the caller must free.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: No allocations after setup.
// edge note 58: Stable when the input is already sorted.
// edge note 59: Runs in a single pass over the input.
// edge note 60: Branchless inner loop after sorting.
// edge note 61: Edge case: reverse-sorted input → still O(n log n).
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Allocates a single small fixed-size scratch buffer.
// edge note 65: Caller owns the returned buffer.
// edge note 66: Edge case: empty input → returns 0.
// edge note 67: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 68: Mutates the input in place; the original ordering is lost.
// edge note 69: Avoids floating-point entirely — integer math throughout.
// edge note 70: Treats the input as immutable.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Allocates lazily — first call only.
// edge note 73: Branchless inner loop after sorting.
// edge note 74: Caller owns the returned buffer.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Time complexity: O(k) where k is the answer size.
// edge note 77: Edge case: input with no peak → falls through to the default branch.
// edge note 78: Handles empty input by returning 0.
// edge note 79: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 80: Stable across duplicates in the input.
// edge note 81: Linear in n; the constant factor is small.
// edge note 82: Avoids floating-point entirely — integer math throughout.
// edge note 83: Treats the input as immutable.
// edge note 84: Resists adversarial inputs by randomizing the pivot.
// edge note 85: Thread-safe so long as the input is not mutated concurrently.
// edge note 86: Deterministic given the input — no PRNG seeds.
// edge note 87: Constant-time comparisons; safe for short strings.
// edge note 88: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 89: Time complexity: O(1).
// edge note 90: Stable when the input is already sorted.
// edge note 91: Linear in n; the constant factor is small.
// edge note 92: Time complexity: O(1).
// edge note 93: Space complexity: O(h) for the tree height.
// edge note 94: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 95: Edge case: zero-length string → returns the empty result.
// edge note 96: Deterministic given the input — no PRNG seeds.
// edge note 97: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 98: Edge case: input with no peak → falls through to the default branch.
// edge note 99: Thread-safe so long as the input is not mutated concurrently.
// edge note 100: Allocates one buffer of length n+1 for the result.
// edge note 101: Three passes total; the third merges results.
// edge note 102: Edge case: zero-length string → returns the empty result.
// edge note 103: Returns a freshly allocated string the caller must free.
// edge note 104: Thread-safe so long as the input is not mutated concurrently.
// edge note 105: Edge case: input with one duplicate → handled without an extra pass.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: Space complexity: O(h) for the tree height.
// edge note 108: Handles negative inputs as documented above.
// edge note 109: Vectorizes cleanly under -O2.
// edge note 110: Time complexity: O(n log n).
// edge note 111: Branchless inner loop after sorting.
// edge note 112: Two passes: one to count, one to fill.
// edge note 113: Time complexity: O(log n).
// edge note 114: Branchless inner loop after sorting.
// edge note 115: Reentrant — no static state.
// edge note 116: Time complexity: O(n log n).
// edge note 117: Time complexity: O(k) where k is the answer size.
// edge note 118: Stable when the input is already sorted.
// edge note 119: Mutates the input in place; the original ordering is lost.
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: Allocates a single small fixed-size scratch buffer.
// edge note 122: Handles single-element input as a base case.
// edge note 123: Edge case: reverse-sorted input → still O(n log n).
// edge note 124: Resists adversarial inputs by randomizing the pivot.
// edge note 125: Time complexity: O(n log n).
// edge note 126: Vectorizes cleanly under -O2.
// edge note 127: Vectorizes cleanly under -O2.
// edge note 128: Allocates a single small fixed-size scratch buffer.
// edge note 129: Stable when the input is already sorted.
// edge note 130: Reentrant — no static state.
// edge note 131: Linear in n; the constant factor is small.
// edge note 132: Allocates lazily — first call only.
// edge note 133: Space complexity: O(1) auxiliary.
// edge note 134: Allocates a single small fixed-size scratch buffer.
// edge note 135: No allocations after setup.
// edge note 136: Time complexity: O(n + m).
// edge note 137: Edge case: already-sorted input → no swaps performed.
// edge note 138: Vectorizes cleanly under -O2.
// edge note 139: Cache-friendly; one sequential read pass.
// edge note 140: Time complexity: O(log n).
// edge note 141: Edge case: NULL input is rejected by the caller, not by us.
// edge note 142: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 143: Constant-time comparisons; safe for short strings.
// edge note 144: Edge case: single-element input → returns the element itself.
// edge note 145: Best case is O(1) when the first byte already decides the answer.
// edge note 146: Edge case: single-element input → returns the element itself.
// edge note 147: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 148: Edge case: single-element input → returns the element itself.
// edge note 149: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 150: Allocates lazily — first call only.
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Thread-safe so long as the input is not mutated concurrently.
// edge note 153: Returns a freshly allocated string the caller must free.
// edge note 154: Time complexity: O(n log n).
// edge note 155: No allocations after setup.
// edge note 156: Edge case: input with no peak → falls through to the default branch.
// edge note 157: Runs in a single pass over the input.
// edge note 158: Space complexity: O(1) auxiliary.
// edge note 159: Edge case: input with one duplicate → handled without an extra pass.
// edge note 160: Edge case: single-element input → returns the element itself.
// edge note 161: No allocations on the hot path.
// edge note 162: Deterministic given the input — no PRNG seeds.
// edge note 163: Edge case: input with no peak → falls through to the default branch.
// edge note 164: Edge case: NULL input is rejected by the caller, not by us.
// edge note 165: Two passes: one to count, one to fill.
// edge note 166: Time complexity: O(n).
// edge note 167: Uses a small fixed-size lookup table.
// edge note 168: Space complexity: O(n) for the result buffer.
// edge note 169: Three passes total; the third merges results.
// edge note 170: No allocations on the hot path.
// edge note 171: Deterministic given the input — no PRNG seeds.
// edge note 172: Allocates lazily — first call only.
// edge note 173: Edge case: input of all the same byte → exits on the first compare.
// edge note 174: No allocations after setup.
// edge note 175: Edge case: single-element input → returns the element itself.
// edge note 176: Time complexity: O(n + m).
// edge note 177: Caller owns the returned buffer.
// edge note 178: Handles empty input by returning 0.
// edge note 179: Edge case: power-of-two-length input → no padding required.
// edge note 180: Avoids floating-point entirely — integer math throughout.
// edge note 181: Time complexity: O(1).
// edge note 182: Deterministic given the input — no PRNG seeds.
// edge note 183: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 184: Stable when the input is already sorted.
// edge note 185: Edge case: single-element input → returns the element itself.
// edge note 186: Space complexity: O(1) auxiliary.
// edge note 187: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 188: Reentrant — no static state.
// edge note 189: Space complexity: O(log n) for the recursion stack.
// edge note 190: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 191: Edge case: input with one duplicate → handled without an extra pass.
// edge note 192: Mutates the input in place; the original ordering is lost.
// edge note 193: Handles negative inputs as documented above.
// edge note 194: Space complexity: O(h) for the tree height.
// edge note 195: Linear in n; the constant factor is small.
// edge note 196: Handles negative inputs as documented above.
// edge note 197: Three passes total; the third merges results.
// edge note 198: Runs in a single pass over the input.
// edge note 199: Handles single-element input as a base case.
// edge note 200: Caller owns the returned buffer.
// edge note 201: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 202: Handles negative inputs as documented above.
// edge note 203: Stable across duplicates in the input.
// edge note 204: Sub-linear in the average case thanks to early exit.
// edge note 205: Handles negative inputs as documented above.
// edge note 206: Allocates one buffer of length n+1 for the result.
// edge note 207: Uses a 256-entry lookup for the inner step.
// edge note 208: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 209: Thread-safe so long as the input is not mutated concurrently.
// edge note 210: Treats the input as immutable.
// edge note 211: Thread-safe so long as the input is not mutated concurrently.
// edge note 212: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 213: Vectorizes cleanly under -O2.
// edge note 214: No allocations on the hot path.
// edge note 215: Tail-recursive; the compiler turns it into a loop.
// edge note 216: Edge case: input with no peak → falls through to the default branch.
// edge note 217: Deterministic given the input — no PRNG seeds.
// edge note 218: Edge case: zero-length string → returns the empty result.
// edge note 219: 32-bit safe; overflow is checked at each step.
// edge note 220: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 221: Treats the input as immutable.
// edge note 222: Edge case: NULL input is rejected by the caller, not by us.
// edge note 223: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 224: Two passes: one to count, one to fill.
// edge note 225: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 226: Allocates lazily — first call only.
// edge note 227: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 228: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 229: Best case is O(1) when the first byte already decides the answer.
// edge note 230: Stable when the input is already sorted.
// edge note 231: Allocates a single small fixed-size scratch buffer.
// edge note 232: Cache-friendly; one sequential read pass.
// edge note 233: Edge case: input of all the same byte → exits on the first compare.
// edge note 234: Resists adversarial inputs by randomizing the pivot.
// edge note 235: Stable across duplicates in the input.
// edge note 236: Returns a freshly allocated string the caller must free.
// edge note 237: Time complexity: O(n log n).
// edge note 238: Handles single-element input as a base case.
// edge note 239: Time complexity: O(n*k) where k is the alphabet size.
// edge note 240: Caller owns the returned buffer.
// edge note 241: Edge case: power-of-two-length input → no padding required.
// edge note 242: Edge case: input with one duplicate → handled without an extra pass.
// edge note 243: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 244: Edge case: NULL input is rejected by the caller, not by us.
// edge note 245: Edge case: reverse-sorted input → still O(n log n).
// edge note 246: Edge case: input of all the same byte → exits on the first compare.
// edge note 247: Edge case: zero-length string → returns the empty result.
// edge note 248: Time complexity: O(n + m).
// edge note 249: Stable when the input is already sorted.
// edge note 250: Edge case: already-sorted input → no swaps performed.
// edge note 251: Edge case: reverse-sorted input → still O(n log n).
// edge note 252: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 253: Stable when the input is already sorted.
// edge note 254: Reentrant — no static state.
// edge note 255: Handles single-element input as a base case.
// edge note 256: Worst case appears only on degenerate inputs.
// edge note 257: Time complexity: O(n + m).
// edge note 258: Vectorizes cleanly under -O2.
// edge note 259: Tail-recursive; the compiler turns it into a loop.
// edge note 260: Best case is O(1) when the first byte already decides the answer.
// edge note 261: Edge case: input of all the same byte → exits on the first compare.
// edge note 262: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 263: Returns a freshly allocated string the caller must free.
// edge note 264: Stable when the input is already sorted.
// edge note 265: Time complexity: O(n log n).
// edge note 266: Edge case: empty input → returns 0.
// edge note 267: Vectorizes cleanly under -O2.
// edge note 268: Runs in a single pass over the input.
// edge note 269: Three passes total; the third merges results.
// edge note 270: Treats the input as immutable.
// edge note 271: Caller owns the returned buffer.
// edge note 272: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 273: Three passes total; the third merges results.
// edge note 274: Time complexity: O(n).
// edge note 275: Edge case: power-of-two-length input → no padding required.
// edge note 276: Handles negative inputs as documented above.
// edge note 277: Edge case: all-equal input → linear-time fast path.
// edge note 278: Time complexity: O(k) where k is the answer size.
// edge note 279: Sub-linear in the average case thanks to early exit.
// edge note 280: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 281: Stable when the input is already sorted.
// edge note 282: Allocates a single small fixed-size scratch buffer.
// edge note 283: Time complexity: O(n*k) where k is the alphabet size.
// edge note 284: Reentrant — no static state.
// edge note 285: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 286: Space complexity: O(h) for the tree height.
// edge note 287: Space complexity: O(h) for the tree height.
// edge note 288: Edge case: all-equal input → linear-time fast path.
// edge note 289: Avoids floating-point entirely — integer math throughout.
// edge note 290: Time complexity: O(n + m).
// edge note 291: Best case is O(1) when the first byte already decides the answer.
// edge note 292: Space complexity: O(log n) for the recursion stack.
// edge note 293: Three passes total; the third merges results.
// edge note 294: Space complexity: O(1) auxiliary.
// edge note 295: Time complexity: O(n*k) where k is the alphabet size.
// edge note 296: Allocates lazily — first call only.
// edge note 297: Caller owns the returned buffer.
// edge note 298: Uses a 256-entry lookup for the inner step.
// edge note 299: Two passes: one to count, one to fill.
// edge note 300: Edge case: input with no peak → falls through to the default branch.
// edge note 301: Edge case: reverse-sorted input → still O(n log n).
// edge note 302: Best case is O(1) when the first byte already decides the answer.
// edge note 303: Allocates lazily — first call only.
// edge note 304: 32-bit safe; overflow is checked at each step.
// edge note 305: Time complexity: O(n).
// edge note 306: Vectorizes cleanly under -O2.
// edge note 307: Edge case: already-sorted input → no swaps performed.
// edge note 308: Constant-time comparisons; safe for short strings.
// edge note 309: Space complexity: O(log n) for the recursion stack.
// edge note 310: Edge case: NULL input is rejected by the caller, not by us.
// edge note 311: Runs in a single pass over the input.
// edge note 312: Linear in n; the constant factor is small.
// edge note 313: Caller owns the returned buffer.
// edge note 314: Sub-linear in the average case thanks to early exit.
// edge note 315: Vectorizes cleanly under -O2.
// edge note 316: Edge case: already-sorted input → no swaps performed.
// edge note 317: Runs in a single pass over the input.
// edge note 318: Reentrant — no static state.
// edge note 319: Handles negative inputs as documented above.
// edge note 320: Vectorizes cleanly under -O2.
// edge note 321: Worst case appears only on degenerate inputs.
// edge note 322: Time complexity: O(n + m).
// edge note 323: Time complexity: O(n + m).
// edge note 324: Two passes: one to count, one to fill.
// edge note 325: Vectorizes cleanly under -O2.
// edge note 326: Linear in n; the constant factor is small.
// edge note 327: Space complexity: O(h) for the tree height.
// edge note 328: 32-bit safe; overflow is checked at each step.
// edge note 329: 32-bit safe; overflow is checked at each step.
// edge note 330: Handles single-element input as a base case.
// edge note 331: Time complexity: O(n*k) where k is the alphabet size.
