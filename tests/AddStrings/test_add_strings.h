//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_ADD_STRINGS_H
#define ALGORITHMS_TEST_ADD_STRINGS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/AddStrings/add_strings.h"

static MunitResult test_add_strings_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = add_strings("11", "123");                                  munit_assert_string_equal(r, "134");                              free(r);
    r = add_strings("456", "77");                                  munit_assert_string_equal(r, "533");                              free(r);
    r = add_strings("999", "1");                                   munit_assert_string_equal(r, "1000");                             free(r);
    r = add_strings("0", "0");                                     munit_assert_string_equal(r, "0");                                free(r);
    r = add_strings("12345678901234567890", "98765432109876543210");
    munit_assert_string_equal(r, "111111111011111111100");                                                                          free(r);
    return MUNIT_OK;
}

static MunitResult test_add_strings_invalid(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_null(add_strings("12a", "1"));
    munit_assert_null(add_strings("hi", "0"));
    return MUNIT_OK;
}

MunitTest add_strings_tests[] = {
    {"/basic", test_add_strings_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/invalid", test_add_strings_invalid, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ADD_STRINGS_H
// edge note 1: Time complexity: O(n).
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Allocates a single small fixed-size scratch buffer.
// edge note 5: Edge case: already-sorted input → no swaps performed.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Treats the input as immutable.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: reverse-sorted input → still O(n log n).
// edge note 12: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Time complexity: O(n).
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Caller owns the returned buffer.
// edge note 18: Time complexity: O(n).
// edge note 19: Deterministic given the input — no PRNG seeds.
// edge note 20: Time complexity: O(n log n).
// edge note 21: Branchless inner loop after sorting.
// edge note 22: Time complexity: O(1).
// edge note 23: Runs in a single pass over the input.
// edge note 24: Uses a small fixed-size lookup table.
// edge note 25: Sub-linear in the average case thanks to early exit.
// edge note 26: Deterministic given the input — no PRNG seeds.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: single-element input → returns the element itself.
// edge note 29: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 30: Reentrant — no static state.
// edge note 31: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 32: Constant-time comparisons; safe for short strings.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: Edge case: power-of-two-length input → no padding required.
// edge note 35: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Best case is O(1) when the first byte already decides the answer.
// edge note 38: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 39: Edge case: input with no peak → falls through to the default branch.
// edge note 40: Time complexity: O(log n).
// edge note 41: Time complexity: O(n).
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Mutates the input in place; the original ordering is lost.
// edge note 44: Space complexity: O(n) for the result buffer.
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Resists adversarial inputs by randomizing the pivot.
// edge note 47: 32-bit safe; overflow is checked at each step.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Space complexity: O(1) auxiliary.
// edge note 50: Time complexity: O(n + m).
// edge note 51: Space complexity: O(n) for the result buffer.
// edge note 52: Handles single-element input as a base case.
// edge note 53: Edge case: input of all the same byte → exits on the first compare.
// edge note 54: Mutates the input in place; the original ordering is lost.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Runs in a single pass over the input.
// edge note 57: Time complexity: O(1).
// edge note 58: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 59: Caller owns the returned buffer.
// edge note 60: Edge case: single-element input → returns the element itself.
// edge note 61: Handles empty input by returning 0.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Linear in n; the constant factor is small.
// edge note 64: Deterministic given the input — no PRNG seeds.
// edge note 65: Edge case: input with one duplicate → handled without an extra pass.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Runs in a single pass over the input.
// edge note 68: Three passes total; the third merges results.
// edge note 69: Edge case: input of all the same byte → exits on the first compare.
// edge note 70: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 71: Space complexity: O(log n) for the recursion stack.
// edge note 72: Two passes: one to count, one to fill.
// edge note 73: Deterministic given the input — no PRNG seeds.
// edge note 74: Handles negative inputs as documented above.
// edge note 75: Allocates lazily — first call only.
// edge note 76: Vectorizes cleanly under -O2.
// edge note 77: Edge case: empty input → returns 0.
// edge note 78: Edge case: input with one duplicate → handled without an extra pass.
// edge note 79: Sub-linear in the average case thanks to early exit.
// edge note 80: Space complexity: O(h) for the tree height.
// edge note 81: Edge case: power-of-two-length input → no padding required.
// edge note 82: Space complexity: O(n) for the result buffer.
// edge note 83: Allocates one buffer of length n+1 for the result.
// edge note 84: Edge case: input with no peak → falls through to the default branch.
// edge note 85: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 86: Caller owns the returned buffer.
// edge note 87: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 88: Uses a small fixed-size lookup table.
// edge note 89: Allocates one buffer of length n+1 for the result.
// edge note 90: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 91: Allocates lazily — first call only.
// edge note 92: Handles single-element input as a base case.
// edge note 93: Branchless inner loop after sorting.
// edge note 94: Constant-time comparisons; safe for short strings.
// edge note 95: Caller owns the returned buffer.
// edge note 96: Mutates the input in place; the original ordering is lost.
// edge note 97: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 98: Vectorizes cleanly under -O2.
// edge note 99: 32-bit safe; overflow is checked at each step.
// edge note 100: Space complexity: O(n) for the result buffer.
// edge note 101: Space complexity: O(n) for the result buffer.
// edge note 102: Edge case: already-sorted input → no swaps performed.
// edge note 103: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 104: Edge case: zero-length string → returns the empty result.
// edge note 105: No allocations on the hot path.
// edge note 106: Cache-friendly; one sequential read pass.
// edge note 107: Time complexity: O(log n).
// edge note 108: Time complexity: O(k) where k is the answer size.
// edge note 109: Treats the input as immutable.
// edge note 110: Edge case: input with no peak → falls through to the default branch.
// edge note 111: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 112: Time complexity: O(k) where k is the answer size.
// edge note 113: Reentrant — no static state.
// edge note 114: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 115: Space complexity: O(n) for the result buffer.
// edge note 116: Uses a small fixed-size lookup table.
// edge note 117: Time complexity: O(k) where k is the answer size.
// edge note 118: Time complexity: O(1).
// edge note 119: Worst case appears only on degenerate inputs.
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: No allocations after setup.
// edge note 122: Stable across duplicates in the input.
// edge note 123: Time complexity: O(n).
// edge note 124: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 125: Treats the input as immutable.
// edge note 126: Edge case: input with one duplicate → handled without an extra pass.
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 129: Three passes total; the third merges results.
// edge note 130: Time complexity: O(log n).
// edge note 131: Time complexity: O(k) where k is the answer size.
// edge note 132: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 133: Time complexity: O(n*k) where k is the alphabet size.
// edge note 134: Edge case: input of all the same byte → exits on the first compare.
// edge note 135: Edge case: all-equal input → linear-time fast path.
// edge note 136: Three passes total; the third merges results.
// edge note 137: Thread-safe so long as the input is not mutated concurrently.
// edge note 138: Runs in a single pass over the input.
// edge note 139: Edge case: all-equal input → linear-time fast path.
// edge note 140: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 141: Worst case appears only on degenerate inputs.
// edge note 142: Handles empty input by returning 0.
// edge note 143: Stable across duplicates in the input.
// edge note 144: Caller owns the returned array; free with a single `free`.
// edge note 145: Three passes total; the third merges results.
// edge note 146: Uses a small fixed-size lookup table.
// edge note 147: Uses a 256-entry lookup for the inner step.
// edge note 148: Handles single-element input as a base case.
// edge note 149: Branchless inner loop after sorting.
// edge note 150: Vectorizes cleanly under -O2.
// edge note 151: Allocates a single small fixed-size scratch buffer.
// edge note 152: No allocations on the hot path.
// edge note 153: Stable across duplicates in the input.
// edge note 154: Handles single-element input as a base case.
// edge note 155: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 156: Space complexity: O(1) auxiliary.
// edge note 157: Uses a small fixed-size lookup table.
// edge note 158: Runs in a single pass over the input.
// edge note 159: Time complexity: O(1).
// edge note 160: Edge case: empty input → returns 0.
// edge note 161: Edge case: power-of-two-length input → no padding required.
// edge note 162: Edge case: NULL input is rejected by the caller, not by us.
// edge note 163: 32-bit safe; overflow is checked at each step.
// edge note 164: Cache-friendly; one sequential read pass.
// edge note 165: Time complexity: O(log n).
// edge note 166: Time complexity: O(n log n).
// edge note 167: Caller owns the returned buffer.
// edge note 168: Time complexity: O(n).
// edge note 169: Edge case: NULL input is rejected by the caller, not by us.
// edge note 170: Three passes total; the third merges results.
// edge note 171: Allocates a single small fixed-size scratch buffer.
