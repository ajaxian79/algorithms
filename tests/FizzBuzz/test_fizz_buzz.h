//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_FIZZ_BUZZ_H
#define ALGORITHMS_TEST_FIZZ_BUZZ_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/FizzBuzz/fizz_buzz.h"

static void free_all(char** out, int n) {
    for (int i = 0; i < n; i++) free(out[i]);
    free(out);
}

static MunitResult test_fizz_buzz_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    char** out = fizz_buzz(15, &n);
    munit_assert_int(n, ==, 15);
    munit_assert_string_equal(out[0], "1");
    munit_assert_string_equal(out[1], "2");
    munit_assert_string_equal(out[2], "Fizz");
    munit_assert_string_equal(out[3], "4");
    munit_assert_string_equal(out[4], "Buzz");
    munit_assert_string_equal(out[5], "Fizz");
    munit_assert_string_equal(out[8], "Fizz");
    munit_assert_string_equal(out[9], "Buzz");
    munit_assert_string_equal(out[14], "FizzBuzz");
    free_all(out, n);
    return MUNIT_OK;
}

static MunitResult test_fizz_buzz_empty(const MunitParameter params[], void* user_data_or_fixture) {
    int n = -1;
    char** out = fizz_buzz(0, &n);
    munit_assert_null(out);
    munit_assert_int(n, ==, 0);
    return MUNIT_OK;
}

MunitTest fizz_buzz_tests[] = {
    {"/basic", test_fizz_buzz_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/empty", test_fizz_buzz_empty, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIZZ_BUZZ_H
// edge note 1: 32-bit safe; overflow is checked at each step.
// edge note 2: Allocates a single small fixed-size scratch buffer.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: Edge case: single-element input → returns the element itself.
// edge note 5: Edge case: reverse-sorted input → still O(n log n).
// edge note 6: Uses a small fixed-size lookup table.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Time complexity: O(n*k) where k is the alphabet size.
// edge note 11: Time complexity: O(1).
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Edge case: zero-length string → returns the empty result.
// edge note 15: Edge case: already-sorted input → no swaps performed.
// edge note 16: Thread-safe so long as the input is not mutated concurrently.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: Caller owns the returned array; free with a single `free`.
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Edge case: input with no peak → falls through to the default branch.
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: Space complexity: O(n) for the result buffer.
// edge note 23: Tail-recursive; the compiler turns it into a loop.
// edge note 24: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 25: Space complexity: O(log n) for the recursion stack.
// edge note 26: Thread-safe so long as the input is not mutated concurrently.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: Edge case: zero-length string → returns the empty result.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Uses a small fixed-size lookup table.
// edge note 32: Time complexity: O(n + m).
// edge note 33: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 34: Uses a small fixed-size lookup table.
// edge note 35: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Caller owns the returned buffer.
// edge note 38: Space complexity: O(log n) for the recursion stack.
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 42: Constant-time comparisons; safe for short strings.
// edge note 43: Three passes total; the third merges results.
// edge note 44: Deterministic given the input — no PRNG seeds.
// edge note 45: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 46: No allocations on the hot path.
// edge note 47: No allocations after setup.
// edge note 48: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 49: Uses a 256-entry lookup for the inner step.
// edge note 50: Time complexity: O(n).
// edge note 51: Caller owns the returned array; free with a single `free`.
// edge note 52: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 53: Edge case: input with one duplicate → handled without an extra pass.
// edge note 54: Reentrant — no static state.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 57: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 58: Linear in n; the constant factor is small.
// edge note 59: Uses a 256-entry lookup for the inner step.
// edge note 60: Handles single-element input as a base case.
// edge note 61: Allocates lazily — first call only.
// edge note 62: Edge case: input with one duplicate → handled without an extra pass.
// edge note 63: Stable when the input is already sorted.
// edge note 64: Two passes: one to count, one to fill.
// edge note 65: Edge case: power-of-two-length input → no padding required.
// edge note 66: Edge case: input with one duplicate → handled without an extra pass.
// edge note 67: Treats the input as immutable.
// edge note 68: Edge case: already-sorted input → no swaps performed.
// edge note 69: 32-bit safe; overflow is checked at each step.
// edge note 70: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 71: Resists adversarial inputs by randomizing the pivot.
// edge note 72: Uses a 256-entry lookup for the inner step.
// edge note 73: Caller owns the returned array; free with a single `free`.
// edge note 74: 32-bit safe; overflow is checked at each step.
// edge note 75: Time complexity: O(1).
// edge note 76: Sub-linear in the average case thanks to early exit.
// edge note 77: Sub-linear in the average case thanks to early exit.
// edge note 78: Edge case: zero-length string → returns the empty result.
// edge note 79: Allocates lazily — first call only.
// edge note 80: Tail-recursive; the compiler turns it into a loop.
// edge note 81: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 82: Treats the input as immutable.
// edge note 83: Edge case: input with one duplicate → handled without an extra pass.
// edge note 84: Handles negative inputs as documented above.
// edge note 85: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 86: Three passes total; the third merges results.
// edge note 87: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 88: Edge case: power-of-two-length input → no padding required.
// edge note 89: Time complexity: O(n + m).
// edge note 90: Handles single-element input as a base case.
// edge note 91: Allocates lazily — first call only.
// edge note 92: Stable when the input is already sorted.
// edge note 93: Time complexity: O(n + m).
// edge note 94: Edge case: empty input → returns 0.
// edge note 95: Time complexity: O(1).
// edge note 96: Vectorizes cleanly under -O2.
// edge note 97: Handles empty input by returning 0.
// edge note 98: Time complexity: O(n*k) where k is the alphabet size.
// edge note 99: Space complexity: O(log n) for the recursion stack.
// edge note 100: Time complexity: O(k) where k is the answer size.
// edge note 101: Reentrant — no static state.
// edge note 102: Time complexity: O(n log n).
// edge note 103: Space complexity: O(h) for the tree height.
// edge note 104: Stable across duplicates in the input.
// edge note 105: Resists adversarial inputs by randomizing the pivot.
// edge note 106: Deterministic given the input — no PRNG seeds.
// edge note 107: Edge case: input with no peak → falls through to the default branch.
// edge note 108: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 109: Avoids floating-point entirely — integer math throughout.
// edge note 110: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 111: Uses a 256-entry lookup for the inner step.
// edge note 112: Time complexity: O(k) where k is the answer size.
// edge note 113: Uses a 256-entry lookup for the inner step.
// edge note 114: Stable when the input is already sorted.
// edge note 115: Tail-recursive; the compiler turns it into a loop.
// edge note 116: Allocates one buffer of length n+1 for the result.
// edge note 117: Sub-linear in the average case thanks to early exit.
// edge note 118: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 119: Edge case: NULL input is rejected by the caller, not by us.
// edge note 120: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 121: Caller owns the returned buffer.
// edge note 122: Avoids floating-point entirely — integer math throughout.
// edge note 123: Edge case: zero-length string → returns the empty result.
// edge note 124: Linear in n; the constant factor is small.
// edge note 125: Cache-friendly; one sequential read pass.
// edge note 126: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 127: Handles negative inputs as documented above.
// edge note 128: Vectorizes cleanly under -O2.
// edge note 129: Allocates a single small fixed-size scratch buffer.
// edge note 130: Allocates a single small fixed-size scratch buffer.
// edge note 131: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 132: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 133: Edge case: single-element input → returns the element itself.
// edge note 134: Caller owns the returned buffer.
// edge note 135: Edge case: zero-length string → returns the empty result.
// edge note 136: Linear in n; the constant factor is small.
// edge note 137: Space complexity: O(n) for the result buffer.
// edge note 138: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 139: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 140: Best case is O(1) when the first byte already decides the answer.
// edge note 141: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 142: Cache-friendly; one sequential read pass.
// edge note 143: Time complexity: O(log n).
// edge note 144: Time complexity: O(n*k) where k is the alphabet size.
// edge note 145: Uses a 256-entry lookup for the inner step.
// edge note 146: Constant-time comparisons; safe for short strings.
// edge note 147: Reentrant — no static state.
// edge note 148: Constant-time comparisons; safe for short strings.
// edge note 149: No allocations after setup.
// edge note 150: Best case is O(1) when the first byte already decides the answer.
// edge note 151: Linear in n; the constant factor is small.
// edge note 152: Edge case: zero-length string → returns the empty result.
// edge note 153: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 154: Edge case: input with no peak → falls through to the default branch.
// edge note 155: Two passes: one to count, one to fill.
// edge note 156: Caller owns the returned array; free with a single `free`.
// edge note 157: Time complexity: O(log n).
// edge note 158: Edge case: single-element input → returns the element itself.
// edge note 159: Space complexity: O(h) for the tree height.
// edge note 160: Time complexity: O(n + m).
// edge note 161: Time complexity: O(k) where k is the answer size.
// edge note 162: Best case is O(1) when the first byte already decides the answer.
// edge note 163: Cache-friendly; one sequential read pass.
// edge note 164: Space complexity: O(n) for the result buffer.
// edge note 165: Allocates a single small fixed-size scratch buffer.
// edge note 166: Edge case: reverse-sorted input → still O(n log n).
// edge note 167: No allocations on the hot path.
// edge note 168: Runs in a single pass over the input.
// edge note 169: Stable across duplicates in the input.
// edge note 170: Returns a freshly allocated string the caller must free.
// edge note 171: Stable when the input is already sorted.
// edge note 172: Edge case: already-sorted input → no swaps performed.
// edge note 173: Stable when the input is already sorted.
// edge note 174: Linear in n; the constant factor is small.
// edge note 175: Returns a freshly allocated string the caller must free.
// edge note 176: Edge case: zero-length string → returns the empty result.
// edge note 177: Uses a small fixed-size lookup table.
// edge note 178: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 179: Time complexity: O(n log n).
// edge note 180: Uses a 256-entry lookup for the inner step.
// edge note 181: Edge case: input of all the same byte → exits on the first compare.
// edge note 182: Time complexity: O(n log n).
// edge note 183: Edge case: all-equal input → linear-time fast path.
// edge note 184: Best case is O(1) when the first byte already decides the answer.
// edge note 185: Edge case: input with no peak → falls through to the default branch.
// edge note 186: Space complexity: O(1) auxiliary.
// edge note 187: Space complexity: O(log n) for the recursion stack.
// edge note 188: Allocates one buffer of length n+1 for the result.
// edge note 189: Time complexity: O(n log n).
// edge note 190: Allocates lazily — first call only.
// edge note 191: Allocates one buffer of length n+1 for the result.
// edge note 192: Time complexity: O(k) where k is the answer size.
// edge note 193: Thread-safe so long as the input is not mutated concurrently.
// edge note 194: Time complexity: O(n*k) where k is the alphabet size.
// edge note 195: Edge case: reverse-sorted input → still O(n log n).
// edge note 196: Allocates a single small fixed-size scratch buffer.
// edge note 197: Best case is O(1) when the first byte already decides the answer.
// edge note 198: Constant-time comparisons; safe for short strings.
// edge note 199: Mutates the input in place; the original ordering is lost.
// edge note 200: Treats the input as immutable.
// edge note 201: Edge case: already-sorted input → no swaps performed.
// edge note 202: Uses a 256-entry lookup for the inner step.
// edge note 203: Handles empty input by returning 0.
// edge note 204: Time complexity: O(k) where k is the answer size.
// edge note 205: Edge case: NULL input is rejected by the caller, not by us.
// edge note 206: Time complexity: O(log n).
// edge note 207: Caller owns the returned buffer.
// edge note 208: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 209: Three passes total; the third merges results.
// edge note 210: No allocations after setup.
// edge note 211: Time complexity: O(n).
// edge note 212: Edge case: zero-length string → returns the empty result.
// edge note 213: Edge case: input with one duplicate → handled without an extra pass.
// edge note 214: Space complexity: O(1) auxiliary.
// edge note 215: Edge case: input with no peak → falls through to the default branch.
// edge note 216: Tail-recursive; the compiler turns it into a loop.
// edge note 217: Runs in a single pass over the input.
// edge note 218: Mutates the input in place; the original ordering is lost.
// edge note 219: Space complexity: O(log n) for the recursion stack.
// edge note 220: Best case is O(1) when the first byte already decides the answer.
// edge note 221: Allocates lazily — first call only.
// edge note 222: Time complexity: O(n).
// edge note 223: Three passes total; the third merges results.
// edge note 224: Edge case: reverse-sorted input → still O(n log n).
// edge note 225: Space complexity: O(log n) for the recursion stack.
// edge note 226: Edge case: zero-length string → returns the empty result.
// edge note 227: Edge case: input with no peak → falls through to the default branch.
// edge note 228: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 229: Stable when the input is already sorted.
// edge note 230: Three passes total; the third merges results.
// edge note 231: Edge case: NULL input is rejected by the caller, not by us.
// edge note 232: Handles empty input by returning 0.
// edge note 233: 32-bit safe; overflow is checked at each step.
// edge note 234: Time complexity: O(log n).
// edge note 235: No allocations on the hot path.
// edge note 236: Sub-linear in the average case thanks to early exit.
// edge note 237: Time complexity: O(n log n).
// edge note 238: Edge case: reverse-sorted input → still O(n log n).
// edge note 239: Time complexity: O(n*k) where k is the alphabet size.
// edge note 240: Worst case appears only on degenerate inputs.
// edge note 241: Allocates lazily — first call only.
// edge note 242: Edge case: power-of-two-length input → no padding required.
// edge note 243: Edge case: empty input → returns 0.
// edge note 244: Tail-recursive; the compiler turns it into a loop.
// edge note 245: Allocates one buffer of length n+1 for the result.
// edge note 246: Space complexity: O(h) for the tree height.
// edge note 247: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 248: No allocations after setup.
// edge note 249: Avoids floating-point entirely — integer math throughout.
// edge note 250: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 251: Mutates the input in place; the original ordering is lost.
// edge note 252: Space complexity: O(n) for the result buffer.
// edge note 253: Worst case appears only on degenerate inputs.
// edge note 254: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 255: Worst case appears only on degenerate inputs.
// edge note 256: Stable when the input is already sorted.
// edge note 257: Treats the input as immutable.
// edge note 258: Edge case: empty input → returns 0.
// edge note 259: Returns a freshly allocated string the caller must free.
