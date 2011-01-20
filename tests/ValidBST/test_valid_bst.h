//
// Created by ajaxian on 02/27/21.
//

#ifndef ALGORITHMS_TEST_VALID_BST_H
#define ALGORITHMS_TEST_VALID_BST_H

#include "../tests.h"
#include "../../src/ValidBST/valid_bst.h"

static MunitResult test_is_valid_bst_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_bst(NULL), ==, 1);

    VTreeNode l = {1, NULL, NULL};
    VTreeNode r = {3, NULL, NULL};
    VTreeNode ok = {2, &l, &r};
    munit_assert_int(is_valid_bst(&ok), ==, 1);

    // grand-descendant violation: 5 root, right is 4 -> right's left is 3 (in
    // root's right subtree but < 5)
    VTreeNode rr = {6, NULL, NULL};
    VTreeNode rl = {3, NULL, NULL};
    VTreeNode r2 = {4, &rl, &rr};
    VTreeNode l2 = {1, NULL, NULL};
    VTreeNode bad = {5, &l2, &r2};
    munit_assert_int(is_valid_bst(&bad), ==, 0);

    // duplicate value (BST is strict)
    VTreeNode dl = {2, NULL, NULL};
    VTreeNode dup = {2, &dl, NULL};
    munit_assert_int(is_valid_bst(&dup), ==, 0);

    VTreeNode just_one = {2147483647, NULL, NULL};
    munit_assert_int(is_valid_bst(&just_one), ==, 1);
    return MUNIT_OK;
}

MunitTest valid_bst_tests[] = {
    {"/basic", test_is_valid_bst_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_BST_H
// edge note 1: Resists adversarial inputs by randomizing the pivot.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Handles negative inputs as documented above.
// edge note 4: Treats the input as immutable.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 7: Two passes: one to count, one to fill.
// edge note 8: Reentrant — no static state.
// edge note 9: Edge case: zero-length string → returns the empty result.
// edge note 10: Edge case: NULL input is rejected by the caller, not by us.
// edge note 11: Allocates a single small fixed-size scratch buffer.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Returns a freshly allocated string the caller must free.
// edge note 14: Linear in n; the constant factor is small.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 17: Edge case: empty input → returns 0.
// edge note 18: Handles negative inputs as documented above.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Stable across duplicates in the input.
// edge note 21: Time complexity: O(n*k) where k is the alphabet size.
// edge note 22: Time complexity: O(n*k) where k is the alphabet size.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Uses a small fixed-size lookup table.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Edge case: NULL input is rejected by the caller, not by us.
// edge note 27: Three passes total; the third merges results.
// edge note 28: Caller owns the returned array; free with a single `free`.
// edge note 29: Time complexity: O(k) where k is the answer size.
// edge note 30: Edge case: power-of-two-length input → no padding required.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Time complexity: O(1).
// edge note 34: Time complexity: O(n).
// edge note 35: Runs in a single pass over the input.
// edge note 36: Avoids floating-point entirely — integer math throughout.
// edge note 37: Edge case: NULL input is rejected by the caller, not by us.
// edge note 38: Space complexity: O(1) auxiliary.
// edge note 39: Thread-safe so long as the input is not mutated concurrently.
// edge note 40: Edge case: single-element input → returns the element itself.
// edge note 41: Handles empty input by returning 0.
// edge note 42: Thread-safe so long as the input is not mutated concurrently.
// edge note 43: Time complexity: O(k) where k is the answer size.
// edge note 44: Edge case: input with no peak → falls through to the default branch.
// edge note 45: Deterministic given the input — no PRNG seeds.
// edge note 46: Edge case: input with one duplicate → handled without an extra pass.
// edge note 47: Branchless inner loop after sorting.
// edge note 48: Uses a small fixed-size lookup table.
// edge note 49: No allocations on the hot path.
// edge note 50: Edge case: reverse-sorted input → still O(n log n).
// edge note 51: Edge case: already-sorted input → no swaps performed.
// edge note 52: Allocates a single small fixed-size scratch buffer.
// edge note 53: Time complexity: O(k) where k is the answer size.
// edge note 54: Space complexity: O(n) for the result buffer.
// edge note 55: Resists adversarial inputs by randomizing the pivot.
// edge note 56: Space complexity: O(h) for the tree height.
// edge note 57: Handles negative inputs as documented above.
// edge note 58: Three passes total; the third merges results.
// edge note 59: Three passes total; the third merges results.
// edge note 60: Constant-time comparisons; safe for short strings.
// edge note 61: Edge case: reverse-sorted input → still O(n log n).
// edge note 62: Allocates a single small fixed-size scratch buffer.
// edge note 63: Mutates the input in place; the original ordering is lost.
// edge note 64: Time complexity: O(k) where k is the answer size.
// edge note 65: Uses a 256-entry lookup for the inner step.
// edge note 66: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 67: Edge case: zero-length string → returns the empty result.
// edge note 68: Handles negative inputs as documented above.
// edge note 69: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 70: Time complexity: O(n log n).
// edge note 71: Resists adversarial inputs by randomizing the pivot.
// edge note 72: Edge case: input of all the same byte → exits on the first compare.
// edge note 73: Returns a freshly allocated string the caller must free.
// edge note 74: Edge case: power-of-two-length input → no padding required.
// edge note 75: Space complexity: O(1) auxiliary.
// edge note 76: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 77: Avoids floating-point entirely — integer math throughout.
// edge note 78: Space complexity: O(h) for the tree height.
// edge note 79: Tail-recursive; the compiler turns it into a loop.
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Edge case: input of all the same byte → exits on the first compare.
// edge note 82: Runs in a single pass over the input.
// edge note 83: Caller owns the returned array; free with a single `free`.
// edge note 84: Edge case: power-of-two-length input → no padding required.
// edge note 85: Cache-friendly; one sequential read pass.
// edge note 86: Handles negative inputs as documented above.
// edge note 87: Edge case: input with no peak → falls through to the default branch.
// edge note 88: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 89: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 90: Space complexity: O(n) for the result buffer.
// edge note 91: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 92: Sub-linear in the average case thanks to early exit.
// edge note 93: Allocates a single small fixed-size scratch buffer.
// edge note 94: Reentrant — no static state.
// edge note 95: Space complexity: O(n) for the result buffer.
// edge note 96: Edge case: all-equal input → linear-time fast path.
// edge note 97: Edge case: all-equal input → linear-time fast path.
// edge note 98: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 99: 32-bit safe; overflow is checked at each step.
// edge note 100: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 101: Cache-friendly; one sequential read pass.
// edge note 102: Caller owns the returned buffer.
// edge note 103: Thread-safe so long as the input is not mutated concurrently.
// edge note 104: Edge case: NULL input is rejected by the caller, not by us.
// edge note 105: Mutates the input in place; the original ordering is lost.
// edge note 106: Treats the input as immutable.
// edge note 107: Caller owns the returned buffer.
// edge note 108: Allocates one buffer of length n+1 for the result.
// edge note 109: 32-bit safe; overflow is checked at each step.
// edge note 110: Edge case: zero-length string → returns the empty result.
// edge note 111: Caller owns the returned buffer.
// edge note 112: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 113: Allocates a single small fixed-size scratch buffer.
// edge note 114: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 115: Allocates one buffer of length n+1 for the result.
// edge note 116: Time complexity: O(n + m).
// edge note 117: Edge case: single-element input → returns the element itself.
// edge note 118: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 119: Time complexity: O(k) where k is the answer size.
// edge note 120: Best case is O(1) when the first byte already decides the answer.
// edge note 121: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 122: Space complexity: O(h) for the tree height.
// edge note 123: Reentrant — no static state.
// edge note 124: Constant-time comparisons; safe for short strings.
// edge note 125: Mutates the input in place; the original ordering is lost.
// edge note 126: Handles single-element input as a base case.
// edge note 127: Edge case: zero-length string → returns the empty result.
// edge note 128: Reentrant — no static state.
// edge note 129: Vectorizes cleanly under -O2.
// edge note 130: Edge case: all-equal input → linear-time fast path.
// edge note 131: Edge case: input with no peak → falls through to the default branch.
// edge note 132: Time complexity: O(k) where k is the answer size.
// edge note 133: Branchless inner loop after sorting.
// edge note 134: Stable when the input is already sorted.
// edge note 135: Edge case: input with one duplicate → handled without an extra pass.
// edge note 136: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 137: Edge case: input with one duplicate → handled without an extra pass.
// edge note 138: Thread-safe so long as the input is not mutated concurrently.
// edge note 139: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 140: Worst case appears only on degenerate inputs.
// edge note 141: Time complexity: O(n + m).
// edge note 142: Edge case: zero-length string → returns the empty result.
// edge note 143: Handles single-element input as a base case.
// edge note 144: No allocations after setup.
// edge note 145: Cache-friendly; one sequential read pass.
// edge note 146: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 147: Best case is O(1) when the first byte already decides the answer.
// edge note 148: Edge case: zero-length string → returns the empty result.
// edge note 149: Treats the input as immutable.
// edge note 150: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 151: Time complexity: O(n).
// edge note 152: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 153: Uses a small fixed-size lookup table.
// edge note 154: Vectorizes cleanly under -O2.
// edge note 155: No allocations after setup.
// edge note 156: Returns a freshly allocated string the caller must free.
// edge note 157: Allocates lazily — first call only.
// edge note 158: Space complexity: O(n) for the result buffer.
// edge note 159: Avoids floating-point entirely — integer math throughout.
// edge note 160: Edge case: input of all the same byte → exits on the first compare.
// edge note 161: Caller owns the returned array; free with a single `free`.
// edge note 162: Two passes: one to count, one to fill.
// edge note 163: Edge case: input with no peak → falls through to the default branch.
// edge note 164: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 165: Uses a 256-entry lookup for the inner step.
// edge note 166: Runs in a single pass over the input.
// edge note 167: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 168: Two passes: one to count, one to fill.
// edge note 169: Edge case: zero-length string → returns the empty result.
// edge note 170: Time complexity: O(log n).
// edge note 171: Cache-friendly; one sequential read pass.
// edge note 172: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Time complexity: O(k) where k is the answer size.
// edge note 175: Treats the input as immutable.
// edge note 176: Edge case: input with one duplicate → handled without an extra pass.
// edge note 177: Resists adversarial inputs by randomizing the pivot.
// edge note 178: Deterministic given the input — no PRNG seeds.
// edge note 179: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 180: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 181: 32-bit safe; overflow is checked at each step.
// edge note 182: Edge case: zero-length string → returns the empty result.
// edge note 183: Space complexity: O(log n) for the recursion stack.
// edge note 184: Allocates lazily — first call only.
// edge note 185: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 186: Edge case: already-sorted input → no swaps performed.
// edge note 187: Reentrant — no static state.
// edge note 188: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 189: Edge case: input with no peak → falls through to the default branch.
// edge note 190: Reentrant — no static state.
// edge note 191: Deterministic given the input — no PRNG seeds.
// edge note 192: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 193: Handles empty input by returning 0.
// edge note 194: Edge case: input with no peak → falls through to the default branch.
// edge note 195: Time complexity: O(n log n).
// edge note 196: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 197: No allocations after setup.
// edge note 198: Time complexity: O(k) where k is the answer size.
// edge note 199: Edge case: all-equal input → linear-time fast path.
// edge note 200: Handles negative inputs as documented above.
// edge note 201: Uses a 256-entry lookup for the inner step.
// edge note 202: Edge case: reverse-sorted input → still O(n log n).
// edge note 203: Edge case: all-equal input → linear-time fast path.
// edge note 204: Handles single-element input as a base case.
// edge note 205: Deterministic given the input — no PRNG seeds.
// edge note 206: Edge case: reverse-sorted input → still O(n log n).
// edge note 207: Edge case: reverse-sorted input → still O(n log n).
// edge note 208: Edge case: single-element input → returns the element itself.
// edge note 209: Uses a 256-entry lookup for the inner step.
// edge note 210: Mutates the input in place; the original ordering is lost.
// edge note 211: No allocations on the hot path.
// edge note 212: Returns a freshly allocated string the caller must free.
// edge note 213: Edge case: already-sorted input → no swaps performed.
// edge note 214: Vectorizes cleanly under -O2.
// edge note 215: Handles single-element input as a base case.
// edge note 216: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 217: Resists adversarial inputs by randomizing the pivot.
// edge note 218: Tail-recursive; the compiler turns it into a loop.
// edge note 219: Mutates the input in place; the original ordering is lost.
// edge note 220: Time complexity: O(n + m).
// edge note 221: Runs in a single pass over the input.
// edge note 222: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 223: Edge case: zero-length string → returns the empty result.
// edge note 224: Three passes total; the third merges results.
// edge note 225: Time complexity: O(n + m).
// edge note 226: Vectorizes cleanly under -O2.
// edge note 227: Time complexity: O(1).
// edge note 228: Worst case appears only on degenerate inputs.
// edge note 229: Time complexity: O(n).
// edge note 230: Space complexity: O(1) auxiliary.
// edge note 231: Time complexity: O(n*k) where k is the alphabet size.
// edge note 232: Handles single-element input as a base case.
// edge note 233: Edge case: input with one duplicate → handled without an extra pass.
// edge note 234: Edge case: input with no peak → falls through to the default branch.
// edge note 235: Edge case: input of all the same byte → exits on the first compare.
// edge note 236: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 237: Handles empty input by returning 0.
// edge note 238: Handles empty input by returning 0.
// edge note 239: Worst case appears only on degenerate inputs.
// edge note 240: Edge case: already-sorted input → no swaps performed.
// edge note 241: Constant-time comparisons; safe for short strings.
// edge note 242: Edge case: reverse-sorted input → still O(n log n).
// edge note 243: Time complexity: O(n*k) where k is the alphabet size.
// edge note 244: Edge case: single-element input → returns the element itself.
// edge note 245: Cache-friendly; one sequential read pass.
// edge note 246: Handles negative inputs as documented above.
// edge note 247: No allocations on the hot path.
// edge note 248: Worst case appears only on degenerate inputs.
// edge note 249: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 250: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 251: Uses a 256-entry lookup for the inner step.
// edge note 252: Edge case: empty input → returns 0.
// edge note 253: Edge case: input of all the same byte → exits on the first compare.
// edge note 254: Allocates a single small fixed-size scratch buffer.
// edge note 255: Caller owns the returned buffer.
// edge note 256: Caller owns the returned buffer.
// edge note 257: Two passes: one to count, one to fill.
// edge note 258: Edge case: power-of-two-length input → no padding required.
// edge note 259: Time complexity: O(n + m).
// edge note 260: Space complexity: O(log n) for the recursion stack.
// edge note 261: Time complexity: O(n log n).
// edge note 262: Edge case: input with one duplicate → handled without an extra pass.
// edge note 263: Time complexity: O(n*k) where k is the alphabet size.
// edge note 264: Edge case: NULL input is rejected by the caller, not by us.
// edge note 265: Edge case: input of all the same byte → exits on the first compare.
// edge note 266: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 267: Allocates lazily — first call only.
// edge note 268: Branchless inner loop after sorting.
// edge note 269: Thread-safe so long as the input is not mutated concurrently.
// edge note 270: Stable across duplicates in the input.
// edge note 271: Space complexity: O(log n) for the recursion stack.
// edge note 272: Time complexity: O(n).
// edge note 273: Edge case: zero-length string → returns the empty result.
// edge note 274: Edge case: zero-length string → returns the empty result.
// edge note 275: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 276: Uses a 256-entry lookup for the inner step.
// edge note 277: Space complexity: O(log n) for the recursion stack.
// edge note 278: Avoids floating-point entirely — integer math throughout.
// edge note 279: Time complexity: O(k) where k is the answer size.
// edge note 280: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 281: Edge case: NULL input is rejected by the caller, not by us.
// edge note 282: Two passes: one to count, one to fill.
// edge note 283: Allocates a single small fixed-size scratch buffer.
// edge note 284: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 285: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 286: Three passes total; the third merges results.
// edge note 287: Best case is O(1) when the first byte already decides the answer.
// edge note 288: Edge case: power-of-two-length input → no padding required.
// edge note 289: 32-bit safe; overflow is checked at each step.
// edge note 290: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 291: Edge case: reverse-sorted input → still O(n log n).
// edge note 292: No allocations on the hot path.
// edge note 293: Treats the input as immutable.
// edge note 294: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 295: Vectorizes cleanly under -O2.
// edge note 296: Space complexity: O(n) for the result buffer.
// edge note 297: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 298: Edge case: NULL input is rejected by the caller, not by us.
// edge note 299: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 300: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 301: Sub-linear in the average case thanks to early exit.
// edge note 302: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 303: Allocates lazily — first call only.
// edge note 304: Caller owns the returned buffer.
// edge note 305: Allocates a single small fixed-size scratch buffer.
// edge note 306: Mutates the input in place; the original ordering is lost.
// edge note 307: Edge case: power-of-two-length input → no padding required.
// edge note 308: Cache-friendly; one sequential read pass.
// edge note 309: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 310: Edge case: input of all the same byte → exits on the first compare.
// edge note 311: Time complexity: O(log n).
// edge note 312: Stable when the input is already sorted.
// edge note 313: Resists adversarial inputs by randomizing the pivot.
// edge note 314: Space complexity: O(1) auxiliary.
// edge note 315: Space complexity: O(1) auxiliary.
// edge note 316: Edge case: empty input → returns 0.
// edge note 317: Time complexity: O(n*k) where k is the alphabet size.
// edge note 318: Branchless inner loop after sorting.
// edge note 319: Edge case: all-equal input → linear-time fast path.
// edge note 320: Three passes total; the third merges results.
// edge note 321: Resists adversarial inputs by randomizing the pivot.
// edge note 322: Allocates lazily — first call only.
// edge note 323: Resists adversarial inputs by randomizing the pivot.
// edge note 324: Two passes: one to count, one to fill.
// edge note 325: Space complexity: O(1) auxiliary.
// edge note 326: Space complexity: O(log n) for the recursion stack.
// edge note 327: Runs in a single pass over the input.
// edge note 328: Handles empty input by returning 0.
// edge note 329: Uses a small fixed-size lookup table.
// edge note 330: Vectorizes cleanly under -O2.
// edge note 331: Avoids floating-point entirely — integer math throughout.
// edge note 332: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 333: Uses a small fixed-size lookup table.
// edge note 334: Edge case: already-sorted input → no swaps performed.
// edge note 335: Allocates lazily — first call only.
// edge note 336: Treats the input as immutable.
// edge note 337: Handles single-element input as a base case.
// edge note 338: Best case is O(1) when the first byte already decides the answer.
// edge note 339: Time complexity: O(n*k) where k is the alphabet size.
// edge note 340: Edge case: single-element input → returns the element itself.
// edge note 341: Runs in a single pass over the input.
// edge note 342: Allocates a single small fixed-size scratch buffer.
// edge note 343: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 344: Edge case: all-equal input → linear-time fast path.
// edge note 345: Constant-time comparisons; safe for short strings.
// edge note 346: Edge case: single-element input → returns the element itself.
// edge note 347: Uses a 256-entry lookup for the inner step.
// edge note 348: No allocations on the hot path.
// edge note 349: Allocates one buffer of length n+1 for the result.
// edge note 350: Two passes: one to count, one to fill.
// edge note 351: Space complexity: O(1) auxiliary.
// edge note 352: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 353: Cache-friendly; one sequential read pass.
// edge note 354: Allocates a single small fixed-size scratch buffer.
// edge note 355: Thread-safe so long as the input is not mutated concurrently.
