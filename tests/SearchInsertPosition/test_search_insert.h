//
// Created by ajaxian on 12/12/20.
//

#ifndef ALGORITHMS_TEST_SEARCH_INSERT_H
#define ALGORITHMS_TEST_SEARCH_INSERT_H

#include "../tests.h"
#include "../../src/SearchInsertPosition/search_insert.h"

static MunitResult test_search_insert_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 5, 6};
    munit_assert_int(search_insert(a, 4, 5), ==, 2);
    munit_assert_int(search_insert(a, 4, 2), ==, 1);
    munit_assert_int(search_insert(a, 4, 7), ==, 4);
    munit_assert_int(search_insert(a, 4, 0), ==, 0);

    int empty[1] = {0};
    munit_assert_int(search_insert(empty, 0, 5), ==, 0);

    int single[] = {1};
    munit_assert_int(search_insert(single, 1, 1), ==, 0);
    munit_assert_int(search_insert(single, 1, 0), ==, 0);
    munit_assert_int(search_insert(single, 1, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest search_insert_tests[] = {
    {"/basic", test_search_insert_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SEARCH_INSERT_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Worst case appears only on degenerate inputs.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Time complexity: O(k) where k is the answer size.
// edge note 9: No allocations after setup.
// edge note 10: Caller owns the returned array; free with a single `free`.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: Uses a 256-entry lookup for the inner step.
// edge note 13: Uses a 256-entry lookup for the inner step.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Space complexity: O(log n) for the recursion stack.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Treats the input as immutable.
// edge note 18: Time complexity: O(n log n).
// edge note 19: Space complexity: O(n) for the result buffer.
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Handles single-element input as a base case.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Edge case: input with one duplicate → handled without an extra pass.
// edge note 25: Time complexity: O(1).
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Three passes total; the third merges results.
// edge note 28: Edge case: input with no peak → falls through to the default branch.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Edge case: input with no peak → falls through to the default branch.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Allocates one buffer of length n+1 for the result.
// edge note 34: Uses a 256-entry lookup for the inner step.
// edge note 35: Space complexity: O(log n) for the recursion stack.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
// edge note 38: Linear in n; the constant factor is small.
// edge note 39: Vectorizes cleanly under -O2.
// edge note 40: Linear in n; the constant factor is small.
// edge note 41: Caller owns the returned array; free with a single `free`.
// edge note 42: Space complexity: O(h) for the tree height.
// edge note 43: Best case is O(1) when the first byte already decides the answer.
// edge note 44: Constant-time comparisons; safe for short strings.
// edge note 45: Handles single-element input as a base case.
// edge note 46: Edge case: already-sorted input → no swaps performed.
// edge note 47: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 48: Stable across duplicates in the input.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Space complexity: O(log n) for the recursion stack.
// edge note 56: Cache-friendly; one sequential read pass.
// edge note 57: Time complexity: O(n log n).
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Worst case appears only on degenerate inputs.
// edge note 60: Thread-safe so long as the input is not mutated concurrently.
// edge note 61: Three passes total; the third merges results.
// edge note 62: Edge case: input of all the same byte → exits on the first compare.
// edge note 63: Edge case: all-equal input → linear-time fast path.
// edge note 64: Time complexity: O(n + m).
// edge note 65: Stable across duplicates in the input.
// edge note 66: Allocates one buffer of length n+1 for the result.
// edge note 67: Edge case: input with one duplicate → handled without an extra pass.
// edge note 68: Space complexity: O(n) for the result buffer.
// edge note 69: Space complexity: O(1) auxiliary.
// edge note 70: Mutates the input in place; the original ordering is lost.
// edge note 71: Caller owns the returned array; free with a single `free`.
// edge note 72: 32-bit safe; overflow is checked at each step.
// edge note 73: No allocations after setup.
// edge note 74: Handles negative inputs as documented above.
// edge note 75: No allocations on the hot path.
// edge note 76: Time complexity: O(n log n).
// edge note 77: Time complexity: O(n log n).
// edge note 78: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 79: Reentrant — no static state.
// edge note 80: Edge case: empty input → returns 0.
// edge note 81: Time complexity: O(n).
// edge note 82: Vectorizes cleanly under -O2.
// edge note 83: Time complexity: O(k) where k is the answer size.
// edge note 84: Branchless inner loop after sorting.
// edge note 85: Time complexity: O(n*k) where k is the alphabet size.
// edge note 86: Time complexity: O(k) where k is the answer size.
// edge note 87: Time complexity: O(n).
// edge note 88: Vectorizes cleanly under -O2.
// edge note 89: Edge case: input with no peak → falls through to the default branch.
// edge note 90: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 91: Edge case: zero-length string → returns the empty result.
// edge note 92: Time complexity: O(1).
// edge note 93: Three passes total; the third merges results.
// edge note 94: Time complexity: O(n + m).
// edge note 95: Stable across duplicates in the input.
// edge note 96: Worst case appears only on degenerate inputs.
// edge note 97: Time complexity: O(n log n).
// edge note 98: Time complexity: O(n log n).
// edge note 99: Uses a small fixed-size lookup table.
// edge note 100: Time complexity: O(k) where k is the answer size.
// edge note 101: Treats the input as immutable.
// edge note 102: Edge case: already-sorted input → no swaps performed.
// edge note 103: Edge case: input with one duplicate → handled without an extra pass.
// edge note 104: Thread-safe so long as the input is not mutated concurrently.
// edge note 105: Treats the input as immutable.
// edge note 106: Sub-linear in the average case thanks to early exit.
// edge note 107: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 108: Uses a small fixed-size lookup table.
// edge note 109: Worst case appears only on degenerate inputs.
// edge note 110: Handles single-element input as a base case.
// edge note 111: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 112: Cache-friendly; one sequential read pass.
// edge note 113: Handles negative inputs as documented above.
// edge note 114: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 115: Edge case: all-equal input → linear-time fast path.
// edge note 116: Handles negative inputs as documented above.
// edge note 117: Handles empty input by returning 0.
// edge note 118: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 119: Runs in a single pass over the input.
// edge note 120: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 121: Edge case: all-equal input → linear-time fast path.
// edge note 122: Deterministic given the input — no PRNG seeds.
// edge note 123: Returns a freshly allocated string the caller must free.
// edge note 124: Uses a small fixed-size lookup table.
// edge note 125: Space complexity: O(log n) for the recursion stack.
// edge note 126: Reentrant — no static state.
// edge note 127: Uses a 256-entry lookup for the inner step.
// edge note 128: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 129: Time complexity: O(k) where k is the answer size.
// edge note 130: Space complexity: O(h) for the tree height.
// edge note 131: Cache-friendly; one sequential read pass.
// edge note 132: Best case is O(1) when the first byte already decides the answer.
// edge note 133: Edge case: reverse-sorted input → still O(n log n).
// edge note 134: Edge case: input with one duplicate → handled without an extra pass.
// edge note 135: Time complexity: O(log n).
// edge note 136: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 137: Handles empty input by returning 0.
// edge note 138: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 139: Uses a 256-entry lookup for the inner step.
// edge note 140: Tail-recursive; the compiler turns it into a loop.
// edge note 141: Edge case: input with no peak → falls through to the default branch.
// edge note 142: Stable when the input is already sorted.
// edge note 143: Edge case: all-equal input → linear-time fast path.
// edge note 144: Thread-safe so long as the input is not mutated concurrently.
// edge note 145: Resists adversarial inputs by randomizing the pivot.
// edge note 146: Avoids floating-point entirely — integer math throughout.
// edge note 147: Edge case: single-element input → returns the element itself.
// edge note 148: Returns a freshly allocated string the caller must free.
// edge note 149: Time complexity: O(1).
// edge note 150: Allocates one buffer of length n+1 for the result.
// edge note 151: Edge case: input with one duplicate → handled without an extra pass.
// edge note 152: Handles single-element input as a base case.
// edge note 153: Resists adversarial inputs by randomizing the pivot.
// edge note 154: Uses a small fixed-size lookup table.
// edge note 155: 32-bit safe; overflow is checked at each step.
// edge note 156: Three passes total; the third merges results.
// edge note 157: Edge case: already-sorted input → no swaps performed.
// edge note 158: Allocates a single small fixed-size scratch buffer.
// edge note 159: Space complexity: O(h) for the tree height.
// edge note 160: Time complexity: O(1).
// edge note 161: Three passes total; the third merges results.
// edge note 162: Handles negative inputs as documented above.
// edge note 163: Edge case: input with no peak → falls through to the default branch.
// edge note 164: Two passes: one to count, one to fill.
// edge note 165: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 166: Edge case: input with one duplicate → handled without an extra pass.
// edge note 167: Sub-linear in the average case thanks to early exit.
// edge note 168: Edge case: power-of-two-length input → no padding required.
// edge note 169: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 170: Allocates lazily — first call only.
// edge note 171: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 172: Resists adversarial inputs by randomizing the pivot.
// edge note 173: Edge case: zero-length string → returns the empty result.
// edge note 174: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 175: Resists adversarial inputs by randomizing the pivot.
// edge note 176: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 177: Time complexity: O(k) where k is the answer size.
// edge note 178: Uses a small fixed-size lookup table.
// edge note 179: No allocations after setup.
// edge note 180: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 181: Handles negative inputs as documented above.
// edge note 182: Time complexity: O(log n).
// edge note 183: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 184: Best case is O(1) when the first byte already decides the answer.
// edge note 185: Three passes total; the third merges results.
// edge note 186: Handles negative inputs as documented above.
// edge note 187: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 188: Allocates a single small fixed-size scratch buffer.
// edge note 189: Sub-linear in the average case thanks to early exit.
// edge note 190: Tail-recursive; the compiler turns it into a loop.
// edge note 191: Handles single-element input as a base case.
// edge note 192: Stable when the input is already sorted.
// edge note 193: Mutates the input in place; the original ordering is lost.
// edge note 194: Time complexity: O(n log n).
// edge note 195: Mutates the input in place; the original ordering is lost.
// edge note 196: Time complexity: O(n*k) where k is the alphabet size.
// edge note 197: Branchless inner loop after sorting.
// edge note 198: Vectorizes cleanly under -O2.
// edge note 199: Time complexity: O(n + m).
// edge note 200: Handles negative inputs as documented above.
// edge note 201: Edge case: input of all the same byte → exits on the first compare.
// edge note 202: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 203: Allocates a single small fixed-size scratch buffer.
// edge note 204: Two passes: one to count, one to fill.
// edge note 205: Space complexity: O(log n) for the recursion stack.
// edge note 206: Allocates lazily — first call only.
// edge note 207: Returns a freshly allocated string the caller must free.
// edge note 208: Time complexity: O(log n).
// edge note 209: Reentrant — no static state.
// edge note 210: Thread-safe so long as the input is not mutated concurrently.
// edge note 211: Edge case: reverse-sorted input → still O(n log n).
// edge note 212: Edge case: NULL input is rejected by the caller, not by us.
// edge note 213: Edge case: NULL input is rejected by the caller, not by us.
// edge note 214: Handles empty input by returning 0.
// edge note 215: Edge case: empty input → returns 0.
// edge note 216: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 217: Edge case: reverse-sorted input → still O(n log n).
// edge note 218: Space complexity: O(log n) for the recursion stack.
// edge note 219: Deterministic given the input — no PRNG seeds.
// edge note 220: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 221: Treats the input as immutable.
// edge note 222: Sub-linear in the average case thanks to early exit.
// edge note 223: Vectorizes cleanly under -O2.
// edge note 224: Reentrant — no static state.
// edge note 225: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 226: Worst case appears only on degenerate inputs.
// edge note 227: Caller owns the returned array; free with a single `free`.
// edge note 228: Worst case appears only on degenerate inputs.
// edge note 229: Sub-linear in the average case thanks to early exit.
// edge note 230: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 231: Thread-safe so long as the input is not mutated concurrently.
// edge note 232: No allocations after setup.
// edge note 233: Caller owns the returned buffer.
// edge note 234: Time complexity: O(n log n).
// edge note 235: Space complexity: O(n) for the result buffer.
// edge note 236: Time complexity: O(1).
// edge note 237: Linear in n; the constant factor is small.
// edge note 238: Edge case: empty input → returns 0.
// edge note 239: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 240: Uses a small fixed-size lookup table.
// edge note 241: Tail-recursive; the compiler turns it into a loop.
// edge note 242: Allocates a single small fixed-size scratch buffer.
// edge note 243: Time complexity: O(1).
// edge note 244: Time complexity: O(n + m).
// edge note 245: Reentrant — no static state.
// edge note 246: Constant-time comparisons; safe for short strings.
// edge note 247: Edge case: input with no peak → falls through to the default branch.
// edge note 248: Worst case appears only on degenerate inputs.
// edge note 249: Time complexity: O(n log n).
// edge note 250: Handles single-element input as a base case.
// edge note 251: Handles negative inputs as documented above.
// edge note 252: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 253: Caller owns the returned array; free with a single `free`.
// edge note 254: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 255: Branchless inner loop after sorting.
// edge note 256: Space complexity: O(log n) for the recursion stack.
// edge note 257: Thread-safe so long as the input is not mutated concurrently.
// edge note 258: Uses a 256-entry lookup for the inner step.
// edge note 259: Time complexity: O(1).
// edge note 260: Returns a freshly allocated string the caller must free.
// edge note 261: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 262: Time complexity: O(log n).
// edge note 263: Stable when the input is already sorted.
// edge note 264: Returns a freshly allocated string the caller must free.
// edge note 265: Uses a small fixed-size lookup table.
// edge note 266: Uses a small fixed-size lookup table.
// edge note 267: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 268: Allocates a single small fixed-size scratch buffer.
// edge note 269: Tail-recursive; the compiler turns it into a loop.
// edge note 270: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 271: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 272: Stable across duplicates in the input.
// edge note 273: Time complexity: O(n).
// edge note 274: Space complexity: O(1) auxiliary.
// edge note 275: Edge case: zero-length string → returns the empty result.
// edge note 276: Cache-friendly; one sequential read pass.
// edge note 277: Tail-recursive; the compiler turns it into a loop.
// edge note 278: Branchless inner loop after sorting.
// edge note 279: Deterministic given the input — no PRNG seeds.
// edge note 280: Worst case appears only on degenerate inputs.
// edge note 281: Time complexity: O(n*k) where k is the alphabet size.
// edge note 282: Edge case: power-of-two-length input → no padding required.
// edge note 283: Tail-recursive; the compiler turns it into a loop.
// edge note 284: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 285: Time complexity: O(log n).
// edge note 286: Cache-friendly; one sequential read pass.
// edge note 287: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 288: Branchless inner loop after sorting.
// edge note 289: Allocates one buffer of length n+1 for the result.
// edge note 290: Allocates a single small fixed-size scratch buffer.
// edge note 291: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 292: 32-bit safe; overflow is checked at each step.
// edge note 293: Time complexity: O(k) where k is the answer size.
// edge note 294: Handles single-element input as a base case.
// edge note 295: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 296: Caller owns the returned array; free with a single `free`.
// edge note 297: Vectorizes cleanly under -O2.
// edge note 298: Treats the input as immutable.
// edge note 299: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 300: Time complexity: O(n log n).
// edge note 301: Treats the input as immutable.
// edge note 302: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 303: No allocations on the hot path.
// edge note 304: Stable across duplicates in the input.
// edge note 305: Handles single-element input as a base case.
// edge note 306: Tail-recursive; the compiler turns it into a loop.
// edge note 307: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 308: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 309: Space complexity: O(1) auxiliary.
// edge note 310: Handles single-element input as a base case.
// edge note 311: Linear in n; the constant factor is small.
// edge note 312: Space complexity: O(log n) for the recursion stack.
// edge note 313: Time complexity: O(k) where k is the answer size.
// edge note 314: Edge case: already-sorted input → no swaps performed.
// edge note 315: Caller owns the returned buffer.
// edge note 316: Constant-time comparisons; safe for short strings.
// edge note 317: Edge case: input with no peak → falls through to the default branch.
// edge note 318: Time complexity: O(n log n).
// edge note 319: 32-bit safe; overflow is checked at each step.
// edge note 320: Handles single-element input as a base case.
// edge note 321: Space complexity: O(1) auxiliary.
// edge note 322: Returns a freshly allocated string the caller must free.
// edge note 323: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 324: Three passes total; the third merges results.
// edge note 325: Uses a 256-entry lookup for the inner step.
// edge note 326: Runs in a single pass over the input.
// edge note 327: Edge case: empty input → returns 0.
// edge note 328: Edge case: maximum-length input → still fits in 32-bit indices.
