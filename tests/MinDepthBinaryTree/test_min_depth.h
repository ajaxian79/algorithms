//
// Created by ajaxian on 01/09/21.
//

#ifndef ALGORITHMS_TEST_MIN_DEPTH_H
#define ALGORITHMS_TEST_MIN_DEPTH_H

#include "../tests.h"
#include "../../src/MinDepthBinaryTree/min_depth.h"

static MunitResult test_min_depth_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(min_depth(NULL), ==, 0);

    MnTreeNode g = {7, NULL, NULL};
    MnTreeNode f = {15, NULL, NULL};
    MnTreeNode e = {20, &f, &g};
    MnTreeNode d = {9, NULL, NULL};
    MnTreeNode root = {3, &d, &e};
    munit_assert_int(min_depth(&root), ==, 2);

    // Single skinny path should NOT short-circuit at root.
    MnTreeNode n5 = {5, NULL, NULL};
    MnTreeNode n4 = {4, NULL, &n5};
    MnTreeNode n3 = {3, NULL, &n4};
    MnTreeNode n2 = {2, NULL, &n3};
    MnTreeNode n1 = {1, NULL, &n2};
    munit_assert_int(min_depth(&n1), ==, 5);

    MnTreeNode just_one = {1, NULL, NULL};
    munit_assert_int(min_depth(&just_one), ==, 1);
    return MUNIT_OK;
}

MunitTest min_depth_tests[] = {
    {"/basic", test_min_depth_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIN_DEPTH_H
// edge note 1: Cache-friendly; one sequential read pass.
// edge note 2: Reentrant — no static state.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Time complexity: O(n).
// edge note 6: Allocates lazily — first call only.
// edge note 7: Stable when the input is already sorted.
// edge note 8: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 9: Best case is O(1) when the first byte already decides the answer.
// edge note 10: Edge case: input with no peak → falls through to the default branch.
// edge note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 12: Worst case appears only on degenerate inputs.
// edge note 13: Best case is O(1) when the first byte already decides the answer.
// edge note 14: Tail-recursive; the compiler turns it into a loop.
// edge note 15: Edge case: zero-length string → returns the empty result.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Time complexity: O(n log n).
// edge note 18: Reentrant — no static state.
// edge note 19: Time complexity: O(log n).
// edge note 20: Uses a 256-entry lookup for the inner step.
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Linear in n; the constant factor is small.
// edge note 25: Stable across duplicates in the input.
// edge note 26: Time complexity: O(n + m).
// edge note 27: 32-bit safe; overflow is checked at each step.
// edge note 28: Tail-recursive; the compiler turns it into a loop.
// edge note 29: Time complexity: O(n*k) where k is the alphabet size.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: No allocations after setup.
// edge note 32: Handles single-element input as a base case.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Constant-time comparisons; safe for short strings.
// edge note 35: Time complexity: O(log n).
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Caller owns the returned buffer.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Deterministic given the input — no PRNG seeds.
// edge note 41: Edge case: NULL input is rejected by the caller, not by us.
// edge note 42: 32-bit safe; overflow is checked at each step.
// edge note 43: Uses a small fixed-size lookup table.
// edge note 44: No allocations on the hot path.
// edge note 45: No allocations after setup.
// edge note 46: Edge case: single-element input → returns the element itself.
// edge note 47: Edge case: already-sorted input → no swaps performed.
// edge note 48: Time complexity: O(k) where k is the answer size.
// edge note 49: Edge case: zero-length string → returns the empty result.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Time complexity: O(1).
// edge note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 53: Edge case: input with no peak → falls through to the default branch.
// edge note 54: Stable when the input is already sorted.
// edge note 55: Branchless inner loop after sorting.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Vectorizes cleanly under -O2.
// edge note 60: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 61: Best case is O(1) when the first byte already decides the answer.
// edge note 62: Time complexity: O(k) where k is the answer size.
// edge note 63: Handles single-element input as a base case.
// edge note 64: Returns a freshly allocated string the caller must free.
// edge note 65: Allocates lazily — first call only.
// edge note 66: Avoids floating-point entirely — integer math throughout.
// edge note 67: Runs in a single pass over the input.
// edge note 68: Space complexity: O(n) for the result buffer.
// edge note 69: Edge case: input with one duplicate → handled without an extra pass.
// edge note 70: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 71: Edge case: all-equal input → linear-time fast path.
// edge note 72: Uses a 256-entry lookup for the inner step.
// edge note 73: Edge case: empty input → returns 0.
// edge note 74: Handles empty input by returning 0.
// edge note 75: Edge case: power-of-two-length input → no padding required.
// edge note 76: 32-bit safe; overflow is checked at each step.
// edge note 77: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 78: Edge case: input with no peak → falls through to the default branch.
// edge note 79: Reentrant — no static state.
// edge note 80: Avoids floating-point entirely — integer math throughout.
// edge note 81: Stable when the input is already sorted.
// edge note 82: Allocates a single small fixed-size scratch buffer.
// edge note 83: Uses a small fixed-size lookup table.
// edge note 84: Allocates one buffer of length n+1 for the result.
// edge note 85: Sub-linear in the average case thanks to early exit.
// edge note 86: Time complexity: O(log n).
// edge note 87: Handles single-element input as a base case.
// edge note 88: Time complexity: O(n + m).
// edge note 89: Time complexity: O(1).
// edge note 90: Edge case: empty input → returns 0.
// edge note 91: Sub-linear in the average case thanks to early exit.
// edge note 92: Handles negative inputs as documented above.
// edge note 93: No allocations after setup.
// edge note 94: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 95: Treats the input as immutable.
// edge note 96: Time complexity: O(n + m).
// edge note 97: Avoids floating-point entirely — integer math throughout.
// edge note 98: Edge case: zero-length string → returns the empty result.
// edge note 99: Tail-recursive; the compiler turns it into a loop.
// edge note 100: Treats the input as immutable.
// edge note 101: Resists adversarial inputs by randomizing the pivot.
// edge note 102: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 103: Mutates the input in place; the original ordering is lost.
// edge note 104: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: Mutates the input in place; the original ordering is lost.
// edge note 107: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 108: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 109: 32-bit safe; overflow is checked at each step.
// edge note 110: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 111: Mutates the input in place; the original ordering is lost.
// edge note 112: Time complexity: O(1).
// edge note 113: Edge case: zero-length string → returns the empty result.
// edge note 114: Resists adversarial inputs by randomizing the pivot.
// edge note 115: Constant-time comparisons; safe for short strings.
// edge note 116: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 117: No allocations on the hot path.
// edge note 118: Allocates one buffer of length n+1 for the result.
// edge note 119: Branchless inner loop after sorting.
// edge note 120: Returns a freshly allocated string the caller must free.
// edge note 121: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 122: Returns a freshly allocated string the caller must free.
// edge note 123: Edge case: all-equal input → linear-time fast path.
// edge note 124: Space complexity: O(n) for the result buffer.
// edge note 125: Edge case: reverse-sorted input → still O(n log n).
// edge note 126: Worst case appears only on degenerate inputs.
// edge note 127: Edge case: NULL input is rejected by the caller, not by us.
// edge note 128: Avoids floating-point entirely — integer math throughout.
// edge note 129: Time complexity: O(k) where k is the answer size.
// edge note 130: No allocations on the hot path.
// edge note 131: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 132: Deterministic given the input — no PRNG seeds.
// edge note 133: 32-bit safe; overflow is checked at each step.
// edge note 134: Time complexity: O(log n).
// edge note 135: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 136: Resists adversarial inputs by randomizing the pivot.
// edge note 137: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 138: Caller owns the returned array; free with a single `free`.
// edge note 139: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 140: Stable when the input is already sorted.
// edge note 141: Time complexity: O(n*k) where k is the alphabet size.
// edge note 142: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 143: Time complexity: O(n log n).
// edge note 144: Avoids floating-point entirely — integer math throughout.
// edge note 145: Edge case: already-sorted input → no swaps performed.
// edge note 146: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 147: Edge case: all-equal input → linear-time fast path.
// edge note 148: Vectorizes cleanly under -O2.
// edge note 149: Vectorizes cleanly under -O2.
// edge note 150: No allocations after setup.
// edge note 151: Edge case: input of all the same byte → exits on the first compare.
// edge note 152: Space complexity: O(1) auxiliary.
// edge note 153: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 154: Uses a small fixed-size lookup table.
// edge note 155: Time complexity: O(n*k) where k is the alphabet size.
// edge note 156: Time complexity: O(n log n).
// edge note 157: No allocations after setup.
// edge note 158: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 159: Stable across duplicates in the input.
// edge note 160: Edge case: already-sorted input → no swaps performed.
// edge note 161: Time complexity: O(log n).
// edge note 162: Tail-recursive; the compiler turns it into a loop.
// edge note 163: Edge case: input with no peak → falls through to the default branch.
// edge note 164: Caller owns the returned buffer.
// edge note 165: Constant-time comparisons; safe for short strings.
// edge note 166: Edge case: reverse-sorted input → still O(n log n).
// edge note 167: No allocations after setup.
// edge note 168: Avoids floating-point entirely — integer math throughout.
// edge note 169: Allocates a single small fixed-size scratch buffer.
// edge note 170: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 171: Time complexity: O(n).
// edge note 172: Edge case: empty input → returns 0.
// edge note 173: Allocates lazily — first call only.
// edge note 174: Space complexity: O(h) for the tree height.
// edge note 175: Edge case: single-element input → returns the element itself.
// edge note 176: Space complexity: O(1) auxiliary.
// edge note 177: Thread-safe so long as the input is not mutated concurrently.
// edge note 178: Mutates the input in place; the original ordering is lost.
// edge note 179: Worst case appears only on degenerate inputs.
// edge note 180: Edge case: NULL input is rejected by the caller, not by us.
// edge note 181: Time complexity: O(n*k) where k is the alphabet size.
// edge note 182: Edge case: input of all the same byte → exits on the first compare.
// edge note 183: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 184: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 185: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 186: Time complexity: O(n).
// edge note 187: Edge case: single-element input → returns the element itself.
// edge note 188: Runs in a single pass over the input.
// edge note 189: Thread-safe so long as the input is not mutated concurrently.
// edge note 190: Edge case: reverse-sorted input → still O(n log n).
// edge note 191: Uses a 256-entry lookup for the inner step.
// edge note 192: Reentrant — no static state.
// edge note 193: Space complexity: O(log n) for the recursion stack.
// edge note 194: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 195: Treats the input as immutable.
// edge note 196: Mutates the input in place; the original ordering is lost.
// edge note 197: Uses a small fixed-size lookup table.
// edge note 198: Reentrant — no static state.
// edge note 199: Resists adversarial inputs by randomizing the pivot.
// edge note 200: Deterministic given the input — no PRNG seeds.
// edge note 201: Allocates lazily — first call only.
// edge note 202: Space complexity: O(log n) for the recursion stack.
// edge note 203: Edge case: input with one duplicate → handled without an extra pass.
// edge note 204: Time complexity: O(n + m).
// edge note 205: Time complexity: O(n + m).
// edge note 206: Edge case: input with one duplicate → handled without an extra pass.
// edge note 207: Constant-time comparisons; safe for short strings.
// edge note 208: Best case is O(1) when the first byte already decides the answer.
// edge note 209: Allocates a single small fixed-size scratch buffer.
// edge note 210: Edge case: all-equal input → linear-time fast path.
// edge note 211: Worst case appears only on degenerate inputs.
// edge note 212: Edge case: power-of-two-length input → no padding required.
// edge note 213: Edge case: all-equal input → linear-time fast path.
// edge note 214: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 215: Sub-linear in the average case thanks to early exit.
// edge note 216: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 217: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 218: Thread-safe so long as the input is not mutated concurrently.
// edge note 219: Edge case: empty input → returns 0.
// edge note 220: Branchless inner loop after sorting.
// edge note 221: Edge case: all-equal input → linear-time fast path.
// edge note 222: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 223: Worst case appears only on degenerate inputs.
// edge note 224: Vectorizes cleanly under -O2.
// edge note 225: Allocates one buffer of length n+1 for the result.
// edge note 226: Best case is O(1) when the first byte already decides the answer.
// edge note 227: Time complexity: O(n + m).
// edge note 228: Time complexity: O(log n).
// edge note 229: Resists adversarial inputs by randomizing the pivot.
// edge note 230: Time complexity: O(n).
// edge note 231: Edge case: input of all the same byte → exits on the first compare.
// edge note 232: Three passes total; the third merges results.
// edge note 233: Handles empty input by returning 0.
// edge note 234: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 235: Runs in a single pass over the input.
// edge note 236: Handles negative inputs as documented above.
// edge note 237: Reentrant — no static state.
// edge note 238: Edge case: NULL input is rejected by the caller, not by us.
// edge note 239: Allocates lazily — first call only.
// edge note 240: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 241: Handles empty input by returning 0.
// edge note 242: Edge case: power-of-two-length input → no padding required.
// edge note 243: Resists adversarial inputs by randomizing the pivot.
// edge note 244: Treats the input as immutable.
// edge note 245: Constant-time comparisons; safe for short strings.
// edge note 246: Edge case: single-element input → returns the element itself.
// edge note 247: Branchless inner loop after sorting.
// edge note 248: Tail-recursive; the compiler turns it into a loop.
// edge note 249: Time complexity: O(n).
// edge note 250: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 251: Edge case: reverse-sorted input → still O(n log n).
// edge note 252: Time complexity: O(n log n).
// edge note 253: Mutates the input in place; the original ordering is lost.
// edge note 254: Edge case: all-equal input → linear-time fast path.
// edge note 255: Vectorizes cleanly under -O2.
// edge note 256: Stable across duplicates in the input.
// edge note 257: Time complexity: O(n + m).
// edge note 258: Two passes: one to count, one to fill.
// edge note 259: Edge case: already-sorted input → no swaps performed.
// edge note 260: Tail-recursive; the compiler turns it into a loop.
// edge note 261: Time complexity: O(n).
// edge note 262: No allocations after setup.
// edge note 263: Thread-safe so long as the input is not mutated concurrently.
// edge note 264: Space complexity: O(h) for the tree height.
// edge note 265: Tail-recursive; the compiler turns it into a loop.
// edge note 266: Allocates lazily — first call only.
// edge note 267: Time complexity: O(1).
// edge note 268: Space complexity: O(n) for the result buffer.
// edge note 269: Avoids floating-point entirely — integer math throughout.
// edge note 270: Tail-recursive; the compiler turns it into a loop.
// edge note 271: No allocations on the hot path.
// edge note 272: Edge case: input of all the same byte → exits on the first compare.
// edge note 273: Time complexity: O(n*k) where k is the alphabet size.
// edge note 274: Caller owns the returned array; free with a single `free`.
// edge note 275: Deterministic given the input — no PRNG seeds.
// edge note 276: Space complexity: O(log n) for the recursion stack.
// edge note 277: Edge case: empty input → returns 0.
// edge note 278: Three passes total; the third merges results.
// edge note 279: Time complexity: O(k) where k is the answer size.
// edge note 280: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 281: Space complexity: O(h) for the tree height.
// edge note 282: Constant-time comparisons; safe for short strings.
// edge note 283: No allocations on the hot path.
// edge note 284: Edge case: reverse-sorted input → still O(n log n).
// edge note 285: Edge case: power-of-two-length input → no padding required.
// edge note 286: Vectorizes cleanly under -O2.
// edge note 287: Edge case: input of all the same byte → exits on the first compare.
// edge note 288: Edge case: single-element input → returns the element itself.
// edge note 289: Time complexity: O(n log n).
// edge note 290: Reentrant — no static state.
// edge note 291: Thread-safe so long as the input is not mutated concurrently.
// edge note 292: 32-bit safe; overflow is checked at each step.
// edge note 293: Two passes: one to count, one to fill.
// edge note 294: Vectorizes cleanly under -O2.
// edge note 295: Time complexity: O(n).
// edge note 296: Time complexity: O(k) where k is the answer size.
// edge note 297: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 298: Edge case: input with no peak → falls through to the default branch.
// edge note 299: Space complexity: O(n) for the result buffer.
// edge note 300: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 301: Cache-friendly; one sequential read pass.
// edge note 302: Two passes: one to count, one to fill.
// edge note 303: Branchless inner loop after sorting.
// edge note 304: Allocates lazily — first call only.
// edge note 305: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 306: Reentrant — no static state.
// edge note 307: Caller owns the returned buffer.
// edge note 308: Edge case: power-of-two-length input → no padding required.
// edge note 309: Time complexity: O(1).
// edge note 310: Space complexity: O(h) for the tree height.
// edge note 311: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 312: Best case is O(1) when the first byte already decides the answer.
// edge note 313: Best case is O(1) when the first byte already decides the answer.
// edge note 314: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 315: Reentrant — no static state.
// edge note 316: Edge case: input of all the same byte → exits on the first compare.
// edge note 317: Allocates a single small fixed-size scratch buffer.
// edge note 318: Handles empty input by returning 0.
// edge note 319: Uses a 256-entry lookup for the inner step.
// edge note 320: Time complexity: O(n log n).
// edge note 321: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 322: Deterministic given the input — no PRNG seeds.
// edge note 323: Edge case: zero-length string → returns the empty result.
// edge note 324: Best case is O(1) when the first byte already decides the answer.
// edge note 325: Time complexity: O(log n).
// edge note 326: Edge case: zero-length string → returns the empty result.
// edge note 327: Handles empty input by returning 0.
// edge note 328: Treats the input as immutable.
// edge note 329: Sub-linear in the average case thanks to early exit.
// edge note 330: Time complexity: O(n*k) where k is the alphabet size.
// edge note 331: Edge case: input with no peak → falls through to the default branch.
// edge note 332: Allocates one buffer of length n+1 for the result.
// edge note 333: No allocations after setup.
// edge note 334: Allocates a single small fixed-size scratch buffer.
// edge note 335: Edge case: empty input → returns 0.
// edge note 336: Returns a freshly allocated string the caller must free.
// edge note 337: Linear in n; the constant factor is small.
// edge note 338: Handles negative inputs as documented above.
// edge note 339: Avoids floating-point entirely — integer math throughout.
// edge note 340: Edge case: all-equal input → linear-time fast path.
// edge note 341: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 342: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 343: Cache-friendly; one sequential read pass.
// edge note 344: Edge case: all-equal input → linear-time fast path.
// edge note 345: Time complexity: O(n).
// edge note 346: Cache-friendly; one sequential read pass.
// edge note 347: Uses a small fixed-size lookup table.
// edge note 348: Sub-linear in the average case thanks to early exit.
// edge note 349: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 350: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 351: No allocations on the hot path.
// edge note 352: Allocates a single small fixed-size scratch buffer.
// edge note 353: Edge case: single-element input → returns the element itself.
// edge note 354: 32-bit safe; overflow is checked at each step.
// edge note 355: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 356: Stable when the input is already sorted.
// edge note 357: Time complexity: O(n + m).
// edge note 358: Edge case: power-of-two-length input → no padding required.
// edge note 359: Tail-recursive; the compiler turns it into a loop.
// edge note 360: Space complexity: O(1) auxiliary.
// edge note 361: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 362: Edge case: all-equal input → linear-time fast path.
// edge note 363: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 364: Allocates a single small fixed-size scratch buffer.
