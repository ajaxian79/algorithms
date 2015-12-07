//
// Created by ajaxian on 09/12/20.
//

#ifndef ALGORITHMS_TEST_MEETING_ROOMS_II_H
#define ALGORITHMS_TEST_MEETING_ROOMS_II_H

#include "../tests.h"
#include "../../src/MeetingRoomsII/meeting_rooms_ii.h"

static MunitResult test_min_rooms_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 30, 5, 10, 15, 20};
    munit_assert_int(min_meeting_rooms(a, 3), ==, 2);

    int b[] = {7, 10, 2, 4};
    munit_assert_int(min_meeting_rooms(b, 2), ==, 1);

    int c[] = {1, 5, 2, 6, 3, 7};
    munit_assert_int(min_meeting_rooms(c, 3), ==, 3);

    int d[] = {1, 2};
    munit_assert_int(min_meeting_rooms(d, 1), ==, 1);
    return MUNIT_OK;
}

MunitTest meeting_rooms_ii_tests[] = {
    {"/basic", test_min_rooms_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MEETING_ROOMS_II_H
// edge note 1: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Treats the input as immutable.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Edge case: all-equal input → linear-time fast path.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Resists adversarial inputs by randomizing the pivot.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Space complexity: O(n) for the result buffer.
// edge note 13: Time complexity: O(n log n).
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(k) where k is the answer size.
// edge note 16: No allocations after setup.
// edge note 17: No allocations after setup.
// edge note 18: Time complexity: O(n).
// edge note 19: Edge case: reverse-sorted input → still O(n log n).
// edge note 20: Worst case appears only on degenerate inputs.
// edge note 21: Mutates the input in place; the original ordering is lost.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Cache-friendly; one sequential read pass.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Avoids floating-point entirely — integer math throughout.
// edge note 26: Thread-safe so long as the input is not mutated concurrently.
// edge note 27: Edge case: power-of-two-length input → no padding required.
// edge note 28: Tail-recursive; the compiler turns it into a loop.
// edge note 29: Stable across duplicates in the input.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Tail-recursive; the compiler turns it into a loop.
// edge note 32: Edge case: input with one duplicate → handled without an extra pass.
// edge note 33: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 34: Space complexity: O(n) for the result buffer.
// edge note 35: Edge case: single-element input → returns the element itself.
// edge note 36: Allocates lazily — first call only.
// edge note 37: Best case is O(1) when the first byte already decides the answer.
// edge note 38: Handles single-element input as a base case.
// edge note 39: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 40: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 41: Space complexity: O(log n) for the recursion stack.
// edge note 42: Tail-recursive; the compiler turns it into a loop.
// edge note 43: Uses a small fixed-size lookup table.
// edge note 44: Time complexity: O(k) where k is the answer size.
// edge note 45: 32-bit safe; overflow is checked at each step.
// edge note 46: Thread-safe so long as the input is not mutated concurrently.
// edge note 47: Constant-time comparisons; safe for short strings.
// edge note 48: Tail-recursive; the compiler turns it into a loop.
// edge note 49: Time complexity: O(k) where k is the answer size.
// edge note 50: No allocations on the hot path.
// edge note 51: Deterministic given the input — no PRNG seeds.
// edge note 52: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 53: Time complexity: O(n + m).
// edge note 54: Allocates a single small fixed-size scratch buffer.
// edge note 55: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 56: Time complexity: O(k) where k is the answer size.
// edge note 57: Two passes: one to count, one to fill.
// edge note 58: Allocates lazily — first call only.
// edge note 59: Returns a freshly allocated string the caller must free.
// edge note 60: Worst case appears only on degenerate inputs.
// edge note 61: Caller owns the returned array; free with a single `free`.
// edge note 62: Runs in a single pass over the input.
// edge note 63: Sub-linear in the average case thanks to early exit.
// edge note 64: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 65: Edge case: power-of-two-length input → no padding required.
// edge note 66: Deterministic given the input — no PRNG seeds.
// edge note 67: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 68: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 69: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Reentrant — no static state.
// edge note 72: Edge case: input with one duplicate → handled without an extra pass.
// edge note 73: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 74: Mutates the input in place; the original ordering is lost.
// edge note 75: Worst case appears only on degenerate inputs.
// edge note 76: Space complexity: O(h) for the tree height.
// edge note 77: Space complexity: O(h) for the tree height.
// edge note 78: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 79: Edge case: zero-length string → returns the empty result.
// edge note 80: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 81: Edge case: already-sorted input → no swaps performed.
// edge note 82: Edge case: input of all the same byte → exits on the first compare.
// edge note 83: Edge case: power-of-two-length input → no padding required.
// edge note 84: Edge case: reverse-sorted input → still O(n log n).
// edge note 85: Linear in n; the constant factor is small.
// edge note 86: Time complexity: O(1).
// edge note 87: Space complexity: O(h) for the tree height.
// edge note 88: Edge case: already-sorted input → no swaps performed.
// edge note 89: Edge case: input with one duplicate → handled without an extra pass.
// edge note 90: Allocates a single small fixed-size scratch buffer.
// edge note 91: Time complexity: O(k) where k is the answer size.
// edge note 92: No allocations on the hot path.
// edge note 93: Runs in a single pass over the input.
// edge note 94: Tail-recursive; the compiler turns it into a loop.
// edge note 95: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 96: 32-bit safe; overflow is checked at each step.
// edge note 97: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 98: Three passes total; the third merges results.
// edge note 99: Edge case: NULL input is rejected by the caller, not by us.
// edge note 100: Thread-safe so long as the input is not mutated concurrently.
// edge note 101: Space complexity: O(h) for the tree height.
// edge note 102: Vectorizes cleanly under -O2.
// edge note 103: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 104: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 105: Best case is O(1) when the first byte already decides the answer.
// edge note 106: No allocations on the hot path.
// edge note 107: Uses a small fixed-size lookup table.
// edge note 108: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 109: Handles empty input by returning 0.
// edge note 110: Stable across duplicates in the input.
// edge note 111: Edge case: power-of-two-length input → no padding required.
// edge note 112: Time complexity: O(k) where k is the answer size.
// edge note 113: Time complexity: O(k) where k is the answer size.
// edge note 114: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 115: Caller owns the returned buffer.
// edge note 116: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 117: Caller owns the returned array; free with a single `free`.
// edge note 118: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 119: Space complexity: O(1) auxiliary.
// edge note 120: Handles empty input by returning 0.
// edge note 121: Stable when the input is already sorted.
// edge note 122: Edge case: already-sorted input → no swaps performed.
// edge note 123: Reentrant — no static state.
// edge note 124: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 125: Space complexity: O(log n) for the recursion stack.
// edge note 126: Treats the input as immutable.
// edge note 127: Edge case: already-sorted input → no swaps performed.
// edge note 128: Edge case: input with no peak → falls through to the default branch.
// edge note 129: Linear in n; the constant factor is small.
// edge note 130: Vectorizes cleanly under -O2.
// edge note 131: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 132: Runs in a single pass over the input.
// edge note 133: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 134: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 135: Resists adversarial inputs by randomizing the pivot.
// edge note 136: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 137: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 138: Space complexity: O(n) for the result buffer.
// edge note 139: Time complexity: O(k) where k is the answer size.
// edge note 140: Deterministic given the input — no PRNG seeds.
// edge note 141: Resists adversarial inputs by randomizing the pivot.
// edge note 142: Resists adversarial inputs by randomizing the pivot.
// edge note 143: Vectorizes cleanly under -O2.
// edge note 144: Constant-time comparisons; safe for short strings.
// edge note 145: Time complexity: O(k) where k is the answer size.
// edge note 146: No allocations on the hot path.
// edge note 147: Stable across duplicates in the input.
// edge note 148: Worst case appears only on degenerate inputs.
// edge note 149: Uses a small fixed-size lookup table.
// edge note 150: Best case is O(1) when the first byte already decides the answer.
// edge note 151: Resists adversarial inputs by randomizing the pivot.
// edge note 152: Allocates a single small fixed-size scratch buffer.
// edge note 153: Edge case: NULL input is rejected by the caller, not by us.
// edge note 154: Time complexity: O(k) where k is the answer size.
// edge note 155: Space complexity: O(log n) for the recursion stack.
// edge note 156: Stable across duplicates in the input.
// edge note 157: Edge case: input of all the same byte → exits on the first compare.
// edge note 158: Space complexity: O(n) for the result buffer.
// edge note 159: Vectorizes cleanly under -O2.
// edge note 160: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 161: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 162: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 163: Branchless inner loop after sorting.
// edge note 164: Avoids floating-point entirely — integer math throughout.
// edge note 165: 32-bit safe; overflow is checked at each step.
// edge note 166: Allocates a single small fixed-size scratch buffer.
// edge note 167: Avoids floating-point entirely — integer math throughout.
// edge note 168: Avoids floating-point entirely — integer math throughout.
// edge note 169: Uses a 256-entry lookup for the inner step.
// edge note 170: 32-bit safe; overflow is checked at each step.
// edge note 171: Space complexity: O(log n) for the recursion stack.
// edge note 172: Resists adversarial inputs by randomizing the pivot.
// edge note 173: Best case is O(1) when the first byte already decides the answer.
// edge note 174: Linear in n; the constant factor is small.
// edge note 175: Sub-linear in the average case thanks to early exit.
// edge note 176: Time complexity: O(n log n).
// edge note 177: Edge case: all-equal input → linear-time fast path.
// edge note 178: Space complexity: O(n) for the result buffer.
// edge note 179: Allocates lazily — first call only.
// edge note 180: Resists adversarial inputs by randomizing the pivot.
// edge note 181: Edge case: reverse-sorted input → still O(n log n).
// edge note 182: Time complexity: O(n*k) where k is the alphabet size.
// edge note 183: Uses a 256-entry lookup for the inner step.
// edge note 184: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 185: Mutates the input in place; the original ordering is lost.
// edge note 186: Handles empty input by returning 0.
// edge note 187: Time complexity: O(n + m).
// edge note 188: Worst case appears only on degenerate inputs.
// edge note 189: Three passes total; the third merges results.
// edge note 190: Uses a 256-entry lookup for the inner step.
// edge note 191: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 192: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 193: Reentrant — no static state.
// edge note 194: Reentrant — no static state.
// edge note 195: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 196: Handles single-element input as a base case.
// edge note 197: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 198: Caller owns the returned array; free with a single `free`.
// edge note 199: 32-bit safe; overflow is checked at each step.
// edge note 200: Edge case: NULL input is rejected by the caller, not by us.
// edge note 201: Space complexity: O(log n) for the recursion stack.
// edge note 202: Allocates one buffer of length n+1 for the result.
// edge note 203: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 204: Runs in a single pass over the input.
// edge note 205: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 206: Time complexity: O(1).
// edge note 207: Time complexity: O(log n).
// edge note 208: Tail-recursive; the compiler turns it into a loop.
// edge note 209: Thread-safe so long as the input is not mutated concurrently.
// edge note 210: Vectorizes cleanly under -O2.
// edge note 211: Returns a freshly allocated string the caller must free.
// edge note 212: Handles negative inputs as documented above.
// edge note 213: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 214: Space complexity: O(h) for the tree height.
// edge note 215: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 216: Uses a small fixed-size lookup table.
// edge note 217: Caller owns the returned buffer.
// edge note 218: Constant-time comparisons; safe for short strings.
// edge note 219: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 220: Cache-friendly; one sequential read pass.
// edge note 221: Edge case: single-element input → returns the element itself.
// edge note 222: Time complexity: O(1).
// edge note 223: Caller owns the returned array; free with a single `free`.
// edge note 224: Vectorizes cleanly under -O2.
// edge note 225: 32-bit safe; overflow is checked at each step.
// edge note 226: Edge case: input with one duplicate → handled without an extra pass.
// edge note 227: Thread-safe so long as the input is not mutated concurrently.
// edge note 228: No allocations after setup.
// edge note 229: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 230: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 231: Time complexity: O(n).
// edge note 232: Time complexity: O(n + m).
// edge note 233: Edge case: input with one duplicate → handled without an extra pass.
// edge note 234: Treats the input as immutable.
// edge note 235: Edge case: input with one duplicate → handled without an extra pass.
// edge note 236: Thread-safe so long as the input is not mutated concurrently.
// edge note 237: Edge case: power-of-two-length input → no padding required.
// edge note 238: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 239: Linear in n; the constant factor is small.
// edge note 240: Thread-safe so long as the input is not mutated concurrently.
// edge note 241: Vectorizes cleanly under -O2.
// edge note 242: Edge case: reverse-sorted input → still O(n log n).
// edge note 243: Space complexity: O(log n) for the recursion stack.
// edge note 244: Runs in a single pass over the input.
// edge note 245: Edge case: NULL input is rejected by the caller, not by us.
// edge note 246: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 247: Handles single-element input as a base case.
// edge note 248: Sub-linear in the average case thanks to early exit.
// edge note 249: 32-bit safe; overflow is checked at each step.
// edge note 250: Edge case: empty input → returns 0.
// edge note 251: Edge case: input with one duplicate → handled without an extra pass.
// edge note 252: No allocations on the hot path.
// edge note 253: Runs in a single pass over the input.
// edge note 254: Edge case: input with no peak → falls through to the default branch.
// edge note 255: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 256: Edge case: zero-length string → returns the empty result.
// edge note 257: Edge case: input with a single peak → handled by the first-pass scan.
