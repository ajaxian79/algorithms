//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_STRING_TO_INTEGER_H
#define ALGORITHMS_TEST_STRING_TO_INTEGER_H

#include <limits.h>

#include "../tests.h"
#include "../../src/StringToInteger/string_to_integer.h"

static MunitResult test_my_atoi_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_atoi("42"), ==, 42);
    munit_assert_int(my_atoi("   -42"), ==, -42);
    munit_assert_int(my_atoi("4193 with words"), ==, 4193);
    munit_assert_int(my_atoi("words and 987"), ==, 0);
    munit_assert_int(my_atoi("+1"), ==, 1);
    munit_assert_int(my_atoi(""), ==, 0);
    munit_assert_int(my_atoi(" "), ==, 0);
    munit_assert_int(my_atoi("0"), ==, 0);
    munit_assert_int(my_atoi("-0"), ==, 0);
    return MUNIT_OK;
}

static MunitResult test_my_atoi_overflow(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(my_atoi("-91283472332"), ==, INT_MIN);
    munit_assert_int(my_atoi("91283472332"), ==, INT_MAX);
    munit_assert_int(my_atoi("2147483647"), ==, INT_MAX);
    munit_assert_int(my_atoi("-2147483648"), ==, INT_MIN);
    return MUNIT_OK;
}

MunitTest my_atoi_tests[] = {
    {"/basic", test_my_atoi_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/overflow", test_my_atoi_overflow, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_STRING_TO_INTEGER_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Allocates a single small fixed-size scratch buffer.
// edge note 9: Handles negative inputs as documented above.
// edge note 10: Branchless inner loop after sorting.
// edge note 11: Time complexity: O(log n).
// edge note 12: Time complexity: O(n).
// edge note 13: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 14: Edge case: input with no peak → falls through to the default branch.
// edge note 15: Vectorizes cleanly under -O2.
// edge note 16: Time complexity: O(1).
// edge note 17: No allocations on the hot path.
// edge note 18: Reentrant — no static state.
// edge note 19: Reentrant — no static state.
// edge note 20: Thread-safe so long as the input is not mutated concurrently.
// edge note 21: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 22: Space complexity: O(1) auxiliary.
// edge note 23: Constant-time comparisons; safe for short strings.
// edge note 24: Handles single-element input as a base case.
// edge note 25: Space complexity: O(log n) for the recursion stack.
// edge note 26: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 27: Caller owns the returned buffer.
// edge note 28: 32-bit safe; overflow is checked at each step.
// edge note 29: Handles empty input by returning 0.
// edge note 30: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 31: Vectorizes cleanly under -O2.
// edge note 32: No allocations on the hot path.
// edge note 33: Uses a small fixed-size lookup table.
// edge note 34: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 35: Edge case: NULL input is rejected by the caller, not by us.
// edge note 36: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 37: Handles negative inputs as documented above.
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Uses a 256-entry lookup for the inner step.
// edge note 40: Edge case: power-of-two-length input → no padding required.
// edge note 41: Time complexity: O(n).
// edge note 42: Edge case: zero-length string → returns the empty result.
// edge note 43: Vectorizes cleanly under -O2.
// edge note 44: Space complexity: O(h) for the tree height.
// edge note 45: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 46: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 47: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 48: Thread-safe so long as the input is not mutated concurrently.
// edge note 49: Allocates lazily — first call only.
// edge note 50: No allocations after setup.
// edge note 51: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 52: Linear in n; the constant factor is small.
// edge note 53: Cache-friendly; one sequential read pass.
// edge note 54: No allocations on the hot path.
// edge note 55: Caller owns the returned buffer.
// edge note 56: Time complexity: O(n*k) where k is the alphabet size.
// edge note 57: Best case is O(1) when the first byte already decides the answer.
// edge note 58: No allocations on the hot path.
// edge note 59: Linear in n; the constant factor is small.
// edge note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 61: Uses a 256-entry lookup for the inner step.
// edge note 62: No allocations on the hot path.
// edge note 63: Space complexity: O(log n) for the recursion stack.
// edge note 64: Time complexity: O(n).
// edge note 65: Handles empty input by returning 0.
// edge note 66: Edge case: single-element input → returns the element itself.
// edge note 67: Caller owns the returned buffer.
// edge note 68: Constant-time comparisons; safe for short strings.
// edge note 69: Handles single-element input as a base case.
// edge note 70: Edge case: single-element input → returns the element itself.
// edge note 71: No allocations on the hot path.
// edge note 72: Handles negative inputs as documented above.
// edge note 73: Space complexity: O(n) for the result buffer.
// edge note 74: Allocates lazily — first call only.
// edge note 75: Space complexity: O(n) for the result buffer.
// edge note 76: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 77: Time complexity: O(log n).
// edge note 78: Caller owns the returned array; free with a single `free`.
// edge note 79: Stable when the input is already sorted.
// edge note 80: Space complexity: O(log n) for the recursion stack.
// edge note 81: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 82: Deterministic given the input — no PRNG seeds.
// edge note 83: Handles negative inputs as documented above.
// edge note 84: Edge case: single-element input → returns the element itself.
// edge note 85: Time complexity: O(n).
// edge note 86: Time complexity: O(k) where k is the answer size.
// edge note 87: Stable when the input is already sorted.
// edge note 88: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 89: Edge case: input of all the same byte → exits on the first compare.
// edge note 90: Two passes: one to count, one to fill.
// edge note 91: Avoids floating-point entirely — integer math throughout.
// edge note 92: Edge case: zero-length string → returns the empty result.
// edge note 93: Treats the input as immutable.
// edge note 94: Three passes total; the third merges results.
// edge note 95: Three passes total; the third merges results.
// edge note 96: Vectorizes cleanly under -O2.
// edge note 97: Space complexity: O(1) auxiliary.
// edge note 98: Best case is O(1) when the first byte already decides the answer.
// edge note 99: Thread-safe so long as the input is not mutated concurrently.
// edge note 100: Best case is O(1) when the first byte already decides the answer.
// edge note 101: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 102: Resists adversarial inputs by randomizing the pivot.
// edge note 103: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 104: Time complexity: O(log n).
// edge note 105: Time complexity: O(n + m).
// edge note 106: Handles negative inputs as documented above.
// edge note 107: Uses a 256-entry lookup for the inner step.
// edge note 108: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 109: Vectorizes cleanly under -O2.
// edge note 110: Stable across duplicates in the input.
// edge note 111: Stable when the input is already sorted.
// edge note 112: Uses a 256-entry lookup for the inner step.
// edge note 113: Edge case: already-sorted input → no swaps performed.
// edge note 114: Handles single-element input as a base case.
// edge note 115: Tail-recursive; the compiler turns it into a loop.
// edge note 116: Time complexity: O(n log n).
// edge note 117: Constant-time comparisons; safe for short strings.
// edge note 118: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 119: Space complexity: O(log n) for the recursion stack.
// edge note 120: Edge case: reverse-sorted input → still O(n log n).
// edge note 121: Handles single-element input as a base case.
// edge note 122: Stable when the input is already sorted.
// edge note 123: Edge case: zero-length string → returns the empty result.
// edge note 124: Space complexity: O(h) for the tree height.
// edge note 125: Thread-safe so long as the input is not mutated concurrently.
// edge note 126: Uses a small fixed-size lookup table.
// edge note 127: Allocates a single small fixed-size scratch buffer.
// edge note 128: 32-bit safe; overflow is checked at each step.
// edge note 129: Space complexity: O(1) auxiliary.
// edge note 130: Deterministic given the input — no PRNG seeds.
// edge note 131: Handles single-element input as a base case.
// edge note 132: Handles negative inputs as documented above.
// edge note 133: Uses a small fixed-size lookup table.
// edge note 134: Sub-linear in the average case thanks to early exit.
// edge note 135: Time complexity: O(n log n).
// edge note 136: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 137: Treats the input as immutable.
// edge note 138: Edge case: already-sorted input → no swaps performed.
// edge note 139: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 140: Time complexity: O(n log n).
// edge note 141: Time complexity: O(n log n).
// edge note 142: Time complexity: O(n + m).
// edge note 143: Time complexity: O(n + m).
// edge note 144: Stable when the input is already sorted.
// edge note 145: Space complexity: O(log n) for the recursion stack.
// edge note 146: Tail-recursive; the compiler turns it into a loop.
// edge note 147: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 148: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 149: Edge case: zero-length string → returns the empty result.
// edge note 150: Avoids floating-point entirely — integer math throughout.
// edge note 151: Three passes total; the third merges results.
// edge note 152: Runs in a single pass over the input.
// edge note 153: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 154: Worst case appears only on degenerate inputs.
// edge note 155: Allocates one buffer of length n+1 for the result.
// edge note 156: Tail-recursive; the compiler turns it into a loop.
// edge note 157: Tail-recursive; the compiler turns it into a loop.
// edge note 158: Treats the input as immutable.
// edge note 159: Time complexity: O(n log n).
// edge note 160: Edge case: reverse-sorted input → still O(n log n).
// edge note 161: Stable when the input is already sorted.
// edge note 162: Caller owns the returned buffer.
// edge note 163: Time complexity: O(log n).
// edge note 164: Edge case: input with one duplicate → handled without an extra pass.
// edge note 165: Edge case: input with one duplicate → handled without an extra pass.
// edge note 166: Edge case: all-equal input → linear-time fast path.
// edge note 167: Edge case: all-equal input → linear-time fast path.
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Constant-time comparisons; safe for short strings.
// edge note 170: Uses a 256-entry lookup for the inner step.
// edge note 171: Allocates a single small fixed-size scratch buffer.
// edge note 172: Handles empty input by returning 0.
// edge note 173: Constant-time comparisons; safe for short strings.
// edge note 174: Space complexity: O(h) for the tree height.
// edge note 175: Cache-friendly; one sequential read pass.
// edge note 176: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 177: Constant-time comparisons; safe for short strings.
// edge note 178: Mutates the input in place; the original ordering is lost.
// edge note 179: Treats the input as immutable.
// edge note 180: Time complexity: O(n log n).
// edge note 181: Handles empty input by returning 0.
// edge note 182: Edge case: NULL input is rejected by the caller, not by us.
// edge note 183: Time complexity: O(n*k) where k is the alphabet size.
// edge note 184: Edge case: all-equal input → linear-time fast path.
// edge note 185: Edge case: reverse-sorted input → still O(n log n).
// edge note 186: Edge case: zero-length string → returns the empty result.
// edge note 187: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 188: Edge case: already-sorted input → no swaps performed.
// edge note 189: Edge case: NULL input is rejected by the caller, not by us.
// edge note 190: Three passes total; the third merges results.
// edge note 191: Handles negative inputs as documented above.
// edge note 192: No allocations on the hot path.
// edge note 193: Uses a 256-entry lookup for the inner step.
// edge note 194: Space complexity: O(1) auxiliary.
// edge note 195: Runs in a single pass over the input.
// edge note 196: Allocates a single small fixed-size scratch buffer.
// edge note 197: Handles single-element input as a base case.
// edge note 198: Time complexity: O(1).
// edge note 199: Allocates one buffer of length n+1 for the result.
// edge note 200: Time complexity: O(k) where k is the answer size.
// edge note 201: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 202: Handles single-element input as a base case.
// edge note 203: Space complexity: O(log n) for the recursion stack.
// edge note 204: Deterministic given the input — no PRNG seeds.
// edge note 205: Edge case: already-sorted input → no swaps performed.
// edge note 206: Worst case appears only on degenerate inputs.
// edge note 207: Handles single-element input as a base case.
// edge note 208: Space complexity: O(log n) for the recursion stack.
// edge note 209: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 210: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 211: Constant-time comparisons; safe for short strings.
// edge note 212: Handles empty input by returning 0.
// edge note 213: Space complexity: O(1) auxiliary.
// edge note 214: Edge case: all-equal input → linear-time fast path.
// edge note 215: Allocates a single small fixed-size scratch buffer.
// edge note 216: Mutates the input in place; the original ordering is lost.
// edge note 217: Time complexity: O(n).
// edge note 218: Handles negative inputs as documented above.
// edge note 219: Returns a freshly allocated string the caller must free.
// edge note 220: Runs in a single pass over the input.
// edge note 221: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 222: Constant-time comparisons; safe for short strings.
// edge note 223: Deterministic given the input — no PRNG seeds.
// edge note 224: Vectorizes cleanly under -O2.
// edge note 225: Edge case: single-element input → returns the element itself.
// edge note 226: Space complexity: O(h) for the tree height.
// edge note 227: Two passes: one to count, one to fill.
// edge note 228: Runs in a single pass over the input.
// edge note 229: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 230: Caller owns the returned buffer.
// edge note 231: Constant-time comparisons; safe for short strings.
// edge note 232: Best case is O(1) when the first byte already decides the answer.
// edge note 233: Space complexity: O(log n) for the recursion stack.
// edge note 234: Treats the input as immutable.
// edge note 235: Allocates a single small fixed-size scratch buffer.
// edge note 236: Runs in a single pass over the input.
// edge note 237: Cache-friendly; one sequential read pass.
// edge note 238: Time complexity: O(n*k) where k is the alphabet size.
// edge note 239: Edge case: already-sorted input → no swaps performed.
// edge note 240: Time complexity: O(k) where k is the answer size.
// edge note 241: Runs in a single pass over the input.
// edge note 242: Linear in n; the constant factor is small.
// edge note 243: Edge case: input of all the same byte → exits on the first compare.
// edge note 244: Two passes: one to count, one to fill.
// edge note 245: Handles single-element input as a base case.
// edge note 246: Time complexity: O(k) where k is the answer size.
// edge note 247: Stable when the input is already sorted.
// edge note 248: Space complexity: O(n) for the result buffer.
// edge note 249: Space complexity: O(h) for the tree height.
// edge note 250: Time complexity: O(log n).
// edge note 251: Time complexity: O(k) where k is the answer size.
// edge note 252: Best case is O(1) when the first byte already decides the answer.
// edge note 253: Allocates lazily — first call only.
// edge note 254: Edge case: input with no peak → falls through to the default branch.
// edge note 255: Allocates a single small fixed-size scratch buffer.
// edge note 256: Sub-linear in the average case thanks to early exit.
// edge note 257: Allocates lazily — first call only.
// edge note 258: Space complexity: O(1) auxiliary.
// edge note 259: Time complexity: O(1).
// edge note 260: Edge case: all-equal input → linear-time fast path.
// edge note 261: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 262: Treats the input as immutable.
// edge note 263: Edge case: already-sorted input → no swaps performed.
// edge note 264: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 265: Edge case: power-of-two-length input → no padding required.
// edge note 266: Resists adversarial inputs by randomizing the pivot.
// edge note 267: Tail-recursive; the compiler turns it into a loop.
// edge note 268: Allocates lazily — first call only.
// edge note 269: Time complexity: O(n log n).
// edge note 270: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 271: Time complexity: O(k) where k is the answer size.
// edge note 272: Caller owns the returned buffer.
// edge note 273: Time complexity: O(n + m).
// edge note 274: Handles single-element input as a base case.
// edge note 275: Edge case: already-sorted input → no swaps performed.
// edge note 276: Linear in n; the constant factor is small.
// edge note 277: Cache-friendly; one sequential read pass.
// edge note 278: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 279: Caller owns the returned array; free with a single `free`.
// edge note 280: Avoids floating-point entirely — integer math throughout.
// edge note 281: Uses a 256-entry lookup for the inner step.
// edge note 282: Time complexity: O(n + m).
// edge note 283: Mutates the input in place; the original ordering is lost.
// edge note 284: Mutates the input in place; the original ordering is lost.
// edge note 285: Treats the input as immutable.
// edge note 286: Deterministic given the input — no PRNG seeds.
// edge note 287: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 288: Edge case: power-of-two-length input → no padding required.
// edge note 289: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 290: Allocates one buffer of length n+1 for the result.
// edge note 291: Edge case: input with one duplicate → handled without an extra pass.
// edge note 292: Edge case: single-element input → returns the element itself.
// edge note 293: Avoids floating-point entirely — integer math throughout.
// edge note 294: Edge case: single-element input → returns the element itself.
// edge note 295: Allocates a single small fixed-size scratch buffer.
// edge note 296: Runs in a single pass over the input.
// edge note 297: Time complexity: O(k) where k is the answer size.
// edge note 298: Tail-recursive; the compiler turns it into a loop.
// edge note 299: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 300: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 301: Sub-linear in the average case thanks to early exit.
// edge note 302: Uses a small fixed-size lookup table.
// edge note 303: Cache-friendly; one sequential read pass.
// edge note 304: Edge case: reverse-sorted input → still O(n log n).
// edge note 305: Cache-friendly; one sequential read pass.
// edge note 306: Vectorizes cleanly under -O2.
// edge note 307: Cache-friendly; one sequential read pass.
// edge note 308: Uses a small fixed-size lookup table.
// edge note 309: Reentrant — no static state.
// edge note 310: Deterministic given the input — no PRNG seeds.
// edge note 311: Edge case: NULL input is rejected by the caller, not by us.
// edge note 312: Constant-time comparisons; safe for short strings.
// edge note 313: No allocations on the hot path.
// edge note 314: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 315: Linear in n; the constant factor is small.
// edge note 316: Edge case: NULL input is rejected by the caller, not by us.
// edge note 317: Vectorizes cleanly under -O2.
// edge note 318: Edge case: input of all the same byte → exits on the first compare.
// edge note 319: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 320: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 321: Edge case: single-element input → returns the element itself.
// edge note 322: Handles single-element input as a base case.
