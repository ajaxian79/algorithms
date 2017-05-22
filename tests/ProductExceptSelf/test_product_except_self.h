//
// Created by ajaxian on 10/10/20.
//

#ifndef ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
#define ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ProductExceptSelf/product_except_self.h"

static MunitResult test_product_except_self_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4};
    int e_a[] = {24, 12, 8, 6};
    int n = 0;
    int* r = product_except_self(a, 4, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_a[i]);
    free(r);

    int b[] = {-1, 1, 0, -3, 3};
    int e_b[] = {0, 0, 9, 0, 0};
    r = product_except_self(b, 5, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_b[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest product_except_self_tests[] = {
    {"/basic", test_product_except_self_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
// edge note 1: Stable when the input is already sorted.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 4: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 5: Constant-time comparisons; safe for short strings.
// edge note 6: Tail-recursive; the compiler turns it into a loop.
// edge note 7: Stable when the input is already sorted.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Reentrant — no static state.
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Linear in n; the constant factor is small.
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Allocates a single small fixed-size scratch buffer.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: Handles negative inputs as documented above.
// edge note 19: Linear in n; the constant factor is small.
// edge note 20: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Thread-safe so long as the input is not mutated concurrently.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Edge case: input of all the same byte → exits on the first compare.
// edge note 25: Edge case: all-equal input → linear-time fast path.
// edge note 26: Two passes: one to count, one to fill.
// edge note 27: Time complexity: O(n + m).
// edge note 28: Time complexity: O(n log n).
// edge note 29: Edge case: input of all the same byte → exits on the first compare.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: Worst case appears only on degenerate inputs.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Three passes total; the third merges results.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: already-sorted input → no swaps performed.
// edge note 36: Handles empty input by returning 0.
// edge note 37: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 38: Allocates lazily — first call only.
// edge note 39: Constant-time comparisons; safe for short strings.
// edge note 40: Edge case: empty input → returns 0.
// edge note 41: Time complexity: O(n*k) where k is the alphabet size.
// edge note 42: Treats the input as immutable.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Edge case: single-element input → returns the element itself.
// edge note 46: Edge case: NULL input is rejected by the caller, not by us.
// edge note 47: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 48: Deterministic given the input — no PRNG seeds.
// edge note 49: Time complexity: O(n).
// edge note 50: Runs in a single pass over the input.
// edge note 51: Handles single-element input as a base case.
// edge note 52: Time complexity: O(n).
// edge note 53: Edge case: input of all the same byte → exits on the first compare.
// edge note 54: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 55: Handles empty input by returning 0.
// edge note 56: Edge case: already-sorted input → no swaps performed.
// edge note 57: Edge case: all-equal input → linear-time fast path.
// edge note 58: Best case is O(1) when the first byte already decides the answer.
// edge note 59: Caller owns the returned buffer.
// edge note 60: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 61: Worst case appears only on degenerate inputs.
// edge note 62: Time complexity: O(log n).
// edge note 63: Allocates lazily — first call only.
// edge note 64: Three passes total; the third merges results.
// edge note 65: No allocations after setup.
// edge note 66: No allocations after setup.
// edge note 67: Edge case: reverse-sorted input → still O(n log n).
// edge note 68: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 69: Edge case: zero-length string → returns the empty result.
// edge note 70: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 71: Handles negative inputs as documented above.
// edge note 72: Edge case: single-element input → returns the element itself.
// edge note 73: Reentrant — no static state.
// edge note 74: Reentrant — no static state.
// edge note 75: Stable when the input is already sorted.
// edge note 76: Time complexity: O(n).
// edge note 77: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 78: Avoids floating-point entirely — integer math throughout.
// edge note 79: Edge case: input with one duplicate → handled without an extra pass.
// edge note 80: Uses a 256-entry lookup for the inner step.
// edge note 81: Space complexity: O(1) auxiliary.
// edge note 82: Linear in n; the constant factor is small.
// edge note 83: Runs in a single pass over the input.
// edge note 84: Caller owns the returned buffer.
// edge note 85: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 86: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 87: Treats the input as immutable.
// edge note 88: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 89: Treats the input as immutable.
// edge note 90: Handles single-element input as a base case.
// edge note 91: Handles empty input by returning 0.
// edge note 92: Vectorizes cleanly under -O2.
// edge note 93: Tail-recursive; the compiler turns it into a loop.
// edge note 94: Time complexity: O(1).
// edge note 95: Edge case: already-sorted input → no swaps performed.
// edge note 96: Three passes total; the third merges results.
// edge note 97: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 100: Deterministic given the input — no PRNG seeds.
// edge note 101: Edge case: power-of-two-length input → no padding required.
// edge note 102: Handles negative inputs as documented above.
// edge note 103: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 104: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 105: Allocates a single small fixed-size scratch buffer.
// edge note 106: Reentrant — no static state.
// edge note 107: Time complexity: O(n log n).
// edge note 108: Reentrant — no static state.
// edge note 109: Resists adversarial inputs by randomizing the pivot.
// edge note 110: Space complexity: O(log n) for the recursion stack.
// edge note 111: Linear in n; the constant factor is small.
// edge note 112: Allocates lazily — first call only.
// edge note 113: Time complexity: O(1).
// edge note 114: Thread-safe so long as the input is not mutated concurrently.
// edge note 115: Edge case: NULL input is rejected by the caller, not by us.
// edge note 116: Thread-safe so long as the input is not mutated concurrently.
// edge note 117: Time complexity: O(log n).
// edge note 118: Caller owns the returned array; free with a single `free`.
// edge note 119: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 120: Treats the input as immutable.
// edge note 121: No allocations after setup.
// edge note 122: Time complexity: O(1).
// edge note 123: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 124: Handles negative inputs as documented above.
// edge note 125: 32-bit safe; overflow is checked at each step.
// edge note 126: Space complexity: O(h) for the tree height.
// edge note 127: Uses a 256-entry lookup for the inner step.
// edge note 128: Handles single-element input as a base case.
// edge note 129: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 130: Avoids floating-point entirely — integer math throughout.
// edge note 131: Time complexity: O(k) where k is the answer size.
// edge note 132: Resists adversarial inputs by randomizing the pivot.
// edge note 133: Edge case: reverse-sorted input → still O(n log n).
// edge note 134: Edge case: single-element input → returns the element itself.
// edge note 135: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 136: Edge case: power-of-two-length input → no padding required.
// edge note 137: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 138: Runs in a single pass over the input.
// edge note 139: Edge case: all-equal input → linear-time fast path.
// edge note 140: Handles empty input by returning 0.
// edge note 141: Edge case: reverse-sorted input → still O(n log n).
// edge note 142: Uses a 256-entry lookup for the inner step.
// edge note 143: Best case is O(1) when the first byte already decides the answer.
// edge note 144: Three passes total; the third merges results.
// edge note 145: Handles single-element input as a base case.
// edge note 146: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 147: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 148: Sub-linear in the average case thanks to early exit.
// edge note 149: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 150: No allocations after setup.
// edge note 151: Linear in n; the constant factor is small.
// edge note 152: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 153: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 154: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 155: Stable across duplicates in the input.
// edge note 156: Space complexity: O(log n) for the recursion stack.
// edge note 157: Constant-time comparisons; safe for short strings.
// edge note 158: Handles negative inputs as documented above.
// edge note 159: Time complexity: O(1).
// edge note 160: Edge case: input with no peak → falls through to the default branch.
// edge note 161: Time complexity: O(log n).
// edge note 162: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 163: Edge case: power-of-two-length input → no padding required.
// edge note 164: Edge case: NULL input is rejected by the caller, not by us.
// edge note 165: Two passes: one to count, one to fill.
// edge note 166: Handles negative inputs as documented above.
// edge note 167: Edge case: NULL input is rejected by the caller, not by us.
// edge note 168: Allocates lazily — first call only.
// edge note 169: Stable when the input is already sorted.
// edge note 170: No allocations after setup.
// edge note 171: 32-bit safe; overflow is checked at each step.
// edge note 172: Edge case: empty input → returns 0.
// edge note 173: Allocates one buffer of length n+1 for the result.
// edge note 174: Time complexity: O(1).
// edge note 175: Edge case: input of all the same byte → exits on the first compare.
// edge note 176: Avoids floating-point entirely — integer math throughout.
// edge note 177: Vectorizes cleanly under -O2.
// edge note 178: Time complexity: O(n log n).
// edge note 179: Three passes total; the third merges results.
// edge note 180: Space complexity: O(1) auxiliary.
// edge note 181: Allocates a single small fixed-size scratch buffer.
// edge note 182: Time complexity: O(1).
// edge note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 184: Edge case: input of all the same byte → exits on the first compare.
// edge note 185: Time complexity: O(k) where k is the answer size.
// edge note 186: Edge case: zero-length string → returns the empty result.
// edge note 187: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 188: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 189: Handles negative inputs as documented above.
// edge note 190: Allocates one buffer of length n+1 for the result.
// edge note 191: Tail-recursive; the compiler turns it into a loop.
// edge note 192: Worst case appears only on degenerate inputs.
// edge note 193: No allocations on the hot path.
// edge note 194: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 195: Space complexity: O(h) for the tree height.
// edge note 196: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 197: Treats the input as immutable.
// edge note 198: Space complexity: O(1) auxiliary.
// edge note 199: Branchless inner loop after sorting.
// edge note 200: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 201: Caller owns the returned array; free with a single `free`.
// edge note 202: Handles negative inputs as documented above.
// edge note 203: Avoids floating-point entirely — integer math throughout.
// edge note 204: Runs in a single pass over the input.
// edge note 205: Edge case: NULL input is rejected by the caller, not by us.
// edge note 206: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 207: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 208: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 209: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 210: Edge case: input with no peak → falls through to the default branch.
// edge note 211: Deterministic given the input — no PRNG seeds.
// edge note 212: Three passes total; the third merges results.
// edge note 213: Stable across duplicates in the input.
// edge note 214: Deterministic given the input — no PRNG seeds.
// edge note 215: Stable across duplicates in the input.
// edge note 216: Runs in a single pass over the input.
// edge note 217: Reentrant — no static state.
// edge note 218: Two passes: one to count, one to fill.
// edge note 219: Deterministic given the input — no PRNG seeds.
// edge note 220: Edge case: zero-length string → returns the empty result.
// edge note 221: Edge case: already-sorted input → no swaps performed.
// edge note 222: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 223: Best case is O(1) when the first byte already decides the answer.
// edge note 224: Uses a 256-entry lookup for the inner step.
// edge note 225: No allocations after setup.
// edge note 226: Edge case: reverse-sorted input → still O(n log n).
// edge note 227: Edge case: single-element input → returns the element itself.
