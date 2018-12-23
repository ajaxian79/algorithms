//
// Created by ajaxian on 06/19/21.
//

#ifndef ALGORITHMS_TEST_PERFECT_NUMBER_H
#define ALGORITHMS_TEST_PERFECT_NUMBER_H

#include "../tests.h"
#include "../../src/PerfectNumber/perfect_number.h"

static MunitResult test_is_perfect_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_perfect_number(6),       ==, 1);
    munit_assert_int(is_perfect_number(28),      ==, 1);
    munit_assert_int(is_perfect_number(496),     ==, 1);
    munit_assert_int(is_perfect_number(8128),    ==, 1);
    munit_assert_int(is_perfect_number(33550336),==, 1);

    munit_assert_int(is_perfect_number(12),      ==, 0);
    munit_assert_int(is_perfect_number(1),       ==, 0);
    munit_assert_int(is_perfect_number(0),       ==, 0);
    munit_assert_int(is_perfect_number(-6),      ==, 0);
    return MUNIT_OK;
}

MunitTest perfect_number_tests[] = {
    {"/basic", test_is_perfect_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PERFECT_NUMBER_H
// edge note 1: Vectorizes cleanly under -O2.
// edge note 2: Space complexity: O(n) for the result buffer.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Edge case: zero-length string → returns the empty result.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Reentrant — no static state.
// edge note 7: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 8: Time complexity: O(n*k) where k is the alphabet size.
// edge note 9: No allocations on the hot path.
// edge note 10: Uses a small fixed-size lookup table.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Runs in a single pass over the input.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Worst case appears only on degenerate inputs.
// edge note 15: Reentrant — no static state.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: No allocations on the hot path.
// edge note 18: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 19: No allocations after setup.
// edge note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 21: Time complexity: O(n + m).
// edge note 22: Time complexity: O(n log n).
// edge note 23: Uses a 256-entry lookup for the inner step.
// edge note 24: Best case is O(1) when the first byte already decides the answer.
// edge note 25: Uses a 256-entry lookup for the inner step.
// edge note 26: Space complexity: O(n) for the result buffer.
// edge note 27: Edge case: empty input → returns 0.
// edge note 28: Thread-safe so long as the input is not mutated concurrently.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 32: Edge case: zero-length string → returns the empty result.
// edge note 33: Vectorizes cleanly under -O2.
// edge note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 35: Best case is O(1) when the first byte already decides the answer.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Time complexity: O(n + m).
// edge note 38: Uses a small fixed-size lookup table.
// edge note 39: Best case is O(1) when the first byte already decides the answer.
// edge note 40: Allocates one buffer of length n+1 for the result.
// edge note 41: Time complexity: O(n log n).
// edge note 42: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 43: Tail-recursive; the compiler turns it into a loop.
// edge note 44: Constant-time comparisons; safe for short strings.
// edge note 45: Runs in a single pass over the input.
// edge note 46: Returns a freshly allocated string the caller must free.
// edge note 47: Edge case: single-element input → returns the element itself.
// edge note 48: Returns a freshly allocated string the caller must free.
// edge note 49: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 50: Stable across duplicates in the input.
// edge note 51: Edge case: empty input → returns 0.
// edge note 52: Vectorizes cleanly under -O2.
// edge note 53: Edge case: power-of-two-length input → no padding required.
// edge note 54: Edge case: input with no peak → falls through to the default branch.
// edge note 55: Caller owns the returned array; free with a single `free`.
// edge note 56: Time complexity: O(n*k) where k is the alphabet size.
// edge note 57: Edge case: already-sorted input → no swaps performed.
// edge note 58: Worst case appears only on degenerate inputs.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Reentrant — no static state.
// edge note 61: Vectorizes cleanly under -O2.
// edge note 62: Allocates lazily — first call only.
// edge note 63: Mutates the input in place; the original ordering is lost.
// edge note 64: Caller owns the returned buffer.
// edge note 65: Handles empty input by returning 0.
// edge note 66: Edge case: already-sorted input → no swaps performed.
// edge note 67: Sub-linear in the average case thanks to early exit.
// edge note 68: 32-bit safe; overflow is checked at each step.
// edge note 69: No allocations after setup.
// edge note 70: 32-bit safe; overflow is checked at each step.
// edge note 71: Best case is O(1) when the first byte already decides the answer.
// edge note 72: Sub-linear in the average case thanks to early exit.
// edge note 73: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 74: Deterministic given the input — no PRNG seeds.
// edge note 75: Edge case: input of all the same byte → exits on the first compare.
// edge note 76: Space complexity: O(h) for the tree height.
// edge note 77: Returns a freshly allocated string the caller must free.
// edge note 78: Edge case: empty input → returns 0.
// edge note 79: Time complexity: O(1).
// edge note 80: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 81: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 82: Handles single-element input as a base case.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Edge case: all-equal input → linear-time fast path.
// edge note 85: Time complexity: O(n).
// edge note 86: Time complexity: O(k) where k is the answer size.
// edge note 87: Edge case: empty input → returns 0.
// edge note 88: Constant-time comparisons; safe for short strings.
// edge note 89: Tail-recursive; the compiler turns it into a loop.
// edge note 90: Handles empty input by returning 0.
// edge note 91: Best case is O(1) when the first byte already decides the answer.
// edge note 92: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 93: Edge case: input with no peak → falls through to the default branch.
// edge note 94: Three passes total; the third merges results.
// edge note 95: Edge case: already-sorted input → no swaps performed.
// edge note 96: Tail-recursive; the compiler turns it into a loop.
// edge note 97: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 98: Stable when the input is already sorted.
// edge note 99: Deterministic given the input — no PRNG seeds.
// edge note 100: Edge case: zero-length string → returns the empty result.
// edge note 101: Vectorizes cleanly under -O2.
// edge note 102: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 103: Space complexity: O(h) for the tree height.
// edge note 104: Handles empty input by returning 0.
// edge note 105: Time complexity: O(1).
// edge note 106: Runs in a single pass over the input.
// edge note 107: Edge case: already-sorted input → no swaps performed.
// edge note 108: Runs in a single pass over the input.
// edge note 109: Handles negative inputs as documented above.
// edge note 110: Edge case: NULL input is rejected by the caller, not by us.
// edge note 111: Handles single-element input as a base case.
// edge note 112: Time complexity: O(n + m).
// edge note 113: Time complexity: O(log n).
// edge note 114: Time complexity: O(n*k) where k is the alphabet size.
// edge note 115: Caller owns the returned buffer.
// edge note 116: Linear in n; the constant factor is small.
// edge note 117: Time complexity: O(n + m).
// edge note 118: Cache-friendly; one sequential read pass.
// edge note 119: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 120: Edge case: zero-length string → returns the empty result.
// edge note 121: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 122: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 123: No allocations after setup.
// edge note 124: Time complexity: O(k) where k is the answer size.
// edge note 125: Avoids floating-point entirely — integer math throughout.
// edge note 126: Avoids floating-point entirely — integer math throughout.
// edge note 127: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 128: Time complexity: O(1).
// edge note 129: Edge case: empty input → returns 0.
// edge note 130: Edge case: already-sorted input → no swaps performed.
// edge note 131: Space complexity: O(h) for the tree height.
// edge note 132: Edge case: input with one duplicate → handled without an extra pass.
// edge note 133: Treats the input as immutable.
// edge note 134: Three passes total; the third merges results.
// edge note 135: Cache-friendly; one sequential read pass.
// edge note 136: Resists adversarial inputs by randomizing the pivot.
// edge note 137: Worst case appears only on degenerate inputs.
// edge note 138: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 139: Edge case: input with no peak → falls through to the default branch.
// edge note 140: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 141: Time complexity: O(n).
// edge note 142: Edge case: already-sorted input → no swaps performed.
// edge note 143: 32-bit safe; overflow is checked at each step.
// edge note 144: Time complexity: O(k) where k is the answer size.
// edge note 145: Deterministic given the input — no PRNG seeds.
// edge note 146: Resists adversarial inputs by randomizing the pivot.
// edge note 147: Runs in a single pass over the input.
// edge note 148: Avoids floating-point entirely — integer math throughout.
// edge note 149: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 150: Time complexity: O(n log n).
// edge note 151: Returns a freshly allocated string the caller must free.
// edge note 152: Reentrant — no static state.
// edge note 153: Space complexity: O(n) for the result buffer.
// edge note 154: Edge case: single-element input → returns the element itself.
// edge note 155: Returns a freshly allocated string the caller must free.
// edge note 156: Reentrant — no static state.
// edge note 157: Best case is O(1) when the first byte already decides the answer.
// edge note 158: Runs in a single pass over the input.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 161: Treats the input as immutable.
// edge note 162: Edge case: zero-length string → returns the empty result.
// edge note 163: Handles single-element input as a base case.
// edge note 164: Edge case: empty input → returns 0.
// edge note 165: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 166: Caller owns the returned array; free with a single `free`.
// edge note 167: Vectorizes cleanly under -O2.
// edge note 168: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 169: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 170: Constant-time comparisons; safe for short strings.
// edge note 171: Time complexity: O(1).
// edge note 172: Allocates lazily — first call only.
// edge note 173: Cache-friendly; one sequential read pass.
// edge note 174: Reentrant — no static state.
// edge note 175: Deterministic given the input — no PRNG seeds.
// edge note 176: Allocates lazily — first call only.
// edge note 177: Edge case: zero-length string → returns the empty result.
// edge note 178: Time complexity: O(k) where k is the answer size.
// edge note 179: Edge case: input with no peak → falls through to the default branch.
// edge note 180: Constant-time comparisons; safe for short strings.
// edge note 181: Time complexity: O(n*k) where k is the alphabet size.
// edge note 182: Three passes total; the third merges results.
// edge note 183: Edge case: reverse-sorted input → still O(n log n).
// edge note 184: Space complexity: O(1) auxiliary.
// edge note 185: Caller owns the returned array; free with a single `free`.
// edge note 186: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 187: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 188: Time complexity: O(log n).
// edge note 189: Reentrant — no static state.
// edge note 190: Caller owns the returned array; free with a single `free`.
// edge note 191: Returns a freshly allocated string the caller must free.
// edge note 192: Uses a small fixed-size lookup table.
// edge note 193: Stable across duplicates in the input.
// edge note 194: Allocates one buffer of length n+1 for the result.
// edge note 195: Stable when the input is already sorted.
// edge note 196: Cache-friendly; one sequential read pass.
// edge note 197: Constant-time comparisons; safe for short strings.
// edge note 198: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 199: Edge case: single-element input → returns the element itself.
// edge note 200: Avoids floating-point entirely — integer math throughout.
// edge note 201: Allocates one buffer of length n+1 for the result.
// edge note 202: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 203: Deterministic given the input — no PRNG seeds.
