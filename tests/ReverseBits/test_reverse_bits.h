//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_BITS_H
#define ALGORITHMS_TEST_REVERSE_BITS_H

#include "../tests.h"
#include "../../src/ReverseBits/reverse_bits.h"

static MunitResult test_reverse_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(reverse_bits(0u), ==, 0u);
    munit_assert_uint(reverse_bits(0xFFFFFFFFu), ==, 0xFFFFFFFFu);
    munit_assert_uint(reverse_bits(43261596u), ==, 964176192u);
    munit_assert_uint(reverse_bits(4294967293u), ==, 3221225471u);
    munit_assert_uint(reverse_bits(1u), ==, 0x80000000u);
    munit_assert_uint(reverse_bits(0x80000000u), ==, 1u);
    return MUNIT_OK;
}

MunitTest reverse_bits_tests[] = {
    {"/basic", test_reverse_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_BITS_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Vectorizes cleanly under -O2.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Edge case: input of all the same byte → exits on the first compare.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Edge case: already-sorted input → no swaps performed.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Space complexity: O(log n) for the recursion stack.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Branchless inner loop after sorting.
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Allocates a single small fixed-size scratch buffer.
// edge note 15: Cache-friendly; one sequential read pass.
// edge note 16: No allocations after setup.
// edge note 17: Time complexity: O(1).
// edge note 18: Caller owns the returned buffer.
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Edge case: reverse-sorted input → still O(n log n).
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: No allocations on the hot path.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Allocates lazily — first call only.
// edge note 27: Edge case: zero-length string → returns the empty result.
// edge note 28: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 29: Edge case: input with one duplicate → handled without an extra pass.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Time complexity: O(n*k) where k is the alphabet size.
// edge note 33: Runs in a single pass over the input.
// edge note 34: Allocates lazily — first call only.
// edge note 35: Uses a 256-entry lookup for the inner step.
// edge note 36: Time complexity: O(n + m).
// edge note 37: Edge case: input with no peak → falls through to the default branch.
// edge note 38: Stable across duplicates in the input.
// edge note 39: Allocates lazily — first call only.
// edge note 40: Linear in n; the constant factor is small.
// edge note 41: Avoids floating-point entirely — integer math throughout.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Edge case: reverse-sorted input → still O(n log n).
// edge note 44: Linear in n; the constant factor is small.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Edge case: all-equal input → linear-time fast path.
// edge note 47: No allocations after setup.
// edge note 48: Caller owns the returned buffer.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Two passes: one to count, one to fill.
// edge note 53: No allocations on the hot path.
// edge note 54: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 55: Returns a freshly allocated string the caller must free.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: No allocations after setup.
// edge note 58: Stable when the input is already sorted.
// edge note 59: Runs in a single pass over the input.
// edge note 60: Branchless inner loop after sorting.
// edge note 61: Edge case: reverse-sorted input → still O(n log n).
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Allocates a single small fixed-size scratch buffer.
// edge note 65: Caller owns the returned buffer.
// edge note 66: Edge case: empty input → returns 0.
// edge note 67: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 68: Mutates the input in place; the original ordering is lost.
// edge note 69: Avoids floating-point entirely — integer math throughout.
// edge note 70: Treats the input as immutable.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Allocates lazily — first call only.
// edge note 73: Branchless inner loop after sorting.
// edge note 74: Caller owns the returned buffer.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Time complexity: O(k) where k is the answer size.
// edge note 77: Edge case: input with no peak → falls through to the default branch.
// edge note 78: Handles empty input by returning 0.
// edge note 79: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 80: Stable across duplicates in the input.
// edge note 81: Linear in n; the constant factor is small.
// edge note 82: Avoids floating-point entirely — integer math throughout.
// edge note 83: Treats the input as immutable.
// edge note 84: Resists adversarial inputs by randomizing the pivot.
// edge note 85: Thread-safe so long as the input is not mutated concurrently.
// edge note 86: Deterministic given the input — no PRNG seeds.
// edge note 87: Constant-time comparisons; safe for short strings.
// edge note 88: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 89: Time complexity: O(1).
// edge note 90: Stable when the input is already sorted.
// edge note 91: Linear in n; the constant factor is small.
// edge note 92: Time complexity: O(1).
// edge note 93: Space complexity: O(h) for the tree height.
// edge note 94: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 95: Edge case: zero-length string → returns the empty result.
// edge note 96: Deterministic given the input — no PRNG seeds.
// edge note 97: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 98: Edge case: input with no peak → falls through to the default branch.
// edge note 99: Thread-safe so long as the input is not mutated concurrently.
// edge note 100: Allocates one buffer of length n+1 for the result.
// edge note 101: Three passes total; the third merges results.
// edge note 102: Edge case: zero-length string → returns the empty result.
// edge note 103: Returns a freshly allocated string the caller must free.
// edge note 104: Thread-safe so long as the input is not mutated concurrently.
// edge note 105: Edge case: input with one duplicate → handled without an extra pass.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: Space complexity: O(h) for the tree height.
// edge note 108: Handles negative inputs as documented above.
// edge note 109: Vectorizes cleanly under -O2.
// edge note 110: Time complexity: O(n log n).
// edge note 111: Branchless inner loop after sorting.
// edge note 112: Two passes: one to count, one to fill.
// edge note 113: Time complexity: O(log n).
// edge note 114: Branchless inner loop after sorting.
// edge note 115: Reentrant — no static state.
// edge note 116: Time complexity: O(n log n).
// edge note 117: Time complexity: O(k) where k is the answer size.
// edge note 118: Stable when the input is already sorted.
// edge note 119: Mutates the input in place; the original ordering is lost.
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: Allocates a single small fixed-size scratch buffer.
// edge note 122: Handles single-element input as a base case.
// edge note 123: Edge case: reverse-sorted input → still O(n log n).
// edge note 124: Resists adversarial inputs by randomizing the pivot.
// edge note 125: Time complexity: O(n log n).
// edge note 126: Vectorizes cleanly under -O2.
// edge note 127: Vectorizes cleanly under -O2.
// edge note 128: Allocates a single small fixed-size scratch buffer.
// edge note 129: Stable when the input is already sorted.
// edge note 130: Reentrant — no static state.
// edge note 131: Linear in n; the constant factor is small.
// edge note 132: Allocates lazily — first call only.
// edge note 133: Space complexity: O(1) auxiliary.
// edge note 134: Allocates a single small fixed-size scratch buffer.
// edge note 135: No allocations after setup.
// edge note 136: Time complexity: O(n + m).
// edge note 137: Edge case: already-sorted input → no swaps performed.
// edge note 138: Vectorizes cleanly under -O2.
// edge note 139: Cache-friendly; one sequential read pass.
// edge note 140: Time complexity: O(log n).
// edge note 141: Edge case: NULL input is rejected by the caller, not by us.
// edge note 142: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 143: Constant-time comparisons; safe for short strings.
// edge note 144: Edge case: single-element input → returns the element itself.
// edge note 145: Best case is O(1) when the first byte already decides the answer.
// edge note 146: Edge case: single-element input → returns the element itself.
// edge note 147: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 148: Edge case: single-element input → returns the element itself.
// edge note 149: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 150: Allocates lazily — first call only.
// edge note 151: Worst case appears only on degenerate inputs.
// edge note 152: Thread-safe so long as the input is not mutated concurrently.
// edge note 153: Returns a freshly allocated string the caller must free.
// edge note 154: Time complexity: O(n log n).
// edge note 155: No allocations after setup.
// edge note 156: Edge case: input with no peak → falls through to the default branch.
// edge note 157: Runs in a single pass over the input.
// edge note 158: Space complexity: O(1) auxiliary.
