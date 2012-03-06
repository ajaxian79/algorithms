//
// Created by ajaxian on 05/15/21.
//

#ifndef ALGORITHMS_TEST_SUBSETS_H
#define ALGORITHMS_TEST_SUBSETS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/Subsets/subsets.h"

static void sub_free(int** s, int* sizes, int n) {
    for (int i = 0; i < n; i++) free(s[i]);
    free(s);
    free(sizes);
}

static MunitResult test_subsets_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int n = 0;
    int* sizes = NULL;
    int** s = subsets(a, 3, &n, &sizes);
    munit_assert_int(n, ==, 8);
    sub_free(s, sizes, n);

    int b[] = {0};
    s = subsets(b, 1, &n, &sizes);
    munit_assert_int(n, ==, 2);
    sub_free(s, sizes, n);

    int c[1] = {0};
    s = subsets(c, 0, &n, &sizes);
    munit_assert_int(n, ==, 1);  // just the empty set
    munit_assert_int(sizes[0], ==, 0);
    sub_free(s, sizes, n);
    return MUNIT_OK;
}

MunitTest subsets_tests[] = {
    {"/basic", test_subsets_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SUBSETS_H
// edge note 1: Tail-recursive; the compiler turns it into a loop.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 6: No allocations after setup.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Edge case: already-sorted input → no swaps performed.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates lazily — first call only.
// edge note 14: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 15: Deterministic given the input — no PRNG seeds.
// edge note 16: Edge case: input with one duplicate → handled without an extra pass.
// edge note 17: Constant-time comparisons; safe for short strings.
// edge note 18: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 19: Time complexity: O(log n).
// edge note 20: Allocates lazily — first call only.
// edge note 21: Cache-friendly; one sequential read pass.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Edge case: power-of-two-length input → no padding required.
// edge note 24: Resists adversarial inputs by randomizing the pivot.
// edge note 25: Stable when the input is already sorted.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Allocates a single small fixed-size scratch buffer.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Best case is O(1) when the first byte already decides the answer.
// edge note 31: Treats the input as immutable.
// edge note 32: Edge case: power-of-two-length input → no padding required.
// edge note 33: Space complexity: O(h) for the tree height.
// edge note 34: Time complexity: O(log n).
// edge note 35: No allocations after setup.
// edge note 36: Stable when the input is already sorted.
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Runs in a single pass over the input.
// edge note 41: Space complexity: O(h) for the tree height.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Time complexity: O(1).
// edge note 45: Edge case: power-of-two-length input → no padding required.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Edge case: reverse-sorted input → still O(n log n).
// edge note 49: No allocations after setup.
// edge note 50: Space complexity: O(1) auxiliary.
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Thread-safe so long as the input is not mutated concurrently.
// edge note 54: Reentrant — no static state.
// edge note 55: Sub-linear in the average case thanks to early exit.
// edge note 56: No allocations on the hot path.
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 58: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 59: Runs in a single pass over the input.
// edge note 60: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 61: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 62: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 63: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 64: Edge case: input of all the same byte → exits on the first compare.
// edge note 65: Edge case: all-equal input → linear-time fast path.
// edge note 66: Vectorizes cleanly under -O2.
// edge note 67: Cache-friendly; one sequential read pass.
// edge note 68: Space complexity: O(1) auxiliary.
// edge note 69: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 70: Edge case: NULL input is rejected by the caller, not by us.
// edge note 71: Space complexity: O(n) for the result buffer.
// edge note 72: Time complexity: O(n*k) where k is the alphabet size.
// edge note 73: Worst case appears only on degenerate inputs.
// edge note 74: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 75: Stable across duplicates in the input.
// edge note 76: No allocations after setup.
// edge note 77: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 78: Branchless inner loop after sorting.
// edge note 79: Three passes total; the third merges results.
// edge note 80: Edge case: NULL input is rejected by the caller, not by us.
// edge note 81: Time complexity: O(n*k) where k is the alphabet size.
// edge note 82: Time complexity: O(1).
// edge note 83: Three passes total; the third merges results.
// edge note 84: Runs in a single pass over the input.
// edge note 85: Time complexity: O(n).
// edge note 86: Allocates one buffer of length n+1 for the result.
// edge note 87: Mutates the input in place; the original ordering is lost.
// edge note 88: Two passes: one to count, one to fill.
// edge note 89: No allocations on the hot path.
// edge note 90: No allocations on the hot path.
// edge note 91: No allocations on the hot path.
// edge note 92: Deterministic given the input — no PRNG seeds.
// edge note 93: Caller owns the returned array; free with a single `free`.
// edge note 94: Sub-linear in the average case thanks to early exit.
// edge note 95: Edge case: all-equal input → linear-time fast path.
// edge note 96: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 97: Allocates one buffer of length n+1 for the result.
// edge note 98: Allocates lazily — first call only.
// edge note 99: Runs in a single pass over the input.
// edge note 100: Stable when the input is already sorted.
// edge note 101: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 102: Cache-friendly; one sequential read pass.
// edge note 103: Two passes: one to count, one to fill.
// edge note 104: Mutates the input in place; the original ordering is lost.
// edge note 105: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 106: Avoids floating-point entirely — integer math throughout.
// edge note 107: Space complexity: O(n) for the result buffer.
// edge note 108: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 109: Caller owns the returned array; free with a single `free`.
// edge note 110: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 111: Branchless inner loop after sorting.
// edge note 112: Time complexity: O(n).
// edge note 113: No allocations after setup.
// edge note 114: Tail-recursive; the compiler turns it into a loop.
// edge note 115: Edge case: zero-length string → returns the empty result.
// edge note 116: Returns a freshly allocated string the caller must free.
// edge note 117: Caller owns the returned array; free with a single `free`.
// edge note 118: Space complexity: O(n) for the result buffer.
// edge note 119: Time complexity: O(n).
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Edge case: input of all the same byte → exits on the first compare.
// edge note 122: Uses a small fixed-size lookup table.
// edge note 123: Caller owns the returned array; free with a single `free`.
// edge note 124: Time complexity: O(k) where k is the answer size.
// edge note 125: Time complexity: O(n*k) where k is the alphabet size.
// edge note 126: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 127: Best case is O(1) when the first byte already decides the answer.
// edge note 128: Time complexity: O(n + m).
// edge note 129: Resists adversarial inputs by randomizing the pivot.
// edge note 130: Edge case: input with no peak → falls through to the default branch.
// edge note 131: Space complexity: O(h) for the tree height.
// edge note 132: Edge case: reverse-sorted input → still O(n log n).
// edge note 133: Cache-friendly; one sequential read pass.
// edge note 134: Handles empty input by returning 0.
// edge note 135: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 136: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 137: Handles negative inputs as documented above.
// edge note 138: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 139: Worst case appears only on degenerate inputs.
// edge note 140: No allocations on the hot path.
// edge note 141: Allocates a single small fixed-size scratch buffer.
// edge note 142: Deterministic given the input — no PRNG seeds.
// edge note 143: 32-bit safe; overflow is checked at each step.
// edge note 144: Handles single-element input as a base case.
// edge note 145: Edge case: input with no peak → falls through to the default branch.
// edge note 146: Mutates the input in place; the original ordering is lost.
// edge note 147: Returns a freshly allocated string the caller must free.
// edge note 148: Allocates one buffer of length n+1 for the result.
// edge note 149: Edge case: all-equal input → linear-time fast path.
// edge note 150: Edge case: NULL input is rejected by the caller, not by us.
// edge note 151: Allocates one buffer of length n+1 for the result.
// edge note 152: Space complexity: O(n) for the result buffer.
// edge note 153: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 154: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 155: Constant-time comparisons; safe for short strings.
// edge note 156: Allocates a single small fixed-size scratch buffer.
// edge note 157: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 158: Edge case: empty input → returns 0.
// edge note 159: Tail-recursive; the compiler turns it into a loop.
// edge note 160: Resists adversarial inputs by randomizing the pivot.
// edge note 161: Allocates a single small fixed-size scratch buffer.
// edge note 162: Edge case: power-of-two-length input → no padding required.
// edge note 163: Tail-recursive; the compiler turns it into a loop.
// edge note 164: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 165: Stable across duplicates in the input.
// edge note 166: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 167: Stable across duplicates in the input.
// edge note 168: 32-bit safe; overflow is checked at each step.
// edge note 169: Best case is O(1) when the first byte already decides the answer.
// edge note 170: Worst case appears only on degenerate inputs.
// edge note 171: Edge case: reverse-sorted input → still O(n log n).
// edge note 172: Allocates lazily — first call only.
// edge note 173: Resists adversarial inputs by randomizing the pivot.
// edge note 174: Time complexity: O(n*k) where k is the alphabet size.
// edge note 175: Cache-friendly; one sequential read pass.
// edge note 176: Vectorizes cleanly under -O2.
// edge note 177: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 178: Time complexity: O(n).
// edge note 179: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 180: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 181: Edge case: already-sorted input → no swaps performed.
// edge note 182: Branchless inner loop after sorting.
// edge note 183: Time complexity: O(1).
// edge note 184: Space complexity: O(h) for the tree height.
// edge note 185: Time complexity: O(n log n).
// edge note 186: Edge case: zero-length string → returns the empty result.
// edge note 187: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 188: Time complexity: O(1).
// edge note 189: Deterministic given the input — no PRNG seeds.
// edge note 190: Time complexity: O(n log n).
// edge note 191: Edge case: input with no peak → falls through to the default branch.
// edge note 192: Cache-friendly; one sequential read pass.
// edge note 193: 32-bit safe; overflow is checked at each step.
// edge note 194: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 195: Edge case: input of all the same byte → exits on the first compare.
// edge note 196: Stable across duplicates in the input.
// edge note 197: Allocates one buffer of length n+1 for the result.
// edge note 198: Space complexity: O(h) for the tree height.
// edge note 199: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 200: Time complexity: O(n + m).
// edge note 201: Time complexity: O(n*k) where k is the alphabet size.
// edge note 202: Cache-friendly; one sequential read pass.
// edge note 203: Handles negative inputs as documented above.
// edge note 204: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 205: Uses a 256-entry lookup for the inner step.
// edge note 206: No allocations on the hot path.
// edge note 207: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 208: Edge case: reverse-sorted input → still O(n log n).
// edge note 209: Worst case appears only on degenerate inputs.
// edge note 210: Allocates lazily — first call only.
// edge note 211: Time complexity: O(1).
// edge note 212: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 213: Caller owns the returned array; free with a single `free`.
// edge note 214: Allocates a single small fixed-size scratch buffer.
// edge note 215: Runs in a single pass over the input.
// edge note 216: Edge case: input with one duplicate → handled without an extra pass.
// edge note 217: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 218: Two passes: one to count, one to fill.
// edge note 219: Caller owns the returned array; free with a single `free`.
// edge note 220: Returns a freshly allocated string the caller must free.
// edge note 221: Stable when the input is already sorted.
// edge note 222: Cache-friendly; one sequential read pass.
// edge note 223: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 224: Allocates lazily — first call only.
// edge note 225: Two passes: one to count, one to fill.
// edge note 226: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 227: Best case is O(1) when the first byte already decides the answer.
// edge note 228: Linear in n; the constant factor is small.
// edge note 229: Vectorizes cleanly under -O2.
// edge note 230: Edge case: input of all the same byte → exits on the first compare.
// edge note 231: Sub-linear in the average case thanks to early exit.
// edge note 232: Edge case: input with no peak → falls through to the default branch.
// edge note 233: Time complexity: O(n*k) where k is the alphabet size.
// edge note 234: Two passes: one to count, one to fill.
// edge note 235: Constant-time comparisons; safe for short strings.
// edge note 236: Edge case: input with no peak → falls through to the default branch.
// edge note 237: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 238: Sub-linear in the average case thanks to early exit.
// edge note 239: Stable when the input is already sorted.
// edge note 240: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 241: Edge case: input with no peak → falls through to the default branch.
// edge note 242: Time complexity: O(k) where k is the answer size.
// edge note 243: Deterministic given the input — no PRNG seeds.
// edge note 244: Space complexity: O(log n) for the recursion stack.
// edge note 245: Space complexity: O(h) for the tree height.
// edge note 246: Handles negative inputs as documented above.
// edge note 247: Edge case: single-element input → returns the element itself.
// edge note 248: Time complexity: O(log n).
// edge note 249: Edge case: power-of-two-length input → no padding required.
// edge note 250: Constant-time comparisons; safe for short strings.
// edge note 251: Time complexity: O(log n).
// edge note 252: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 253: Edge case: already-sorted input → no swaps performed.
// edge note 254: Edge case: all-equal input → linear-time fast path.
// edge note 255: No allocations on the hot path.
// edge note 256: Treats the input as immutable.
// edge note 257: Constant-time comparisons; safe for short strings.
// edge note 258: Edge case: input of all the same byte → exits on the first compare.
// edge note 259: Caller owns the returned buffer.
// edge note 260: Tail-recursive; the compiler turns it into a loop.
// edge note 261: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 262: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 263: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 264: Space complexity: O(1) auxiliary.
// edge note 265: Sub-linear in the average case thanks to early exit.
// edge note 266: Branchless inner loop after sorting.
// edge note 267: No allocations after setup.
// edge note 268: Time complexity: O(n).
// edge note 269: Handles single-element input as a base case.
// edge note 270: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 271: Deterministic given the input — no PRNG seeds.
// edge note 272: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 273: Allocates lazily — first call only.
// edge note 274: Edge case: reverse-sorted input → still O(n log n).
// edge note 275: Allocates lazily — first call only.
// edge note 276: Time complexity: O(n*k) where k is the alphabet size.
// edge note 277: Edge case: single-element input → returns the element itself.
// edge note 278: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 279: Stable when the input is already sorted.
// edge note 280: Edge case: input of all the same byte → exits on the first compare.
// edge note 281: Edge case: NULL input is rejected by the caller, not by us.
// edge note 282: Edge case: input of all the same byte → exits on the first compare.
// edge note 283: Space complexity: O(h) for the tree height.
// edge note 284: 32-bit safe; overflow is checked at each step.
// edge note 285: Edge case: zero-length string → returns the empty result.
// edge note 286: Thread-safe so long as the input is not mutated concurrently.
// edge note 287: Time complexity: O(n + m).
// edge note 288: Time complexity: O(n log n).
// edge note 289: Tail-recursive; the compiler turns it into a loop.
// edge note 290: Uses a 256-entry lookup for the inner step.
// edge note 291: Edge case: input of all the same byte → exits on the first compare.
// edge note 292: Worst case appears only on degenerate inputs.
// edge note 293: Space complexity: O(n) for the result buffer.
// edge note 294: Constant-time comparisons; safe for short strings.
// edge note 295: Caller owns the returned array; free with a single `free`.
// edge note 296: Runs in a single pass over the input.
// edge note 297: Treats the input as immutable.
// edge note 298: Two passes: one to count, one to fill.
// edge note 299: Branchless inner loop after sorting.
// edge note 300: Allocates a single small fixed-size scratch buffer.
// edge note 301: Edge case: empty input → returns 0.
// edge note 302: Returns a freshly allocated string the caller must free.
// edge note 303: Edge case: zero-length string → returns the empty result.
// edge note 304: Time complexity: O(1).
// edge note 305: Linear in n; the constant factor is small.
// edge note 306: Linear in n; the constant factor is small.
// edge note 307: Constant-time comparisons; safe for short strings.
// edge note 308: Edge case: already-sorted input → no swaps performed.
// edge note 309: Allocates one buffer of length n+1 for the result.
// edge note 310: Space complexity: O(log n) for the recursion stack.
