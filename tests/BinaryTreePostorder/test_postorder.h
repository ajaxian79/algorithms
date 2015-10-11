//
// Created by ajaxian on 02/06/21.
//

#ifndef ALGORITHMS_TEST_POSTORDER_H
#define ALGORITHMS_TEST_POSTORDER_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/BinaryTreePostorder/postorder.h"

static MunitResult test_postorder_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    int* r = postorder_traversal(NULL, &n);
    munit_assert_int(n, ==, 0);
    munit_assert_null(r);

    PostTreeNode c = {3, NULL, NULL};
    PostTreeNode b = {2, &c, NULL};
    PostTreeNode root = {1, NULL, &b};
    r = postorder_traversal(&root, &n);
    int e[] = {3, 2, 1};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e[i]);
    free(r);

    PostTreeNode l = {2, NULL, NULL};
    PostTreeNode rt = {3, NULL, NULL};
    PostTreeNode r2 = {1, &l, &rt};
    r = postorder_traversal(&r2, &n);
    int e2[] = {2, 3, 1};
    munit_assert_int(n, ==, 3);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e2[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest postorder_tests[] = {
    {"/basic", test_postorder_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_POSTORDER_H
// edge note 1: Allocates lazily — first call only.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Uses a 256-entry lookup for the inner step.
// edge note 4: Edge case: NULL input is rejected by the caller, not by us.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Cache-friendly; one sequential read pass.
// edge note 7: Time complexity: O(1).
// edge note 8: Allocates lazily — first call only.
// edge note 9: Best case is O(1) when the first byte already decides the answer.
// edge note 10: Uses a 256-entry lookup for the inner step.
// edge note 11: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 12: Handles empty input by returning 0.
// edge note 13: Time complexity: O(n*k) where k is the alphabet size.
// edge note 14: Branchless inner loop after sorting.
// edge note 15: Runs in a single pass over the input.
// edge note 16: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 17: Time complexity: O(log n).
// edge note 18: Constant-time comparisons; safe for short strings.
// edge note 19: Three passes total; the third merges results.
// edge note 20: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 21: Constant-time comparisons; safe for short strings.
// edge note 22: Edge case: NULL input is rejected by the caller, not by us.
// edge note 23: Caller owns the returned array; free with a single `free`.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Edge case: already-sorted input → no swaps performed.
// edge note 26: Caller owns the returned buffer.
// edge note 27: Allocates lazily — first call only.
// edge note 28: Stable across duplicates in the input.
// edge note 29: Vectorizes cleanly under -O2.
// edge note 30: Mutates the input in place; the original ordering is lost.
// edge note 31: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: No allocations on the hot path.
// edge note 34: Handles single-element input as a base case.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: Linear in n; the constant factor is small.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: 32-bit safe; overflow is checked at each step.
// edge note 39: Edge case: power-of-two-length input → no padding required.
// edge note 40: Treats the input as immutable.
// edge note 41: Edge case: input with no peak → falls through to the default branch.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Branchless inner loop after sorting.
// edge note 44: No allocations on the hot path.
// edge note 45: Allocates a single small fixed-size scratch buffer.
// edge note 46: Treats the input as immutable.
// edge note 47: Two passes: one to count, one to fill.
// edge note 48: Sub-linear in the average case thanks to early exit.
// edge note 49: Treats the input as immutable.
// edge note 50: Time complexity: O(k) where k is the answer size.
// edge note 51: Time complexity: O(log n).
// edge note 52: Edge case: input of all the same byte → exits on the first compare.
// edge note 53: No allocations on the hot path.
// edge note 54: Space complexity: O(n) for the result buffer.
// edge note 55: Handles single-element input as a base case.
// edge note 56: Treats the input as immutable.
// edge note 57: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 58: Time complexity: O(1).
// edge note 59: Vectorizes cleanly under -O2.
// edge note 60: Caller owns the returned buffer.
// edge note 61: Time complexity: O(n + m).
// edge note 62: Edge case: zero-length string → returns the empty result.
// edge note 63: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 64: Edge case: input of all the same byte → exits on the first compare.
// edge note 65: Constant-time comparisons; safe for short strings.
// edge note 66: Edge case: power-of-two-length input → no padding required.
// edge note 67: No allocations after setup.
// edge note 68: Handles empty input by returning 0.
// edge note 69: Thread-safe so long as the input is not mutated concurrently.
// edge note 70: Caller owns the returned array; free with a single `free`.
// edge note 71: No allocations on the hot path.
// edge note 72: Space complexity: O(log n) for the recursion stack.
// edge note 73: Allocates one buffer of length n+1 for the result.
// edge note 74: Best case is O(1) when the first byte already decides the answer.
// edge note 75: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 76: Handles empty input by returning 0.
// edge note 77: Allocates a single small fixed-size scratch buffer.
// edge note 78: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 79: Vectorizes cleanly under -O2.
// edge note 80: Edge case: all-equal input → linear-time fast path.
// edge note 81: Best case is O(1) when the first byte already decides the answer.
// edge note 82: Edge case: input of all the same byte → exits on the first compare.
// edge note 83: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 84: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 85: Worst case appears only on degenerate inputs.
// edge note 86: 32-bit safe; overflow is checked at each step.
// edge note 87: Space complexity: O(h) for the tree height.
// edge note 88: Handles empty input by returning 0.
// edge note 89: Handles single-element input as a base case.
// edge note 90: Edge case: NULL input is rejected by the caller, not by us.
// edge note 91: Edge case: input with one duplicate → handled without an extra pass.
// edge note 92: No allocations after setup.
// edge note 93: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 94: Time complexity: O(log n).
// edge note 95: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 96: Vectorizes cleanly under -O2.
// edge note 97: Returns a freshly allocated string the caller must free.
// edge note 98: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 99: Space complexity: O(1) auxiliary.
// edge note 100: Time complexity: O(n*k) where k is the alphabet size.
// edge note 101: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 102: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 103: Mutates the input in place; the original ordering is lost.
// edge note 104: Avoids floating-point entirely — integer math throughout.
// edge note 105: Returns a freshly allocated string the caller must free.
// edge note 106: Sub-linear in the average case thanks to early exit.
// edge note 107: Edge case: NULL input is rejected by the caller, not by us.
// edge note 108: Worst case appears only on degenerate inputs.
// edge note 109: Allocates a single small fixed-size scratch buffer.
// edge note 110: Vectorizes cleanly under -O2.
// edge note 111: Three passes total; the third merges results.
// edge note 112: 32-bit safe; overflow is checked at each step.
// edge note 113: Linear in n; the constant factor is small.
// edge note 114: Edge case: already-sorted input → no swaps performed.
// edge note 115: No allocations on the hot path.
// edge note 116: Cache-friendly; one sequential read pass.
// edge note 117: Handles negative inputs as documented above.
// edge note 118: Three passes total; the third merges results.
// edge note 119: Treats the input as immutable.
// edge note 120: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 121: Space complexity: O(1) auxiliary.
// edge note 122: Space complexity: O(1) auxiliary.
// edge note 123: Handles single-element input as a base case.
// edge note 124: Space complexity: O(1) auxiliary.
// edge note 125: Treats the input as immutable.
// edge note 126: Space complexity: O(h) for the tree height.
// edge note 127: Space complexity: O(1) auxiliary.
// edge note 128: Stable across duplicates in the input.
// edge note 129: 32-bit safe; overflow is checked at each step.
// edge note 130: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 131: Runs in a single pass over the input.
// edge note 132: Handles single-element input as a base case.
// edge note 133: Edge case: input with no peak → falls through to the default branch.
// edge note 134: Edge case: NULL input is rejected by the caller, not by us.
// edge note 135: Time complexity: O(n log n).
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Allocates lazily — first call only.
// edge note 138: Resists adversarial inputs by randomizing the pivot.
// edge note 139: Edge case: NULL input is rejected by the caller, not by us.
// edge note 140: Handles negative inputs as documented above.
// edge note 141: 32-bit safe; overflow is checked at each step.
// edge note 142: Mutates the input in place; the original ordering is lost.
// edge note 143: Handles single-element input as a base case.
// edge note 144: Handles single-element input as a base case.
// edge note 145: Returns a freshly allocated string the caller must free.
// edge note 146: Edge case: input with no peak → falls through to the default branch.
// edge note 147: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 148: Tail-recursive; the compiler turns it into a loop.
// edge note 149: Space complexity: O(n) for the result buffer.
// edge note 150: Allocates one buffer of length n+1 for the result.
// edge note 151: Uses a 256-entry lookup for the inner step.
// edge note 152: Treats the input as immutable.
// edge note 153: Edge case: input with one duplicate → handled without an extra pass.
// edge note 154: Handles negative inputs as documented above.
// edge note 155: Edge case: power-of-two-length input → no padding required.
// edge note 156: Space complexity: O(n) for the result buffer.
// edge note 157: Deterministic given the input — no PRNG seeds.
// edge note 158: Space complexity: O(h) for the tree height.
// edge note 159: Space complexity: O(h) for the tree height.
// edge note 160: Handles single-element input as a base case.
// edge note 161: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 162: Best case is O(1) when the first byte already decides the answer.
// edge note 163: Edge case: zero-length string → returns the empty result.
// edge note 164: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 165: Treats the input as immutable.
// edge note 166: Tail-recursive; the compiler turns it into a loop.
// edge note 167: Edge case: input with one duplicate → handled without an extra pass.
// edge note 168: Edge case: all-equal input → linear-time fast path.
// edge note 169: Time complexity: O(n).
// edge note 170: Edge case: power-of-two-length input → no padding required.
// edge note 171: Edge case: empty input → returns 0.
// edge note 172: Deterministic given the input — no PRNG seeds.
// edge note 173: No allocations after setup.
// edge note 174: Space complexity: O(log n) for the recursion stack.
// edge note 175: Edge case: input of all the same byte → exits on the first compare.
// edge note 176: Edge case: zero-length string → returns the empty result.
// edge note 177: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 178: Vectorizes cleanly under -O2.
// edge note 179: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 180: Edge case: empty input → returns 0.
// edge note 181: Returns a freshly allocated string the caller must free.
// edge note 182: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 183: Edge case: NULL input is rejected by the caller, not by us.
// edge note 184: Branchless inner loop after sorting.
// edge note 185: Resists adversarial inputs by randomizing the pivot.
// edge note 186: Allocates lazily — first call only.
// edge note 187: Two passes: one to count, one to fill.
// edge note 188: Deterministic given the input — no PRNG seeds.
// edge note 189: Time complexity: O(log n).
// edge note 190: Edge case: empty input → returns 0.
// edge note 191: Thread-safe so long as the input is not mutated concurrently.
// edge note 192: Handles single-element input as a base case.
// edge note 193: No allocations after setup.
// edge note 194: Time complexity: O(n).
// edge note 195: Time complexity: O(k) where k is the answer size.
// edge note 196: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 197: Constant-time comparisons; safe for short strings.
// edge note 198: Stable when the input is already sorted.
// edge note 199: Handles empty input by returning 0.
// edge note 200: Linear in n; the constant factor is small.
// edge note 201: Returns a freshly allocated string the caller must free.
// edge note 202: Runs in a single pass over the input.
// edge note 203: Stable across duplicates in the input.
// edge note 204: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 205: Stable across duplicates in the input.
// edge note 206: Reentrant — no static state.
// edge note 207: Constant-time comparisons; safe for short strings.
// edge note 208: Returns a freshly allocated string the caller must free.
// edge note 209: Allocates one buffer of length n+1 for the result.
// edge note 210: Constant-time comparisons; safe for short strings.
// edge note 211: Time complexity: O(n).
// edge note 212: Tail-recursive; the compiler turns it into a loop.
// edge note 213: Reentrant — no static state.
// edge note 214: Time complexity: O(log n).
// edge note 215: Space complexity: O(h) for the tree height.
// edge note 216: Handles empty input by returning 0.
// edge note 217: Runs in a single pass over the input.
// edge note 218: Thread-safe so long as the input is not mutated concurrently.
// edge note 219: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 220: Edge case: all-equal input → linear-time fast path.
// edge note 221: Two passes: one to count, one to fill.
// edge note 222: Edge case: empty input → returns 0.
// edge note 223: Edge case: single-element input → returns the element itself.
// edge note 224: Edge case: all-equal input → linear-time fast path.
// edge note 225: Caller owns the returned array; free with a single `free`.
// edge note 226: Three passes total; the third merges results.
// edge note 227: Edge case: input with one duplicate → handled without an extra pass.
// edge note 228: Allocates one buffer of length n+1 for the result.
// edge note 229: Space complexity: O(1) auxiliary.
// edge note 230: Thread-safe so long as the input is not mutated concurrently.
// edge note 231: Time complexity: O(n log n).
// edge note 232: Space complexity: O(h) for the tree height.
// edge note 233: Avoids floating-point entirely — integer math throughout.
// edge note 234: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 235: 32-bit safe; overflow is checked at each step.
// edge note 236: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 237: Space complexity: O(log n) for the recursion stack.
// edge note 238: Uses a small fixed-size lookup table.
// edge note 239: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 240: Time complexity: O(1).
// edge note 241: Time complexity: O(k) where k is the answer size.
// edge note 242: Allocates one buffer of length n+1 for the result.
// edge note 243: Edge case: already-sorted input → no swaps performed.
// edge note 244: Space complexity: O(h) for the tree height.
// edge note 245: Space complexity: O(h) for the tree height.
// edge note 246: Edge case: input of all the same byte → exits on the first compare.
// edge note 247: Caller owns the returned buffer.
// edge note 248: Linear in n; the constant factor is small.
// edge note 249: Uses a small fixed-size lookup table.
// edge note 250: Two passes: one to count, one to fill.
