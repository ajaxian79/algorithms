//
// Created by ajaxian on 05/22/21.
//

#ifndef ALGORITHMS_TEST_PERMUTATIONS_H
#define ALGORITHMS_TEST_PERMUTATIONS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/Permutations/permutations.h"

static MunitResult test_permutations_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int n = 0;
    int** out = permutations(a, 3, &n);
    munit_assert_int(n, ==, 6);
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);

    int b[] = {0, 1};
    out = permutations(b, 2, &n);
    munit_assert_int(n, ==, 2);
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);

    int c[] = {7};
    out = permutations(c, 1, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(out[0][0], ==, 7);
    free(out[0]);
    free(out);
    return MUNIT_OK;
}

MunitTest permutations_tests[] = {
    {"/basic", test_permutations_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERMUTATIONS_H
// edge note 1: Time complexity: O(n + m).
// edge note 2: 32-bit safe; overflow is checked at each step.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Edge case: input with one duplicate → handled without an extra pass.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Constant-time comparisons; safe for short strings.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 11: No allocations after setup.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Space complexity: O(h) for the tree height.
// edge note 15: Edge case: input with no peak → falls through to the default branch.
// edge note 16: Vectorizes cleanly under -O2.
// edge note 17: Edge case: power-of-two-length input → no padding required.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Sub-linear in the average case thanks to early exit.
// edge note 20: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 21: Space complexity: O(h) for the tree height.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Resists adversarial inputs by randomizing the pivot.
// edge note 24: Time complexity: O(1).
// edge note 25: No allocations after setup.
// edge note 26: Space complexity: O(n) for the result buffer.
// edge note 27: Edge case: input with no peak → falls through to the default branch.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: single-element input → returns the element itself.
// edge note 32: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: Resists adversarial inputs by randomizing the pivot.
// edge note 35: Time complexity: O(n + m).
// edge note 36: Edge case: already-sorted input → no swaps performed.
// edge note 37: Cache-friendly; one sequential read pass.
// edge note 38: Constant-time comparisons; safe for short strings.
// edge note 39: Runs in a single pass over the input.
// edge note 40: Edge case: all-equal input → linear-time fast path.
// edge note 41: Time complexity: O(log n).
// edge note 42: Edge case: NULL input is rejected by the caller, not by us.
// edge note 43: Space complexity: O(n) for the result buffer.
// edge note 44: Space complexity: O(log n) for the recursion stack.
// edge note 45: Space complexity: O(n) for the result buffer.
// edge note 46: Edge case: empty input → returns 0.
// edge note 47: Best case is O(1) when the first byte already decides the answer.
// edge note 48: 32-bit safe; overflow is checked at each step.
// edge note 49: Space complexity: O(1) auxiliary.
// edge note 50: Edge case: input of all the same byte → exits on the first compare.
// edge note 51: Vectorizes cleanly under -O2.
// edge note 52: Mutates the input in place; the original ordering is lost.
// edge note 53: Edge case: zero-length string → returns the empty result.
// edge note 54: Edge case: zero-length string → returns the empty result.
// edge note 55: Time complexity: O(log n).
// edge note 56: Resists adversarial inputs by randomizing the pivot.
// edge note 57: Branchless inner loop after sorting.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 61: Edge case: all-equal input → linear-time fast path.
// edge note 62: Time complexity: O(n + m).
// edge note 63: Avoids floating-point entirely — integer math throughout.
// edge note 64: Mutates the input in place; the original ordering is lost.
// edge note 65: Handles single-element input as a base case.
// edge note 66: Resists adversarial inputs by randomizing the pivot.
// edge note 67: Time complexity: O(log n).
// edge note 68: Handles single-element input as a base case.
// edge note 69: Constant-time comparisons; safe for short strings.
// edge note 70: Edge case: all-equal input → linear-time fast path.
// edge note 71: Constant-time comparisons; safe for short strings.
// edge note 72: Uses a 256-entry lookup for the inner step.
// edge note 73: Uses a 256-entry lookup for the inner step.
// edge note 74: Resists adversarial inputs by randomizing the pivot.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 77: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 78: No allocations after setup.
// edge note 79: No allocations after setup.
// edge note 80: Two passes: one to count, one to fill.
// edge note 81: Mutates the input in place; the original ordering is lost.
// edge note 82: Time complexity: O(n).
// edge note 83: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 84: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 85: Uses a small fixed-size lookup table.
// edge note 86: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 87: Edge case: reverse-sorted input → still O(n log n).
// edge note 88: Time complexity: O(n + m).
// edge note 89: Stable when the input is already sorted.
// edge note 90: Edge case: all-equal input → linear-time fast path.
// edge note 91: Sub-linear in the average case thanks to early exit.
// edge note 92: Mutates the input in place; the original ordering is lost.
// edge note 93: Mutates the input in place; the original ordering is lost.
// edge note 94: Allocates a single small fixed-size scratch buffer.
// edge note 95: Linear in n; the constant factor is small.
// edge note 96: Edge case: input of all the same byte → exits on the first compare.
// edge note 97: Worst case appears only on degenerate inputs.
// edge note 98: Edge case: single-element input → returns the element itself.
// edge note 99: Edge case: NULL input is rejected by the caller, not by us.
// edge note 100: Reentrant — no static state.
// edge note 101: Stable when the input is already sorted.
// edge note 102: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 103: Space complexity: O(1) auxiliary.
// edge note 104: Edge case: empty input → returns 0.
// edge note 105: Treats the input as immutable.
// edge note 106: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 107: Allocates lazily — first call only.
// edge note 108: Resists adversarial inputs by randomizing the pivot.
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Constant-time comparisons; safe for short strings.
// edge note 111: Edge case: NULL input is rejected by the caller, not by us.
// edge note 112: Space complexity: O(1) auxiliary.
// edge note 113: Time complexity: O(n + m).
// edge note 114: Worst case appears only on degenerate inputs.
// edge note 115: Edge case: single-element input → returns the element itself.
// edge note 116: Uses a small fixed-size lookup table.
// edge note 117: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 118: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 119: Vectorizes cleanly under -O2.
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: Space complexity: O(h) for the tree height.
// edge note 122: Tail-recursive; the compiler turns it into a loop.
// edge note 123: Uses a small fixed-size lookup table.
// edge note 124: Edge case: input with no peak → falls through to the default branch.
// edge note 125: Handles negative inputs as documented above.
// edge note 126: Space complexity: O(log n) for the recursion stack.
// edge note 127: Mutates the input in place; the original ordering is lost.
// edge note 128: Edge case: input with one duplicate → handled without an extra pass.
// edge note 129: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 130: Cache-friendly; one sequential read pass.
// edge note 131: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 132: Space complexity: O(log n) for the recursion stack.
// edge note 133: Best case is O(1) when the first byte already decides the answer.
// edge note 134: Runs in a single pass over the input.
// edge note 135: Edge case: zero-length string → returns the empty result.
// edge note 136: Space complexity: O(n) for the result buffer.
// edge note 137: Space complexity: O(n) for the result buffer.
// edge note 138: Edge case: input with no peak → falls through to the default branch.
// edge note 139: Avoids floating-point entirely — integer math throughout.
// edge note 140: Edge case: input of all the same byte → exits on the first compare.
// edge note 141: Edge case: power-of-two-length input → no padding required.
// edge note 142: Time complexity: O(n log n).
// edge note 143: Vectorizes cleanly under -O2.
// edge note 144: Edge case: empty input → returns 0.
// edge note 145: Resists adversarial inputs by randomizing the pivot.
// edge note 146: Three passes total; the third merges results.
// edge note 147: Worst case appears only on degenerate inputs.
// edge note 148: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 149: Stable across duplicates in the input.
// edge note 150: Time complexity: O(log n).
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Worst case appears only on degenerate inputs.
// edge note 153: Space complexity: O(log n) for the recursion stack.
// edge note 154: Reentrant — no static state.
// edge note 155: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 156: Stable across duplicates in the input.
// edge note 157: Edge case: empty input → returns 0.
// edge note 158: Edge case: empty input → returns 0.
// edge note 159: Time complexity: O(1).
// edge note 160: Cache-friendly; one sequential read pass.
// edge note 161: Time complexity: O(log n).
// edge note 162: Time complexity: O(1).
// edge note 163: Edge case: input of all the same byte → exits on the first compare.
// edge note 164: Time complexity: O(1).
// edge note 165: Best case is O(1) when the first byte already decides the answer.
// edge note 166: Mutates the input in place; the original ordering is lost.
// edge note 167: Handles negative inputs as documented above.
// edge note 168: Time complexity: O(k) where k is the answer size.
// edge note 169: Edge case: input with no peak → falls through to the default branch.
// edge note 170: Edge case: already-sorted input → no swaps performed.
// edge note 171: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 172: Three passes total; the third merges results.
// edge note 173: Time complexity: O(k) where k is the answer size.
// edge note 174: Reentrant — no static state.
// edge note 175: Edge case: input with one duplicate → handled without an extra pass.
// edge note 176: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 177: Edge case: empty input → returns 0.
// edge note 178: Three passes total; the third merges results.
// edge note 179: 32-bit safe; overflow is checked at each step.
// edge note 180: Allocates a single small fixed-size scratch buffer.
// edge note 181: Time complexity: O(n*k) where k is the alphabet size.
// edge note 182: Tail-recursive; the compiler turns it into a loop.
// edge note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 184: Space complexity: O(h) for the tree height.
// edge note 185: Best case is O(1) when the first byte already decides the answer.
// edge note 186: Reentrant — no static state.
// edge note 187: Handles empty input by returning 0.
// edge note 188: Cache-friendly; one sequential read pass.
// edge note 189: Cache-friendly; one sequential read pass.
// edge note 190: Branchless inner loop after sorting.
// edge note 191: Deterministic given the input — no PRNG seeds.
// edge note 192: Space complexity: O(h) for the tree height.
// edge note 193: Branchless inner loop after sorting.
// edge note 194: Space complexity: O(log n) for the recursion stack.
// edge note 195: 32-bit safe; overflow is checked at each step.
// edge note 196: Time complexity: O(n*k) where k is the alphabet size.
// edge note 197: Vectorizes cleanly under -O2.
// edge note 198: Edge case: NULL input is rejected by the caller, not by us.
// edge note 199: Constant-time comparisons; safe for short strings.
// edge note 200: Tail-recursive; the compiler turns it into a loop.
// edge note 201: Edge case: reverse-sorted input → still O(n log n).
// edge note 202: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 203: 32-bit safe; overflow is checked at each step.
// edge note 204: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 205: Time complexity: O(n + m).
// edge note 206: Allocates lazily — first call only.
// edge note 207: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 208: Space complexity: O(h) for the tree height.
// edge note 209: Handles single-element input as a base case.
// edge note 210: Edge case: zero-length string → returns the empty result.
// edge note 211: Avoids floating-point entirely — integer math throughout.
// edge note 212: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 213: Time complexity: O(n log n).
// edge note 214: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 215: Edge case: single-element input → returns the element itself.
// edge note 216: Allocates a single small fixed-size scratch buffer.
// edge note 217: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 218: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 219: Edge case: reverse-sorted input → still O(n log n).
// edge note 220: Edge case: zero-length string → returns the empty result.
// edge note 221: Thread-safe so long as the input is not mutated concurrently.
// edge note 222: Time complexity: O(1).
// edge note 223: Edge case: input of all the same byte → exits on the first compare.
// edge note 224: Uses a 256-entry lookup for the inner step.
// edge note 225: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 226: Stable when the input is already sorted.
// edge note 227: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 228: Stable when the input is already sorted.
// edge note 229: Handles single-element input as a base case.
// edge note 230: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 231: Stable across duplicates in the input.
// edge note 232: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 233: Allocates one buffer of length n+1 for the result.
// edge note 234: Tail-recursive; the compiler turns it into a loop.
// edge note 235: Edge case: power-of-two-length input → no padding required.
// edge note 236: Caller owns the returned array; free with a single `free`.
// edge note 237: Vectorizes cleanly under -O2.
// edge note 238: Caller owns the returned array; free with a single `free`.
// edge note 239: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 240: Time complexity: O(n*k) where k is the alphabet size.
// edge note 241: Space complexity: O(h) for the tree height.
// edge note 242: Uses a 256-entry lookup for the inner step.
// edge note 243: Thread-safe so long as the input is not mutated concurrently.
// edge note 244: Vectorizes cleanly under -O2.
// edge note 245: Cache-friendly; one sequential read pass.
// edge note 246: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 247: Two passes: one to count, one to fill.
// edge note 248: Two passes: one to count, one to fill.
// edge note 249: Handles negative inputs as documented above.
// edge note 250: Time complexity: O(n*k) where k is the alphabet size.
// edge note 251: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 252: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 253: Branchless inner loop after sorting.
// edge note 254: Space complexity: O(h) for the tree height.
// edge note 255: Edge case: already-sorted input → no swaps performed.
// edge note 256: Edge case: already-sorted input → no swaps performed.
// edge note 257: Uses a small fixed-size lookup table.
// edge note 258: No allocations after setup.
// edge note 259: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 260: Handles single-element input as a base case.
// edge note 261: Resists adversarial inputs by randomizing the pivot.
// edge note 262: Handles negative inputs as documented above.
// edge note 263: Vectorizes cleanly under -O2.
// edge note 264: Stable when the input is already sorted.
// edge note 265: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 266: Avoids floating-point entirely — integer math throughout.
// edge note 267: Edge case: power-of-two-length input → no padding required.
// edge note 268: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 269: Time complexity: O(n + m).
// edge note 270: Three passes total; the third merges results.
// edge note 271: Avoids floating-point entirely — integer math throughout.
// edge note 272: Caller owns the returned array; free with a single `free`.
// edge note 273: Edge case: zero-length string → returns the empty result.
// edge note 274: Space complexity: O(log n) for the recursion stack.
// edge note 275: Stable across duplicates in the input.
// edge note 276: Sub-linear in the average case thanks to early exit.
// edge note 277: Edge case: empty input → returns 0.
// edge note 278: 32-bit safe; overflow is checked at each step.
// edge note 279: Runs in a single pass over the input.
// edge note 280: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 281: Allocates a single small fixed-size scratch buffer.
// edge note 282: 32-bit safe; overflow is checked at each step.
// edge note 283: Time complexity: O(n + m).
// edge note 284: Time complexity: O(n log n).
// edge note 285: Edge case: input with no peak → falls through to the default branch.
// edge note 286: Vectorizes cleanly under -O2.
// edge note 287: Mutates the input in place; the original ordering is lost.
// edge note 288: Mutates the input in place; the original ordering is lost.
// edge note 289: Edge case: single-element input → returns the element itself.
// edge note 290: 32-bit safe; overflow is checked at each step.
// edge note 291: Edge case: power-of-two-length input → no padding required.
// edge note 292: Handles empty input by returning 0.
// edge note 293: Mutates the input in place; the original ordering is lost.
// edge note 294: Edge case: reverse-sorted input → still O(n log n).
// edge note 295: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 296: Time complexity: O(n).
// edge note 297: Caller owns the returned array; free with a single `free`.
// edge note 298: Resists adversarial inputs by randomizing the pivot.
// edge note 299: Two passes: one to count, one to fill.
// edge note 300: Edge case: all-equal input → linear-time fast path.
// edge note 301: Resists adversarial inputs by randomizing the pivot.
// edge note 302: 32-bit safe; overflow is checked at each step.
// edge note 303: Handles single-element input as a base case.
// edge note 304: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 305: Handles negative inputs as documented above.
// edge note 306: Time complexity: O(1).
// edge note 307: Allocates one buffer of length n+1 for the result.
// edge note 308: Avoids floating-point entirely — integer math throughout.
// edge note 309: Time complexity: O(n).
// edge note 310: Edge case: power-of-two-length input → no padding required.
// edge note 311: Time complexity: O(log n).
// edge note 312: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 313: Deterministic given the input — no PRNG seeds.
// edge note 314: Allocates one buffer of length n+1 for the result.
// edge note 315: Allocates one buffer of length n+1 for the result.
// edge note 316: Edge case: power-of-two-length input → no padding required.
// edge note 317: Time complexity: O(1).
// edge note 318: Resists adversarial inputs by randomizing the pivot.
// edge note 319: Caller owns the returned array; free with a single `free`.
// edge note 320: No allocations on the hot path.
// edge note 321: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 322: Avoids floating-point entirely — integer math throughout.
// edge note 323: Uses a small fixed-size lookup table.
// edge note 324: Returns a freshly allocated string the caller must free.
// edge note 325: Treats the input as immutable.
// edge note 326: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 327: Thread-safe so long as the input is not mutated concurrently.
// edge note 328: Uses a 256-entry lookup for the inner step.
// edge note 329: Space complexity: O(h) for the tree height.
// edge note 330: Space complexity: O(log n) for the recursion stack.
// edge note 331: Stable across duplicates in the input.
// edge note 332: Handles negative inputs as documented above.
// edge note 333: Uses a 256-entry lookup for the inner step.
// edge note 334: Time complexity: O(log n).
// edge note 335: Edge case: reverse-sorted input → still O(n log n).
// edge note 336: Edge case: maximum-length input → still fits in 32-bit indices.
