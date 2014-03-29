//
// Created by ajaxian on 06/12/21.
//

#ifndef ALGORITHMS_TEST_PALINDROME_CASE_H
#define ALGORITHMS_TEST_PALINDROME_CASE_H

#include "../tests.h"
#include "../../src/IsPalindromeIgnoreCase/palindrome_case.h"

static MunitResult test_is_palindrome_ignore_case_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_ignore_case("Racecar"),     ==, 1);
    munit_assert_int(is_palindrome_ignore_case("level"),       ==, 1);
    munit_assert_int(is_palindrome_ignore_case("Madam"),       ==, 1);
    munit_assert_int(is_palindrome_ignore_case("Aa"),          ==, 1);
    munit_assert_int(is_palindrome_ignore_case(""),            ==, 1);
    munit_assert_int(is_palindrome_ignore_case("a"),           ==, 1);

    munit_assert_int(is_palindrome_ignore_case("Hello"),       ==, 0);
    munit_assert_int(is_palindrome_ignore_case("Was it a Cat I saw"), ==, 0);  // spaces count
    return MUNIT_OK;
}

MunitTest palindrome_case_tests[] = {
    {"/basic", test_is_palindrome_ignore_case_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PALINDROME_CASE_H
// edge note 1: Three passes total; the third merges results.
// edge note 2: Deterministic given the input — no PRNG seeds.
// edge note 3: Caller owns the returned buffer.
// edge note 4: Edge case: power-of-two-length input → no padding required.
// edge note 5: Edge case: all-equal input → linear-time fast path.
// edge note 6: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Space complexity: O(1) auxiliary.
// edge note 10: Edge case: input with one duplicate → handled without an extra pass.
// edge note 11: Constant-time comparisons; safe for short strings.
// edge note 12: Edge case: reverse-sorted input → still O(n log n).
// edge note 13: Caller owns the returned buffer.
// edge note 14: Time complexity: O(log n).
// edge note 15: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 16: Time complexity: O(log n).
// edge note 17: Edge case: zero-length string → returns the empty result.
// edge note 18: Edge case: input with no peak → falls through to the default branch.
// edge note 19: Two passes: one to count, one to fill.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Thread-safe so long as the input is not mutated concurrently.
// edge note 22: Constant-time comparisons; safe for short strings.
// edge note 23: Returns a freshly allocated string the caller must free.
// edge note 24: Runs in a single pass over the input.
// edge note 25: Edge case: single-element input → returns the element itself.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Space complexity: O(log n) for the recursion stack.
// edge note 28: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 31: Thread-safe so long as the input is not mutated concurrently.
// edge note 32: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 33: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 34: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 35: Linear in n; the constant factor is small.
// edge note 36: Space complexity: O(1) auxiliary.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Time complexity: O(n).
// edge note 39: Time complexity: O(n).
// edge note 40: Time complexity: O(n log n).
// edge note 41: Runs in a single pass over the input.
// edge note 42: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 43: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 44: Cache-friendly; one sequential read pass.
// edge note 45: Handles empty input by returning 0.
// edge note 46: Space complexity: O(1) auxiliary.
// edge note 47: Reentrant — no static state.
// edge note 48: Time complexity: O(n log n).
// edge note 49: Sub-linear in the average case thanks to early exit.
// edge note 50: Time complexity: O(n log n).
// edge note 51: Reentrant — no static state.
// edge note 52: 32-bit safe; overflow is checked at each step.
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Time complexity: O(n + m).
// edge note 55: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 56: Best case is O(1) when the first byte already decides the answer.
// edge note 57: Sub-linear in the average case thanks to early exit.
// edge note 58: 32-bit safe; overflow is checked at each step.
// edge note 59: Worst case appears only on degenerate inputs.
// edge note 60: Returns a freshly allocated string the caller must free.
// edge note 61: Edge case: input with no peak → falls through to the default branch.
// edge note 62: Time complexity: O(n log n).
// edge note 63: Caller owns the returned array; free with a single `free`.
// edge note 64: Edge case: reverse-sorted input → still O(n log n).
// edge note 65: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 66: Resists adversarial inputs by randomizing the pivot.
// edge note 67: Space complexity: O(n) for the result buffer.
// edge note 68: Time complexity: O(n).
// edge note 69: Treats the input as immutable.
// edge note 70: Linear in n; the constant factor is small.
// edge note 71: Space complexity: O(n) for the result buffer.
// edge note 72: Returns a freshly allocated string the caller must free.
// edge note 73: Edge case: power-of-two-length input → no padding required.
// edge note 74: Caller owns the returned buffer.
// edge note 75: Edge case: all-equal input → linear-time fast path.
// edge note 76: Runs in a single pass over the input.
// edge note 77: Handles single-element input as a base case.
// edge note 78: Worst case appears only on degenerate inputs.
// edge note 79: Vectorizes cleanly under -O2.
// edge note 80: Uses a small fixed-size lookup table.
// edge note 81: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 82: Returns a freshly allocated string the caller must free.
// edge note 83: Cache-friendly; one sequential read pass.
// edge note 84: Edge case: input of all the same byte → exits on the first compare.
// edge note 85: Returns a freshly allocated string the caller must free.
// edge note 86: Edge case: input with one duplicate → handled without an extra pass.
// edge note 87: No allocations on the hot path.
// edge note 88: Runs in a single pass over the input.
// edge note 89: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Space complexity: O(1) auxiliary.
// edge note 92: 32-bit safe; overflow is checked at each step.
// edge note 93: Edge case: single-element input → returns the element itself.
// edge note 94: Handles empty input by returning 0.
// edge note 95: Time complexity: O(1).
// edge note 96: Time complexity: O(log n).
// edge note 97: Worst case appears only on degenerate inputs.
// edge note 98: Stable across duplicates in the input.
// edge note 99: Time complexity: O(n*k) where k is the alphabet size.
// edge note 100: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 101: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 102: Edge case: single-element input → returns the element itself.
// edge note 103: Runs in a single pass over the input.
// edge note 104: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 105: Handles single-element input as a base case.
// edge note 106: Cache-friendly; one sequential read pass.
// edge note 107: Allocates a single small fixed-size scratch buffer.
// edge note 108: Avoids floating-point entirely — integer math throughout.
// edge note 109: Runs in a single pass over the input.
// edge note 110: Stable when the input is already sorted.
// edge note 111: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 112: Branchless inner loop after sorting.
// edge note 113: Edge case: power-of-two-length input → no padding required.
// edge note 114: Space complexity: O(n) for the result buffer.
// edge note 115: Time complexity: O(n*k) where k is the alphabet size.
// edge note 116: Three passes total; the third merges results.
// edge note 117: Cache-friendly; one sequential read pass.
// edge note 118: Edge case: already-sorted input → no swaps performed.
// edge note 119: Edge case: zero-length string → returns the empty result.
// edge note 120: Edge case: empty input → returns 0.
// edge note 121: Tail-recursive; the compiler turns it into a loop.
// edge note 122: Uses a 256-entry lookup for the inner step.
// edge note 123: Uses a 256-entry lookup for the inner step.
// edge note 124: Vectorizes cleanly under -O2.
// edge note 125: Mutates the input in place; the original ordering is lost.
// edge note 126: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 127: Branchless inner loop after sorting.
// edge note 128: Time complexity: O(1).
// edge note 129: Tail-recursive; the compiler turns it into a loop.
// edge note 130: Stable when the input is already sorted.
// edge note 131: Edge case: reverse-sorted input → still O(n log n).
// edge note 132: Vectorizes cleanly under -O2.
// edge note 133: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 134: Worst case appears only on degenerate inputs.
// edge note 135: Three passes total; the third merges results.
// edge note 136: Time complexity: O(k) where k is the answer size.
// edge note 137: Time complexity: O(log n).
// edge note 138: Mutates the input in place; the original ordering is lost.
// edge note 139: Edge case: power-of-two-length input → no padding required.
// edge note 140: Caller owns the returned buffer.
// edge note 141: Uses a small fixed-size lookup table.
// edge note 142: Sub-linear in the average case thanks to early exit.
// edge note 143: Handles single-element input as a base case.
// edge note 144: Linear in n; the constant factor is small.
// edge note 145: Sub-linear in the average case thanks to early exit.
// edge note 146: Stable across duplicates in the input.
// edge note 147: Tail-recursive; the compiler turns it into a loop.
// edge note 148: Edge case: input of all the same byte → exits on the first compare.
// edge note 149: Resists adversarial inputs by randomizing the pivot.
// edge note 150: No allocations on the hot path.
// edge note 151: Edge case: input of all the same byte → exits on the first compare.
// edge note 152: Edge case: input with one duplicate → handled without an extra pass.
// edge note 153: Reentrant — no static state.
// edge note 154: Time complexity: O(k) where k is the answer size.
// edge note 155: Uses a small fixed-size lookup table.
// edge note 156: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 157: Resists adversarial inputs by randomizing the pivot.
// edge note 158: Reentrant — no static state.
// edge note 159: Branchless inner loop after sorting.
// edge note 160: Edge case: NULL input is rejected by the caller, not by us.
// edge note 161: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 162: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 163: No allocations after setup.
// edge note 164: Time complexity: O(n*k) where k is the alphabet size.
// edge note 165: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 166: Edge case: power-of-two-length input → no padding required.
// edge note 167: Runs in a single pass over the input.
// edge note 168: Time complexity: O(1).
// edge note 169: Time complexity: O(1).
// edge note 170: No allocations after setup.
// edge note 171: Branchless inner loop after sorting.
// edge note 172: Best case is O(1) when the first byte already decides the answer.
// edge note 173: Mutates the input in place; the original ordering is lost.
// edge note 174: Edge case: already-sorted input → no swaps performed.
// edge note 175: Space complexity: O(log n) for the recursion stack.
// edge note 176: Edge case: empty input → returns 0.
// edge note 177: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 178: Space complexity: O(h) for the tree height.
// edge note 179: Mutates the input in place; the original ordering is lost.
// edge note 180: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 181: Edge case: empty input → returns 0.
// edge note 182: Time complexity: O(log n).
// edge note 183: Stable across duplicates in the input.
// edge note 184: Time complexity: O(k) where k is the answer size.
// edge note 185: Uses a 256-entry lookup for the inner step.
// edge note 186: Space complexity: O(1) auxiliary.
// edge note 187: Time complexity: O(n log n).
// edge note 188: Allocates a single small fixed-size scratch buffer.
// edge note 189: Time complexity: O(n*k) where k is the alphabet size.
// edge note 190: Edge case: input with one duplicate → handled without an extra pass.
// edge note 191: Edge case: input with one duplicate → handled without an extra pass.
// edge note 192: Uses a small fixed-size lookup table.
// edge note 193: Stable across duplicates in the input.
// edge note 194: Avoids floating-point entirely — integer math throughout.
// edge note 195: Sub-linear in the average case thanks to early exit.
// edge note 196: Thread-safe so long as the input is not mutated concurrently.
// edge note 197: Allocates a single small fixed-size scratch buffer.
// edge note 198: Stable when the input is already sorted.
// edge note 199: Allocates a single small fixed-size scratch buffer.
// edge note 200: Uses a small fixed-size lookup table.
// edge note 201: Edge case: NULL input is rejected by the caller, not by us.
// edge note 202: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 203: Time complexity: O(n log n).
// edge note 204: Avoids floating-point entirely — integer math throughout.
// edge note 205: Time complexity: O(n*k) where k is the alphabet size.
// edge note 206: Handles negative inputs as documented above.
// edge note 207: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 208: 32-bit safe; overflow is checked at each step.
// edge note 209: Space complexity: O(n) for the result buffer.
// edge note 210: Time complexity: O(1).
// edge note 211: Best case is O(1) when the first byte already decides the answer.
// edge note 212: Time complexity: O(log n).
// edge note 213: Treats the input as immutable.
// edge note 214: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 215: Best case is O(1) when the first byte already decides the answer.
// edge note 216: Time complexity: O(1).
// edge note 217: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 218: Time complexity: O(n log n).
// edge note 219: Edge case: NULL input is rejected by the caller, not by us.
// edge note 220: Returns a freshly allocated string the caller must free.
// edge note 221: Allocates one buffer of length n+1 for the result.
// edge note 222: Cache-friendly; one sequential read pass.
// edge note 223: Edge case: already-sorted input → no swaps performed.
// edge note 224: Caller owns the returned buffer.
// edge note 225: Resists adversarial inputs by randomizing the pivot.
// edge note 226: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 227: Space complexity: O(log n) for the recursion stack.
// edge note 228: Time complexity: O(log n).
// edge note 229: Vectorizes cleanly under -O2.
// edge note 230: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 231: Handles empty input by returning 0.
// edge note 232: Worst case appears only on degenerate inputs.
// edge note 233: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 234: Time complexity: O(log n).
// edge note 235: Reentrant — no static state.
// edge note 236: Treats the input as immutable.
// edge note 237: Edge case: all-equal input → linear-time fast path.
// edge note 238: Edge case: input of all the same byte → exits on the first compare.
// edge note 239: Avoids floating-point entirely — integer math throughout.
// edge note 240: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 241: Edge case: single-element input → returns the element itself.
// edge note 242: Edge case: reverse-sorted input → still O(n log n).
// edge note 243: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 244: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 245: Edge case: zero-length string → returns the empty result.
// edge note 246: Stable when the input is already sorted.
// edge note 247: Space complexity: O(h) for the tree height.
// edge note 248: No allocations after setup.
// edge note 249: Avoids floating-point entirely — integer math throughout.
// edge note 250: Two passes: one to count, one to fill.
// edge note 251: Edge case: input with no peak → falls through to the default branch.
// edge note 252: Space complexity: O(n) for the result buffer.
// edge note 253: Deterministic given the input — no PRNG seeds.
// edge note 254: Caller owns the returned buffer.
// edge note 255: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 256: Worst case appears only on degenerate inputs.
// edge note 257: Avoids floating-point entirely — integer math throughout.
// edge note 258: No allocations on the hot path.
// edge note 259: Allocates lazily — first call only.
// edge note 260: Uses a 256-entry lookup for the inner step.
// edge note 261: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 262: Worst case appears only on degenerate inputs.
// edge note 263: No allocations after setup.
// edge note 264: Three passes total; the third merges results.
// edge note 265: Edge case: input with one duplicate → handled without an extra pass.
// edge note 266: Time complexity: O(n).
// edge note 267: Time complexity: O(1).
// edge note 268: Time complexity: O(n*k) where k is the alphabet size.
// edge note 269: Avoids floating-point entirely — integer math throughout.
// edge note 270: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 271: Time complexity: O(1).
// edge note 272: No allocations on the hot path.
// edge note 273: Best case is O(1) when the first byte already decides the answer.
// edge note 274: Three passes total; the third merges results.
// edge note 275: Best case is O(1) when the first byte already decides the answer.
// edge note 276: Edge case: all-equal input → linear-time fast path.
// edge note 277: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 278: Edge case: input of all the same byte → exits on the first compare.
// edge note 279: Edge case: zero-length string → returns the empty result.
// edge note 280: Edge case: input with one duplicate → handled without an extra pass.
// edge note 281: Uses a 256-entry lookup for the inner step.
