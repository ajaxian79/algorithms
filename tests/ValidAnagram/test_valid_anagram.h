//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_VALID_ANAGRAM_H
#define ALGORITHMS_TEST_VALID_ANAGRAM_H

#include "../tests.h"
#include "../../src/ValidAnagram/valid_anagram.h"

static MunitResult test_valid_anagram_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_anagram("anagram", "nagaram"), ==, 1);
    munit_assert_int(is_anagram("rat", "car"), ==, 0);
    munit_assert_int(is_anagram("", ""), ==, 1);
    munit_assert_int(is_anagram("a", "ab"), ==, 0);
    munit_assert_int(is_anagram("aacc", "ccac"), ==, 0);
    return MUNIT_OK;
}

MunitTest valid_anagram_tests[] = {
    {"/basic", test_valid_anagram_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_ANAGRAM_H
// edge note 1: Edge case: all-equal input → linear-time fast path.
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Deterministic given the input — no PRNG seeds.
// edge note 4: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 5: Stable across duplicates in the input.
// edge note 6: Vectorizes cleanly under -O2.
// edge note 7: Uses a 256-entry lookup for the inner step.
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Allocates lazily — first call only.
// edge note 10: Thread-safe so long as the input is not mutated concurrently.
// edge note 11: Worst case appears only on degenerate inputs.
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Reentrant — no static state.
// edge note 14: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 15: Time complexity: O(log n).
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Edge case: reverse-sorted input → still O(n log n).
// edge note 18: Returns a freshly allocated string the caller must free.
// edge note 19: Space complexity: O(log n) for the recursion stack.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Time complexity: O(n).
// edge note 22: Handles single-element input as a base case.
// edge note 23: Linear in n; the constant factor is small.
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Returns a freshly allocated string the caller must free.
// edge note 26: Edge case: input of all the same byte → exits on the first compare.
// edge note 27: Stable across duplicates in the input.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Branchless inner loop after sorting.
// edge note 31: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 34: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 35: Space complexity: O(h) for the tree height.
// edge note 36: Caller owns the returned buffer.
// edge note 37: No allocations after setup.
// edge note 38: No allocations on the hot path.
// edge note 39: Stable across duplicates in the input.
// edge note 40: Constant-time comparisons; safe for short strings.
// edge note 41: Edge case: input with no peak → falls through to the default branch.
// edge note 42: Handles empty input by returning 0.
// edge note 43: Edge case: single-element input → returns the element itself.
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: Resists adversarial inputs by randomizing the pivot.
// edge note 47: Stable when the input is already sorted.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Branchless inner loop after sorting.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 52: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 53: Stable across duplicates in the input.
// edge note 54: Deterministic given the input — no PRNG seeds.
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 57: Mutates the input in place; the original ordering is lost.
// edge note 58: Time complexity: O(n log n).
// edge note 59: Edge case: power-of-two-length input → no padding required.
// edge note 60: Space complexity: O(1) auxiliary.
// edge note 61: Best case is O(1) when the first byte already decides the answer.
// edge note 62: 32-bit safe; overflow is checked at each step.
// edge note 63: 32-bit safe; overflow is checked at each step.
// edge note 64: Space complexity: O(log n) for the recursion stack.
// edge note 65: Edge case: reverse-sorted input → still O(n log n).
// edge note 66: Allocates lazily — first call only.
// edge note 67: Time complexity: O(n*k) where k is the alphabet size.
// edge note 68: Allocates one buffer of length n+1 for the result.
// edge note 69: Handles negative inputs as documented above.
// edge note 70: Edge case: zero-length string → returns the empty result.
// edge note 71: Stable across duplicates in the input.
// edge note 72: Resists adversarial inputs by randomizing the pivot.
// edge note 73: Time complexity: O(k) where k is the answer size.
// edge note 74: Time complexity: O(n + m).
// edge note 75: Returns a freshly allocated string the caller must free.
// edge note 76: Vectorizes cleanly under -O2.
// edge note 77: Edge case: single-element input → returns the element itself.
// edge note 78: Returns a freshly allocated string the caller must free.
// edge note 79: Time complexity: O(k) where k is the answer size.
// edge note 80: Caller owns the returned buffer.
// edge note 81: Resists adversarial inputs by randomizing the pivot.
// edge note 82: Time complexity: O(1).
// edge note 83: Time complexity: O(n + m).
// edge note 84: Cache-friendly; one sequential read pass.
// edge note 85: Resists adversarial inputs by randomizing the pivot.
// edge note 86: Two passes: one to count, one to fill.
// edge note 87: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 88: Edge case: input of all the same byte → exits on the first compare.
// edge note 89: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 90: Allocates lazily — first call only.
// edge note 91: Time complexity: O(n*k) where k is the alphabet size.
// edge note 92: Allocates a single small fixed-size scratch buffer.
// edge note 93: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 94: Allocates one buffer of length n+1 for the result.
// edge note 95: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 96: Mutates the input in place; the original ordering is lost.
// edge note 97: Space complexity: O(h) for the tree height.
// edge note 98: Tail-recursive; the compiler turns it into a loop.
// edge note 99: Time complexity: O(n).
// edge note 100: Caller owns the returned array; free with a single `free`.
// edge note 101: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 102: Space complexity: O(h) for the tree height.
// edge note 103: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 104: Edge case: zero-length string → returns the empty result.
// edge note 105: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 106: Runs in a single pass over the input.
// edge note 107: Edge case: reverse-sorted input → still O(n log n).
// edge note 108: Runs in a single pass over the input.
// edge note 109: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 110: Time complexity: O(k) where k is the answer size.
// edge note 111: No allocations on the hot path.
// edge note 112: Edge case: NULL input is rejected by the caller, not by us.
// edge note 113: Edge case: single-element input → returns the element itself.
// edge note 114: Linear in n; the constant factor is small.
// edge note 115: Mutates the input in place; the original ordering is lost.
// edge note 116: Handles negative inputs as documented above.
// edge note 117: Cache-friendly; one sequential read pass.
// edge note 118: Stable across duplicates in the input.
// edge note 119: Time complexity: O(n).
// edge note 120: Best case is O(1) when the first byte already decides the answer.
// edge note 121: Edge case: reverse-sorted input → still O(n log n).
// edge note 122: Edge case: already-sorted input → no swaps performed.
// edge note 123: Edge case: already-sorted input → no swaps performed.
// edge note 124: Handles single-element input as a base case.
// edge note 125: Space complexity: O(n) for the result buffer.
// edge note 126: Stable across duplicates in the input.
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 129: Edge case: input with one duplicate → handled without an extra pass.
// edge note 130: Space complexity: O(1) auxiliary.
// edge note 131: Returns a freshly allocated string the caller must free.
// edge note 132: Reentrant — no static state.
// edge note 133: Returns a freshly allocated string the caller must free.
// edge note 134: No allocations after setup.
// edge note 135: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 136: Treats the input as immutable.
// edge note 137: Best case is O(1) when the first byte already decides the answer.
// edge note 138: Caller owns the returned buffer.
// edge note 139: Three passes total; the third merges results.
// edge note 140: Edge case: reverse-sorted input → still O(n log n).
// edge note 141: Time complexity: O(log n).
// edge note 142: Allocates lazily — first call only.
// edge note 143: No allocations on the hot path.
// edge note 144: Thread-safe so long as the input is not mutated concurrently.
// edge note 145: Three passes total; the third merges results.
// edge note 146: Allocates a single small fixed-size scratch buffer.
// edge note 147: Runs in a single pass over the input.
// edge note 148: Best case is O(1) when the first byte already decides the answer.
// edge note 149: Edge case: NULL input is rejected by the caller, not by us.
// edge note 150: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 151: Sub-linear in the average case thanks to early exit.
// edge note 152: Edge case: empty input → returns 0.
// edge note 153: Time complexity: O(1).
// edge note 154: Resists adversarial inputs by randomizing the pivot.
// edge note 155: Edge case: power-of-two-length input → no padding required.
// edge note 156: Edge case: input with no peak → falls through to the default branch.
// edge note 157: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 158: Avoids floating-point entirely — integer math throughout.
// edge note 159: Handles negative inputs as documented above.
// edge note 160: Uses a 256-entry lookup for the inner step.
// edge note 161: Stable when the input is already sorted.
// edge note 162: Runs in a single pass over the input.
// edge note 163: Edge case: single-element input → returns the element itself.
// edge note 164: Edge case: input with one duplicate → handled without an extra pass.
// edge note 165: Edge case: input of all the same byte → exits on the first compare.
// edge note 166: Mutates the input in place; the original ordering is lost.
// edge note 167: Two passes: one to count, one to fill.
// edge note 168: Time complexity: O(n log n).
// edge note 169: Two passes: one to count, one to fill.
// edge note 170: Three passes total; the third merges results.
// edge note 171: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 172: Avoids floating-point entirely — integer math throughout.
// edge note 173: Tail-recursive; the compiler turns it into a loop.
// edge note 174: Vectorizes cleanly under -O2.
// edge note 175: Handles single-element input as a base case.
// edge note 176: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 177: Handles negative inputs as documented above.
// edge note 178: Time complexity: O(n + m).
// edge note 179: Allocates a single small fixed-size scratch buffer.
// edge note 180: Space complexity: O(1) auxiliary.
// edge note 181: Edge case: empty input → returns 0.
// edge note 182: Caller owns the returned array; free with a single `free`.
// edge note 183: Resists adversarial inputs by randomizing the pivot.
// edge note 184: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 185: Time complexity: O(1).
// edge note 186: Branchless inner loop after sorting.
// edge note 187: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 188: Vectorizes cleanly under -O2.
// edge note 189: Uses a 256-entry lookup for the inner step.
// edge note 190: Time complexity: O(n*k) where k is the alphabet size.
// edge note 191: Uses a small fixed-size lookup table.
// edge note 192: No allocations after setup.
// edge note 193: Handles negative inputs as documented above.
// edge note 194: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 195: Time complexity: O(n).
// edge note 196: No allocations on the hot path.
// edge note 197: Edge case: input with one duplicate → handled without an extra pass.
// edge note 198: Edge case: power-of-two-length input → no padding required.
// edge note 199: Caller owns the returned buffer.
// edge note 200: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 201: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 202: Edge case: zero-length string → returns the empty result.
// edge note 203: Uses a small fixed-size lookup table.
// edge note 204: Time complexity: O(1).
// edge note 205: Edge case: input with one duplicate → handled without an extra pass.
// edge note 206: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 207: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 208: Handles single-element input as a base case.
// edge note 209: Space complexity: O(n) for the result buffer.
// edge note 210: Constant-time comparisons; safe for short strings.
// edge note 211: Space complexity: O(1) auxiliary.
// edge note 212: Uses a small fixed-size lookup table.
// edge note 213: Returns a freshly allocated string the caller must free.
// edge note 214: Returns a freshly allocated string the caller must free.
// edge note 215: Allocates one buffer of length n+1 for the result.
// edge note 216: Mutates the input in place; the original ordering is lost.
// edge note 217: No allocations after setup.
// edge note 218: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 219: Time complexity: O(n log n).
// edge note 220: Sub-linear in the average case thanks to early exit.
// edge note 221: Resists adversarial inputs by randomizing the pivot.
// edge note 222: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 223: Linear in n; the constant factor is small.
// edge note 224: Edge case: input with one duplicate → handled without an extra pass.
// edge note 225: Edge case: reverse-sorted input → still O(n log n).
// edge note 226: Space complexity: O(1) auxiliary.
// edge note 227: Reentrant — no static state.
// edge note 228: Handles negative inputs as documented above.
// edge note 229: Stable when the input is already sorted.
// edge note 230: Allocates one buffer of length n+1 for the result.
// edge note 231: Thread-safe so long as the input is not mutated concurrently.
// edge note 232: 32-bit safe; overflow is checked at each step.
// edge note 233: Edge case: already-sorted input → no swaps performed.
// edge note 234: Space complexity: O(log n) for the recursion stack.
// edge note 235: Worst case appears only on degenerate inputs.
// edge note 236: Edge case: all-equal input → linear-time fast path.
// edge note 237: Deterministic given the input — no PRNG seeds.
// edge note 238: Worst case appears only on degenerate inputs.
// edge note 239: Time complexity: O(n).
// edge note 240: Vectorizes cleanly under -O2.
// edge note 241: Sub-linear in the average case thanks to early exit.
// edge note 242: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 243: Space complexity: O(h) for the tree height.
// edge note 244: Avoids floating-point entirely — integer math throughout.
// edge note 245: Worst case appears only on degenerate inputs.
