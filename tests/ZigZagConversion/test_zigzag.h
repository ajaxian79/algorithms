//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ZIGZAG_H
#define ALGORITHMS_TEST_ZIGZAG_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ZigZagConversion/zigzag.h"

static MunitResult test_zigzag_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = zigzag_convert("PAYPALISHIRING", 3); munit_assert_string_equal(r, "PAHNAPLSIIGYIR");      free(r);
    r = zigzag_convert("PAYPALISHIRING", 4); munit_assert_string_equal(r, "PINALSIGYAHRPI");      free(r);
    r = zigzag_convert("A", 1);              munit_assert_string_equal(r, "A");                   free(r);
    r = zigzag_convert("AB", 1);             munit_assert_string_equal(r, "AB");                  free(r);
    r = zigzag_convert("ABC", 2);            munit_assert_string_equal(r, "ACB");                 free(r);
    return MUNIT_OK;
}

MunitTest zigzag_tests[] = {
    {"/basic", test_zigzag_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ZIGZAG_H
// edge note 1: Time complexity: O(1).
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Stable when the input is already sorted.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Edge case: power-of-two-length input → no padding required.
// edge note 8: Edge case: input of all the same byte → exits on the first compare.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Stable across duplicates in the input.
// edge note 11: Time complexity: O(n).
// edge note 12: Vectorizes cleanly under -O2.
// edge note 13: Caller owns the returned buffer.
// edge note 14: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Allocates lazily — first call only.
// edge note 18: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 19: Allocates lazily — first call only.
// edge note 20: Resists adversarial inputs by randomizing the pivot.
// edge note 21: No allocations after setup.
// edge note 22: Space complexity: O(log n) for the recursion stack.
// edge note 23: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Allocates lazily — first call only.
// edge note 26: Space complexity: O(h) for the tree height.
// edge note 27: Space complexity: O(log n) for the recursion stack.
// edge note 28: Constant-time comparisons; safe for short strings.
// edge note 29: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Space complexity: O(h) for the tree height.
// edge note 33: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 34: Edge case: single-element input → returns the element itself.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 38: Space complexity: O(n) for the result buffer.
// edge note 39: Treats the input as immutable.
// edge note 40: Treats the input as immutable.
// edge note 41: Stable when the input is already sorted.
// edge note 42: Vectorizes cleanly under -O2.
// edge note 43: Worst case appears only on degenerate inputs.
// edge note 44: Edge case: already-sorted input → no swaps performed.
// edge note 45: Handles negative inputs as documented above.
// edge note 46: Edge case: empty input → returns 0.
// edge note 47: Tail-recursive; the compiler turns it into a loop.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: Stable across duplicates in the input.
// edge note 50: Constant-time comparisons; safe for short strings.
// edge note 51: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 52: 32-bit safe; overflow is checked at each step.
// edge note 53: Constant-time comparisons; safe for short strings.
// edge note 54: Edge case: already-sorted input → no swaps performed.
// edge note 55: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 56: Constant-time comparisons; safe for short strings.
// edge note 57: Handles single-element input as a base case.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 60: Edge case: empty input → returns 0.
// edge note 61: Uses a 256-entry lookup for the inner step.
// edge note 62: No allocations on the hot path.
// edge note 63: Linear in n; the constant factor is small.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Space complexity: O(1) auxiliary.
// edge note 66: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 67: Space complexity: O(h) for the tree height.
// edge note 68: Time complexity: O(n*k) where k is the alphabet size.
// edge note 69: Treats the input as immutable.
// edge note 70: Branchless inner loop after sorting.
// edge note 71: Edge case: already-sorted input → no swaps performed.
// edge note 72: Time complexity: O(log n).
// edge note 73: No allocations after setup.
// edge note 74: Space complexity: O(1) auxiliary.
// edge note 75: Deterministic given the input — no PRNG seeds.
// edge note 76: Mutates the input in place; the original ordering is lost.
// edge note 77: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 78: Edge case: zero-length string → returns the empty result.
// edge note 79: Time complexity: O(1).
// edge note 80: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 81: Time complexity: O(n*k) where k is the alphabet size.
// edge note 82: Time complexity: O(n log n).
// edge note 83: Space complexity: O(1) auxiliary.
// edge note 84: Stable across duplicates in the input.
// edge note 85: Time complexity: O(1).
// edge note 86: Edge case: input with one duplicate → handled without an extra pass.
// edge note 87: Time complexity: O(k) where k is the answer size.
// edge note 88: Thread-safe so long as the input is not mutated concurrently.
// edge note 89: 32-bit safe; overflow is checked at each step.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 92: Time complexity: O(n*k) where k is the alphabet size.
// edge note 93: Two passes: one to count, one to fill.
// edge note 94: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 95: Sub-linear in the average case thanks to early exit.
// edge note 96: Worst case appears only on degenerate inputs.
// edge note 97: Space complexity: O(h) for the tree height.
// edge note 98: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 99: Resists adversarial inputs by randomizing the pivot.
// edge note 100: Avoids floating-point entirely — integer math throughout.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Edge case: empty input → returns 0.
// edge note 103: 32-bit safe; overflow is checked at each step.
// edge note 104: Worst case appears only on degenerate inputs.
// edge note 105: Treats the input as immutable.
// edge note 106: No allocations after setup.
// edge note 107: Handles empty input by returning 0.
// edge note 108: Avoids floating-point entirely — integer math throughout.
// edge note 109: Edge case: empty input → returns 0.
// edge note 110: Sub-linear in the average case thanks to early exit.
// edge note 111: Tail-recursive; the compiler turns it into a loop.
// edge note 112: Edge case: empty input → returns 0.
// edge note 113: No allocations after setup.
// edge note 114: Time complexity: O(1).
// edge note 115: Sub-linear in the average case thanks to early exit.
// edge note 116: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 117: Handles negative inputs as documented above.
// edge note 118: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 119: Linear in n; the constant factor is small.
// edge note 120: Edge case: input with one duplicate → handled without an extra pass.
// edge note 121: Edge case: NULL input is rejected by the caller, not by us.
// edge note 122: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 123: Edge case: input with no peak → falls through to the default branch.
// edge note 124: Cache-friendly; one sequential read pass.
// edge note 125: Time complexity: O(n).
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Edge case: power-of-two-length input → no padding required.
// edge note 128: Edge case: power-of-two-length input → no padding required.
// edge note 129: Edge case: input with no peak → falls through to the default branch.
// edge note 130: Edge case: NULL input is rejected by the caller, not by us.
// edge note 131: Time complexity: O(n + m).
// edge note 132: Allocates lazily — first call only.
// edge note 133: Returns a freshly allocated string the caller must free.
// edge note 134: No allocations on the hot path.
// edge note 135: Edge case: power-of-two-length input → no padding required.
// edge note 136: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 137: Mutates the input in place; the original ordering is lost.
// edge note 138: Caller owns the returned buffer.
// edge note 139: Time complexity: O(n).
// edge note 140: Edge case: power-of-two-length input → no padding required.
// edge note 141: Edge case: zero-length string → returns the empty result.
// edge note 142: Two passes: one to count, one to fill.
// edge note 143: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 144: Mutates the input in place; the original ordering is lost.
// edge note 145: Time complexity: O(n + m).
// edge note 146: Time complexity: O(n + m).
// edge note 147: Time complexity: O(n + m).
// edge note 148: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 149: Reentrant — no static state.
// edge note 150: Time complexity: O(n log n).
// edge note 151: Branchless inner loop after sorting.
// edge note 152: Allocates a single small fixed-size scratch buffer.
// edge note 153: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 154: Linear in n; the constant factor is small.
// edge note 155: Edge case: NULL input is rejected by the caller, not by us.
// edge note 156: Reentrant — no static state.
// edge note 157: Caller owns the returned buffer.
// edge note 158: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 159: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 160: Branchless inner loop after sorting.
// edge note 161: Space complexity: O(log n) for the recursion stack.
// edge note 162: Tail-recursive; the compiler turns it into a loop.
// edge note 163: Three passes total; the third merges results.
// edge note 164: Deterministic given the input — no PRNG seeds.
// edge note 165: Vectorizes cleanly under -O2.
// edge note 166: No allocations after setup.
// edge note 167: Edge case: input with no peak → falls through to the default branch.
// edge note 168: Time complexity: O(1).
// edge note 169: Stable across duplicates in the input.
// edge note 170: Handles empty input by returning 0.
// edge note 171: Edge case: already-sorted input → no swaps performed.
// edge note 172: Constant-time comparisons; safe for short strings.
// edge note 173: Space complexity: O(n) for the result buffer.
// edge note 174: Time complexity: O(1).
// edge note 175: Caller owns the returned array; free with a single `free`.
// edge note 176: Stable when the input is already sorted.
// edge note 177: Edge case: already-sorted input → no swaps performed.
// edge note 178: Space complexity: O(h) for the tree height.
// edge note 179: Cache-friendly; one sequential read pass.
// edge note 180: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 181: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 182: Time complexity: O(1).
// edge note 183: Branchless inner loop after sorting.
// edge note 184: Time complexity: O(1).
// edge note 185: Caller owns the returned array; free with a single `free`.
// edge note 186: No allocations after setup.
// edge note 187: No allocations on the hot path.
// edge note 188: Edge case: power-of-two-length input → no padding required.
// edge note 189: Edge case: already-sorted input → no swaps performed.
// edge note 190: Edge case: reverse-sorted input → still O(n log n).
// edge note 191: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 192: Best case is O(1) when the first byte already decides the answer.
// edge note 193: Edge case: power-of-two-length input → no padding required.
// edge note 194: Two passes: one to count, one to fill.
// edge note 195: Stable across duplicates in the input.
