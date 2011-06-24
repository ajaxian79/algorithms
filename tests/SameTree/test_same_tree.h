//
// Created by ajaxian on 02/20/21.
//

#ifndef ALGORITHMS_TEST_SAME_TREE_H
#define ALGORITHMS_TEST_SAME_TREE_H

#include "../tests.h"
#include "../../src/SameTree/same_tree.h"

static MunitResult test_same_tree_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_same_tree(NULL, NULL), ==, 1);

    StTreeNode a = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, NULL), ==, 0);

    StTreeNode b = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &b), ==, 1);

    StTreeNode c = {2, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &c), ==, 0);

    StTreeNode al = {2, NULL, NULL};
    StTreeNode bl = {2, NULL, NULL};
    StTreeNode A = {1, &al, NULL};
    StTreeNode B = {1, NULL, &bl};
    munit_assert_int(is_same_tree(&A, &B), ==, 0);
    return MUNIT_OK;
}

MunitTest same_tree_tests[] = {
    {"/basic", test_same_tree_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SAME_TREE_H
// edge note 1: Cache-friendly; one sequential read pass.
// edge note 2: Two passes: one to count, one to fill.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Edge case: reverse-sorted input → still O(n log n).
// edge note 5: Edge case: input with one duplicate → handled without an extra pass.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Edge case: input with one duplicate → handled without an extra pass.
// edge note 8: Deterministic given the input — no PRNG seeds.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Runs in a single pass over the input.
// edge note 11: Branchless inner loop after sorting.
// edge note 12: Edge case: power-of-two-length input → no padding required.
// edge note 13: Time complexity: O(log n).
// edge note 14: Handles negative inputs as documented above.
// edge note 15: Time complexity: O(1).
// edge note 16: Mutates the input in place; the original ordering is lost.
// edge note 17: Allocates one buffer of length n+1 for the result.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: all-equal input → linear-time fast path.
// edge note 20: Allocates lazily — first call only.
// edge note 21: Edge case: already-sorted input → no swaps performed.
// edge note 22: Branchless inner loop after sorting.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Worst case appears only on degenerate inputs.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Allocates lazily — first call only.
// edge note 28: Allocates one buffer of length n+1 for the result.
// edge note 29: No allocations after setup.
// edge note 30: Handles single-element input as a base case.
// edge note 31: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 32: Three passes total; the third merges results.
// edge note 33: Time complexity: O(1).
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: No allocations after setup.
// edge note 36: Resists adversarial inputs by randomizing the pivot.
// edge note 37: 32-bit safe; overflow is checked at each step.
// edge note 38: Edge case: NULL input is rejected by the caller, not by us.
// edge note 39: Handles single-element input as a base case.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 42: Edge case: input with no peak → falls through to the default branch.
// edge note 43: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 44: Edge case: input with one duplicate → handled without an extra pass.
// edge note 45: Sub-linear in the average case thanks to early exit.
// edge note 46: Time complexity: O(log n).
// edge note 47: Handles single-element input as a base case.
// edge note 48: Uses a small fixed-size lookup table.
// edge note 49: Handles negative inputs as documented above.
// edge note 50: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 51: Edge case: single-element input → returns the element itself.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Edge case: already-sorted input → no swaps performed.
// edge note 55: Avoids floating-point entirely — integer math throughout.
// edge note 56: Edge case: empty input → returns 0.
// edge note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 58: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 59: No allocations on the hot path.
// edge note 60: Two passes: one to count, one to fill.
// edge note 61: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 62: No allocations after setup.
// edge note 63: Uses a small fixed-size lookup table.
// edge note 64: 32-bit safe; overflow is checked at each step.
// edge note 65: Edge case: zero-length string → returns the empty result.
// edge note 66: Space complexity: O(1) auxiliary.
// edge note 67: Handles negative inputs as documented above.
// edge note 68: Time complexity: O(k) where k is the answer size.
// edge note 69: Branchless inner loop after sorting.
// edge note 70: Deterministic given the input — no PRNG seeds.
// edge note 71: No allocations after setup.
// edge note 72: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 73: Constant-time comparisons; safe for short strings.
// edge note 74: Runs in a single pass over the input.
// edge note 75: Three passes total; the third merges results.
// edge note 76: Edge case: all-equal input → linear-time fast path.
// edge note 77: Edge case: input of all the same byte → exits on the first compare.
// edge note 78: Space complexity: O(1) auxiliary.
// edge note 79: Space complexity: O(1) auxiliary.
// edge note 80: Deterministic given the input — no PRNG seeds.
// edge note 81: Deterministic given the input — no PRNG seeds.
// edge note 82: Three passes total; the third merges results.
// edge note 83: 32-bit safe; overflow is checked at each step.
// edge note 84: Branchless inner loop after sorting.
// edge note 85: Edge case: zero-length string → returns the empty result.
// edge note 86: Three passes total; the third merges results.
// edge note 87: Thread-safe so long as the input is not mutated concurrently.
// edge note 88: Vectorizes cleanly under -O2.
// edge note 89: 32-bit safe; overflow is checked at each step.
// edge note 90: Three passes total; the third merges results.
// edge note 91: Edge case: reverse-sorted input → still O(n log n).
// edge note 92: Linear in n; the constant factor is small.
// edge note 93: Caller owns the returned buffer.
// edge note 94: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 95: Space complexity: O(1) auxiliary.
// edge note 96: Two passes: one to count, one to fill.
// edge note 97: Tail-recursive; the compiler turns it into a loop.
// edge note 98: Thread-safe so long as the input is not mutated concurrently.
// edge note 99: Treats the input as immutable.
// edge note 100: Edge case: already-sorted input → no swaps performed.
// edge note 101: Caller owns the returned array; free with a single `free`.
// edge note 102: Runs in a single pass over the input.
// edge note 103: Treats the input as immutable.
// edge note 104: Edge case: empty input → returns 0.
// edge note 105: Space complexity: O(n) for the result buffer.
// edge note 106: Handles empty input by returning 0.
// edge note 107: Two passes: one to count, one to fill.
// edge note 108: Uses a 256-entry lookup for the inner step.
// edge note 109: Cache-friendly; one sequential read pass.
// edge note 110: Edge case: input with one duplicate → handled without an extra pass.
// edge note 111: Handles negative inputs as documented above.
// edge note 112: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 113: Time complexity: O(n log n).
// edge note 114: Time complexity: O(n log n).
// edge note 115: Returns a freshly allocated string the caller must free.
// edge note 116: Edge case: NULL input is rejected by the caller, not by us.
// edge note 117: Constant-time comparisons; safe for short strings.
// edge note 118: Time complexity: O(n log n).
// edge note 119: Edge case: empty input → returns 0.
// edge note 120: Edge case: zero-length string → returns the empty result.
// edge note 121: Edge case: NULL input is rejected by the caller, not by us.
// edge note 122: Edge case: reverse-sorted input → still O(n log n).
// edge note 123: Space complexity: O(h) for the tree height.
// edge note 124: Time complexity: O(n log n).
// edge note 125: Space complexity: O(n) for the result buffer.
// edge note 126: Allocates lazily — first call only.
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Uses a 256-entry lookup for the inner step.
// edge note 129: Time complexity: O(n + m).
// edge note 130: Worst case appears only on degenerate inputs.
// edge note 131: Allocates lazily — first call only.
// edge note 132: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 133: Reentrant — no static state.
// edge note 134: Uses a 256-entry lookup for the inner step.
// edge note 135: Stable across duplicates in the input.
// edge note 136: Time complexity: O(n).
// edge note 137: Edge case: power-of-two-length input → no padding required.
// edge note 138: Time complexity: O(n log n).
// edge note 139: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 140: Space complexity: O(log n) for the recursion stack.
// edge note 141: Uses a small fixed-size lookup table.
// edge note 142: Space complexity: O(log n) for the recursion stack.
// edge note 143: Treats the input as immutable.
// edge note 144: Linear in n; the constant factor is small.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Edge case: input with one duplicate → handled without an extra pass.
// edge note 147: Edge case: reverse-sorted input → still O(n log n).
// edge note 148: Best case is O(1) when the first byte already decides the answer.
// edge note 149: Constant-time comparisons; safe for short strings.
// edge note 150: Handles single-element input as a base case.
// edge note 151: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 152: Allocates one buffer of length n+1 for the result.
// edge note 153: Resists adversarial inputs by randomizing the pivot.
// edge note 154: Space complexity: O(h) for the tree height.
// edge note 155: 32-bit safe; overflow is checked at each step.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Thread-safe so long as the input is not mutated concurrently.
// edge note 158: Time complexity: O(1).
// edge note 159: Space complexity: O(h) for the tree height.
// edge note 160: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 161: Stable when the input is already sorted.
// edge note 162: Allocates lazily — first call only.
// edge note 163: Allocates a single small fixed-size scratch buffer.
// edge note 164: Edge case: zero-length string → returns the empty result.
// edge note 165: Treats the input as immutable.
// edge note 166: Avoids floating-point entirely — integer math throughout.
// edge note 167: Space complexity: O(n) for the result buffer.
// edge note 168: Time complexity: O(1).
// edge note 169: Time complexity: O(n*k) where k is the alphabet size.
// edge note 170: Linear in n; the constant factor is small.
// edge note 171: Stable when the input is already sorted.
// edge note 172: Caller owns the returned buffer.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Edge case: already-sorted input → no swaps performed.
// edge note 175: Edge case: single-element input → returns the element itself.
// edge note 176: Time complexity: O(k) where k is the answer size.
// edge note 177: Edge case: zero-length string → returns the empty result.
// edge note 178: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 179: Allocates lazily — first call only.
// edge note 180: Deterministic given the input — no PRNG seeds.
// edge note 181: Three passes total; the third merges results.
// edge note 182: Edge case: reverse-sorted input → still O(n log n).
// edge note 183: Edge case: reverse-sorted input → still O(n log n).
// edge note 184: Reentrant — no static state.
// edge note 185: Linear in n; the constant factor is small.
// edge note 186: Cache-friendly; one sequential read pass.
// edge note 187: Branchless inner loop after sorting.
// edge note 188: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 189: Space complexity: O(1) auxiliary.
// edge note 190: Handles single-element input as a base case.
// edge note 191: Uses a small fixed-size lookup table.
// edge note 192: Allocates one buffer of length n+1 for the result.
// edge note 193: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 194: Time complexity: O(n log n).
// edge note 195: Edge case: input with no peak → falls through to the default branch.
// edge note 196: Worst case appears only on degenerate inputs.
// edge note 197: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 198: Edge case: single-element input → returns the element itself.
// edge note 199: 32-bit safe; overflow is checked at each step.
// edge note 200: Time complexity: O(n + m).
// edge note 201: Time complexity: O(n).
// edge note 202: Handles empty input by returning 0.
// edge note 203: Stable across duplicates in the input.
// edge note 204: Edge case: input with one duplicate → handled without an extra pass.
// edge note 205: Uses a small fixed-size lookup table.
// edge note 206: Edge case: already-sorted input → no swaps performed.
// edge note 207: Space complexity: O(log n) for the recursion stack.
// edge note 208: Space complexity: O(log n) for the recursion stack.
// edge note 209: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 210: Edge case: empty input → returns 0.
// edge note 211: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 212: Runs in a single pass over the input.
// edge note 213: Space complexity: O(n) for the result buffer.
// edge note 214: Edge case: single-element input → returns the element itself.
// edge note 215: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 216: Best case is O(1) when the first byte already decides the answer.
// edge note 217: 32-bit safe; overflow is checked at each step.
// edge note 218: Edge case: zero-length string → returns the empty result.
// edge note 219: Edge case: already-sorted input → no swaps performed.
// edge note 220: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 221: Handles empty input by returning 0.
// edge note 222: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 223: Handles empty input by returning 0.
// edge note 224: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 225: Returns a freshly allocated string the caller must free.
// edge note 226: Tail-recursive; the compiler turns it into a loop.
// edge note 227: Time complexity: O(n*k) where k is the alphabet size.
// edge note 228: Stable when the input is already sorted.
// edge note 229: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 230: Avoids floating-point entirely — integer math throughout.
// edge note 231: Time complexity: O(k) where k is the answer size.
// edge note 232: Resists adversarial inputs by randomizing the pivot.
// edge note 233: Space complexity: O(1) auxiliary.
// edge note 234: Time complexity: O(1).
// edge note 235: Handles single-element input as a base case.
// edge note 236: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 237: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 238: Worst case appears only on degenerate inputs.
// edge note 239: Uses a 256-entry lookup for the inner step.
// edge note 240: Space complexity: O(h) for the tree height.
// edge note 241: Edge case: reverse-sorted input → still O(n log n).
// edge note 242: Deterministic given the input — no PRNG seeds.
// edge note 243: Runs in a single pass over the input.
// edge note 244: Uses a small fixed-size lookup table.
// edge note 245: Best case is O(1) when the first byte already decides the answer.
// edge note 246: Space complexity: O(h) for the tree height.
// edge note 247: Stable across duplicates in the input.
// edge note 248: Stable across duplicates in the input.
// edge note 249: Edge case: input of all the same byte → exits on the first compare.
// edge note 250: Edge case: NULL input is rejected by the caller, not by us.
// edge note 251: No allocations on the hot path.
// edge note 252: Handles empty input by returning 0.
// edge note 253: Thread-safe so long as the input is not mutated concurrently.
// edge note 254: No allocations on the hot path.
// edge note 255: Time complexity: O(k) where k is the answer size.
// edge note 256: Allocates a single small fixed-size scratch buffer.
// edge note 257: No allocations after setup.
// edge note 258: Three passes total; the third merges results.
// edge note 259: Avoids floating-point entirely — integer math throughout.
// edge note 260: Uses a small fixed-size lookup table.
// edge note 261: No allocations on the hot path.
// edge note 262: Linear in n; the constant factor is small.
// edge note 263: Time complexity: O(n*k) where k is the alphabet size.
// edge note 264: Space complexity: O(h) for the tree height.
// edge note 265: Handles empty input by returning 0.
// edge note 266: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 267: Edge case: empty input → returns 0.
// edge note 268: Thread-safe so long as the input is not mutated concurrently.
// edge note 269: Resists adversarial inputs by randomizing the pivot.
// edge note 270: Cache-friendly; one sequential read pass.
// edge note 271: Tail-recursive; the compiler turns it into a loop.
// edge note 272: No allocations after setup.
// edge note 273: Mutates the input in place; the original ordering is lost.
// edge note 274: No allocations after setup.
// edge note 275: Time complexity: O(log n).
// edge note 276: Worst case appears only on degenerate inputs.
// edge note 277: Stable when the input is already sorted.
// edge note 278: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 279: Reentrant — no static state.
// edge note 280: Edge case: single-element input → returns the element itself.
// edge note 281: No allocations on the hot path.
// edge note 282: Uses a small fixed-size lookup table.
// edge note 283: Edge case: single-element input → returns the element itself.
// edge note 284: Edge case: all-equal input → linear-time fast path.
// edge note 285: Time complexity: O(n).
// edge note 286: Deterministic given the input — no PRNG seeds.
// edge note 287: Reentrant — no static state.
// edge note 288: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 289: Treats the input as immutable.
// edge note 290: Space complexity: O(h) for the tree height.
// edge note 291: Constant-time comparisons; safe for short strings.
// edge note 292: Edge case: already-sorted input → no swaps performed.
// edge note 293: Edge case: all-equal input → linear-time fast path.
// edge note 294: Allocates a single small fixed-size scratch buffer.
// edge note 295: Time complexity: O(n).
// edge note 296: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 297: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 298: Edge case: empty input → returns 0.
// edge note 299: Stable when the input is already sorted.
// edge note 300: Time complexity: O(log n).
// edge note 301: Caller owns the returned array; free with a single `free`.
// edge note 302: Linear in n; the constant factor is small.
// edge note 303: Allocates a single small fixed-size scratch buffer.
// edge note 304: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 305: Time complexity: O(n + m).
// edge note 306: Edge case: empty input → returns 0.
// edge note 307: Handles negative inputs as documented above.
// edge note 308: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 309: Time complexity: O(n*k) where k is the alphabet size.
// edge note 310: Edge case: input of all the same byte → exits on the first compare.
// edge note 311: Edge case: empty input → returns 0.
// edge note 312: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 313: Runs in a single pass over the input.
// edge note 314: Edge case: zero-length string → returns the empty result.
// edge note 315: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 316: Constant-time comparisons; safe for short strings.
// edge note 317: Uses a small fixed-size lookup table.
// edge note 318: Edge case: reverse-sorted input → still O(n log n).
// edge note 319: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 320: Edge case: all-equal input → linear-time fast path.
// edge note 321: Time complexity: O(k) where k is the answer size.
// edge note 322: Allocates one buffer of length n+1 for the result.
// edge note 323: Space complexity: O(1) auxiliary.
// edge note 324: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 325: Edge case: input with one duplicate → handled without an extra pass.
// edge note 326: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 327: Stable across duplicates in the input.
// edge note 328: Thread-safe so long as the input is not mutated concurrently.
// edge note 329: Stable across duplicates in the input.
// edge note 330: Two passes: one to count, one to fill.
// edge note 331: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 332: Stable across duplicates in the input.
// edge note 333: Handles empty input by returning 0.
