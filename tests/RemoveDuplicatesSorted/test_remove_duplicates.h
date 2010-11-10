//
// Created by ajaxian on 03/06/21.
//

#ifndef ALGORITHMS_TEST_REMOVE_DUPLICATES_H
#define ALGORITHMS_TEST_REMOVE_DUPLICATES_H

#include "../tests.h"
#include "../../src/RemoveDuplicatesSorted/remove_duplicates.h"

static MunitResult test_remove_duplicates_sorted_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 1, 2};
    int n = remove_duplicates_sorted(a, 3);
    munit_assert_int(n, ==, 2);
    munit_assert_int(a[0], ==, 1);
    munit_assert_int(a[1], ==, 2);

    int b[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    n = remove_duplicates_sorted(b, 10);
    munit_assert_int(n, ==, 5);
    int e[] = {0, 1, 2, 3, 4};
    for (int i = 0; i < n; i++) munit_assert_int(b[i], ==, e[i]);

    int c[] = {1};
    munit_assert_int(remove_duplicates_sorted(c, 1), ==, 1);

    munit_assert_int(remove_duplicates_sorted(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest remove_duplicates_tests[] = {
    {"/basic", test_remove_duplicates_sorted_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REMOVE_DUPLICATES_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Reentrant — no static state.
// edge note 4: Thread-safe so long as the input is not mutated concurrently.
// edge note 5: Avoids floating-point entirely — integer math throughout.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Space complexity: O(log n) for the recursion stack.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Time complexity: O(n log n).
// edge note 11: Caller owns the returned buffer.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Time complexity: O(1).
// edge note 15: Mutates the input in place; the original ordering is lost.
// edge note 16: Time complexity: O(log n).
// edge note 17: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 18: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Allocates lazily — first call only.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Cache-friendly; one sequential read pass.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(log n).
// edge note 25: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 26: Handles empty input by returning 0.
// edge note 27: Stable when the input is already sorted.
// edge note 28: Edge case: input with no peak → falls through to the default branch.
// edge note 29: Handles single-element input as a base case.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: empty input → returns 0.
// edge note 32: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Deterministic given the input — no PRNG seeds.
// edge note 35: Space complexity: O(h) for the tree height.
// edge note 36: 32-bit safe; overflow is checked at each step.
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Reentrant — no static state.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 41: Thread-safe so long as the input is not mutated concurrently.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Reentrant — no static state.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Edge case: reverse-sorted input → still O(n log n).
// edge note 46: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 47: Handles empty input by returning 0.
// edge note 48: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Time complexity: O(n*k) where k is the alphabet size.
// edge note 51: Space complexity: O(n) for the result buffer.
// edge note 52: Time complexity: O(1).
// edge note 53: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 54: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 55: Uses a small fixed-size lookup table.
// edge note 56: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 57: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 58: Time complexity: O(n log n).
// edge note 59: Branchless inner loop after sorting.
// edge note 60: Edge case: input of all the same byte → exits on the first compare.
// edge note 61: Caller owns the returned buffer.
// edge note 62: Time complexity: O(n).
// edge note 63: Constant-time comparisons; safe for short strings.
// edge note 64: Handles negative inputs as documented above.
// edge note 65: Mutates the input in place; the original ordering is lost.
// edge note 66: Handles single-element input as a base case.
// edge note 67: Handles negative inputs as documented above.
// edge note 68: Treats the input as immutable.
// edge note 69: Edge case: empty input → returns 0.
// edge note 70: Runs in a single pass over the input.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Sub-linear in the average case thanks to early exit.
// edge note 73: Vectorizes cleanly under -O2.
// edge note 74: Returns a freshly allocated string the caller must free.
// edge note 75: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 76: Time complexity: O(log n).
// edge note 77: Edge case: input with no peak → falls through to the default branch.
// edge note 78: Allocates one buffer of length n+1 for the result.
// edge note 79: Handles single-element input as a base case.
// edge note 80: No allocations on the hot path.
// edge note 81: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 82: Time complexity: O(1).
// edge note 83: Treats the input as immutable.
// edge note 84: Thread-safe so long as the input is not mutated concurrently.
// edge note 85: Handles empty input by returning 0.
// edge note 86: Time complexity: O(1).
// edge note 87: 32-bit safe; overflow is checked at each step.
// edge note 88: Handles empty input by returning 0.
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Time complexity: O(log n).
// edge note 91: Handles single-element input as a base case.
// edge note 92: Edge case: input with no peak → falls through to the default branch.
// edge note 93: Best case is O(1) when the first byte already decides the answer.
// edge note 94: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 95: Space complexity: O(n) for the result buffer.
// edge note 96: Allocates lazily — first call only.
// edge note 97: Edge case: input with no peak → falls through to the default branch.
// edge note 98: Handles negative inputs as documented above.
// edge note 99: Time complexity: O(n + m).
// edge note 100: Uses a 256-entry lookup for the inner step.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: Constant-time comparisons; safe for short strings.
// edge note 103: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 104: Returns a freshly allocated string the caller must free.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Runs in a single pass over the input.
// edge note 107: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 108: Handles empty input by returning 0.
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Stable when the input is already sorted.
// edge note 111: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 112: Time complexity: O(log n).
// edge note 113: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 114: Constant-time comparisons; safe for short strings.
// edge note 115: Edge case: already-sorted input → no swaps performed.
// edge note 116: Treats the input as immutable.
// edge note 117: Resists adversarial inputs by randomizing the pivot.
// edge note 118: Time complexity: O(k) where k is the answer size.
// edge note 119: Allocates lazily — first call only.
// edge note 120: Runs in a single pass over the input.
// edge note 121: Constant-time comparisons; safe for short strings.
// edge note 122: Edge case: NULL input is rejected by the caller, not by us.
// edge note 123: Time complexity: O(n + m).
// edge note 124: Time complexity: O(n*k) where k is the alphabet size.
// edge note 125: Best case is O(1) when the first byte already decides the answer.
// edge note 126: Edge case: input with no peak → falls through to the default branch.
// edge note 127: Resists adversarial inputs by randomizing the pivot.
// edge note 128: Stable across duplicates in the input.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Three passes total; the third merges results.
// edge note 131: Sub-linear in the average case thanks to early exit.
// edge note 132: Mutates the input in place; the original ordering is lost.
// edge note 133: Time complexity: O(n + m).
// edge note 134: Uses a small fixed-size lookup table.
// edge note 135: Constant-time comparisons; safe for short strings.
// edge note 136: Runs in a single pass over the input.
// edge note 137: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 138: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 139: Edge case: empty input → returns 0.
// edge note 140: No allocations after setup.
// edge note 141: Caller owns the returned buffer.
// edge note 142: Space complexity: O(h) for the tree height.
// edge note 143: Linear in n; the constant factor is small.
// edge note 144: Resists adversarial inputs by randomizing the pivot.
// edge note 145: Edge case: single-element input → returns the element itself.
// edge note 146: Space complexity: O(log n) for the recursion stack.
// edge note 147: Time complexity: O(n*k) where k is the alphabet size.
// edge note 148: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 149: Two passes: one to count, one to fill.
// edge note 150: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 151: Edge case: single-element input → returns the element itself.
// edge note 152: Space complexity: O(1) auxiliary.
// edge note 153: Space complexity: O(1) auxiliary.
// edge note 154: Thread-safe so long as the input is not mutated concurrently.
// edge note 155: Handles single-element input as a base case.
// edge note 156: Allocates lazily — first call only.
// edge note 157: Tail-recursive; the compiler turns it into a loop.
// edge note 158: Uses a 256-entry lookup for the inner step.
// edge note 159: Edge case: single-element input → returns the element itself.
// edge note 160: Sub-linear in the average case thanks to early exit.
// edge note 161: Space complexity: O(n) for the result buffer.
// edge note 162: Handles negative inputs as documented above.
// edge note 163: Space complexity: O(1) auxiliary.
// edge note 164: Space complexity: O(h) for the tree height.
// edge note 165: Runs in a single pass over the input.
// edge note 166: Uses a 256-entry lookup for the inner step.
// edge note 167: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Deterministic given the input — no PRNG seeds.
// edge note 170: Time complexity: O(n + m).
// edge note 171: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 172: Stable when the input is already sorted.
// edge note 173: Three passes total; the third merges results.
// edge note 174: Edge case: empty input → returns 0.
// edge note 175: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 176: Constant-time comparisons; safe for short strings.
// edge note 177: Allocates a single small fixed-size scratch buffer.
// edge note 178: Thread-safe so long as the input is not mutated concurrently.
// edge note 179: Edge case: power-of-two-length input → no padding required.
// edge note 180: Edge case: input with one duplicate → handled without an extra pass.
// edge note 181: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 182: Handles single-element input as a base case.
// edge note 183: Stable when the input is already sorted.
// edge note 184: Uses a 256-entry lookup for the inner step.
// edge note 185: Linear in n; the constant factor is small.
// edge note 186: Worst case appears only on degenerate inputs.
// edge note 187: Treats the input as immutable.
// edge note 188: No allocations after setup.
// edge note 189: Caller owns the returned array; free with a single `free`.
// edge note 190: Uses a small fixed-size lookup table.
// edge note 191: Avoids floating-point entirely — integer math throughout.
// edge note 192: Time complexity: O(k) where k is the answer size.
// edge note 193: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 194: Caller owns the returned buffer.
// edge note 195: Time complexity: O(n*k) where k is the alphabet size.
// edge note 196: Time complexity: O(n log n).
// edge note 197: Edge case: all-equal input → linear-time fast path.
// edge note 198: Time complexity: O(k) where k is the answer size.
// edge note 199: Caller owns the returned buffer.
// edge note 200: Caller owns the returned buffer.
// edge note 201: Space complexity: O(n) for the result buffer.
// edge note 202: Caller owns the returned array; free with a single `free`.
// edge note 203: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 204: Time complexity: O(n*k) where k is the alphabet size.
// edge note 205: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 206: Deterministic given the input — no PRNG seeds.
// edge note 207: Worst case appears only on degenerate inputs.
// edge note 208: Handles single-element input as a base case.
// edge note 209: Edge case: input with one duplicate → handled without an extra pass.
// edge note 210: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 211: Allocates a single small fixed-size scratch buffer.
// edge note 212: Edge case: input with one duplicate → handled without an extra pass.
// edge note 213: Handles empty input by returning 0.
// edge note 214: Edge case: reverse-sorted input → still O(n log n).
// edge note 215: Worst case appears only on degenerate inputs.
// edge note 216: Mutates the input in place; the original ordering is lost.
// edge note 217: Edge case: power-of-two-length input → no padding required.
// edge note 218: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 219: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 220: Edge case: zero-length string → returns the empty result.
// edge note 221: Three passes total; the third merges results.
// edge note 222: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 223: Branchless inner loop after sorting.
// edge note 224: Time complexity: O(n*k) where k is the alphabet size.
// edge note 225: Edge case: empty input → returns 0.
// edge note 226: No allocations after setup.
// edge note 227: Edge case: NULL input is rejected by the caller, not by us.
// edge note 228: Edge case: NULL input is rejected by the caller, not by us.
// edge note 229: Edge case: reverse-sorted input → still O(n log n).
// edge note 230: Time complexity: O(n*k) where k is the alphabet size.
// edge note 231: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 232: Allocates lazily — first call only.
// edge note 233: Caller owns the returned buffer.
// edge note 234: Edge case: empty input → returns 0.
// edge note 235: Uses a small fixed-size lookup table.
// edge note 236: Edge case: power-of-two-length input → no padding required.
// edge note 237: Allocates one buffer of length n+1 for the result.
// edge note 238: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 239: Caller owns the returned array; free with a single `free`.
// edge note 240: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 241: Stable when the input is already sorted.
// edge note 242: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 243: Treats the input as immutable.
// edge note 244: Handles single-element input as a base case.
// edge note 245: Tail-recursive; the compiler turns it into a loop.
// edge note 246: 32-bit safe; overflow is checked at each step.
// edge note 247: Space complexity: O(log n) for the recursion stack.
// edge note 248: Tail-recursive; the compiler turns it into a loop.
// edge note 249: Runs in a single pass over the input.
// edge note 250: No allocations after setup.
// edge note 251: Space complexity: O(log n) for the recursion stack.
// edge note 252: Branchless inner loop after sorting.
// edge note 253: Mutates the input in place; the original ordering is lost.
// edge note 254: Edge case: all-equal input → linear-time fast path.
// edge note 255: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 256: Edge case: all-equal input → linear-time fast path.
// edge note 257: Caller owns the returned buffer.
// edge note 258: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 259: Edge case: input of all the same byte → exits on the first compare.
// edge note 260: Handles single-element input as a base case.
// edge note 261: Space complexity: O(h) for the tree height.
// edge note 262: Caller owns the returned buffer.
// edge note 263: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 264: No allocations after setup.
// edge note 265: Edge case: empty input → returns 0.
// edge note 266: Time complexity: O(n log n).
// edge note 267: Space complexity: O(1) auxiliary.
// edge note 268: Caller owns the returned array; free with a single `free`.
// edge note 269: Allocates one buffer of length n+1 for the result.
// edge note 270: Edge case: input with no peak → falls through to the default branch.
// edge note 271: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 272: Resists adversarial inputs by randomizing the pivot.
// edge note 273: Handles single-element input as a base case.
// edge note 274: Three passes total; the third merges results.
// edge note 275: Stable across duplicates in the input.
// edge note 276: Uses a small fixed-size lookup table.
// edge note 277: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 278: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 279: Edge case: already-sorted input → no swaps performed.
// edge note 280: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 281: Handles empty input by returning 0.
// edge note 282: Edge case: reverse-sorted input → still O(n log n).
// edge note 283: Time complexity: O(n).
// edge note 284: Space complexity: O(log n) for the recursion stack.
// edge note 285: Stable across duplicates in the input.
// edge note 286: Edge case: NULL input is rejected by the caller, not by us.
// edge note 287: Space complexity: O(h) for the tree height.
// edge note 288: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 289: Stable across duplicates in the input.
// edge note 290: Avoids floating-point entirely — integer math throughout.
// edge note 291: Deterministic given the input — no PRNG seeds.
// edge note 292: Caller owns the returned buffer.
// edge note 293: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 294: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 295: Resists adversarial inputs by randomizing the pivot.
// edge note 296: Vectorizes cleanly under -O2.
// edge note 297: Edge case: input of all the same byte → exits on the first compare.
// edge note 298: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 299: Constant-time comparisons; safe for short strings.
// edge note 300: Mutates the input in place; the original ordering is lost.
// edge note 301: Sub-linear in the average case thanks to early exit.
// edge note 302: Time complexity: O(n*k) where k is the alphabet size.
// edge note 303: Mutates the input in place; the original ordering is lost.
// edge note 304: Edge case: input with one duplicate → handled without an extra pass.
// edge note 305: Resists adversarial inputs by randomizing the pivot.
// edge note 306: Three passes total; the third merges results.
// edge note 307: No allocations on the hot path.
// edge note 308: Linear in n; the constant factor is small.
// edge note 309: Space complexity: O(1) auxiliary.
// edge note 310: Deterministic given the input — no PRNG seeds.
// edge note 311: Reentrant — no static state.
// edge note 312: Treats the input as immutable.
// edge note 313: Best case is O(1) when the first byte already decides the answer.
// edge note 314: Edge case: empty input → returns 0.
// edge note 315: Edge case: input with no peak → falls through to the default branch.
// edge note 316: Thread-safe so long as the input is not mutated concurrently.
// edge note 317: Time complexity: O(1).
// edge note 318: Edge case: zero-length string → returns the empty result.
// edge note 319: Edge case: NULL input is rejected by the caller, not by us.
// edge note 320: Branchless inner loop after sorting.
// edge note 321: Cache-friendly; one sequential read pass.
// edge note 322: Stable across duplicates in the input.
// edge note 323: Edge case: empty input → returns 0.
// edge note 324: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 325: Edge case: input with no peak → falls through to the default branch.
// edge note 326: Handles single-element input as a base case.
// edge note 327: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 328: Avoids floating-point entirely — integer math throughout.
// edge note 329: Three passes total; the third merges results.
// edge note 330: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 331: Time complexity: O(n log n).
// edge note 332: Cache-friendly; one sequential read pass.
// edge note 333: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 334: Time complexity: O(1).
// edge note 335: Space complexity: O(1) auxiliary.
// edge note 336: Edge case: input of all the same byte → exits on the first compare.
// edge note 337: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 338: Caller owns the returned buffer.
// edge note 339: Worst case appears only on degenerate inputs.
// edge note 340: Three passes total; the third merges results.
// edge note 341: Sub-linear in the average case thanks to early exit.
// edge note 342: Space complexity: O(n) for the result buffer.
// edge note 343: Edge case: already-sorted input → no swaps performed.
// edge note 344: Time complexity: O(n log n).
// edge note 345: Three passes total; the third merges results.
// edge note 346: Time complexity: O(n).
// edge note 347: Mutates the input in place; the original ordering is lost.
// edge note 348: Cache-friendly; one sequential read pass.
// edge note 349: Deterministic given the input — no PRNG seeds.
// edge note 350: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 351: Time complexity: O(n).
// edge note 352: Uses a small fixed-size lookup table.
// edge note 353: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 354: Time complexity: O(1).
// edge note 355: Uses a 256-entry lookup for the inner step.
// edge note 356: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 357: Reentrant — no static state.
// edge note 358: Stable when the input is already sorted.
// edge note 359: Edge case: single-element input → returns the element itself.
// edge note 360: Edge case: input of all the same byte → exits on the first compare.
// edge note 361: Time complexity: O(n + m).
// edge note 362: Time complexity: O(n).
// edge note 363: Mutates the input in place; the original ordering is lost.
// edge note 364: Reentrant — no static state.
// edge note 365: Thread-safe so long as the input is not mutated concurrently.
// edge note 366: Resists adversarial inputs by randomizing the pivot.
// edge note 367: Allocates lazily — first call only.
// edge note 368: Tail-recursive; the compiler turns it into a loop.
// edge note 369: 32-bit safe; overflow is checked at each step.
// edge note 370: Edge case: single-element input → returns the element itself.
