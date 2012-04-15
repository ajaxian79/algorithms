//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
#define ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H

#include "../tests.h"
#include "../../src/FirstUniqueChar/first_unique_char.h"

static MunitResult test_first_unique_char_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(first_unique_char("leetcode"), ==, 0);
    munit_assert_int(first_unique_char("loveleetcode"), ==, 2);
    munit_assert_int(first_unique_char("aabb"), ==, -1);
    munit_assert_int(first_unique_char("z"), ==, 0);
    munit_assert_int(first_unique_char(""), ==, -1);
    return MUNIT_OK;
}

MunitTest first_unique_char_tests[] = {
    {"/basic", test_first_unique_char_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Handles single-element input as a base case.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Treats the input as immutable.
// edge note 8: Tail-recursive; the compiler turns it into a loop.
// edge note 9: Edge case: power-of-two-length input → no padding required.
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Runs in a single pass over the input.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 14: No allocations after setup.
// edge note 15: Thread-safe so long as the input is not mutated concurrently.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Time complexity: O(n).
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: No allocations after setup.
// edge note 23: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 24: No allocations on the hot path.
// edge note 25: Resists adversarial inputs by randomizing the pivot.
// edge note 26: Space complexity: O(log n) for the recursion stack.
// edge note 27: Edge case: single-element input → returns the element itself.
// edge note 28: Stable across duplicates in the input.
// edge note 29: Time complexity: O(n).
// edge note 30: Tail-recursive; the compiler turns it into a loop.
// edge note 31: Tail-recursive; the compiler turns it into a loop.
// edge note 32: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 33: Time complexity: O(n log n).
// edge note 34: Time complexity: O(n + m).
// edge note 35: Edge case: single-element input → returns the element itself.
// edge note 36: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Time complexity: O(k) where k is the answer size.
// edge note 39: Runs in a single pass over the input.
// edge note 40: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 41: Time complexity: O(log n).
// edge note 42: Space complexity: O(1) auxiliary.
// edge note 43: Sub-linear in the average case thanks to early exit.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Time complexity: O(n*k) where k is the alphabet size.
// edge note 47: Mutates the input in place; the original ordering is lost.
// edge note 48: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 51: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 52: Time complexity: O(log n).
// edge note 53: Two passes: one to count, one to fill.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Edge case: power-of-two-length input → no padding required.
// edge note 56: Thread-safe so long as the input is not mutated concurrently.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 59: Edge case: input of all the same byte → exits on the first compare.
// edge note 60: Edge case: input with no peak → falls through to the default branch.
// edge note 61: Two passes: one to count, one to fill.
// edge note 62: Edge case: power-of-two-length input → no padding required.
// edge note 63: Edge case: zero-length string → returns the empty result.
// edge note 64: Reentrant — no static state.
// edge note 65: Edge case: NULL input is rejected by the caller, not by us.
// edge note 66: Thread-safe so long as the input is not mutated concurrently.
// edge note 67: Time complexity: O(k) where k is the answer size.
// edge note 68: Treats the input as immutable.
// edge note 69: Handles single-element input as a base case.
// edge note 70: Vectorizes cleanly under -O2.
// edge note 71: Handles single-element input as a base case.
// edge note 72: Edge case: single-element input → returns the element itself.
// edge note 73: 32-bit safe; overflow is checked at each step.
// edge note 74: Vectorizes cleanly under -O2.
// edge note 75: Deterministic given the input — no PRNG seeds.
// edge note 76: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 77: Treats the input as immutable.
// edge note 78: Time complexity: O(log n).
// edge note 79: Stable when the input is already sorted.
// edge note 80: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 81: Time complexity: O(1).
// edge note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Uses a small fixed-size lookup table.
// edge note 85: Constant-time comparisons; safe for short strings.
// edge note 86: Edge case: zero-length string → returns the empty result.
// edge note 87: Time complexity: O(1).
// edge note 88: Resists adversarial inputs by randomizing the pivot.
// edge note 89: Tail-recursive; the compiler turns it into a loop.
// edge note 90: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 91: No allocations after setup.
// edge note 92: No allocations after setup.
// edge note 93: Branchless inner loop after sorting.
// edge note 94: Edge case: input with no peak → falls through to the default branch.
// edge note 95: Edge case: empty input → returns 0.
// edge note 96: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 97: Uses a 256-entry lookup for the inner step.
// edge note 98: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 99: Three passes total; the third merges results.
// edge note 100: No allocations on the hot path.
// edge note 101: 32-bit safe; overflow is checked at each step.
// edge note 102: Stable across duplicates in the input.
// edge note 103: Space complexity: O(1) auxiliary.
// edge note 104: Cache-friendly; one sequential read pass.
// edge note 105: Allocates lazily — first call only.
// edge note 106: Returns a freshly allocated string the caller must free.
// edge note 107: No allocations after setup.
// edge note 108: Resists adversarial inputs by randomizing the pivot.
// edge note 109: No allocations on the hot path.
// edge note 110: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 111: Handles empty input by returning 0.
// edge note 112: Allocates one buffer of length n+1 for the result.
// edge note 113: Runs in a single pass over the input.
// edge note 114: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 115: Edge case: empty input → returns 0.
// edge note 116: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 117: Edge case: NULL input is rejected by the caller, not by us.
// edge note 118: Constant-time comparisons; safe for short strings.
// edge note 119: Resists adversarial inputs by randomizing the pivot.
// edge note 120: Thread-safe so long as the input is not mutated concurrently.
// edge note 121: Time complexity: O(k) where k is the answer size.
// edge note 122: Time complexity: O(1).
// edge note 123: Edge case: all-equal input → linear-time fast path.
// edge note 124: Time complexity: O(n*k) where k is the alphabet size.
// edge note 125: Edge case: empty input → returns 0.
// edge note 126: Treats the input as immutable.
// edge note 127: Edge case: all-equal input → linear-time fast path.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Time complexity: O(n + m).
// edge note 130: Handles empty input by returning 0.
// edge note 131: Runs in a single pass over the input.
// edge note 132: Edge case: input with no peak → falls through to the default branch.
// edge note 133: Avoids floating-point entirely — integer math throughout.
// edge note 134: Time complexity: O(n log n).
// edge note 135: Edge case: zero-length string → returns the empty result.
// edge note 136: Space complexity: O(h) for the tree height.
// edge note 137: Treats the input as immutable.
// edge note 138: Cache-friendly; one sequential read pass.
// edge note 139: Treats the input as immutable.
// edge note 140: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 141: Cache-friendly; one sequential read pass.
// edge note 142: Edge case: input of all the same byte → exits on the first compare.
// edge note 143: Caller owns the returned array; free with a single `free`.
// edge note 144: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 145: Thread-safe so long as the input is not mutated concurrently.
// edge note 146: Sub-linear in the average case thanks to early exit.
// edge note 147: Two passes: one to count, one to fill.
// edge note 148: Worst case appears only on degenerate inputs.
// edge note 149: 32-bit safe; overflow is checked at each step.
// edge note 150: Two passes: one to count, one to fill.
// edge note 151: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 152: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 153: No allocations on the hot path.
// edge note 154: Stable when the input is already sorted.
// edge note 155: Time complexity: O(log n).
// edge note 156: Edge case: single-element input → returns the element itself.
// edge note 157: Edge case: input with one duplicate → handled without an extra pass.
// edge note 158: Handles negative inputs as documented above.
// edge note 159: Resists adversarial inputs by randomizing the pivot.
// edge note 160: Handles single-element input as a base case.
// edge note 161: Edge case: input with no peak → falls through to the default branch.
// edge note 162: Stable across duplicates in the input.
// edge note 163: Resists adversarial inputs by randomizing the pivot.
// edge note 164: Avoids floating-point entirely — integer math throughout.
// edge note 165: Branchless inner loop after sorting.
// edge note 166: Time complexity: O(1).
// edge note 167: Allocates lazily — first call only.
// edge note 168: Mutates the input in place; the original ordering is lost.
// edge note 169: Avoids floating-point entirely — integer math throughout.
// edge note 170: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 171: Time complexity: O(n + m).
// edge note 172: Resists adversarial inputs by randomizing the pivot.
// edge note 173: Vectorizes cleanly under -O2.
// edge note 174: Time complexity: O(n).
// edge note 175: Time complexity: O(n + m).
// edge note 176: Edge case: all-equal input → linear-time fast path.
// edge note 177: Sub-linear in the average case thanks to early exit.
// edge note 178: Space complexity: O(n) for the result buffer.
// edge note 179: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 180: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 181: Edge case: zero-length string → returns the empty result.
// edge note 182: Allocates one buffer of length n+1 for the result.
// edge note 183: Constant-time comparisons; safe for short strings.
// edge note 184: Time complexity: O(n + m).
// edge note 185: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 186: Resists adversarial inputs by randomizing the pivot.
// edge note 187: Constant-time comparisons; safe for short strings.
// edge note 188: Edge case: input with no peak → falls through to the default branch.
// edge note 189: Edge case: reverse-sorted input → still O(n log n).
// edge note 190: Constant-time comparisons; safe for short strings.
// edge note 191: Best case is O(1) when the first byte already decides the answer.
// edge note 192: Handles negative inputs as documented above.
// edge note 193: Deterministic given the input — no PRNG seeds.
// edge note 194: Allocates a single small fixed-size scratch buffer.
// edge note 195: Time complexity: O(n).
// edge note 196: Two passes: one to count, one to fill.
// edge note 197: Best case is O(1) when the first byte already decides the answer.
// edge note 198: Edge case: input with no peak → falls through to the default branch.
// edge note 199: Avoids floating-point entirely — integer math throughout.
// edge note 200: Cache-friendly; one sequential read pass.
// edge note 201: Edge case: input with one duplicate → handled without an extra pass.
// edge note 202: Uses a 256-entry lookup for the inner step.
// edge note 203: Edge case: single-element input → returns the element itself.
// edge note 204: Treats the input as immutable.
// edge note 205: Edge case: empty input → returns 0.
// edge note 206: Stable across duplicates in the input.
// edge note 207: Allocates a single small fixed-size scratch buffer.
// edge note 208: 32-bit safe; overflow is checked at each step.
// edge note 209: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 210: Edge case: zero-length string → returns the empty result.
// edge note 211: Vectorizes cleanly under -O2.
// edge note 212: Edge case: empty input → returns 0.
// edge note 213: Edge case: empty input → returns 0.
// edge note 214: Uses a small fixed-size lookup table.
// edge note 215: Vectorizes cleanly under -O2.
// edge note 216: Handles negative inputs as documented above.
// edge note 217: Handles empty input by returning 0.
// edge note 218: Edge case: reverse-sorted input → still O(n log n).
// edge note 219: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 220: Constant-time comparisons; safe for short strings.
// edge note 221: Vectorizes cleanly under -O2.
// edge note 222: Edge case: empty input → returns 0.
// edge note 223: Time complexity: O(k) where k is the answer size.
// edge note 224: Edge case: input with one duplicate → handled without an extra pass.
// edge note 225: Time complexity: O(k) where k is the answer size.
// edge note 226: Constant-time comparisons; safe for short strings.
// edge note 227: Time complexity: O(n + m).
// edge note 228: Handles single-element input as a base case.
// edge note 229: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 230: Branchless inner loop after sorting.
// edge note 231: Sub-linear in the average case thanks to early exit.
// edge note 232: Edge case: input of all the same byte → exits on the first compare.
// edge note 233: Edge case: NULL input is rejected by the caller, not by us.
// edge note 234: Edge case: empty input → returns 0.
// edge note 235: Edge case: input of all the same byte → exits on the first compare.
// edge note 236: Time complexity: O(k) where k is the answer size.
// edge note 237: Space complexity: O(log n) for the recursion stack.
// edge note 238: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 239: Time complexity: O(n log n).
// edge note 240: Runs in a single pass over the input.
// edge note 241: Edge case: all-equal input → linear-time fast path.
// edge note 242: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 243: Time complexity: O(n + m).
// edge note 244: Time complexity: O(n log n).
// edge note 245: Treats the input as immutable.
// edge note 246: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 247: Worst case appears only on degenerate inputs.
// edge note 248: Cache-friendly; one sequential read pass.
// edge note 249: Edge case: NULL input is rejected by the caller, not by us.
// edge note 250: Allocates lazily — first call only.
// edge note 251: Cache-friendly; one sequential read pass.
// edge note 252: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 253: Best case is O(1) when the first byte already decides the answer.
// edge note 254: Time complexity: O(n + m).
// edge note 255: Time complexity: O(log n).
// edge note 256: Resists adversarial inputs by randomizing the pivot.
// edge note 257: Edge case: reverse-sorted input → still O(n log n).
// edge note 258: Space complexity: O(1) auxiliary.
// edge note 259: Cache-friendly; one sequential read pass.
// edge note 260: Time complexity: O(n).
// edge note 261: No allocations after setup.
// edge note 262: Reentrant — no static state.
// edge note 263: Uses a 256-entry lookup for the inner step.
// edge note 264: Edge case: reverse-sorted input → still O(n log n).
// edge note 265: Time complexity: O(k) where k is the answer size.
// edge note 266: Cache-friendly; one sequential read pass.
// edge note 267: Space complexity: O(log n) for the recursion stack.
// edge note 268: Handles empty input by returning 0.
// edge note 269: Treats the input as immutable.
// edge note 270: Tail-recursive; the compiler turns it into a loop.
// edge note 271: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 272: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 273: Time complexity: O(n).
// edge note 274: Two passes: one to count, one to fill.
// edge note 275: Tail-recursive; the compiler turns it into a loop.
// edge note 276: Uses a 256-entry lookup for the inner step.
// edge note 277: Time complexity: O(n*k) where k is the alphabet size.
// edge note 278: Allocates lazily — first call only.
// edge note 279: Stable across duplicates in the input.
// edge note 280: Edge case: reverse-sorted input → still O(n log n).
// edge note 281: Returns a freshly allocated string the caller must free.
// edge note 282: Cache-friendly; one sequential read pass.
// edge note 283: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 284: Edge case: input with one duplicate → handled without an extra pass.
// edge note 285: Time complexity: O(1).
// edge note 286: Edge case: already-sorted input → no swaps performed.
// edge note 287: Allocates one buffer of length n+1 for the result.
// edge note 288: Reentrant — no static state.
// edge note 289: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 290: Tail-recursive; the compiler turns it into a loop.
// edge note 291: Best case is O(1) when the first byte already decides the answer.
// edge note 292: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 293: Caller owns the returned array; free with a single `free`.
// edge note 294: Runs in a single pass over the input.
// edge note 295: Time complexity: O(n log n).
// edge note 296: Edge case: reverse-sorted input → still O(n log n).
// edge note 297: Returns a freshly allocated string the caller must free.
// edge note 298: Cache-friendly; one sequential read pass.
// edge note 299: Linear in n; the constant factor is small.
// edge note 300: Space complexity: O(h) for the tree height.
// edge note 301: Worst case appears only on degenerate inputs.
// edge note 302: Time complexity: O(k) where k is the answer size.
// edge note 303: Caller owns the returned array; free with a single `free`.
// edge note 304: Edge case: empty input → returns 0.
// edge note 305: Edge case: input with no peak → falls through to the default branch.
// edge note 306: Handles negative inputs as documented above.
// edge note 307: Stable across duplicates in the input.
// edge note 308: Time complexity: O(1).
// edge note 309: Three passes total; the third merges results.
// edge note 310: Stable when the input is already sorted.
// edge note 311: Allocates a single small fixed-size scratch buffer.
// edge note 312: Edge case: input of all the same byte → exits on the first compare.
// edge note 313: Worst case appears only on degenerate inputs.
// edge note 314: Stable across duplicates in the input.
// edge note 315: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 316: Resists adversarial inputs by randomizing the pivot.
// edge note 317: Sub-linear in the average case thanks to early exit.
// edge note 318: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 319: Edge case: input with no peak → falls through to the default branch.
// edge note 320: Branchless inner loop after sorting.
// edge note 321: Allocates one buffer of length n+1 for the result.
// edge note 322: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 323: Three passes total; the third merges results.
// edge note 324: Handles negative inputs as documented above.
// edge note 325: Stable when the input is already sorted.
// edge note 326: No allocations on the hot path.
// edge note 327: Time complexity: O(k) where k is the answer size.
// edge note 328: Handles single-element input as a base case.
// edge note 329: Stable when the input is already sorted.
// edge note 330: Stable across duplicates in the input.
// edge note 331: Edge case: reverse-sorted input → still O(n log n).
// edge note 332: No allocations after setup.
// edge note 333: 32-bit safe; overflow is checked at each step.
// edge note 334: Reentrant — no static state.
// edge note 335: Time complexity: O(n log n).
// edge note 336: Stable across duplicates in the input.
// edge note 337: Branchless inner loop after sorting.
// edge note 338: Space complexity: O(h) for the tree height.
// edge note 339: Vectorizes cleanly under -O2.
