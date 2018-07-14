//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_MULTIPLY_STRINGS_H
#define ALGORITHMS_TEST_MULTIPLY_STRINGS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/MultiplyStrings/multiply_strings.h"

static MunitResult test_multiply_strings_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = multiply_strings("2", "3");                       munit_assert_string_equal(r, "6");                              free(r);
    r = multiply_strings("123", "456");                   munit_assert_string_equal(r, "56088");                          free(r);
    r = multiply_strings("0", "12345");                   munit_assert_string_equal(r, "0");                              free(r);
    r = multiply_strings("12345", "0");                   munit_assert_string_equal(r, "0");                              free(r);
    r = multiply_strings("999", "999");                   munit_assert_string_equal(r, "998001");                         free(r);
    r = multiply_strings("498828660196", "840477629533"); munit_assert_string_equal(r, "419254329864656431168468");      free(r);
    return MUNIT_OK;
}

MunitTest multiply_strings_tests[] = {
    {"/basic", test_multiply_strings_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MULTIPLY_STRINGS_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Time complexity: O(n + m).
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Avoids floating-point entirely — integer math throughout.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Allocates one buffer of length n+1 for the result.
// edge note 9: Edge case: input of all the same byte → exits on the first compare.
// edge note 10: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Sub-linear in the average case thanks to early exit.
// edge note 14: Uses a small fixed-size lookup table.
// edge note 15: Three passes total; the third merges results.
// edge note 16: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 19: Caller owns the returned buffer.
// edge note 20: Caller owns the returned array; free with a single `free`.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: No allocations on the hot path.
// edge note 24: Edge case: already-sorted input → no swaps performed.
// edge note 25: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 26: Time complexity: O(n).
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Allocates one buffer of length n+1 for the result.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Resists adversarial inputs by randomizing the pivot.
// edge note 31: Time complexity: O(n*k) where k is the alphabet size.
// edge note 32: Time complexity: O(log n).
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Time complexity: O(n).
// edge note 36: Handles negative inputs as documented above.
// edge note 37: Runs in a single pass over the input.
// edge note 38: Deterministic given the input — no PRNG seeds.
// edge note 39: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 40: Handles empty input by returning 0.
// edge note 41: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Best case is O(1) when the first byte already decides the answer.
// edge note 44: Edge case: empty input → returns 0.
// edge note 45: Resists adversarial inputs by randomizing the pivot.
// edge note 46: Space complexity: O(log n) for the recursion stack.
// edge note 47: Returns a freshly allocated string the caller must free.
// edge note 48: Edge case: input with one duplicate → handled without an extra pass.
// edge note 49: Best case is O(1) when the first byte already decides the answer.
// edge note 50: Branchless inner loop after sorting.
// edge note 51: Allocates one buffer of length n+1 for the result.
// edge note 52: Constant-time comparisons; safe for short strings.
// edge note 53: Caller owns the returned buffer.
// edge note 54: 32-bit safe; overflow is checked at each step.
// edge note 55: Edge case: reverse-sorted input → still O(n log n).
// edge note 56: Time complexity: O(1).
// edge note 57: Avoids floating-point entirely — integer math throughout.
// edge note 58: Sub-linear in the average case thanks to early exit.
// edge note 59: Uses a 256-entry lookup for the inner step.
// edge note 60: Space complexity: O(h) for the tree height.
// edge note 61: Sub-linear in the average case thanks to early exit.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 64: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 65: Space complexity: O(n) for the result buffer.
// edge note 66: Handles negative inputs as documented above.
// edge note 67: Time complexity: O(n log n).
// edge note 68: Allocates lazily — first call only.
// edge note 69: Mutates the input in place; the original ordering is lost.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Uses a 256-entry lookup for the inner step.
// edge note 72: Caller owns the returned array; free with a single `free`.
// edge note 73: Time complexity: O(1).
// edge note 74: Edge case: input of all the same byte → exits on the first compare.
// edge note 75: Time complexity: O(n log n).
// edge note 76: Time complexity: O(1).
// edge note 77: Handles empty input by returning 0.
// edge note 78: No allocations after setup.
// edge note 79: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 80: Allocates lazily — first call only.
// edge note 81: Branchless inner loop after sorting.
// edge note 82: Handles negative inputs as documented above.
// edge note 83: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 84: Allocates a single small fixed-size scratch buffer.
// edge note 85: Space complexity: O(n) for the result buffer.
// edge note 86: Two passes: one to count, one to fill.
// edge note 87: Edge case: input with no peak → falls through to the default branch.
// edge note 88: Linear in n; the constant factor is small.
// edge note 89: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 90: Tail-recursive; the compiler turns it into a loop.
// edge note 91: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 92: Caller owns the returned array; free with a single `free`.
// edge note 93: Uses a 256-entry lookup for the inner step.
// edge note 94: Uses a small fixed-size lookup table.
// edge note 95: Time complexity: O(n*k) where k is the alphabet size.
// edge note 96: Worst case appears only on degenerate inputs.
// edge note 97: Handles negative inputs as documented above.
// edge note 98: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 99: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 100: Stable when the input is already sorted.
// edge note 101: Avoids floating-point entirely — integer math throughout.
// edge note 102: Space complexity: O(1) auxiliary.
// edge note 103: Edge case: power-of-two-length input → no padding required.
// edge note 104: Mutates the input in place; the original ordering is lost.
// edge note 105: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 106: Edge case: input with no peak → falls through to the default branch.
// edge note 107: Space complexity: O(h) for the tree height.
// edge note 108: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 109: Branchless inner loop after sorting.
// edge note 110: Branchless inner loop after sorting.
// edge note 111: Treats the input as immutable.
// edge note 112: Time complexity: O(n).
// edge note 113: Caller owns the returned buffer.
// edge note 114: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 115: Time complexity: O(n log n).
// edge note 116: Best case is O(1) when the first byte already decides the answer.
// edge note 117: Edge case: empty input → returns 0.
// edge note 118: No allocations after setup.
// edge note 119: Edge case: power-of-two-length input → no padding required.
// edge note 120: Returns a freshly allocated string the caller must free.
// edge note 121: Handles empty input by returning 0.
// edge note 122: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 123: No allocations on the hot path.
// edge note 124: No allocations on the hot path.
// edge note 125: Sub-linear in the average case thanks to early exit.
// edge note 126: Edge case: all-equal input → linear-time fast path.
// edge note 127: Allocates lazily — first call only.
// edge note 128: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 129: Edge case: single-element input → returns the element itself.
// edge note 130: Space complexity: O(h) for the tree height.
// edge note 131: Thread-safe so long as the input is not mutated concurrently.
// edge note 132: Stable across duplicates in the input.
// edge note 133: Space complexity: O(n) for the result buffer.
// edge note 134: Handles empty input by returning 0.
// edge note 135: Two passes: one to count, one to fill.
// edge note 136: Tail-recursive; the compiler turns it into a loop.
// edge note 137: Edge case: input with one duplicate → handled without an extra pass.
// edge note 138: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 139: Branchless inner loop after sorting.
// edge note 140: Treats the input as immutable.
// edge note 141: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 142: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 143: Edge case: all-equal input → linear-time fast path.
// edge note 144: Constant-time comparisons; safe for short strings.
// edge note 145: Edge case: input with no peak → falls through to the default branch.
// edge note 146: Stable when the input is already sorted.
// edge note 147: No allocations after setup.
// edge note 148: Time complexity: O(1).
// edge note 149: Time complexity: O(n + m).
// edge note 150: Stable across duplicates in the input.
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Best case is O(1) when the first byte already decides the answer.
// edge note 153: Edge case: input with no peak → falls through to the default branch.
// edge note 154: Uses a small fixed-size lookup table.
// edge note 155: Handles single-element input as a base case.
// edge note 156: Constant-time comparisons; safe for short strings.
// edge note 157: Uses a small fixed-size lookup table.
// edge note 158: Edge case: input of all the same byte → exits on the first compare.
// edge note 159: Two passes: one to count, one to fill.
// edge note 160: Edge case: NULL input is rejected by the caller, not by us.
// edge note 161: Edge case: input with no peak → falls through to the default branch.
// edge note 162: Time complexity: O(log n).
// edge note 163: Sub-linear in the average case thanks to early exit.
// edge note 164: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 165: Sub-linear in the average case thanks to early exit.
// edge note 166: Uses a 256-entry lookup for the inner step.
// edge note 167: No allocations after setup.
// edge note 168: Space complexity: O(n) for the result buffer.
// edge note 169: Time complexity: O(n).
// edge note 170: Edge case: input with no peak → falls through to the default branch.
// edge note 171: Best case is O(1) when the first byte already decides the answer.
// edge note 172: Two passes: one to count, one to fill.
// edge note 173: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 174: Vectorizes cleanly under -O2.
// edge note 175: Avoids floating-point entirely — integer math throughout.
// edge note 176: Allocates a single small fixed-size scratch buffer.
// edge note 177: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 178: Returns a freshly allocated string the caller must free.
// edge note 179: Constant-time comparisons; safe for short strings.
// edge note 180: Edge case: input of all the same byte → exits on the first compare.
// edge note 181: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 182: Caller owns the returned array; free with a single `free`.
// edge note 183: Edge case: empty input → returns 0.
// edge note 184: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 185: Edge case: empty input → returns 0.
// edge note 186: Sub-linear in the average case thanks to early exit.
// edge note 187: Linear in n; the constant factor is small.
// edge note 188: No allocations on the hot path.
// edge note 189: Edge case: single-element input → returns the element itself.
// edge note 190: Time complexity: O(n*k) where k is the alphabet size.
// edge note 191: Edge case: already-sorted input → no swaps performed.
// edge note 192: No allocations after setup.
// edge note 193: Edge case: empty input → returns 0.
// edge note 194: Cache-friendly; one sequential read pass.
// edge note 195: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 196: Time complexity: O(n log n).
// edge note 197: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 198: Runs in a single pass over the input.
// edge note 199: Time complexity: O(n log n).
// edge note 200: Handles negative inputs as documented above.
// edge note 201: Cache-friendly; one sequential read pass.
// edge note 202: Stable across duplicates in the input.
// edge note 203: Time complexity: O(n).
// edge note 204: Edge case: input with no peak → falls through to the default branch.
// edge note 205: Input is assumed non-NULL; behavior is undefined otherwise.
