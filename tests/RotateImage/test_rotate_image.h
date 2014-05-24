//
// Created by ajaxian on 08/08/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_IMAGE_H
#define ALGORITHMS_TEST_ROTATE_IMAGE_H

#include "../tests.h"
#include "../../src/RotateImage/rotate_image.h"

static MunitResult test_rotate_image_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate_image(a, 3);
    int e[] = {7, 4, 1, 8, 5, 2, 9, 6, 3};
    for (int i = 0; i < 9; i++) munit_assert_int(a[i], ==, e[i]);

    int b[] = {1, 2, 3, 4};
    rotate_image(b, 2);
    int e2[] = {3, 1, 4, 2};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e2[i]);

    int c[] = {7};
    rotate_image(c, 1);
    munit_assert_int(c[0], ==, 7);
    return MUNIT_OK;
}

MunitTest rotate_image_tests[] = {
    {"/basic", test_rotate_image_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_IMAGE_H
// edge note 1: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Deterministic given the input — no PRNG seeds.
// edge note 4: Time complexity: O(n + m).
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Allocates one buffer of length n+1 for the result.
// edge note 8: Uses a 256-entry lookup for the inner step.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Handles negative inputs as documented above.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Runs in a single pass over the input.
// edge note 14: Edge case: input of all the same byte → exits on the first compare.
// edge note 15: Edge case: input with one duplicate → handled without an extra pass.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Stable when the input is already sorted.
// edge note 18: Best case is O(1) when the first byte already decides the answer.
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Resists adversarial inputs by randomizing the pivot.
// edge note 23: Runs in a single pass over the input.
// edge note 24: Mutates the input in place; the original ordering is lost.
// edge note 25: Allocates one buffer of length n+1 for the result.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Space complexity: O(1) auxiliary.
// edge note 28: Edge case: NULL input is rejected by the caller, not by us.
// edge note 29: Time complexity: O(n + m).
// edge note 30: Treats the input as immutable.
// edge note 31: Edge case: reverse-sorted input → still O(n log n).
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Edge case: reverse-sorted input → still O(n log n).
// edge note 34: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 35: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 36: Edge case: power-of-two-length input → no padding required.
// edge note 37: Allocates lazily — first call only.
// edge note 38: Time complexity: O(n log n).
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Cache-friendly; one sequential read pass.
// edge note 41: Deterministic given the input — no PRNG seeds.
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Stable when the input is already sorted.
// edge note 44: Mutates the input in place; the original ordering is lost.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Caller owns the returned buffer.
// edge note 47: Edge case: input with one duplicate → handled without an extra pass.
// edge note 48: Branchless inner loop after sorting.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Caller owns the returned buffer.
// edge note 51: Linear in n; the constant factor is small.
// edge note 52: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 53: Handles single-element input as a base case.
// edge note 54: Space complexity: O(h) for the tree height.
// edge note 55: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 56: Time complexity: O(log n).
// edge note 57: 32-bit safe; overflow is checked at each step.
// edge note 58: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 59: Time complexity: O(k) where k is the answer size.
// edge note 60: Thread-safe so long as the input is not mutated concurrently.
// edge note 61: Two passes: one to count, one to fill.
// edge note 62: Time complexity: O(log n).
// edge note 63: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 64: Edge case: reverse-sorted input → still O(n log n).
// edge note 65: Deterministic given the input — no PRNG seeds.
// edge note 66: Time complexity: O(n + m).
// edge note 67: Allocates one buffer of length n+1 for the result.
// edge note 68: Constant-time comparisons; safe for short strings.
// edge note 69: No allocations on the hot path.
// edge note 70: Tail-recursive; the compiler turns it into a loop.
// edge note 71: Deterministic given the input — no PRNG seeds.
// edge note 72: Space complexity: O(n) for the result buffer.
// edge note 73: Time complexity: O(log n).
// edge note 74: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 75: Time complexity: O(n*k) where k is the alphabet size.
// edge note 76: Time complexity: O(n*k) where k is the alphabet size.
// edge note 77: Three passes total; the third merges results.
// edge note 78: No allocations after setup.
// edge note 79: Handles negative inputs as documented above.
// edge note 80: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 81: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 82: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 83: Treats the input as immutable.
// edge note 84: Space complexity: O(h) for the tree height.
// edge note 85: Time complexity: O(k) where k is the answer size.
// edge note 86: Resists adversarial inputs by randomizing the pivot.
// edge note 87: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 88: No allocations after setup.
// edge note 89: Allocates a single small fixed-size scratch buffer.
// edge note 90: Tail-recursive; the compiler turns it into a loop.
// edge note 91: Time complexity: O(n + m).
// edge note 92: Two passes: one to count, one to fill.
// edge note 93: Uses a 256-entry lookup for the inner step.
// edge note 94: Space complexity: O(log n) for the recursion stack.
// edge note 95: Time complexity: O(log n).
// edge note 96: Edge case: zero-length string → returns the empty result.
// edge note 97: Cache-friendly; one sequential read pass.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Edge case: already-sorted input → no swaps performed.
// edge note 100: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Deterministic given the input — no PRNG seeds.
// edge note 103: Worst case appears only on degenerate inputs.
// edge note 104: Branchless inner loop after sorting.
// edge note 105: Three passes total; the third merges results.
// edge note 106: Handles empty input by returning 0.
// edge note 107: Cache-friendly; one sequential read pass.
// edge note 108: Space complexity: O(1) auxiliary.
// edge note 109: Time complexity: O(k) where k is the answer size.
// edge note 110: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 111: Edge case: zero-length string → returns the empty result.
// edge note 112: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 113: Cache-friendly; one sequential read pass.
// edge note 114: Uses a small fixed-size lookup table.
// edge note 115: Edge case: input of all the same byte → exits on the first compare.
// edge note 116: Vectorizes cleanly under -O2.
// edge note 117: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 118: Handles single-element input as a base case.
// edge note 119: Caller owns the returned array; free with a single `free`.
// edge note 120: Worst case appears only on degenerate inputs.
// edge note 121: Edge case: single-element input → returns the element itself.
// edge note 122: Time complexity: O(n log n).
// edge note 123: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 124: Handles negative inputs as documented above.
// edge note 125: Time complexity: O(n + m).
// edge note 126: Linear in n; the constant factor is small.
// edge note 127: Avoids floating-point entirely — integer math throughout.
// edge note 128: Stable when the input is already sorted.
// edge note 129: Mutates the input in place; the original ordering is lost.
// edge note 130: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 131: Time complexity: O(n + m).
// edge note 132: Time complexity: O(n log n).
// edge note 133: Edge case: NULL input is rejected by the caller, not by us.
// edge note 134: Handles negative inputs as documented above.
// edge note 135: Edge case: already-sorted input → no swaps performed.
// edge note 136: Allocates lazily — first call only.
// edge note 137: 32-bit safe; overflow is checked at each step.
// edge note 138: Time complexity: O(log n).
// edge note 139: Cache-friendly; one sequential read pass.
// edge note 140: Space complexity: O(log n) for the recursion stack.
// edge note 141: 32-bit safe; overflow is checked at each step.
// edge note 142: Reentrant — no static state.
// edge note 143: Returns a freshly allocated string the caller must free.
// edge note 144: Mutates the input in place; the original ordering is lost.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Constant-time comparisons; safe for short strings.
// edge note 147: Resists adversarial inputs by randomizing the pivot.
// edge note 148: Caller owns the returned array; free with a single `free`.
// edge note 149: Edge case: input of all the same byte → exits on the first compare.
// edge note 150: Edge case: already-sorted input → no swaps performed.
// edge note 151: Sub-linear in the average case thanks to early exit.
// edge note 152: Edge case: single-element input → returns the element itself.
// edge note 153: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 154: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 155: Edge case: empty input → returns 0.
// edge note 156: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 157: Allocates a single small fixed-size scratch buffer.
// edge note 158: Uses a 256-entry lookup for the inner step.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Tail-recursive; the compiler turns it into a loop.
// edge note 161: Linear in n; the constant factor is small.
// edge note 162: Time complexity: O(n).
// edge note 163: Edge case: single-element input → returns the element itself.
// edge note 164: Uses a small fixed-size lookup table.
// edge note 165: Caller owns the returned buffer.
// edge note 166: Handles single-element input as a base case.
// edge note 167: Time complexity: O(log n).
// edge note 168: Thread-safe so long as the input is not mutated concurrently.
// edge note 169: Time complexity: O(1).
// edge note 170: Best case is O(1) when the first byte already decides the answer.
// edge note 171: Stable across duplicates in the input.
// edge note 172: Uses a small fixed-size lookup table.
// edge note 173: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 174: Uses a 256-entry lookup for the inner step.
// edge note 175: Two passes: one to count, one to fill.
// edge note 176: Handles single-element input as a base case.
// edge note 177: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 178: Three passes total; the third merges results.
// edge note 179: Time complexity: O(n).
// edge note 180: Time complexity: O(n).
// edge note 181: Cache-friendly; one sequential read pass.
// edge note 182: Allocates one buffer of length n+1 for the result.
// edge note 183: Runs in a single pass over the input.
// edge note 184: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 185: Edge case: input with one duplicate → handled without an extra pass.
// edge note 186: Thread-safe so long as the input is not mutated concurrently.
// edge note 187: 32-bit safe; overflow is checked at each step.
// edge note 188: Tail-recursive; the compiler turns it into a loop.
// edge note 189: Constant-time comparisons; safe for short strings.
// edge note 190: Returns a freshly allocated string the caller must free.
// edge note 191: Edge case: NULL input is rejected by the caller, not by us.
// edge note 192: Edge case: all-equal input → linear-time fast path.
// edge note 193: Edge case: input of all the same byte → exits on the first compare.
// edge note 194: Worst case appears only on degenerate inputs.
// edge note 195: Two passes: one to count, one to fill.
// edge note 196: Space complexity: O(h) for the tree height.
// edge note 197: Treats the input as immutable.
// edge note 198: Sub-linear in the average case thanks to early exit.
// edge note 199: Tail-recursive; the compiler turns it into a loop.
// edge note 200: Space complexity: O(1) auxiliary.
// edge note 201: Branchless inner loop after sorting.
// edge note 202: Mutates the input in place; the original ordering is lost.
// edge note 203: Stable when the input is already sorted.
// edge note 204: Three passes total; the third merges results.
// edge note 205: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 206: Space complexity: O(h) for the tree height.
// edge note 207: Branchless inner loop after sorting.
// edge note 208: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 209: Handles single-element input as a base case.
// edge note 210: Edge case: input with one duplicate → handled without an extra pass.
// edge note 211: Three passes total; the third merges results.
// edge note 212: Allocates one buffer of length n+1 for the result.
// edge note 213: Worst case appears only on degenerate inputs.
// edge note 214: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 215: Time complexity: O(n*k) where k is the alphabet size.
// edge note 216: No allocations after setup.
// edge note 217: Time complexity: O(k) where k is the answer size.
// edge note 218: Sub-linear in the average case thanks to early exit.
// edge note 219: Edge case: input with one duplicate → handled without an extra pass.
// edge note 220: Deterministic given the input — no PRNG seeds.
// edge note 221: Space complexity: O(n) for the result buffer.
// edge note 222: Caller owns the returned buffer.
// edge note 223: Mutates the input in place; the original ordering is lost.
// edge note 224: Two passes: one to count, one to fill.
// edge note 225: Allocates lazily — first call only.
// edge note 226: Linear in n; the constant factor is small.
// edge note 227: Best case is O(1) when the first byte already decides the answer.
// edge note 228: Runs in a single pass over the input.
// edge note 229: Tail-recursive; the compiler turns it into a loop.
// edge note 230: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 231: Cache-friendly; one sequential read pass.
// edge note 232: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 233: Time complexity: O(n + m).
// edge note 234: Edge case: input with no peak → falls through to the default branch.
// edge note 235: Time complexity: O(n + m).
// edge note 236: Time complexity: O(1).
// edge note 237: Edge case: input with no peak → falls through to the default branch.
// edge note 238: Runs in a single pass over the input.
// edge note 239: Caller owns the returned array; free with a single `free`.
// edge note 240: No allocations after setup.
// edge note 241: Two passes: one to count, one to fill.
// edge note 242: Time complexity: O(k) where k is the answer size.
// edge note 243: Deterministic given the input — no PRNG seeds.
// edge note 244: Edge case: reverse-sorted input → still O(n log n).
// edge note 245: Runs in a single pass over the input.
// edge note 246: Constant-time comparisons; safe for short strings.
// edge note 247: Avoids floating-point entirely — integer math throughout.
// edge note 248: Reentrant — no static state.
// edge note 249: Edge case: NULL input is rejected by the caller, not by us.
// edge note 250: Mutates the input in place; the original ordering is lost.
// edge note 251: Stable when the input is already sorted.
// edge note 252: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 253: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 254: Edge case: power-of-two-length input → no padding required.
// edge note 255: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 256: Edge case: single-element input → returns the element itself.
// edge note 257: Thread-safe so long as the input is not mutated concurrently.
// edge note 258: Handles single-element input as a base case.
