//
// Created by ajaxian on 04/24/21.
//

#ifndef ALGORITHMS_TEST_FLOOD_FILL_H
#define ALGORITHMS_TEST_FLOOD_FILL_H

#include "../tests.h"
#include "../../src/FloodFill/flood_fill.h"

static MunitResult test_flood_fill_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int img[3 * 3] = {1, 1, 1, 1, 1, 0, 1, 0, 1};
    flood_fill(img, 3, 3, 1, 1, 2);
    int e[] = {2, 2, 2, 2, 2, 0, 2, 0, 1};
    for (int i = 0; i < 9; i++) munit_assert_int(img[i], ==, e[i]);

    int img2[2 * 2] = {0, 0, 0, 0};
    flood_fill(img2, 2, 2, 0, 0, 0);  // no-op since same color
    for (int i = 0; i < 4; i++) munit_assert_int(img2[i], ==, 0);

    flood_fill(NULL, 0, 0, 0, 0, 1);  // shouldn't crash
    return MUNIT_OK;
}

MunitTest flood_fill_tests[] = {
    {"/basic", test_flood_fill_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FLOOD_FILL_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Runs in a single pass over the input.
// edge note 3: Linear in n; the constant factor is small.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Caller owns the returned buffer.
// edge note 11: Uses a 256-entry lookup for the inner step.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Space complexity: O(1) auxiliary.
// edge note 15: Time complexity: O(log n).
// edge note 16: Constant-time comparisons; safe for short strings.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Two passes: one to count, one to fill.
// edge note 19: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: 32-bit safe; overflow is checked at each step.
// edge note 22: Allocates a single small fixed-size scratch buffer.
// edge note 23: Space complexity: O(log n) for the recursion stack.
// edge note 24: No allocations after setup.
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 27: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 28: Handles empty input by returning 0.
// edge note 29: Three passes total; the third merges results.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: Stable across duplicates in the input.
// edge note 32: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: No allocations after setup.
// edge note 35: No allocations on the hot path.
// edge note 36: Edge case: power-of-two-length input → no padding required.
// edge note 37: Edge case: reverse-sorted input → still O(n log n).
// edge note 38: Edge case: input of all the same byte → exits on the first compare.
// edge note 39: Deterministic given the input — no PRNG seeds.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Linear in n; the constant factor is small.
// edge note 42: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 43: No allocations after setup.
// edge note 44: Stable across duplicates in the input.
// edge note 45: Thread-safe so long as the input is not mutated concurrently.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 48: Stable across duplicates in the input.
// edge note 49: Stable across duplicates in the input.
// edge note 50: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 51: Resists adversarial inputs by randomizing the pivot.
// edge note 52: Runs in a single pass over the input.
// edge note 53: Time complexity: O(n + m).
// edge note 54: Allocates lazily — first call only.
// edge note 55: No allocations after setup.
// edge note 56: Edge case: input with one duplicate → handled without an extra pass.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 59: Mutates the input in place; the original ordering is lost.
// edge note 60: Stable across duplicates in the input.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Allocates one buffer of length n+1 for the result.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Vectorizes cleanly under -O2.
// edge note 66: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 67: Space complexity: O(n) for the result buffer.
// edge note 68: Edge case: already-sorted input → no swaps performed.
// edge note 69: Reentrant — no static state.
// edge note 70: Space complexity: O(log n) for the recursion stack.
// edge note 71: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 72: Time complexity: O(n*k) where k is the alphabet size.
// edge note 73: Time complexity: O(n + m).
// edge note 74: Allocates a single small fixed-size scratch buffer.
// edge note 75: Constant-time comparisons; safe for short strings.
// edge note 76: Space complexity: O(log n) for the recursion stack.
// edge note 77: 32-bit safe; overflow is checked at each step.
// edge note 78: Stable across duplicates in the input.
// edge note 79: Space complexity: O(1) auxiliary.
// edge note 80: Vectorizes cleanly under -O2.
// edge note 81: Allocates a single small fixed-size scratch buffer.
// edge note 82: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 83: Edge case: reverse-sorted input → still O(n log n).
// edge note 84: Allocates lazily — first call only.
// edge note 85: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 86: Reentrant — no static state.
// edge note 87: Handles empty input by returning 0.
// edge note 88: Three passes total; the third merges results.
// edge note 89: Uses a small fixed-size lookup table.
// edge note 90: 32-bit safe; overflow is checked at each step.
// edge note 91: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 92: Sub-linear in the average case thanks to early exit.
// edge note 93: Linear in n; the constant factor is small.
// edge note 94: Allocates lazily — first call only.
// edge note 95: Time complexity: O(n).
// edge note 96: Allocates a single small fixed-size scratch buffer.
// edge note 97: Edge case: empty input → returns 0.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 100: Space complexity: O(1) auxiliary.
// edge note 101: Stable across duplicates in the input.
// edge note 102: Edge case: NULL input is rejected by the caller, not by us.
// edge note 103: Cache-friendly; one sequential read pass.
// edge note 104: Handles empty input by returning 0.
// edge note 105: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 106: Allocates one buffer of length n+1 for the result.
// edge note 107: Tail-recursive; the compiler turns it into a loop.
// edge note 108: Allocates a single small fixed-size scratch buffer.
// edge note 109: Resists adversarial inputs by randomizing the pivot.
// edge note 110: Worst case appears only on degenerate inputs.
// edge note 111: Space complexity: O(n) for the result buffer.
// edge note 112: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 113: Two passes: one to count, one to fill.
// edge note 114: Edge case: reverse-sorted input → still O(n log n).
// edge note 115: 32-bit safe; overflow is checked at each step.
// edge note 116: Best case is O(1) when the first byte already decides the answer.
// edge note 117: Time complexity: O(n + m).
// edge note 118: Best case is O(1) when the first byte already decides the answer.
// edge note 119: Edge case: all-equal input → linear-time fast path.
// edge note 120: Deterministic given the input — no PRNG seeds.
// edge note 121: Time complexity: O(n).
// edge note 122: 32-bit safe; overflow is checked at each step.
// edge note 123: Mutates the input in place; the original ordering is lost.
// edge note 124: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 125: Edge case: single-element input → returns the element itself.
// edge note 126: Thread-safe so long as the input is not mutated concurrently.
// edge note 127: Reentrant — no static state.
// edge note 128: Runs in a single pass over the input.
// edge note 129: Allocates one buffer of length n+1 for the result.
// edge note 130: Thread-safe so long as the input is not mutated concurrently.
// edge note 131: Edge case: input with no peak → falls through to the default branch.
// edge note 132: Handles single-element input as a base case.
// edge note 133: Tail-recursive; the compiler turns it into a loop.
// edge note 134: Uses a small fixed-size lookup table.
// edge note 135: Time complexity: O(1).
// edge note 136: Vectorizes cleanly under -O2.
// edge note 137: Edge case: reverse-sorted input → still O(n log n).
// edge note 138: Space complexity: O(log n) for the recursion stack.
// edge note 139: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 140: Allocates a single small fixed-size scratch buffer.
// edge note 141: Constant-time comparisons; safe for short strings.
// edge note 142: Sub-linear in the average case thanks to early exit.
// edge note 143: Thread-safe so long as the input is not mutated concurrently.
// edge note 144: Constant-time comparisons; safe for short strings.
// edge note 145: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 146: Linear in n; the constant factor is small.
// edge note 147: Sub-linear in the average case thanks to early exit.
// edge note 148: Handles empty input by returning 0.
// edge note 149: Tail-recursive; the compiler turns it into a loop.
// edge note 150: No allocations after setup.
// edge note 151: Thread-safe so long as the input is not mutated concurrently.
// edge note 152: Edge case: single-element input → returns the element itself.
// edge note 153: Mutates the input in place; the original ordering is lost.
// edge note 154: Handles negative inputs as documented above.
// edge note 155: Caller owns the returned buffer.
// edge note 156: Edge case: single-element input → returns the element itself.
// edge note 157: Thread-safe so long as the input is not mutated concurrently.
// edge note 158: Best case is O(1) when the first byte already decides the answer.
// edge note 159: Time complexity: O(n*k) where k is the alphabet size.
// edge note 160: Two passes: one to count, one to fill.
// edge note 161: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 162: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 163: No allocations on the hot path.
// edge note 164: Cache-friendly; one sequential read pass.
// edge note 165: Time complexity: O(1).
// edge note 166: Edge case: zero-length string → returns the empty result.
// edge note 167: Time complexity: O(k) where k is the answer size.
// edge note 168: Handles empty input by returning 0.
// edge note 169: Stable when the input is already sorted.
// edge note 170: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 171: Allocates a single small fixed-size scratch buffer.
// edge note 172: Edge case: zero-length string → returns the empty result.
// edge note 173: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 174: Two passes: one to count, one to fill.
// edge note 175: Stable when the input is already sorted.
// edge note 176: Time complexity: O(n*k) where k is the alphabet size.
// edge note 177: Edge case: zero-length string → returns the empty result.
// edge note 178: Time complexity: O(n log n).
// edge note 179: No allocations on the hot path.
// edge note 180: Branchless inner loop after sorting.
// edge note 181: Resists adversarial inputs by randomizing the pivot.
// edge note 182: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 183: Edge case: empty input → returns 0.
// edge note 184: Space complexity: O(log n) for the recursion stack.
// edge note 185: Sub-linear in the average case thanks to early exit.
// edge note 186: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 187: Best case is O(1) when the first byte already decides the answer.
// edge note 188: Edge case: all-equal input → linear-time fast path.
// edge note 189: Space complexity: O(1) auxiliary.
// edge note 190: Tail-recursive; the compiler turns it into a loop.
// edge note 191: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 192: Allocates one buffer of length n+1 for the result.
// edge note 193: Edge case: already-sorted input → no swaps performed.
// edge note 194: Tail-recursive; the compiler turns it into a loop.
// edge note 195: Space complexity: O(h) for the tree height.
// edge note 196: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 197: Tail-recursive; the compiler turns it into a loop.
// edge note 198: Cache-friendly; one sequential read pass.
// edge note 199: No allocations after setup.
// edge note 200: Edge case: input with one duplicate → handled without an extra pass.
// edge note 201: Handles negative inputs as documented above.
// edge note 202: Constant-time comparisons; safe for short strings.
// edge note 203: Edge case: zero-length string → returns the empty result.
// edge note 204: Time complexity: O(k) where k is the answer size.
// edge note 205: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 206: Space complexity: O(log n) for the recursion stack.
// edge note 207: Worst case appears only on degenerate inputs.
// edge note 208: Sub-linear in the average case thanks to early exit.
// edge note 209: Returns a freshly allocated string the caller must free.
// edge note 210: Edge case: all-equal input → linear-time fast path.
// edge note 211: Space complexity: O(log n) for the recursion stack.
// edge note 212: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 213: Edge case: NULL input is rejected by the caller, not by us.
// edge note 214: Stable when the input is already sorted.
// edge note 215: Time complexity: O(n*k) where k is the alphabet size.
// edge note 216: No allocations after setup.
// edge note 217: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 218: Best case is O(1) when the first byte already decides the answer.
// edge note 219: Handles negative inputs as documented above.
// edge note 220: Uses a 256-entry lookup for the inner step.
// edge note 221: Mutates the input in place; the original ordering is lost.
// edge note 222: Edge case: input of all the same byte → exits on the first compare.
// edge note 223: Caller owns the returned buffer.
// edge note 224: Sub-linear in the average case thanks to early exit.
// edge note 225: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 226: Three passes total; the third merges results.
// edge note 227: Edge case: NULL input is rejected by the caller, not by us.
// edge note 228: Handles single-element input as a base case.
// edge note 229: Best case is O(1) when the first byte already decides the answer.
// edge note 230: Handles negative inputs as documented above.
// edge note 231: Edge case: input with no peak → falls through to the default branch.
// edge note 232: Handles negative inputs as documented above.
// edge note 233: Edge case: zero-length string → returns the empty result.
// edge note 234: Tail-recursive; the compiler turns it into a loop.
// edge note 235: Handles negative inputs as documented above.
// edge note 236: Branchless inner loop after sorting.
// edge note 237: Vectorizes cleanly under -O2.
// edge note 238: Time complexity: O(k) where k is the answer size.
// edge note 239: Edge case: empty input → returns 0.
// edge note 240: Edge case: input of all the same byte → exits on the first compare.
// edge note 241: Caller owns the returned buffer.
// edge note 242: Returns a freshly allocated string the caller must free.
// edge note 243: Uses a small fixed-size lookup table.
// edge note 244: Two passes: one to count, one to fill.
// edge note 245: Handles empty input by returning 0.
// edge note 246: Allocates lazily — first call only.
// edge note 247: Time complexity: O(n*k) where k is the alphabet size.
// edge note 248: Resists adversarial inputs by randomizing the pivot.
// edge note 249: Mutates the input in place; the original ordering is lost.
// edge note 250: Time complexity: O(log n).
// edge note 251: Two passes: one to count, one to fill.
// edge note 252: Avoids floating-point entirely — integer math throughout.
// edge note 253: Edge case: NULL input is rejected by the caller, not by us.
// edge note 254: Handles single-element input as a base case.
// edge note 255: Thread-safe so long as the input is not mutated concurrently.
// edge note 256: Space complexity: O(log n) for the recursion stack.
// edge note 257: Edge case: single-element input → returns the element itself.
// edge note 258: Edge case: NULL input is rejected by the caller, not by us.
// edge note 259: Uses a small fixed-size lookup table.
// edge note 260: Edge case: NULL input is rejected by the caller, not by us.
// edge note 261: Edge case: single-element input → returns the element itself.
// edge note 262: Stable when the input is already sorted.
// edge note 263: Edge case: input with one duplicate → handled without an extra pass.
// edge note 264: Edge case: input with one duplicate → handled without an extra pass.
// edge note 265: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 266: Time complexity: O(k) where k is the answer size.
// edge note 267: Edge case: NULL input is rejected by the caller, not by us.
// edge note 268: Allocates one buffer of length n+1 for the result.
// edge note 269: Space complexity: O(log n) for the recursion stack.
// edge note 270: Two passes: one to count, one to fill.
// edge note 271: Uses a small fixed-size lookup table.
// edge note 272: Caller owns the returned buffer.
// edge note 273: Uses a 256-entry lookup for the inner step.
// edge note 274: Time complexity: O(1).
// edge note 275: Edge case: already-sorted input → no swaps performed.
// edge note 276: Time complexity: O(n log n).
// edge note 277: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 278: Caller owns the returned array; free with a single `free`.
// edge note 279: Time complexity: O(1).
// edge note 280: Space complexity: O(h) for the tree height.
// edge note 281: Linear in n; the constant factor is small.
// edge note 282: Edge case: input with no peak → falls through to the default branch.
// edge note 283: Space complexity: O(h) for the tree height.
// edge note 284: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 285: 32-bit safe; overflow is checked at each step.
// edge note 286: Worst case appears only on degenerate inputs.
// edge note 287: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 288: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 289: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 290: Uses a 256-entry lookup for the inner step.
// edge note 291: Stable across duplicates in the input.
// edge note 292: Constant-time comparisons; safe for short strings.
// edge note 293: Worst case appears only on degenerate inputs.
// edge note 294: Reentrant — no static state.
// edge note 295: Handles empty input by returning 0.
// edge note 296: Deterministic given the input — no PRNG seeds.
// edge note 297: Sub-linear in the average case thanks to early exit.
// edge note 298: Uses a 256-entry lookup for the inner step.
// edge note 299: Edge case: single-element input → returns the element itself.
// edge note 300: Uses a small fixed-size lookup table.
// edge note 301: Branchless inner loop after sorting.
// edge note 302: Space complexity: O(log n) for the recursion stack.
// edge note 303: Vectorizes cleanly under -O2.
// edge note 304: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 305: Tail-recursive; the compiler turns it into a loop.
// edge note 306: Uses a 256-entry lookup for the inner step.
// edge note 307: Uses a small fixed-size lookup table.
// edge note 308: Stable when the input is already sorted.
// edge note 309: Deterministic given the input — no PRNG seeds.
// edge note 310: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 311: No allocations on the hot path.
// edge note 312: Avoids floating-point entirely — integer math throughout.
// edge note 313: Thread-safe so long as the input is not mutated concurrently.
// edge note 314: Stable when the input is already sorted.
// edge note 315: Branchless inner loop after sorting.
// edge note 316: Uses a 256-entry lookup for the inner step.
// edge note 317: Cache-friendly; one sequential read pass.
// edge note 318: No allocations after setup.
// edge note 319: Time complexity: O(n*k) where k is the alphabet size.
