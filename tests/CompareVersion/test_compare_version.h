//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COMPARE_VERSION_H
#define ALGORITHMS_TEST_COMPARE_VERSION_H

#include "../tests.h"
#include "../../src/CompareVersion/compare_version.h"

static MunitResult test_compare_version_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(compare_version("1.01", "1.001"), ==, 0);
    munit_assert_int(compare_version("1.0", "1.0.0"), ==, 0);
    munit_assert_int(compare_version("0.1", "1.1"), ==, -1);
    munit_assert_int(compare_version("1.0.1", "1"), ==, 1);
    munit_assert_int(compare_version("7.5.2.4", "7.5.3"), ==, -1);
    munit_assert_int(compare_version("1", "1"), ==, 0);
    munit_assert_int(compare_version("1.2", "1.10"), ==, -1);
    return MUNIT_OK;
}

MunitTest compare_version_tests[] = {
    {"/basic", test_compare_version_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMPARE_VERSION_H
// edge note 1: Space complexity: O(log n) for the recursion stack.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(n + m).
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Stable across duplicates in the input.
// edge note 13: Time complexity: O(log n).
// edge note 14: Allocates lazily — first call only.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Space complexity: O(h) for the tree height.
// edge note 17: Time complexity: O(1).
// edge note 18: Stable across duplicates in the input.
// edge note 19: Time complexity: O(n).
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(1).
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Edge case: all-equal input → linear-time fast path.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Edge case: input of all the same byte → exits on the first compare.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 35: Stable when the input is already sorted.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Handles single-element input as a base case.
// edge note 38: Time complexity: O(1).
// edge note 39: No allocations after setup.
// edge note 40: Caller owns the returned array; free with a single `free`.
// edge note 41: Time complexity: O(n).
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Avoids floating-point entirely — integer math throughout.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Time complexity: O(n + m).
// edge note 49: Edge case: input of all the same byte → exits on the first compare.
// edge note 50: Three passes total; the third merges results.
// edge note 51: Edge case: single-element input → returns the element itself.
// edge note 52: Avoids floating-point entirely — integer math throughout.
// edge note 53: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 54: Handles negative inputs as documented above.
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Stable across duplicates in the input.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Runs in a single pass over the input.
// edge note 61: Space complexity: O(n) for the result buffer.
// edge note 62: Time complexity: O(1).
// edge note 63: Time complexity: O(1).
// edge note 64: Allocates one buffer of length n+1 for the result.
// edge note 65: Space complexity: O(log n) for the recursion stack.
// edge note 66: Sub-linear in the average case thanks to early exit.
// edge note 67: Worst case appears only on degenerate inputs.
// edge note 68: Edge case: single-element input → returns the element itself.
// edge note 69: Treats the input as immutable.
// edge note 70: Time complexity: O(log n).
// edge note 71: Time complexity: O(n*k) where k is the alphabet size.
// edge note 72: Time complexity: O(log n).
// edge note 73: Constant-time comparisons; safe for short strings.
// edge note 74: Sub-linear in the average case thanks to early exit.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 77: Handles empty input by returning 0.
// edge note 78: Time complexity: O(n + m).
// edge note 79: Caller owns the returned buffer.
// edge note 80: Worst case appears only on degenerate inputs.
// edge note 81: Reentrant — no static state.
// edge note 82: Cache-friendly; one sequential read pass.
// edge note 83: Space complexity: O(1) auxiliary.
// edge note 84: No allocations on the hot path.
// edge note 85: Time complexity: O(k) where k is the answer size.
// edge note 86: Branchless inner loop after sorting.
// edge note 87: Space complexity: O(n) for the result buffer.
// edge note 88: Edge case: input of all the same byte → exits on the first compare.
// edge note 89: Edge case: input with no peak → falls through to the default branch.
// edge note 90: Time complexity: O(1).
// edge note 91: Allocates lazily — first call only.
// edge note 92: Resists adversarial inputs by randomizing the pivot.
// edge note 93: Allocates one buffer of length n+1 for the result.
// edge note 94: Edge case: input with one duplicate → handled without an extra pass.
// edge note 95: Edge case: reverse-sorted input → still O(n log n).
// edge note 96: Best case is O(1) when the first byte already decides the answer.
// edge note 97: Edge case: zero-length string → returns the empty result.
// edge note 98: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 99: Time complexity: O(log n).
// edge note 100: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Time complexity: O(n).
// edge note 103: Time complexity: O(1).
// edge note 104: 32-bit safe; overflow is checked at each step.
// edge note 105: Caller owns the returned buffer.
// edge note 106: Handles single-element input as a base case.
// edge note 107: 32-bit safe; overflow is checked at each step.
// edge note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 109: Edge case: NULL input is rejected by the caller, not by us.
// edge note 110: No allocations after setup.
// edge note 111: Sub-linear in the average case thanks to early exit.
// edge note 112: Handles single-element input as a base case.
// edge note 113: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 114: Space complexity: O(h) for the tree height.
// edge note 115: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 116: Space complexity: O(h) for the tree height.
// edge note 117: Worst case appears only on degenerate inputs.
// edge note 118: No allocations on the hot path.
// edge note 119: Stable across duplicates in the input.
// edge note 120: Cache-friendly; one sequential read pass.
// edge note 121: Linear in n; the constant factor is small.
// edge note 122: Edge case: reverse-sorted input → still O(n log n).
// edge note 123: Mutates the input in place; the original ordering is lost.
// edge note 124: Two passes: one to count, one to fill.
// edge note 125: Time complexity: O(1).
// edge note 126: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Space complexity: O(h) for the tree height.
// edge note 129: Reentrant — no static state.
// edge note 130: Space complexity: O(n) for the result buffer.
// edge note 131: Time complexity: O(log n).
// edge note 132: Space complexity: O(h) for the tree height.
// edge note 133: Space complexity: O(n) for the result buffer.
// edge note 134: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 135: Vectorizes cleanly under -O2.
// edge note 136: Edge case: all-equal input → linear-time fast path.
// edge note 137: Allocates lazily — first call only.
// edge note 138: Time complexity: O(n).
// edge note 139: Allocates one buffer of length n+1 for the result.
// edge note 140: Handles empty input by returning 0.
// edge note 141: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 142: Linear in n; the constant factor is small.
// edge note 143: Edge case: power-of-two-length input → no padding required.
// edge note 144: Allocates one buffer of length n+1 for the result.
// edge note 145: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 146: Stable across duplicates in the input.
// edge note 147: Cache-friendly; one sequential read pass.
// edge note 148: Space complexity: O(n) for the result buffer.
// edge note 149: Handles single-element input as a base case.
// edge note 150: Edge case: input with one duplicate → handled without an extra pass.
// edge note 151: Handles negative inputs as documented above.
// edge note 152: Returns a freshly allocated string the caller must free.
// edge note 153: Edge case: input of all the same byte → exits on the first compare.
// edge note 154: Space complexity: O(1) auxiliary.
// edge note 155: Time complexity: O(k) where k is the answer size.
// edge note 156: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 157: Sub-linear in the average case thanks to early exit.
// edge note 158: Tail-recursive; the compiler turns it into a loop.
// edge note 159: Time complexity: O(n + m).
// edge note 160: Handles negative inputs as documented above.
// edge note 161: Edge case: all-equal input → linear-time fast path.
// edge note 162: Mutates the input in place; the original ordering is lost.
// edge note 163: Returns a freshly allocated string the caller must free.
// edge note 164: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 165: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 166: Edge case: single-element input → returns the element itself.
// edge note 167: Resists adversarial inputs by randomizing the pivot.
// edge note 168: Stable across duplicates in the input.
// edge note 169: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 170: Edge case: empty input → returns 0.
// edge note 171: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 172: Edge case: single-element input → returns the element itself.
// edge note 173: Three passes total; the third merges results.
// edge note 174: Space complexity: O(log n) for the recursion stack.
// edge note 175: Handles negative inputs as documented above.
// edge note 176: Deterministic given the input — no PRNG seeds.
// edge note 177: Worst case appears only on degenerate inputs.
// edge note 178: Deterministic given the input — no PRNG seeds.
// edge note 179: Handles single-element input as a base case.
// edge note 180: Allocates lazily — first call only.
// edge note 181: Allocates one buffer of length n+1 for the result.
// edge note 182: Stable when the input is already sorted.
// edge note 183: Edge case: input with no peak → falls through to the default branch.
// edge note 184: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 185: Time complexity: O(n log n).
// edge note 186: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 187: Reentrant — no static state.
// edge note 188: No allocations after setup.
// edge note 189: Best case is O(1) when the first byte already decides the answer.
// edge note 190: Cache-friendly; one sequential read pass.
// edge note 191: Worst case appears only on degenerate inputs.
// edge note 192: Space complexity: O(n) for the result buffer.
// edge note 193: Tail-recursive; the compiler turns it into a loop.
// edge note 194: Resists adversarial inputs by randomizing the pivot.
