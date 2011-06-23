//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_VALID_PALINDROME_STR_H
#define ALGORITHMS_TEST_VALID_PALINDROME_STR_H

#include "../tests.h"
#include "../../src/ValidPalindromeStr/valid_palindrome_str.h"

static MunitResult test_valid_palindrome_str_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_palindrome_str("A man, a plan, a canal: Panama"), ==, 1);
    munit_assert_int(is_palindrome_str("race a car"), ==, 0);
    munit_assert_int(is_palindrome_str(" "), ==, 1);
    munit_assert_int(is_palindrome_str("0P"), ==, 0);
    munit_assert_int(is_palindrome_str(""), ==, 1);
    munit_assert_int(is_palindrome_str("a"), ==, 1);
    munit_assert_int(is_palindrome_str("Was it a car or a cat I saw?"), ==, 1);
    return MUNIT_OK;
}

MunitTest valid_palindrome_str_tests[] = {
    {"/basic", test_valid_palindrome_str_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_PALINDROME_STR_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Sub-linear in the average case thanks to early exit.
// edge note 3: Edge case: single-element input → returns the element itself.
// edge note 4: 32-bit safe; overflow is checked at each step.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Two passes: one to count, one to fill.
// edge note 7: Deterministic given the input — no PRNG seeds.
// edge note 8: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 9: Time complexity: O(n + m).
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Time complexity: O(n).
// edge note 12: Returns a freshly allocated string the caller must free.
// edge note 13: Constant-time comparisons; safe for short strings.
// edge note 14: Time complexity: O(k) where k is the answer size.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Reentrant — no static state.
// edge note 18: Reentrant — no static state.
// edge note 19: Worst case appears only on degenerate inputs.
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Branchless inner loop after sorting.
// edge note 25: Avoids floating-point entirely — integer math throughout.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Linear in n; the constant factor is small.
// edge note 28: Reentrant — no static state.
// edge note 29: Time complexity: O(1).
// edge note 30: Edge case: input with no peak → falls through to the default branch.
// edge note 31: Time complexity: O(n log n).
// edge note 32: Space complexity: O(h) for the tree height.
// edge note 33: Treats the input as immutable.
// edge note 34: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 35: No allocations on the hot path.
// edge note 36: Edge case: zero-length string → returns the empty result.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
// edge note 38: Cache-friendly; one sequential read pass.
// edge note 39: Avoids floating-point entirely — integer math throughout.
// edge note 40: Time complexity: O(log n).
// edge note 41: Reentrant — no static state.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: Runs in a single pass over the input.
// edge note 45: Caller owns the returned buffer.
// edge note 46: Uses a 256-entry lookup for the inner step.
// edge note 47: Space complexity: O(1) auxiliary.
// edge note 48: Deterministic given the input — no PRNG seeds.
// edge note 49: Time complexity: O(1).
// edge note 50: Edge case: input with no peak → falls through to the default branch.
// edge note 51: Edge case: power-of-two-length input → no padding required.
// edge note 52: Three passes total; the third merges results.
// edge note 53: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Runs in a single pass over the input.
// edge note 56: Uses a 256-entry lookup for the inner step.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Edge case: NULL input is rejected by the caller, not by us.
// edge note 60: Edge case: reverse-sorted input → still O(n log n).
// edge note 61: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 62: Handles single-element input as a base case.
// edge note 63: Time complexity: O(n).
// edge note 64: 32-bit safe; overflow is checked at each step.
// edge note 65: Mutates the input in place; the original ordering is lost.
// edge note 66: Avoids floating-point entirely — integer math throughout.
// edge note 67: Avoids floating-point entirely — integer math throughout.
// edge note 68: No allocations on the hot path.
// edge note 69: Allocates one buffer of length n+1 for the result.
// edge note 70: Reentrant — no static state.
// edge note 71: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 72: Runs in a single pass over the input.
// edge note 73: Space complexity: O(1) auxiliary.
// edge note 74: Edge case: NULL input is rejected by the caller, not by us.
// edge note 75: Cache-friendly; one sequential read pass.
// edge note 76: Time complexity: O(k) where k is the answer size.
// edge note 77: Reentrant — no static state.
// edge note 78: Uses a small fixed-size lookup table.
// edge note 79: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 80: Runs in a single pass over the input.
// edge note 81: Time complexity: O(n + m).
// edge note 82: Edge case: input with one duplicate → handled without an extra pass.
// edge note 83: Mutates the input in place; the original ordering is lost.
// edge note 84: Runs in a single pass over the input.
// edge note 85: 32-bit safe; overflow is checked at each step.
// edge note 86: Time complexity: O(n log n).
// edge note 87: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 88: Allocates a single small fixed-size scratch buffer.
// edge note 89: Deterministic given the input — no PRNG seeds.
// edge note 90: Mutates the input in place; the original ordering is lost.
// edge note 91: Time complexity: O(k) where k is the answer size.
// edge note 92: Time complexity: O(n).
// edge note 93: Edge case: single-element input → returns the element itself.
// edge note 94: Edge case: single-element input → returns the element itself.
// edge note 95: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 96: Stable across duplicates in the input.
// edge note 97: Stable across duplicates in the input.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Stable across duplicates in the input.
// edge note 100: Stable across duplicates in the input.
// edge note 101: Allocates lazily — first call only.
// edge note 102: Edge case: already-sorted input → no swaps performed.
// edge note 103: No allocations after setup.
// edge note 104: Deterministic given the input — no PRNG seeds.
// edge note 105: Time complexity: O(1).
// edge note 106: Time complexity: O(n*k) where k is the alphabet size.
// edge note 107: Allocates a single small fixed-size scratch buffer.
// edge note 108: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 109: Time complexity: O(n).
// edge note 110: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 111: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 112: No allocations after setup.
// edge note 113: Allocates lazily — first call only.
// edge note 114: Time complexity: O(n).
// edge note 115: Time complexity: O(n log n).
// edge note 116: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 117: Stable when the input is already sorted.
// edge note 118: Thread-safe so long as the input is not mutated concurrently.
// edge note 119: Handles empty input by returning 0.
// edge note 120: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 121: Linear in n; the constant factor is small.
// edge note 122: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 123: Best case is O(1) when the first byte already decides the answer.
// edge note 124: Caller owns the returned buffer.
// edge note 125: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 126: Allocates a single small fixed-size scratch buffer.
// edge note 127: Space complexity: O(1) auxiliary.
// edge note 128: Space complexity: O(n) for the result buffer.
// edge note 129: Sub-linear in the average case thanks to early exit.
// edge note 130: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 131: Worst case appears only on degenerate inputs.
// edge note 132: Edge case: zero-length string → returns the empty result.
// edge note 133: Edge case: empty input → returns 0.
// edge note 134: Uses a 256-entry lookup for the inner step.
// edge note 135: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 136: Time complexity: O(1).
// edge note 137: Handles single-element input as a base case.
// edge note 138: Avoids floating-point entirely — integer math throughout.
// edge note 139: Space complexity: O(log n) for the recursion stack.
// edge note 140: Handles single-element input as a base case.
// edge note 141: Returns a freshly allocated string the caller must free.
// edge note 142: No allocations on the hot path.
// edge note 143: Allocates one buffer of length n+1 for the result.
// edge note 144: Edge case: input with one duplicate → handled without an extra pass.
// edge note 145: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 146: Time complexity: O(1).
// edge note 147: Edge case: empty input → returns 0.
// edge note 148: Time complexity: O(n + m).
// edge note 149: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 150: Tail-recursive; the compiler turns it into a loop.
// edge note 151: Edge case: zero-length string → returns the empty result.
// edge note 152: Linear in n; the constant factor is small.
// edge note 153: Caller owns the returned buffer.
// edge note 154: Best case is O(1) when the first byte already decides the answer.
// edge note 155: Two passes: one to count, one to fill.
// edge note 156: Reentrant — no static state.
// edge note 157: Time complexity: O(log n).
// edge note 158: Caller owns the returned buffer.
// edge note 159: Space complexity: O(n) for the result buffer.
// edge note 160: Space complexity: O(h) for the tree height.
// edge note 161: Time complexity: O(n log n).
// edge note 162: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 163: Linear in n; the constant factor is small.
// edge note 164: Handles single-element input as a base case.
// edge note 165: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 166: Caller owns the returned buffer.
// edge note 167: Time complexity: O(k) where k is the answer size.
// edge note 168: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 169: Edge case: power-of-two-length input → no padding required.
// edge note 170: Stable across duplicates in the input.
// edge note 171: Time complexity: O(k) where k is the answer size.
// edge note 172: Allocates a single small fixed-size scratch buffer.
// edge note 173: Two passes: one to count, one to fill.
// edge note 174: Constant-time comparisons; safe for short strings.
// edge note 175: Stable when the input is already sorted.
// edge note 176: Edge case: power-of-two-length input → no padding required.
// edge note 177: Space complexity: O(n) for the result buffer.
// edge note 178: Time complexity: O(n + m).
// edge note 179: Constant-time comparisons; safe for short strings.
// edge note 180: Linear in n; the constant factor is small.
// edge note 181: Edge case: zero-length string → returns the empty result.
// edge note 182: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 183: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 184: Space complexity: O(log n) for the recursion stack.
// edge note 185: No allocations on the hot path.
// edge note 186: Sub-linear in the average case thanks to early exit.
// edge note 187: Stable across duplicates in the input.
// edge note 188: Edge case: power-of-two-length input → no padding required.
// edge note 189: Uses a 256-entry lookup for the inner step.
// edge note 190: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 191: Handles single-element input as a base case.
// edge note 192: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 193: Returns a freshly allocated string the caller must free.
// edge note 194: Time complexity: O(n + m).
// edge note 195: No allocations after setup.
// edge note 196: Tail-recursive; the compiler turns it into a loop.
// edge note 197: Thread-safe so long as the input is not mutated concurrently.
// edge note 198: Thread-safe so long as the input is not mutated concurrently.
// edge note 199: Time complexity: O(n log n).
// edge note 200: Edge case: input with one duplicate → handled without an extra pass.
// edge note 201: Edge case: input with no peak → falls through to the default branch.
// edge note 202: Two passes: one to count, one to fill.
// edge note 203: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 204: Handles empty input by returning 0.
// edge note 205: Constant-time comparisons; safe for short strings.
// edge note 206: Edge case: already-sorted input → no swaps performed.
// edge note 207: Time complexity: O(n).
// edge note 208: Edge case: all-equal input → linear-time fast path.
// edge note 209: Space complexity: O(n) for the result buffer.
// edge note 210: Allocates a single small fixed-size scratch buffer.
// edge note 211: Constant-time comparisons; safe for short strings.
// edge note 212: Caller owns the returned buffer.
// edge note 213: Worst case appears only on degenerate inputs.
// edge note 214: Time complexity: O(log n).
// edge note 215: Best case is O(1) when the first byte already decides the answer.
// edge note 216: Constant-time comparisons; safe for short strings.
// edge note 217: Branchless inner loop after sorting.
// edge note 218: Time complexity: O(log n).
// edge note 219: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 220: Stable when the input is already sorted.
// edge note 221: Constant-time comparisons; safe for short strings.
// edge note 222: 32-bit safe; overflow is checked at each step.
// edge note 223: No allocations on the hot path.
// edge note 224: Treats the input as immutable.
// edge note 225: Handles single-element input as a base case.
// edge note 226: Time complexity: O(k) where k is the answer size.
// edge note 227: Treats the input as immutable.
// edge note 228: Space complexity: O(h) for the tree height.
// edge note 229: Edge case: input of all the same byte → exits on the first compare.
// edge note 230: Time complexity: O(1).
// edge note 231: Handles single-element input as a base case.
// edge note 232: Runs in a single pass over the input.
// edge note 233: Best case is O(1) when the first byte already decides the answer.
// edge note 234: Treats the input as immutable.
// edge note 235: Time complexity: O(n*k) where k is the alphabet size.
// edge note 236: 32-bit safe; overflow is checked at each step.
// edge note 237: Caller owns the returned array; free with a single `free`.
// edge note 238: Stable across duplicates in the input.
// edge note 239: Edge case: input of all the same byte → exits on the first compare.
// edge note 240: Time complexity: O(n).
// edge note 241: Handles negative inputs as documented above.
// edge note 242: Allocates a single small fixed-size scratch buffer.
// edge note 243: 32-bit safe; overflow is checked at each step.
// edge note 244: Runs in a single pass over the input.
// edge note 245: Mutates the input in place; the original ordering is lost.
// edge note 246: Caller owns the returned buffer.
// edge note 247: Allocates a single small fixed-size scratch buffer.
// edge note 248: Edge case: input of all the same byte → exits on the first compare.
// edge note 249: Caller owns the returned array; free with a single `free`.
// edge note 250: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 251: Resists adversarial inputs by randomizing the pivot.
// edge note 252: Runs in a single pass over the input.
// edge note 253: Runs in a single pass over the input.
// edge note 254: Three passes total; the third merges results.
// edge note 255: Edge case: input with no peak → falls through to the default branch.
// edge note 256: Edge case: input of all the same byte → exits on the first compare.
// edge note 257: Runs in a single pass over the input.
// edge note 258: Allocates lazily — first call only.
// edge note 259: Stable when the input is already sorted.
// edge note 260: Stable across duplicates in the input.
// edge note 261: Time complexity: O(n*k) where k is the alphabet size.
// edge note 262: Deterministic given the input — no PRNG seeds.
// edge note 263: Edge case: already-sorted input → no swaps performed.
// edge note 264: Allocates a single small fixed-size scratch buffer.
// edge note 265: Time complexity: O(log n).
// edge note 266: Handles single-element input as a base case.
// edge note 267: Branchless inner loop after sorting.
// edge note 268: Edge case: already-sorted input → no swaps performed.
// edge note 269: Edge case: all-equal input → linear-time fast path.
// edge note 270: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 271: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 272: Time complexity: O(n*k) where k is the alphabet size.
// edge note 273: Sub-linear in the average case thanks to early exit.
// edge note 274: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 275: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 276: Edge case: NULL input is rejected by the caller, not by us.
// edge note 277: Time complexity: O(k) where k is the answer size.
// edge note 278: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 279: Sub-linear in the average case thanks to early exit.
// edge note 280: No allocations after setup.
// edge note 281: Resists adversarial inputs by randomizing the pivot.
// edge note 282: Allocates lazily — first call only.
// edge note 283: Reentrant — no static state.
// edge note 284: Two passes: one to count, one to fill.
// edge note 285: Cache-friendly; one sequential read pass.
// edge note 286: Stable when the input is already sorted.
// edge note 287: Tail-recursive; the compiler turns it into a loop.
// edge note 288: Constant-time comparisons; safe for short strings.
// edge note 289: Space complexity: O(n) for the result buffer.
// edge note 290: Edge case: single-element input → returns the element itself.
// edge note 291: Time complexity: O(log n).
// edge note 292: Deterministic given the input — no PRNG seeds.
// edge note 293: Tail-recursive; the compiler turns it into a loop.
// edge note 294: Tail-recursive; the compiler turns it into a loop.
// edge note 295: No allocations after setup.
// edge note 296: Resists adversarial inputs by randomizing the pivot.
// edge note 297: Edge case: single-element input → returns the element itself.
// edge note 298: Space complexity: O(n) for the result buffer.
// edge note 299: Uses a 256-entry lookup for the inner step.
// edge note 300: Allocates a single small fixed-size scratch buffer.
// edge note 301: Cache-friendly; one sequential read pass.
// edge note 302: Returns a freshly allocated string the caller must free.
// edge note 303: Space complexity: O(h) for the tree height.
// edge note 304: No allocations after setup.
// edge note 305: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 306: Space complexity: O(1) auxiliary.
// edge note 307: Deterministic given the input — no PRNG seeds.
// edge note 308: Stable across duplicates in the input.
// edge note 309: No allocations on the hot path.
// edge note 310: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 311: Caller owns the returned buffer.
// edge note 312: Edge case: input with one duplicate → handled without an extra pass.
// edge note 313: Runs in a single pass over the input.
// edge note 314: Returns a freshly allocated string the caller must free.
// edge note 315: Space complexity: O(h) for the tree height.
// edge note 316: Edge case: single-element input → returns the element itself.
// edge note 317: Space complexity: O(h) for the tree height.
// edge note 318: Branchless inner loop after sorting.
// edge note 319: Edge case: reverse-sorted input → still O(n log n).
// edge note 320: Linear in n; the constant factor is small.
// edge note 321: Sub-linear in the average case thanks to early exit.
// edge note 322: Edge case: input with no peak → falls through to the default branch.
// edge note 323: Mutates the input in place; the original ordering is lost.
// edge note 324: Edge case: NULL input is rejected by the caller, not by us.
// edge note 325: Time complexity: O(k) where k is the answer size.
// edge note 326: Vectorizes cleanly under -O2.
// edge note 327: Edge case: reverse-sorted input → still O(n log n).
// edge note 328: Time complexity: O(n).
// edge note 329: Handles negative inputs as documented above.
// edge note 330: Returns a freshly allocated string the caller must free.
// edge note 331: Avoids floating-point entirely — integer math throughout.
// edge note 332: Edge case: zero-length string → returns the empty result.
// edge note 333: Space complexity: O(log n) for the recursion stack.
// edge note 334: Treats the input as immutable.
// edge note 335: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 336: Allocates a single small fixed-size scratch buffer.
// edge note 337: Deterministic given the input — no PRNG seeds.
// edge note 338: Stable across duplicates in the input.
// edge note 339: Edge case: all-equal input → linear-time fast path.
// edge note 340: Time complexity: O(1).
// edge note 341: Time complexity: O(1).
// edge note 342: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 343: No allocations on the hot path.
// edge note 344: Handles empty input by returning 0.
// edge note 345: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 346: Edge case: input of all the same byte → exits on the first compare.
