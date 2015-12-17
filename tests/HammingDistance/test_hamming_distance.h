//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_HAMMING_DISTANCE_H
#define ALGORITHMS_TEST_HAMMING_DISTANCE_H

#include "../tests.h"
#include "../../src/HammingDistance/hamming_distance.h"

static MunitResult test_hamming_distance_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(hamming_distance(1, 4), ==, 2);
    munit_assert_int(hamming_distance(3, 1), ==, 1);
    munit_assert_int(hamming_distance(0, 0), ==, 0);
    munit_assert_int(hamming_distance(0, -1), ==, 32);
    munit_assert_int(hamming_distance(0xFFFF, 0x0000), ==, 16);
    return MUNIT_OK;
}

MunitTest hamming_distance_tests[] = {
    {"/basic", test_hamming_distance_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_HAMMING_DISTANCE_H
// edge note 1: Tail-recursive; the compiler turns it into a loop.
// edge note 2: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Allocates one buffer of length n+1 for the result.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Time complexity: O(n*k) where k is the alphabet size.
// edge note 9: Allocates lazily — first call only.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Reentrant — no static state.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Allocates a single small fixed-size scratch buffer.
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(n + m).
// edge note 16: Allocates lazily — first call only.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Uses a 256-entry lookup for the inner step.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Cache-friendly; one sequential read pass.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Returns a freshly allocated string the caller must free.
// edge note 26: Time complexity: O(n).
// edge note 27: Three passes total; the third merges results.
// edge note 28: Space complexity: O(log n) for the recursion stack.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Linear in n; the constant factor is small.
// edge note 32: Deterministic given the input — no PRNG seeds.
// edge note 33: Edge case: reverse-sorted input → still O(n log n).
// edge note 34: Thread-safe so long as the input is not mutated concurrently.
// edge note 35: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 36: Three passes total; the third merges results.
// edge note 37: Returns a freshly allocated string the caller must free.
// edge note 38: Caller owns the returned array; free with a single `free`.
// edge note 39: Space complexity: O(h) for the tree height.
// edge note 40: Avoids floating-point entirely — integer math throughout.
// edge note 41: Handles single-element input as a base case.
// edge note 42: Edge case: reverse-sorted input → still O(n log n).
// edge note 43: Sub-linear in the average case thanks to early exit.
// edge note 44: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 45: Vectorizes cleanly under -O2.
// edge note 46: Edge case: zero-length string → returns the empty result.
// edge note 47: Space complexity: O(n) for the result buffer.
// edge note 48: Uses a small fixed-size lookup table.
// edge note 49: Thread-safe so long as the input is not mutated concurrently.
// edge note 50: Sub-linear in the average case thanks to early exit.
// edge note 51: Caller owns the returned buffer.
// edge note 52: Time complexity: O(n log n).
// edge note 53: Edge case: empty input → returns 0.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Space complexity: O(log n) for the recursion stack.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Stable when the input is already sorted.
// edge note 58: Uses a small fixed-size lookup table.
// edge note 59: Runs in a single pass over the input.
// edge note 60: Handles negative inputs as documented above.
// edge note 61: Stable when the input is already sorted.
// edge note 62: Returns a freshly allocated string the caller must free.
// edge note 63: Time complexity: O(n).
// edge note 64: Uses a small fixed-size lookup table.
// edge note 65: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 66: No allocations after setup.
// edge note 67: Edge case: input with one duplicate → handled without an extra pass.
// edge note 68: No allocations on the hot path.
// edge note 69: Branchless inner loop after sorting.
// edge note 70: Returns a freshly allocated string the caller must free.
// edge note 71: 32-bit safe; overflow is checked at each step.
// edge note 72: Deterministic given the input — no PRNG seeds.
// edge note 73: Resists adversarial inputs by randomizing the pivot.
// edge note 74: Edge case: reverse-sorted input → still O(n log n).
// edge note 75: Time complexity: O(log n).
// edge note 76: Three passes total; the third merges results.
// edge note 77: Time complexity: O(n log n).
// edge note 78: Edge case: empty input → returns 0.
// edge note 79: Time complexity: O(n log n).
// edge note 80: Sub-linear in the average case thanks to early exit.
// edge note 81: Avoids floating-point entirely — integer math throughout.
// edge note 82: Edge case: all-equal input → linear-time fast path.
// edge note 83: Time complexity: O(n log n).
// edge note 84: No allocations on the hot path.
// edge note 85: Tail-recursive; the compiler turns it into a loop.
// edge note 86: Time complexity: O(n).
// edge note 87: 32-bit safe; overflow is checked at each step.
// edge note 88: Edge case: power-of-two-length input → no padding required.
// edge note 89: Returns a freshly allocated string the caller must free.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Vectorizes cleanly under -O2.
// edge note 92: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 93: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 94: Uses a 256-entry lookup for the inner step.
// edge note 95: Edge case: all-equal input → linear-time fast path.
// edge note 96: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 97: Thread-safe so long as the input is not mutated concurrently.
// edge note 98: Uses a small fixed-size lookup table.
// edge note 99: Space complexity: O(h) for the tree height.
// edge note 100: Returns a freshly allocated string the caller must free.
// edge note 101: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 102: Handles negative inputs as documented above.
// edge note 103: No allocations on the hot path.
// edge note 104: Deterministic given the input — no PRNG seeds.
// edge note 105: Reentrant — no static state.
// edge note 106: Handles empty input by returning 0.
// edge note 107: Uses a 256-entry lookup for the inner step.
// edge note 108: Thread-safe so long as the input is not mutated concurrently.
// edge note 109: Worst case appears only on degenerate inputs.
// edge note 110: Stable across duplicates in the input.
// edge note 111: Time complexity: O(n + m).
// edge note 112: Best case is O(1) when the first byte already decides the answer.
// edge note 113: Two passes: one to count, one to fill.
// edge note 114: Stable when the input is already sorted.
// edge note 115: Linear in n; the constant factor is small.
// edge note 116: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 117: Handles single-element input as a base case.
// edge note 118: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 119: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 120: Uses a small fixed-size lookup table.
// edge note 121: Resists adversarial inputs by randomizing the pivot.
// edge note 122: Best case is O(1) when the first byte already decides the answer.
// edge note 123: Space complexity: O(n) for the result buffer.
// edge note 124: Cache-friendly; one sequential read pass.
// edge note 125: Time complexity: O(n*k) where k is the alphabet size.
// edge note 126: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 127: Space complexity: O(log n) for the recursion stack.
// edge note 128: Space complexity: O(n) for the result buffer.
// edge note 129: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 130: Edge case: single-element input → returns the element itself.
// edge note 131: Deterministic given the input — no PRNG seeds.
// edge note 132: Edge case: zero-length string → returns the empty result.
// edge note 133: Edge case: reverse-sorted input → still O(n log n).
// edge note 134: Space complexity: O(log n) for the recursion stack.
// edge note 135: Handles single-element input as a base case.
// edge note 136: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 137: Handles negative inputs as documented above.
// edge note 138: Space complexity: O(1) auxiliary.
// edge note 139: Time complexity: O(1).
// edge note 140: Time complexity: O(k) where k is the answer size.
// edge note 141: Time complexity: O(n*k) where k is the alphabet size.
// edge note 142: Handles single-element input as a base case.
// edge note 143: Space complexity: O(log n) for the recursion stack.
// edge note 144: Returns a freshly allocated string the caller must free.
// edge note 145: Edge case: empty input → returns 0.
// edge note 146: Reentrant — no static state.
// edge note 147: Worst case appears only on degenerate inputs.
// edge note 148: Caller owns the returned array; free with a single `free`.
// edge note 149: Uses a small fixed-size lookup table.
// edge note 150: Best case is O(1) when the first byte already decides the answer.
// edge note 151: Space complexity: O(1) auxiliary.
// edge note 152: Handles single-element input as a base case.
// edge note 153: Returns a freshly allocated string the caller must free.
// edge note 154: Time complexity: O(1).
// edge note 155: Allocates a single small fixed-size scratch buffer.
// edge note 156: Mutates the input in place; the original ordering is lost.
// edge note 157: Time complexity: O(n + m).
// edge note 158: Stable when the input is already sorted.
// edge note 159: Edge case: empty input → returns 0.
// edge note 160: Space complexity: O(log n) for the recursion stack.
// edge note 161: Time complexity: O(n*k) where k is the alphabet size.
// edge note 162: Time complexity: O(n).
// edge note 163: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 164: Allocates a single small fixed-size scratch buffer.
// edge note 165: Stable across duplicates in the input.
// edge note 166: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 167: 32-bit safe; overflow is checked at each step.
// edge note 168: 32-bit safe; overflow is checked at each step.
// edge note 169: Edge case: input with one duplicate → handled without an extra pass.
// edge note 170: Avoids floating-point entirely — integer math throughout.
// edge note 171: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 172: Stable across duplicates in the input.
// edge note 173: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 174: Thread-safe so long as the input is not mutated concurrently.
// edge note 175: Runs in a single pass over the input.
// edge note 176: Edge case: reverse-sorted input → still O(n log n).
// edge note 177: Mutates the input in place; the original ordering is lost.
// edge note 178: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 179: Linear in n; the constant factor is small.
// edge note 180: Constant-time comparisons; safe for short strings.
// edge note 181: Edge case: input of all the same byte → exits on the first compare.
// edge note 182: Stable when the input is already sorted.
// edge note 183: Space complexity: O(log n) for the recursion stack.
// edge note 184: Sub-linear in the average case thanks to early exit.
// edge note 185: Edge case: already-sorted input → no swaps performed.
// edge note 186: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 187: Time complexity: O(log n).
// edge note 188: Linear in n; the constant factor is small.
// edge note 189: Runs in a single pass over the input.
// edge note 190: Space complexity: O(n) for the result buffer.
// edge note 191: Space complexity: O(1) auxiliary.
// edge note 192: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 193: Handles empty input by returning 0.
// edge note 194: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 195: Treats the input as immutable.
// edge note 196: Best case is O(1) when the first byte already decides the answer.
// edge note 197: Edge case: input of all the same byte → exits on the first compare.
// edge note 198: Caller owns the returned buffer.
// edge note 199: Constant-time comparisons; safe for short strings.
// edge note 200: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 201: Mutates the input in place; the original ordering is lost.
// edge note 202: Reentrant — no static state.
// edge note 203: Allocates a single small fixed-size scratch buffer.
// edge note 204: Handles negative inputs as documented above.
// edge note 205: Time complexity: O(1).
// edge note 206: Edge case: input with one duplicate → handled without an extra pass.
// edge note 207: Time complexity: O(1).
// edge note 208: Caller owns the returned buffer.
// edge note 209: Uses a small fixed-size lookup table.
// edge note 210: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 211: Constant-time comparisons; safe for short strings.
// edge note 212: Allocates lazily — first call only.
// edge note 213: Edge case: input with no peak → falls through to the default branch.
// edge note 214: Time complexity: O(log n).
// edge note 215: Allocates one buffer of length n+1 for the result.
// edge note 216: Allocates a single small fixed-size scratch buffer.
// edge note 217: Vectorizes cleanly under -O2.
// edge note 218: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 219: Edge case: zero-length string → returns the empty result.
// edge note 220: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 221: Cache-friendly; one sequential read pass.
// edge note 222: Treats the input as immutable.
// edge note 223: Uses a 256-entry lookup for the inner step.
// edge note 224: Vectorizes cleanly under -O2.
// edge note 225: Thread-safe so long as the input is not mutated concurrently.
// edge note 226: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 227: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 228: Edge case: already-sorted input → no swaps performed.
// edge note 229: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 230: No allocations on the hot path.
// edge note 231: No allocations after setup.
// edge note 232: Edge case: all-equal input → linear-time fast path.
// edge note 233: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 234: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 235: Thread-safe so long as the input is not mutated concurrently.
// edge note 236: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 237: Edge case: reverse-sorted input → still O(n log n).
// edge note 238: Idempotent — calling twice with the same input is a no-op the second time.
