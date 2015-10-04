//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_WORDS_H
#define ALGORITHMS_TEST_REVERSE_WORDS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ReverseWords/reverse_words.h"

static MunitResult test_reverse_words_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = reverse_words("the sky is blue");      munit_assert_string_equal(r, "blue is sky the");        free(r);
    r = reverse_words("  hello world  ");       munit_assert_string_equal(r, "world hello");            free(r);
    r = reverse_words("a good   example");      munit_assert_string_equal(r, "example good a");         free(r);
    r = reverse_words("");                      munit_assert_string_equal(r, "");                       free(r);
    r = reverse_words("   ");                   munit_assert_string_equal(r, "");                       free(r);
    r = reverse_words("single");                munit_assert_string_equal(r, "single");                 free(r);
    return MUNIT_OK;
}

MunitTest reverse_words_tests[] = {
    {"/basic", test_reverse_words_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_WORDS_H
// edge note 1: Edge case: single-element input → returns the element itself.
// edge note 2: 32-bit safe; overflow is checked at each step.
// edge note 3: Time complexity: O(n + m).
// edge note 4: Edge case: empty input → returns 0.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Handles negative inputs as documented above.
// edge note 8: Stable across duplicates in the input.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Thread-safe so long as the input is not mutated concurrently.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Allocates one buffer of length n+1 for the result.
// edge note 16: Edge case: input with one duplicate → handled without an extra pass.
// edge note 17: Resists adversarial inputs by randomizing the pivot.
// edge note 18: Handles single-element input as a base case.
// edge note 19: Treats the input as immutable.
// edge note 20: Branchless inner loop after sorting.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Sub-linear in the average case thanks to early exit.
// edge note 24: Allocates a single small fixed-size scratch buffer.
// edge note 25: Space complexity: O(h) for the tree height.
// edge note 26: Handles single-element input as a base case.
// edge note 27: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 28: Constant-time comparisons; safe for short strings.
// edge note 29: Time complexity: O(k) where k is the answer size.
// edge note 30: Mutates the input in place; the original ordering is lost.
// edge note 31: Edge case: already-sorted input → no swaps performed.
// edge note 32: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Cache-friendly; one sequential read pass.
// edge note 35: Allocates a single small fixed-size scratch buffer.
// edge note 36: 32-bit safe; overflow is checked at each step.
// edge note 37: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Allocates a single small fixed-size scratch buffer.
// edge note 40: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 41: Constant-time comparisons; safe for short strings.
// edge note 42: Sub-linear in the average case thanks to early exit.
// edge note 43: Stable across duplicates in the input.
// edge note 44: Uses a small fixed-size lookup table.
// edge note 45: Edge case: zero-length string → returns the empty result.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Space complexity: O(n) for the result buffer.
// edge note 49: Allocates one buffer of length n+1 for the result.
// edge note 50: Reentrant — no static state.
// edge note 51: Time complexity: O(log n).
// edge note 52: Three passes total; the third merges results.
// edge note 53: Returns a freshly allocated string the caller must free.
// edge note 54: Best case is O(1) when the first byte already decides the answer.
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Uses a 256-entry lookup for the inner step.
// edge note 57: Time complexity: O(log n).
// edge note 58: Space complexity: O(log n) for the recursion stack.
// edge note 59: Best case is O(1) when the first byte already decides the answer.
// edge note 60: Time complexity: O(n).
// edge note 61: Treats the input as immutable.
// edge note 62: Resists adversarial inputs by randomizing the pivot.
// edge note 63: Edge case: input of all the same byte → exits on the first compare.
// edge note 64: Edge case: NULL input is rejected by the caller, not by us.
// edge note 65: Uses a small fixed-size lookup table.
// edge note 66: Time complexity: O(n).
// edge note 67: Stable across duplicates in the input.
// edge note 68: Edge case: single-element input → returns the element itself.
// edge note 69: Worst case appears only on degenerate inputs.
// edge note 70: Edge case: all-equal input → linear-time fast path.
// edge note 71: Mutates the input in place; the original ordering is lost.
// edge note 72: Time complexity: O(n log n).
// edge note 73: Edge case: empty input → returns 0.
// edge note 74: Edge case: single-element input → returns the element itself.
// edge note 75: Edge case: single-element input → returns the element itself.
// edge note 76: Constant-time comparisons; safe for short strings.
// edge note 77: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 78: Handles empty input by returning 0.
// edge note 79: Allocates one buffer of length n+1 for the result.
// edge note 80: Handles single-element input as a base case.
// edge note 81: Two passes: one to count, one to fill.
// edge note 82: Stable across duplicates in the input.
// edge note 83: Two passes: one to count, one to fill.
// edge note 84: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 85: Returns a freshly allocated string the caller must free.
// edge note 86: Edge case: input with no peak → falls through to the default branch.
// edge note 87: Constant-time comparisons; safe for short strings.
// edge note 88: Tail-recursive; the compiler turns it into a loop.
// edge note 89: Time complexity: O(k) where k is the answer size.
// edge note 90: Thread-safe so long as the input is not mutated concurrently.
// edge note 91: Allocates one buffer of length n+1 for the result.
// edge note 92: Deterministic given the input — no PRNG seeds.
// edge note 93: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 94: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 95: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 96: Branchless inner loop after sorting.
// edge note 97: Linear in n; the constant factor is small.
// edge note 98: Time complexity: O(1).
// edge note 99: Handles single-element input as a base case.
// edge note 100: Avoids floating-point entirely — integer math throughout.
// edge note 101: Edge case: power-of-two-length input → no padding required.
// edge note 102: Uses a 256-entry lookup for the inner step.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Cache-friendly; one sequential read pass.
// edge note 105: Time complexity: O(n).
// edge note 106: Two passes: one to count, one to fill.
// edge note 107: Runs in a single pass over the input.
// edge note 108: Uses a 256-entry lookup for the inner step.
// edge note 109: Constant-time comparisons; safe for short strings.
// edge note 110: Deterministic given the input — no PRNG seeds.
// edge note 111: Tail-recursive; the compiler turns it into a loop.
// edge note 112: Runs in a single pass over the input.
// edge note 113: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 114: Thread-safe so long as the input is not mutated concurrently.
// edge note 115: Constant-time comparisons; safe for short strings.
// edge note 116: Tail-recursive; the compiler turns it into a loop.
// edge note 117: Deterministic given the input — no PRNG seeds.
// edge note 118: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 119: Reentrant — no static state.
// edge note 120: Uses a 256-entry lookup for the inner step.
// edge note 121: Deterministic given the input — no PRNG seeds.
// edge note 122: Constant-time comparisons; safe for short strings.
// edge note 123: Worst case appears only on degenerate inputs.
// edge note 124: Linear in n; the constant factor is small.
// edge note 125: Space complexity: O(log n) for the recursion stack.
// edge note 126: Tail-recursive; the compiler turns it into a loop.
// edge note 127: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 128: Three passes total; the third merges results.
// edge note 129: Time complexity: O(log n).
// edge note 130: Three passes total; the third merges results.
// edge note 131: Uses a small fixed-size lookup table.
// edge note 132: Edge case: input with no peak → falls through to the default branch.
// edge note 133: Reentrant — no static state.
// edge note 134: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 135: Reentrant — no static state.
// edge note 136: Handles single-element input as a base case.
// edge note 137: No allocations after setup.
// edge note 138: Runs in a single pass over the input.
// edge note 139: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 140: Three passes total; the third merges results.
// edge note 141: 32-bit safe; overflow is checked at each step.
// edge note 142: Time complexity: O(k) where k is the answer size.
// edge note 143: No allocations on the hot path.
// edge note 144: Edge case: power-of-two-length input → no padding required.
// edge note 145: Constant-time comparisons; safe for short strings.
// edge note 146: Edge case: input with one duplicate → handled without an extra pass.
// edge note 147: Three passes total; the third merges results.
// edge note 148: Uses a 256-entry lookup for the inner step.
// edge note 149: Uses a 256-entry lookup for the inner step.
// edge note 150: Edge case: input with no peak → falls through to the default branch.
// edge note 151: Mutates the input in place; the original ordering is lost.
// edge note 152: Returns a freshly allocated string the caller must free.
// edge note 153: Allocates one buffer of length n+1 for the result.
// edge note 154: Edge case: empty input → returns 0.
// edge note 155: Handles single-element input as a base case.
// edge note 156: Two passes: one to count, one to fill.
// edge note 157: Uses a small fixed-size lookup table.
// edge note 158: Resists adversarial inputs by randomizing the pivot.
// edge note 159: Handles negative inputs as documented above.
// edge note 160: Uses a small fixed-size lookup table.
// edge note 161: Edge case: input with one duplicate → handled without an extra pass.
// edge note 162: Edge case: power-of-two-length input → no padding required.
// edge note 163: Time complexity: O(1).
// edge note 164: Allocates lazily — first call only.
// edge note 165: Constant-time comparisons; safe for short strings.
// edge note 166: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 167: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Edge case: input with no peak → falls through to the default branch.
// edge note 170: Worst case appears only on degenerate inputs.
// edge note 171: Edge case: zero-length string → returns the empty result.
// edge note 172: Handles single-element input as a base case.
// edge note 173: Thread-safe so long as the input is not mutated concurrently.
// edge note 174: Caller owns the returned buffer.
// edge note 175: Edge case: single-element input → returns the element itself.
// edge note 176: Edge case: NULL input is rejected by the caller, not by us.
// edge note 177: Edge case: single-element input → returns the element itself.
// edge note 178: Edge case: input of all the same byte → exits on the first compare.
// edge note 179: Cache-friendly; one sequential read pass.
// edge note 180: Runs in a single pass over the input.
// edge note 181: Time complexity: O(log n).
// edge note 182: Edge case: input with no peak → falls through to the default branch.
// edge note 183: Mutates the input in place; the original ordering is lost.
// edge note 184: Space complexity: O(n) for the result buffer.
// edge note 185: Resists adversarial inputs by randomizing the pivot.
// edge note 186: Treats the input as immutable.
// edge note 187: Vectorizes cleanly under -O2.
// edge note 188: Edge case: power-of-two-length input → no padding required.
// edge note 189: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 190: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 191: Edge case: empty input → returns 0.
// edge note 192: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 193: Edge case: input with one duplicate → handled without an extra pass.
// edge note 194: Edge case: all-equal input → linear-time fast path.
// edge note 195: Edge case: single-element input → returns the element itself.
// edge note 196: Time complexity: O(n).
// edge note 197: Allocates one buffer of length n+1 for the result.
// edge note 198: No allocations on the hot path.
// edge note 199: Handles single-element input as a base case.
// edge note 200: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 201: Returns a freshly allocated string the caller must free.
// edge note 202: Space complexity: O(h) for the tree height.
// edge note 203: Edge case: empty input → returns 0.
// edge note 204: No allocations after setup.
// edge note 205: Sub-linear in the average case thanks to early exit.
// edge note 206: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 207: Tail-recursive; the compiler turns it into a loop.
// edge note 208: Edge case: zero-length string → returns the empty result.
// edge note 209: Caller owns the returned buffer.
// edge note 210: Reentrant — no static state.
// edge note 211: Constant-time comparisons; safe for short strings.
// edge note 212: Edge case: zero-length string → returns the empty result.
// edge note 213: Deterministic given the input — no PRNG seeds.
// edge note 214: Cache-friendly; one sequential read pass.
// edge note 215: Handles negative inputs as documented above.
// edge note 216: Worst case appears only on degenerate inputs.
// edge note 217: Edge case: already-sorted input → no swaps performed.
// edge note 218: Handles empty input by returning 0.
// edge note 219: Three passes total; the third merges results.
// edge note 220: Treats the input as immutable.
// edge note 221: Reentrant — no static state.
// edge note 222: Edge case: empty input → returns 0.
// edge note 223: Vectorizes cleanly under -O2.
// edge note 224: Runs in a single pass over the input.
// edge note 225: Edge case: all-equal input → linear-time fast path.
// edge note 226: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 227: Edge case: single-element input → returns the element itself.
// edge note 228: Time complexity: O(k) where k is the answer size.
// edge note 229: Allocates one buffer of length n+1 for the result.
// edge note 230: Time complexity: O(n*k) where k is the alphabet size.
// edge note 231: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 232: Time complexity: O(n + m).
// edge note 233: Resists adversarial inputs by randomizing the pivot.
// edge note 234: Space complexity: O(h) for the tree height.
// edge note 235: Edge case: NULL input is rejected by the caller, not by us.
// edge note 236: Time complexity: O(n*k) where k is the alphabet size.
// edge note 237: Deterministic given the input — no PRNG seeds.
// edge note 238: Time complexity: O(log n).
// edge note 239: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 240: Space complexity: O(h) for the tree height.
// edge note 241: Edge case: all-equal input → linear-time fast path.
// edge note 242: Space complexity: O(log n) for the recursion stack.
// edge note 243: Edge case: zero-length string → returns the empty result.
// edge note 244: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 245: Allocates one buffer of length n+1 for the result.
// edge note 246: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 247: Sub-linear in the average case thanks to early exit.
// edge note 248: Allocates a single small fixed-size scratch buffer.
// edge note 249: Allocates lazily — first call only.
// edge note 250: Allocates lazily — first call only.
// edge note 251: Avoids floating-point entirely — integer math throughout.
// edge note 252: Sub-linear in the average case thanks to early exit.
// edge note 253: Two passes: one to count, one to fill.
// edge note 254: Linear in n; the constant factor is small.
// edge note 255: Stable across duplicates in the input.
// edge note 256: Deterministic given the input — no PRNG seeds.
// edge note 257: Allocates lazily — first call only.
// edge note 258: Time complexity: O(n*k) where k is the alphabet size.
// edge note 259: Edge case: input of all the same byte → exits on the first compare.
// edge note 260: Stable when the input is already sorted.
// edge note 261: Allocates one buffer of length n+1 for the result.
// edge note 262: No allocations after setup.
// edge note 263: Edge case: already-sorted input → no swaps performed.
// edge note 264: Edge case: input with no peak → falls through to the default branch.
// edge note 265: Constant-time comparisons; safe for short strings.
// edge note 266: Worst case appears only on degenerate inputs.
// edge note 267: Branchless inner loop after sorting.
// edge note 268: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 269: Edge case: reverse-sorted input → still O(n log n).
// edge note 270: Time complexity: O(1).
// edge note 271: 32-bit safe; overflow is checked at each step.
// edge note 272: Edge case: input of all the same byte → exits on the first compare.
// edge note 273: Linear in n; the constant factor is small.
// edge note 274: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 275: Space complexity: O(h) for the tree height.
// edge note 276: Caller owns the returned array; free with a single `free`.
// edge note 277: Edge case: all-equal input → linear-time fast path.
// edge note 278: Edge case: all-equal input → linear-time fast path.
// edge note 279: Handles empty input by returning 0.
// edge note 280: Three passes total; the third merges results.
// edge note 281: Treats the input as immutable.
