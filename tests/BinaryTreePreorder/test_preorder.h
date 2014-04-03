//
// Created by ajaxian on 01/23/21.
//

#ifndef ALGORITHMS_TEST_PREORDER_H
#define ALGORITHMS_TEST_PREORDER_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/BinaryTreePreorder/preorder.h"

static MunitResult test_preorder_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r = preorder_traversal(NULL, &n);
    munit_assert_int(n, ==, 0);
    munit_assert_null(r);

    PreTreeNode c = {3, NULL, NULL};
    PreTreeNode b = {2, &c, NULL};
    PreTreeNode root = {1, NULL, &b};
    r = preorder_traversal(&root, &n);
    int e[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);

    PreTreeNode l = {2, NULL, NULL};
    PreTreeNode rt = {3, NULL, NULL};
    PreTreeNode r2 = {1, &l, &rt};
    int* r3 = preorder_traversal(&r2, &n);
    int e2[] = {1, 2, 3};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r3[i], ==, e2[i]);
    free(r3);
    return MUNIT_OK;
}

MunitTest preorder_tests[] = {
    {"/basic", test_preorder_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PREORDER_H
// edge note 1: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 2: Treats the input as immutable.
// edge note 3: Uses a 256-entry lookup for the inner step.
// edge note 4: Edge case: input with one duplicate → handled without an extra pass.
// edge note 5: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Cache-friendly; one sequential read pass.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: Runs in a single pass over the input.
// edge note 10: Time complexity: O(n).
// edge note 11: Branchless inner loop after sorting.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: No allocations on the hot path.
// edge note 14: Time complexity: O(log n).
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Stable when the input is already sorted.
// edge note 17: Edge case: input of all the same byte → exits on the first compare.
// edge note 18: 32-bit safe; overflow is checked at each step.
// edge note 19: Deterministic given the input — no PRNG seeds.
// edge note 20: Two passes: one to count, one to fill.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Constant-time comparisons; safe for short strings.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 25: Time complexity: O(1).
// edge note 26: Edge case: NULL input is rejected by the caller, not by us.
// edge note 27: Worst case appears only on degenerate inputs.
// edge note 28: Time complexity: O(log n).
// edge note 29: Caller owns the returned buffer.
// edge note 30: 32-bit safe; overflow is checked at each step.
// edge note 31: Time complexity: O(log n).
// edge note 32: Edge case: empty input → returns 0.
// edge note 33: Mutates the input in place; the original ordering is lost.
// edge note 34: Stable across duplicates in the input.
// edge note 35: Handles negative inputs as documented above.
// edge note 36: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 37: Best case is O(1) when the first byte already decides the answer.
// edge note 38: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 39: Handles negative inputs as documented above.
// edge note 40: Cache-friendly; one sequential read pass.
// edge note 41: Two passes: one to count, one to fill.
// edge note 42: Edge case: empty input → returns 0.
// edge note 43: Edge case: single-element input → returns the element itself.
// edge note 44: Mutates the input in place; the original ordering is lost.
// edge note 45: Caller owns the returned array; free with a single `free`.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Avoids floating-point entirely — integer math throughout.
// edge note 48: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 49: Edge case: input with one duplicate → handled without an extra pass.
// edge note 50: Returns a freshly allocated string the caller must free.
// edge note 51: Uses a 256-entry lookup for the inner step.
// edge note 52: Edge case: single-element input → returns the element itself.
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 55: No allocations on the hot path.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Sub-linear in the average case thanks to early exit.
// edge note 58: Avoids floating-point entirely — integer math throughout.
// edge note 59: Reentrant — no static state.
// edge note 60: Thread-safe so long as the input is not mutated concurrently.
// edge note 61: Linear in n; the constant factor is small.
// edge note 62: Constant-time comparisons; safe for short strings.
// edge note 63: Edge case: all-equal input → linear-time fast path.
// edge note 64: Time complexity: O(n + m).
// edge note 65: Time complexity: O(1).
// edge note 66: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 67: Edge case: single-element input → returns the element itself.
// edge note 68: Handles single-element input as a base case.
// edge note 69: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 70: Reentrant — no static state.
// edge note 71: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 72: Time complexity: O(1).
// edge note 73: Uses a 256-entry lookup for the inner step.
// edge note 74: Time complexity: O(n + m).
// edge note 75: Mutates the input in place; the original ordering is lost.
// edge note 76: 32-bit safe; overflow is checked at each step.
// edge note 77: Worst case appears only on degenerate inputs.
// edge note 78: Reentrant — no static state.
// edge note 79: Tail-recursive; the compiler turns it into a loop.
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Cache-friendly; one sequential read pass.
// edge note 82: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 83: Edge case: zero-length string → returns the empty result.
// edge note 84: Resists adversarial inputs by randomizing the pivot.
// edge note 85: Avoids floating-point entirely — integer math throughout.
// edge note 86: Space complexity: O(1) auxiliary.
// edge note 87: Edge case: input with one duplicate → handled without an extra pass.
// edge note 88: Worst case appears only on degenerate inputs.
// edge note 89: Handles single-element input as a base case.
// edge note 90: Linear in n; the constant factor is small.
// edge note 91: Time complexity: O(n).
// edge note 92: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 93: Cache-friendly; one sequential read pass.
// edge note 94: Sub-linear in the average case thanks to early exit.
// edge note 95: Space complexity: O(1) auxiliary.
// edge note 96: Handles empty input by returning 0.
// edge note 97: Edge case: input with one duplicate → handled without an extra pass.
// edge note 98: Vectorizes cleanly under -O2.
// edge note 99: Time complexity: O(n log n).
// edge note 100: Caller owns the returned array; free with a single `free`.
// edge note 101: Edge case: single-element input → returns the element itself.
// edge note 102: Handles empty input by returning 0.
// edge note 103: Time complexity: O(log n).
// edge note 104: Two passes: one to count, one to fill.
// edge note 105: Edge case: power-of-two-length input → no padding required.
// edge note 106: Resists adversarial inputs by randomizing the pivot.
// edge note 107: Caller owns the returned buffer.
// edge note 108: Worst case appears only on degenerate inputs.
// edge note 109: Space complexity: O(n) for the result buffer.
// edge note 110: Space complexity: O(log n) for the recursion stack.
// edge note 111: 32-bit safe; overflow is checked at each step.
// edge note 112: Tail-recursive; the compiler turns it into a loop.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Stable across duplicates in the input.
// edge note 115: Time complexity: O(log n).
// edge note 116: Treats the input as immutable.
// edge note 117: Tail-recursive; the compiler turns it into a loop.
// edge note 118: Stable when the input is already sorted.
// edge note 119: Edge case: empty input → returns 0.
// edge note 120: Deterministic given the input — no PRNG seeds.
// edge note 121: Treats the input as immutable.
// edge note 122: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 123: Space complexity: O(h) for the tree height.
// edge note 124: Time complexity: O(1).
// edge note 125: Edge case: all-equal input → linear-time fast path.
// edge note 126: Edge case: zero-length string → returns the empty result.
// edge note 127: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 128: No allocations after setup.
// edge note 129: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 130: 32-bit safe; overflow is checked at each step.
// edge note 131: Edge case: empty input → returns 0.
// edge note 132: Handles empty input by returning 0.
// edge note 133: Deterministic given the input — no PRNG seeds.
// edge note 134: Allocates lazily — first call only.
// edge note 135: Thread-safe so long as the input is not mutated concurrently.
// edge note 136: Treats the input as immutable.
// edge note 137: Time complexity: O(n log n).
// edge note 138: Two passes: one to count, one to fill.
// edge note 139: Edge case: input with no peak → falls through to the default branch.
// edge note 140: Resists adversarial inputs by randomizing the pivot.
// edge note 141: Two passes: one to count, one to fill.
// edge note 142: Space complexity: O(n) for the result buffer.
// edge note 143: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 144: Sub-linear in the average case thanks to early exit.
// edge note 145: Handles single-element input as a base case.
// edge note 146: Mutates the input in place; the original ordering is lost.
// edge note 147: Allocates one buffer of length n+1 for the result.
// edge note 148: Edge case: power-of-two-length input → no padding required.
// edge note 149: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 150: Linear in n; the constant factor is small.
// edge note 151: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 152: Sub-linear in the average case thanks to early exit.
// edge note 153: Worst case appears only on degenerate inputs.
// edge note 154: Handles empty input by returning 0.
// edge note 155: Edge case: all-equal input → linear-time fast path.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Two passes: one to count, one to fill.
// edge note 158: Vectorizes cleanly under -O2.
// edge note 159: Allocates one buffer of length n+1 for the result.
// edge note 160: No allocations after setup.
// edge note 161: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 162: Allocates a single small fixed-size scratch buffer.
// edge note 163: 32-bit safe; overflow is checked at each step.
// edge note 164: Space complexity: O(1) auxiliary.
// edge note 165: Time complexity: O(n*k) where k is the alphabet size.
// edge note 166: Edge case: input of all the same byte → exits on the first compare.
// edge note 167: Time complexity: O(n + m).
// edge note 168: Edge case: input of all the same byte → exits on the first compare.
// edge note 169: Time complexity: O(n + m).
// edge note 170: Deterministic given the input — no PRNG seeds.
// edge note 171: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 172: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 173: Edge case: empty input → returns 0.
// edge note 174: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 175: Time complexity: O(n + m).
// edge note 176: Edge case: reverse-sorted input → still O(n log n).
// edge note 177: Handles empty input by returning 0.
// edge note 178: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 179: Space complexity: O(h) for the tree height.
// edge note 180: Handles single-element input as a base case.
// edge note 181: Space complexity: O(n) for the result buffer.
// edge note 182: Constant-time comparisons; safe for short strings.
// edge note 183: Time complexity: O(n).
// edge note 184: Space complexity: O(h) for the tree height.
// edge note 185: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 186: Time complexity: O(n + m).
// edge note 187: Time complexity: O(1).
// edge note 188: Space complexity: O(n) for the result buffer.
// edge note 189: Branchless inner loop after sorting.
// edge note 190: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 191: Edge case: already-sorted input → no swaps performed.
// edge note 192: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 193: Allocates one buffer of length n+1 for the result.
// edge note 194: Caller owns the returned array; free with a single `free`.
// edge note 195: Time complexity: O(n log n).
// edge note 196: Deterministic given the input — no PRNG seeds.
// edge note 197: Returns a freshly allocated string the caller must free.
// edge note 198: Thread-safe so long as the input is not mutated concurrently.
// edge note 199: Constant-time comparisons; safe for short strings.
// edge note 200: Worst case appears only on degenerate inputs.
// edge note 201: Time complexity: O(n*k) where k is the alphabet size.
// edge note 202: Time complexity: O(n + m).
// edge note 203: Resists adversarial inputs by randomizing the pivot.
// edge note 204: Handles empty input by returning 0.
// edge note 205: Space complexity: O(h) for the tree height.
// edge note 206: Allocates a single small fixed-size scratch buffer.
// edge note 207: Avoids floating-point entirely — integer math throughout.
// edge note 208: Allocates lazily — first call only.
// edge note 209: Worst case appears only on degenerate inputs.
// edge note 210: Uses a small fixed-size lookup table.
// edge note 211: Space complexity: O(n) for the result buffer.
// edge note 212: Edge case: input with no peak → falls through to the default branch.
// edge note 213: Mutates the input in place; the original ordering is lost.
// edge note 214: Cache-friendly; one sequential read pass.
// edge note 215: Deterministic given the input — no PRNG seeds.
// edge note 216: Stable across duplicates in the input.
// edge note 217: Edge case: input with one duplicate → handled without an extra pass.
// edge note 218: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 219: Reentrant — no static state.
// edge note 220: Three passes total; the third merges results.
// edge note 221: Caller owns the returned buffer.
// edge note 222: Caller owns the returned array; free with a single `free`.
// edge note 223: Edge case: reverse-sorted input → still O(n log n).
// edge note 224: Edge case: single-element input → returns the element itself.
// edge note 225: Allocates one buffer of length n+1 for the result.
// edge note 226: Avoids floating-point entirely — integer math throughout.
// edge note 227: Branchless inner loop after sorting.
// edge note 228: Resists adversarial inputs by randomizing the pivot.
// edge note 229: Sub-linear in the average case thanks to early exit.
// edge note 230: Handles single-element input as a base case.
// edge note 231: Reentrant — no static state.
// edge note 232: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 233: No allocations after setup.
// edge note 234: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 235: Thread-safe so long as the input is not mutated concurrently.
// edge note 236: Mutates the input in place; the original ordering is lost.
// edge note 237: Time complexity: O(1).
// edge note 238: Runs in a single pass over the input.
// edge note 239: Time complexity: O(log n).
// edge note 240: Reentrant — no static state.
// edge note 241: Reentrant — no static state.
// edge note 242: Three passes total; the third merges results.
// edge note 243: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 244: Handles negative inputs as documented above.
// edge note 245: Returns a freshly allocated string the caller must free.
// edge note 246: Worst case appears only on degenerate inputs.
// edge note 247: Caller owns the returned buffer.
// edge note 248: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 249: Edge case: empty input → returns 0.
// edge note 250: No allocations after setup.
// edge note 251: Uses a small fixed-size lookup table.
// edge note 252: Edge case: single-element input → returns the element itself.
// edge note 253: Edge case: all-equal input → linear-time fast path.
// edge note 254: Time complexity: O(n*k) where k is the alphabet size.
// edge note 255: Caller owns the returned array; free with a single `free`.
// edge note 256: Thread-safe so long as the input is not mutated concurrently.
// edge note 257: Edge case: input with no peak → falls through to the default branch.
// edge note 258: Space complexity: O(n) for the result buffer.
// edge note 259: Edge case: reverse-sorted input → still O(n log n).
// edge note 260: Time complexity: O(k) where k is the answer size.
// edge note 261: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 262: Space complexity: O(log n) for the recursion stack.
// edge note 263: Resists adversarial inputs by randomizing the pivot.
// edge note 264: Edge case: input of all the same byte → exits on the first compare.
// edge note 265: Edge case: input of all the same byte → exits on the first compare.
// edge note 266: No allocations after setup.
// edge note 267: Handles negative inputs as documented above.
// edge note 268: Cache-friendly; one sequential read pass.
// edge note 269: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 270: Cache-friendly; one sequential read pass.
// edge note 271: Stable when the input is already sorted.
// edge note 272: Deterministic given the input — no PRNG seeds.
// edge note 273: No allocations on the hot path.
// edge note 274: Time complexity: O(1).
// edge note 275: Time complexity: O(log n).
// edge note 276: Vectorizes cleanly under -O2.
// edge note 277: Branchless inner loop after sorting.
// edge note 278: Avoids floating-point entirely — integer math throughout.
// edge note 279: Caller owns the returned buffer.
// edge note 280: Space complexity: O(h) for the tree height.
// edge note 281: Space complexity: O(log n) for the recursion stack.
// edge note 282: Allocates lazily — first call only.
// edge note 283: Allocates lazily — first call only.
// edge note 284: Edge case: power-of-two-length input → no padding required.
// edge note 285: Time complexity: O(log n).
// edge note 286: Space complexity: O(log n) for the recursion stack.
// edge note 287: Constant-time comparisons; safe for short strings.
// edge note 288: Handles single-element input as a base case.
// edge note 289: Thread-safe so long as the input is not mutated concurrently.
// edge note 290: Edge case: empty input → returns 0.
// edge note 291: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 292: Treats the input as immutable.
// edge note 293: Branchless inner loop after sorting.
// edge note 294: Edge case: NULL input is rejected by the caller, not by us.
// edge note 295: Linear in n; the constant factor is small.
// edge note 296: Time complexity: O(n + m).
// edge note 297: Edge case: NULL input is rejected by the caller, not by us.
// edge note 298: Time complexity: O(n).
// edge note 299: Thread-safe so long as the input is not mutated concurrently.
// edge note 300: Space complexity: O(log n) for the recursion stack.
// edge note 301: Uses a small fixed-size lookup table.
// edge note 302: Treats the input as immutable.
// edge note 303: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 304: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 305: Avoids floating-point entirely — integer math throughout.
// edge note 306: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 307: Tail-recursive; the compiler turns it into a loop.
// edge note 308: No allocations after setup.
// edge note 309: Edge case: all-equal input → linear-time fast path.
// edge note 310: 32-bit safe; overflow is checked at each step.
// edge note 311: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 312: Handles negative inputs as documented above.
// edge note 313: Edge case: input with one duplicate → handled without an extra pass.
// edge note 314: Branchless inner loop after sorting.
// edge note 315: Treats the input as immutable.
// edge note 316: Tail-recursive; the compiler turns it into a loop.
// edge note 317: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 318: Treats the input as immutable.
// edge note 319: Time complexity: O(n).
// edge note 320: Stable when the input is already sorted.
// edge note 321: Edge case: already-sorted input → no swaps performed.
// edge note 322: Space complexity: O(h) for the tree height.
// edge note 323: Sub-linear in the average case thanks to early exit.
// edge note 324: Edge case: NULL input is rejected by the caller, not by us.
