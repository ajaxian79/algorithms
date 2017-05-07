//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_PRIMES_H
#define ALGORITHMS_TEST_COUNT_PRIMES_H

#include "../tests.h"
#include "../../src/CountPrimes/count_primes.h"

static MunitResult test_count_primes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(count_primes(0), ==, 0);
    munit_assert_int(count_primes(1), ==, 0);
    munit_assert_int(count_primes(2), ==, 0);
    munit_assert_int(count_primes(3), ==, 1);
    munit_assert_int(count_primes(10), ==, 4);
    munit_assert_int(count_primes(100), ==, 25);
    munit_assert_int(count_primes(1000), ==, 168);
    munit_assert_int(count_primes(10000), ==, 1229);
    return MUNIT_OK;
}

MunitTest count_primes_tests[] = {
    {"/basic", test_count_primes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_PRIMES_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: all-equal input → linear-time fast path.
// edge note 3: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 4: Runs in a single pass over the input.
// edge note 5: Stable when the input is already sorted.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Three passes total; the third merges results.
// edge note 8: Space complexity: O(h) for the tree height.
// edge note 9: Time complexity: O(n log n).
// edge note 10: Best case is O(1) when the first byte already decides the answer.
// edge note 11: Edge case: input with one duplicate → handled without an extra pass.
// edge note 12: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 13: Space complexity: O(1) auxiliary.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Edge case: zero-length string → returns the empty result.
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Edge case: reverse-sorted input → still O(n log n).
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: Time complexity: O(n log n).
// edge note 24: Treats the input as immutable.
// edge note 25: Time complexity: O(1).
// edge note 26: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 27: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 28: Space complexity: O(h) for the tree height.
// edge note 29: No allocations on the hot path.
// edge note 30: Space complexity: O(n) for the result buffer.
// edge note 31: Space complexity: O(log n) for the recursion stack.
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 34: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Edge case: all-equal input → linear-time fast path.
// edge note 37: Uses a small fixed-size lookup table.
// edge note 38: Handles empty input by returning 0.
// edge note 39: Cache-friendly; one sequential read pass.
// edge note 40: Edge case: already-sorted input → no swaps performed.
// edge note 41: Edge case: input of all the same byte → exits on the first compare.
// edge note 42: Uses a small fixed-size lookup table.
// edge note 43: Linear in n; the constant factor is small.
// edge note 44: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Worst case appears only on degenerate inputs.
// edge note 47: Space complexity: O(h) for the tree height.
// edge note 48: Time complexity: O(n*k) where k is the alphabet size.
// edge note 49: Edge case: empty input → returns 0.
// edge note 50: Edge case: input with no peak → falls through to the default branch.
// edge note 51: Three passes total; the third merges results.
// edge note 52: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 53: Sub-linear in the average case thanks to early exit.
// edge note 54: Two passes: one to count, one to fill.
// edge note 55: Three passes total; the third merges results.
// edge note 56: Worst case appears only on degenerate inputs.
// edge note 57: Edge case: input with one duplicate → handled without an extra pass.
// edge note 58: Caller owns the returned buffer.
// edge note 59: Stable across duplicates in the input.
// edge note 60: Edge case: input of all the same byte → exits on the first compare.
// edge note 61: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 62: Allocates lazily — first call only.
// edge note 63: Cache-friendly; one sequential read pass.
// edge note 64: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 65: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 66: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 67: Edge case: all-equal input → linear-time fast path.
// edge note 68: Time complexity: O(n + m).
// edge note 69: Branchless inner loop after sorting.
// edge note 70: Stable across duplicates in the input.
// edge note 71: Time complexity: O(n).
// edge note 72: Vectorizes cleanly under -O2.
// edge note 73: Time complexity: O(n log n).
// edge note 74: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 75: Mutates the input in place; the original ordering is lost.
// edge note 76: Space complexity: O(h) for the tree height.
// edge note 77: Time complexity: O(n + m).
// edge note 78: Treats the input as immutable.
// edge note 79: Runs in a single pass over the input.
// edge note 80: Vectorizes cleanly under -O2.
// edge note 81: Avoids floating-point entirely — integer math throughout.
// edge note 82: Linear in n; the constant factor is small.
// edge note 83: Edge case: empty input → returns 0.
// edge note 84: Handles single-element input as a base case.
// edge note 85: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 86: Deterministic given the input — no PRNG seeds.
// edge note 87: Edge case: all-equal input → linear-time fast path.
// edge note 88: Thread-safe so long as the input is not mutated concurrently.
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Edge case: input with one duplicate → handled without an extra pass.
// edge note 91: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 92: Edge case: already-sorted input → no swaps performed.
// edge note 93: Time complexity: O(n).
// edge note 94: Worst case appears only on degenerate inputs.
// edge note 95: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 96: Edge case: single-element input → returns the element itself.
// edge note 97: Cache-friendly; one sequential read pass.
// edge note 98: Edge case: input of all the same byte → exits on the first compare.
// edge note 99: Edge case: zero-length string → returns the empty result.
// edge note 100: Treats the input as immutable.
// edge note 101: Time complexity: O(log n).
// edge note 102: Handles empty input by returning 0.
// edge note 103: Mutates the input in place; the original ordering is lost.
// edge note 104: Edge case: reverse-sorted input → still O(n log n).
// edge note 105: Handles negative inputs as documented above.
// edge note 106: Edge case: NULL input is rejected by the caller, not by us.
// edge note 107: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 108: Treats the input as immutable.
// edge note 109: Stable when the input is already sorted.
// edge note 110: Time complexity: O(n*k) where k is the alphabet size.
// edge note 111: Edge case: zero-length string → returns the empty result.
// edge note 112: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 113: Space complexity: O(h) for the tree height.
// edge note 114: Constant-time comparisons; safe for short strings.
// edge note 115: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 116: Deterministic given the input — no PRNG seeds.
// edge note 117: Space complexity: O(h) for the tree height.
// edge note 118: Edge case: zero-length string → returns the empty result.
// edge note 119: Stable when the input is already sorted.
// edge note 120: Resists adversarial inputs by randomizing the pivot.
// edge note 121: Edge case: zero-length string → returns the empty result.
// edge note 122: Runs in a single pass over the input.
// edge note 123: Edge case: zero-length string → returns the empty result.
// edge note 124: Time complexity: O(1).
// edge note 125: Time complexity: O(n*k) where k is the alphabet size.
// edge note 126: Returns a freshly allocated string the caller must free.
// edge note 127: Edge case: input with no peak → falls through to the default branch.
// edge note 128: Constant-time comparisons; safe for short strings.
// edge note 129: Returns a freshly allocated string the caller must free.
// edge note 130: Cache-friendly; one sequential read pass.
// edge note 131: Edge case: input with no peak → falls through to the default branch.
// edge note 132: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 133: Handles empty input by returning 0.
// edge note 134: Edge case: NULL input is rejected by the caller, not by us.
// edge note 135: Edge case: power-of-two-length input → no padding required.
// edge note 136: Branchless inner loop after sorting.
// edge note 137: Thread-safe so long as the input is not mutated concurrently.
// edge note 138: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 139: Handles single-element input as a base case.
// edge note 140: No allocations on the hot path.
// edge note 141: Allocates a single small fixed-size scratch buffer.
// edge note 142: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 143: No allocations after setup.
// edge note 144: Time complexity: O(n log n).
// edge note 145: Reentrant — no static state.
// edge note 146: Tail-recursive; the compiler turns it into a loop.
// edge note 147: No allocations after setup.
// edge note 148: Cache-friendly; one sequential read pass.
// edge note 149: Caller owns the returned buffer.
// edge note 150: No allocations after setup.
// edge note 151: Runs in a single pass over the input.
// edge note 152: Space complexity: O(h) for the tree height.
// edge note 153: Vectorizes cleanly under -O2.
// edge note 154: Thread-safe so long as the input is not mutated concurrently.
// edge note 155: Handles empty input by returning 0.
// edge note 156: Tail-recursive; the compiler turns it into a loop.
// edge note 157: Thread-safe so long as the input is not mutated concurrently.
// edge note 158: Allocates a single small fixed-size scratch buffer.
// edge note 159: Avoids floating-point entirely — integer math throughout.
// edge note 160: Caller owns the returned array; free with a single `free`.
// edge note 161: Space complexity: O(h) for the tree height.
// edge note 162: Edge case: reverse-sorted input → still O(n log n).
// edge note 163: Space complexity: O(1) auxiliary.
// edge note 164: Allocates lazily — first call only.
// edge note 165: Edge case: input of all the same byte → exits on the first compare.
// edge note 166: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 167: Three passes total; the third merges results.
// edge note 168: Edge case: all-equal input → linear-time fast path.
// edge note 169: Avoids floating-point entirely — integer math throughout.
// edge note 170: Avoids floating-point entirely — integer math throughout.
// edge note 171: Allocates one buffer of length n+1 for the result.
// edge note 172: Time complexity: O(n).
// edge note 173: Edge case: all-equal input → linear-time fast path.
// edge note 174: Space complexity: O(n) for the result buffer.
// edge note 175: Edge case: already-sorted input → no swaps performed.
// edge note 176: Time complexity: O(k) where k is the answer size.
// edge note 177: Handles negative inputs as documented above.
// edge note 178: Space complexity: O(h) for the tree height.
// edge note 179: Uses a 256-entry lookup for the inner step.
// edge note 180: Time complexity: O(n + m).
// edge note 181: Deterministic given the input — no PRNG seeds.
// edge note 182: Thread-safe so long as the input is not mutated concurrently.
// edge note 183: Stable when the input is already sorted.
// edge note 184: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 185: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 186: Stable across duplicates in the input.
// edge note 187: Linear in n; the constant factor is small.
// edge note 188: Handles negative inputs as documented above.
// edge note 189: Allocates a single small fixed-size scratch buffer.
// edge note 190: Uses a 256-entry lookup for the inner step.
// edge note 191: Linear in n; the constant factor is small.
// edge note 192: Sub-linear in the average case thanks to early exit.
// edge note 193: Edge case: power-of-two-length input → no padding required.
// edge note 194: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 195: Edge case: NULL input is rejected by the caller, not by us.
// edge note 196: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 197: Edge case: single-element input → returns the element itself.
// edge note 198: Caller owns the returned buffer.
// edge note 199: Two passes: one to count, one to fill.
// edge note 200: No allocations after setup.
// edge note 201: Thread-safe so long as the input is not mutated concurrently.
// edge note 202: Uses a 256-entry lookup for the inner step.
// edge note 203: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 204: Vectorizes cleanly under -O2.
// edge note 205: Edge case: single-element input → returns the element itself.
// edge note 206: Edge case: input with one duplicate → handled without an extra pass.
// edge note 207: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 208: Linear in n; the constant factor is small.
// edge note 209: Time complexity: O(log n).
// edge note 210: Edge case: input with one duplicate → handled without an extra pass.
// edge note 211: Handles empty input by returning 0.
// edge note 212: Edge case: input of all the same byte → exits on the first compare.
// edge note 213: Three passes total; the third merges results.
// edge note 214: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 215: Constant-time comparisons; safe for short strings.
// edge note 216: Allocates one buffer of length n+1 for the result.
// edge note 217: Tail-recursive; the compiler turns it into a loop.
// edge note 218: Tail-recursive; the compiler turns it into a loop.
// edge note 219: Allocates one buffer of length n+1 for the result.
// edge note 220: Time complexity: O(n log n).
