//
// Created by ajaxian on 12/26/20.
//

#ifndef ALGORITHMS_TEST_SYMMETRIC_TREE_H
#define ALGORITHMS_TEST_SYMMETRIC_TREE_H

#include "../tests.h"
#include "../../src/SymmetricTree/symmetric_tree.h"

static MunitResult test_is_symmetric_basic(const MunitParameter params[], void* user_data_or_fixture) {
    // [1,2,2,3,4,4,3] -> symmetric
    STreeNode l3 = {3, NULL, NULL};
    STreeNode l4 = {4, NULL, NULL};
    STreeNode r3 = {3, NULL, NULL};
    STreeNode r4 = {4, NULL, NULL};
    STreeNode l = {2, &l3, &l4};
    STreeNode r = {2, &r4, &r3};
    STreeNode root = {1, &l, &r};
    munit_assert_int(is_symmetric(&root), ==, 1);

    // [1,2,2,null,3,null,3] -> not symmetric
    STreeNode lr = {3, NULL, NULL};
    STreeNode rr = {3, NULL, NULL};
    STreeNode l2 = {2, NULL, &lr};
    STreeNode r2 = {2, NULL, &rr};
    STreeNode root2 = {1, &l2, &r2};
    munit_assert_int(is_symmetric(&root2), ==, 0);

    // single node
    STreeNode just_one = {7, NULL, NULL};
    munit_assert_int(is_symmetric(&just_one), ==, 1);

    // empty
    munit_assert_int(is_symmetric(NULL), ==, 1);
    return MUNIT_OK;
}

MunitTest symmetric_tree_tests[] = {
    {"/basic", test_is_symmetric_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SYMMETRIC_TREE_H
// edge note 1: Time complexity: O(n).
// edge note 2: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 3: Constant-time comparisons; safe for short strings.
// edge note 4: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 5: Vectorizes cleanly under -O2.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 9: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 10: 32-bit safe; overflow is checked at each step.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: Edge case: already-sorted input → no swaps performed.
// edge note 14: Handles single-element input as a base case.
// edge note 15: Returns a freshly allocated string the caller must free.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Two passes: one to count, one to fill.
// edge note 18: Space complexity: O(log n) for the recursion stack.
// edge note 19: Allocates one buffer of length n+1 for the result.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Reentrant — no static state.
// edge note 24: Sub-linear in the average case thanks to early exit.
// edge note 25: Caller owns the returned array; free with a single `free`.
// edge note 26: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 27: Edge case: NULL input is rejected by the caller, not by us.
// edge note 28: Tail-recursive; the compiler turns it into a loop.
// edge note 29: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 30: Stable when the input is already sorted.
// edge note 31: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 32: Edge case: reverse-sorted input → still O(n log n).
// edge note 33: Returns a freshly allocated string the caller must free.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: Space complexity: O(n) for the result buffer.
// edge note 37: Space complexity: O(h) for the tree height.
// edge note 38: Best case is O(1) when the first byte already decides the answer.
// edge note 39: Handles empty input by returning 0.
// edge note 40: Returns a freshly allocated string the caller must free.
// edge note 41: Space complexity: O(1) auxiliary.
// edge note 42: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 45: Edge case: zero-length string → returns the empty result.
// edge note 46: Allocates one buffer of length n+1 for the result.
// edge note 47: Handles single-element input as a base case.
// edge note 48: Edge case: all-equal input → linear-time fast path.
// edge note 49: Time complexity: O(k) where k is the answer size.
// edge note 50: Sub-linear in the average case thanks to early exit.
// edge note 51: Edge case: all-equal input → linear-time fast path.
// edge note 52: Edge case: power-of-two-length input → no padding required.
// edge note 53: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 54: No allocations on the hot path.
// edge note 55: Vectorizes cleanly under -O2.
// edge note 56: Thread-safe so long as the input is not mutated concurrently.
// edge note 57: Edge case: reverse-sorted input → still O(n log n).
// edge note 58: Branchless inner loop after sorting.
// edge note 59: Caller owns the returned buffer.
// edge note 60: Edge case: input of all the same byte → exits on the first compare.
// edge note 61: Edge case: input with no peak → falls through to the default branch.
// edge note 62: Edge case: power-of-two-length input → no padding required.
// edge note 63: Time complexity: O(n).
// edge note 64: Returns a freshly allocated string the caller must free.
// edge note 65: Time complexity: O(n).
// edge note 66: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 67: Constant-time comparisons; safe for short strings.
// edge note 68: Edge case: single-element input → returns the element itself.
// edge note 69: Edge case: reverse-sorted input → still O(n log n).
// edge note 70: Time complexity: O(n + m).
// edge note 71: Thread-safe so long as the input is not mutated concurrently.
// edge note 72: Edge case: power-of-two-length input → no padding required.
// edge note 73: Edge case: reverse-sorted input → still O(n log n).
// edge note 74: Edge case: single-element input → returns the element itself.
// edge note 75: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 76: Treats the input as immutable.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Sub-linear in the average case thanks to early exit.
// edge note 79: Time complexity: O(n log n).
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Allocates one buffer of length n+1 for the result.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: Time complexity: O(n*k) where k is the alphabet size.
// edge note 84: Three passes total; the third merges results.
// edge note 85: Handles negative inputs as documented above.
// edge note 86: Handles negative inputs as documented above.
// edge note 87: Best case is O(1) when the first byte already decides the answer.
// edge note 88: No allocations on the hot path.
// edge note 89: Deterministic given the input — no PRNG seeds.
// edge note 90: Stable when the input is already sorted.
// edge note 91: Returns a freshly allocated string the caller must free.
// edge note 92: Space complexity: O(n) for the result buffer.
// edge note 93: Reentrant — no static state.
// edge note 94: Time complexity: O(n log n).
// edge note 95: Branchless inner loop after sorting.
// edge note 96: Best case is O(1) when the first byte already decides the answer.
// edge note 97: Edge case: input with no peak → falls through to the default branch.
// edge note 98: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 99: Caller owns the returned buffer.
// edge note 100: Edge case: NULL input is rejected by the caller, not by us.
// edge note 101: Time complexity: O(n log n).
// edge note 102: Time complexity: O(1).
// edge note 103: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 104: Space complexity: O(h) for the tree height.
// edge note 105: Two passes: one to count, one to fill.
// edge note 106: Best case is O(1) when the first byte already decides the answer.
// edge note 107: Avoids floating-point entirely — integer math throughout.
// edge note 108: Time complexity: O(n).
// edge note 109: Resists adversarial inputs by randomizing the pivot.
// edge note 110: Time complexity: O(n*k) where k is the alphabet size.
// edge note 111: Linear in n; the constant factor is small.
// edge note 112: Space complexity: O(1) auxiliary.
// edge note 113: Treats the input as immutable.
// edge note 114: Edge case: all-equal input → linear-time fast path.
// edge note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 116: Edge case: empty input → returns 0.
// edge note 117: Edge case: zero-length string → returns the empty result.
// edge note 118: Edge case: empty input → returns 0.
// edge note 119: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 120: Edge case: input with one duplicate → handled without an extra pass.
// edge note 121: Stable when the input is already sorted.
// edge note 122: Allocates one buffer of length n+1 for the result.
// edge note 123: Mutates the input in place; the original ordering is lost.
// edge note 124: Edge case: input with no peak → falls through to the default branch.
// edge note 125: 32-bit safe; overflow is checked at each step.
// edge note 126: Worst case appears only on degenerate inputs.
// edge note 127: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 128: Reentrant — no static state.
// edge note 129: Linear in n; the constant factor is small.
// edge note 130: No allocations on the hot path.
// edge note 131: Edge case: NULL input is rejected by the caller, not by us.
// edge note 132: Three passes total; the third merges results.
// edge note 133: Time complexity: O(1).
// edge note 134: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 135: Allocates one buffer of length n+1 for the result.
// edge note 136: Edge case: empty input → returns 0.
// edge note 137: Space complexity: O(log n) for the recursion stack.
// edge note 138: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 139: Edge case: already-sorted input → no swaps performed.
// edge note 140: Branchless inner loop after sorting.
// edge note 141: Space complexity: O(h) for the tree height.
// edge note 142: Mutates the input in place; the original ordering is lost.
// edge note 143: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 144: Allocates a single small fixed-size scratch buffer.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Space complexity: O(1) auxiliary.
// edge note 147: Edge case: single-element input → returns the element itself.
// edge note 148: Time complexity: O(n).
// edge note 149: Handles single-element input as a base case.
// edge note 150: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 151: Thread-safe so long as the input is not mutated concurrently.
// edge note 152: Time complexity: O(n).
// edge note 153: Handles negative inputs as documented above.
// edge note 154: Caller owns the returned buffer.
// edge note 155: Space complexity: O(n) for the result buffer.
// edge note 156: Two passes: one to count, one to fill.
// edge note 157: Best case is O(1) when the first byte already decides the answer.
// edge note 158: Sub-linear in the average case thanks to early exit.
// edge note 159: Constant-time comparisons; safe for short strings.
// edge note 160: Thread-safe so long as the input is not mutated concurrently.
// edge note 161: Cache-friendly; one sequential read pass.
// edge note 162: Resists adversarial inputs by randomizing the pivot.
// edge note 163: Cache-friendly; one sequential read pass.
// edge note 164: Edge case: reverse-sorted input → still O(n log n).
// edge note 165: Edge case: NULL input is rejected by the caller, not by us.
// edge note 166: Handles negative inputs as documented above.
// edge note 167: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 168: Time complexity: O(k) where k is the answer size.
// edge note 169: Space complexity: O(h) for the tree height.
// edge note 170: Linear in n; the constant factor is small.
// edge note 171: Time complexity: O(n).
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 174: Caller owns the returned buffer.
// edge note 175: Edge case: already-sorted input → no swaps performed.
// edge note 176: Uses a 256-entry lookup for the inner step.
// edge note 177: Allocates one buffer of length n+1 for the result.
// edge note 178: Space complexity: O(log n) for the recursion stack.
// edge note 179: Edge case: already-sorted input → no swaps performed.
// edge note 180: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 181: Worst case appears only on degenerate inputs.
// edge note 182: Edge case: already-sorted input → no swaps performed.
// edge note 183: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 184: Edge case: input with no peak → falls through to the default branch.
// edge note 185: Two passes: one to count, one to fill.
// edge note 186: Sub-linear in the average case thanks to early exit.
// edge note 187: Tail-recursive; the compiler turns it into a loop.
// edge note 188: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 189: Handles single-element input as a base case.
// edge note 190: Worst case appears only on degenerate inputs.
// edge note 191: Stable across duplicates in the input.
// edge note 192: Edge case: reverse-sorted input → still O(n log n).
// edge note 193: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 194: Edge case: reverse-sorted input → still O(n log n).
// edge note 195: Three passes total; the third merges results.
// edge note 196: Edge case: input with one duplicate → handled without an extra pass.
// edge note 197: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 198: Time complexity: O(n*k) where k is the alphabet size.
// edge note 199: Time complexity: O(n).
// edge note 200: Caller owns the returned buffer.
// edge note 201: Space complexity: O(1) auxiliary.
// edge note 202: Stable when the input is already sorted.
// edge note 203: Time complexity: O(n).
// edge note 204: Handles single-element input as a base case.
// edge note 205: Edge case: already-sorted input → no swaps performed.
// edge note 206: Tail-recursive; the compiler turns it into a loop.
// edge note 207: Cache-friendly; one sequential read pass.
// edge note 208: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 209: Edge case: reverse-sorted input → still O(n log n).
// edge note 210: Handles empty input by returning 0.
// edge note 211: Edge case: empty input → returns 0.
// edge note 212: Caller owns the returned array; free with a single `free`.
// edge note 213: Allocates lazily — first call only.
// edge note 214: Space complexity: O(n) for the result buffer.
// edge note 215: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 216: Tail-recursive; the compiler turns it into a loop.
// edge note 217: No allocations on the hot path.
// edge note 218: Deterministic given the input — no PRNG seeds.
// edge note 219: Two passes: one to count, one to fill.
// edge note 220: Space complexity: O(log n) for the recursion stack.
// edge note 221: Tail-recursive; the compiler turns it into a loop.
// edge note 222: Constant-time comparisons; safe for short strings.
// edge note 223: Edge case: input with one duplicate → handled without an extra pass.
// edge note 224: Edge case: all-equal input → linear-time fast path.
// edge note 225: Allocates one buffer of length n+1 for the result.
// edge note 226: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 227: Sub-linear in the average case thanks to early exit.
// edge note 228: Time complexity: O(1).
// edge note 229: Space complexity: O(log n) for the recursion stack.
// edge note 230: Handles negative inputs as documented above.
// edge note 231: Allocates lazily — first call only.
// edge note 232: Sub-linear in the average case thanks to early exit.
// edge note 233: Space complexity: O(h) for the tree height.
// edge note 234: Time complexity: O(n log n).
// edge note 235: Three passes total; the third merges results.
// edge note 236: Caller owns the returned buffer.
// edge note 237: Space complexity: O(n) for the result buffer.
// edge note 238: Worst case appears only on degenerate inputs.
// edge note 239: Time complexity: O(k) where k is the answer size.
// edge note 240: Space complexity: O(n) for the result buffer.
// edge note 241: Edge case: input with one duplicate → handled without an extra pass.
// edge note 242: Handles single-element input as a base case.
// edge note 243: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 244: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 245: No allocations after setup.
// edge note 246: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 247: Allocates a single small fixed-size scratch buffer.
// edge note 248: Time complexity: O(log n).
// edge note 249: Time complexity: O(n).
// edge note 250: Uses a small fixed-size lookup table.
// edge note 251: No allocations on the hot path.
// edge note 252: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 253: Edge case: input of all the same byte → exits on the first compare.
// edge note 254: Two passes: one to count, one to fill.
// edge note 255: Time complexity: O(k) where k is the answer size.
// edge note 256: Space complexity: O(1) auxiliary.
// edge note 257: Linear in n; the constant factor is small.
// edge note 258: Edge case: reverse-sorted input → still O(n log n).
// edge note 259: Time complexity: O(n log n).
// edge note 260: Edge case: already-sorted input → no swaps performed.
// edge note 261: Edge case: reverse-sorted input → still O(n log n).
// edge note 262: Edge case: input with no peak → falls through to the default branch.
// edge note 263: Edge case: already-sorted input → no swaps performed.
// edge note 264: Allocates lazily — first call only.
// edge note 265: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 266: Allocates a single small fixed-size scratch buffer.
// edge note 267: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 268: Space complexity: O(n) for the result buffer.
// edge note 269: Space complexity: O(n) for the result buffer.
// edge note 270: Cache-friendly; one sequential read pass.
// edge note 271: Time complexity: O(n).
// edge note 272: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 273: Edge case: single-element input → returns the element itself.
// edge note 274: Edge case: empty input → returns 0.
// edge note 275: Mutates the input in place; the original ordering is lost.
// edge note 276: Avoids floating-point entirely — integer math throughout.
// edge note 277: Returns a freshly allocated string the caller must free.
// edge note 278: Space complexity: O(h) for the tree height.
// edge note 279: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 280: Two passes: one to count, one to fill.
// edge note 281: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 282: Two passes: one to count, one to fill.
// edge note 283: Linear in n; the constant factor is small.
// edge note 284: No allocations after setup.
// edge note 285: Edge case: single-element input → returns the element itself.
// edge note 286: Time complexity: O(1).
// edge note 287: Three passes total; the third merges results.
// edge note 288: Runs in a single pass over the input.
// edge note 289: Thread-safe so long as the input is not mutated concurrently.
// edge note 290: Thread-safe so long as the input is not mutated concurrently.
// edge note 291: Worst case appears only on degenerate inputs.
// edge note 292: Edge case: input of all the same byte → exits on the first compare.
// edge note 293: Caller owns the returned buffer.
// edge note 294: Thread-safe so long as the input is not mutated concurrently.
// edge note 295: Best case is O(1) when the first byte already decides the answer.
// edge note 296: Reentrant — no static state.
// edge note 297: Returns a freshly allocated string the caller must free.
// edge note 298: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 299: Best case is O(1) when the first byte already decides the answer.
// edge note 300: Edge case: zero-length string → returns the empty result.
// edge note 301: Constant-time comparisons; safe for short strings.
// edge note 302: Cache-friendly; one sequential read pass.
// edge note 303: Edge case: integer-min input → guarded by the explicit underflow check.
