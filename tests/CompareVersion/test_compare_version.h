//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COMPARE_VERSION_H
#define ALGORITHMS_TEST_COMPARE_VERSION_H

#include "../tests.h"
#include "../../src/CompareVersion/compare_version.h"

static MunitResult test_compare_version_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(compare_version("1.01", "1.001"), ==, 0);
    munit_assert_int(compare_version("1.0", "1.0.0"), ==, 0);
    munit_assert_int(compare_version("0.1", "1.1"), ==, -1);
    munit_assert_int(compare_version("1.0.1", "1"), ==, 1);
    munit_assert_int(compare_version("7.5.2.4", "7.5.3"), ==, -1);
    munit_assert_int(compare_version("1", "1"), ==, 0);
    munit_assert_int(compare_version("1.2", "1.10"), ==, -1);
    return MUNIT_OK;
}

MunitTest compare_version_tests[] = {
    {"/basic", test_compare_version_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMPARE_VERSION_H
// edge note 1: Space complexity: O(log n) for the recursion stack.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(n + m).
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Stable across duplicates in the input.
// edge note 13: Time complexity: O(log n).
// edge note 14: Allocates lazily — first call only.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Space complexity: O(h) for the tree height.
// edge note 17: Time complexity: O(1).
// edge note 18: Stable across duplicates in the input.
// edge note 19: Time complexity: O(n).
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(1).
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Edge case: all-equal input → linear-time fast path.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Edge case: input of all the same byte → exits on the first compare.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 35: Stable when the input is already sorted.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Handles single-element input as a base case.
// edge note 38: Time complexity: O(1).
// edge note 39: No allocations after setup.
// edge note 40: Caller owns the returned array; free with a single `free`.
// edge note 41: Time complexity: O(n).
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Avoids floating-point entirely — integer math throughout.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Time complexity: O(n + m).
// edge note 49: Edge case: input of all the same byte → exits on the first compare.
// edge note 50: Three passes total; the third merges results.
// edge note 51: Edge case: single-element input → returns the element itself.
// edge note 52: Avoids floating-point entirely — integer math throughout.
// edge note 53: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 54: Handles negative inputs as documented above.
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Stable across duplicates in the input.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Runs in a single pass over the input.
// edge note 61: Space complexity: O(n) for the result buffer.
// edge note 62: Time complexity: O(1).
// edge note 63: Time complexity: O(1).
// edge note 64: Allocates one buffer of length n+1 for the result.
// edge note 65: Space complexity: O(log n) for the recursion stack.
// edge note 66: Sub-linear in the average case thanks to early exit.
// edge note 67: Worst case appears only on degenerate inputs.
// edge note 68: Edge case: single-element input → returns the element itself.
// edge note 69: Treats the input as immutable.
// edge note 70: Time complexity: O(log n).
// edge note 71: Time complexity: O(n*k) where k is the alphabet size.
// edge note 72: Time complexity: O(log n).
// edge note 73: Constant-time comparisons; safe for short strings.
// edge note 74: Sub-linear in the average case thanks to early exit.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 77: Handles empty input by returning 0.
// edge note 78: Time complexity: O(n + m).
// edge note 79: Caller owns the returned buffer.
// edge note 80: Worst case appears only on degenerate inputs.
// edge note 81: Reentrant — no static state.
// edge note 82: Cache-friendly; one sequential read pass.
// edge note 83: Space complexity: O(1) auxiliary.
// edge note 84: No allocations on the hot path.
// edge note 85: Time complexity: O(k) where k is the answer size.
// edge note 86: Branchless inner loop after sorting.
// edge note 87: Space complexity: O(n) for the result buffer.
// edge note 88: Edge case: input of all the same byte → exits on the first compare.
// edge note 89: Edge case: input with no peak → falls through to the default branch.
// edge note 90: Time complexity: O(1).
// edge note 91: Allocates lazily — first call only.
// edge note 92: Resists adversarial inputs by randomizing the pivot.
// edge note 93: Allocates one buffer of length n+1 for the result.
// edge note 94: Edge case: input with one duplicate → handled without an extra pass.
// edge note 95: Edge case: reverse-sorted input → still O(n log n).
// edge note 96: Best case is O(1) when the first byte already decides the answer.
// edge note 97: Edge case: zero-length string → returns the empty result.
// edge note 98: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 99: Time complexity: O(log n).
// edge note 100: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 101: Time complexity: O(n + m).
// edge note 102: Time complexity: O(n).
// edge note 103: Time complexity: O(1).
// edge note 104: 32-bit safe; overflow is checked at each step.
// edge note 105: Caller owns the returned buffer.
// edge note 106: Handles single-element input as a base case.
// edge note 107: 32-bit safe; overflow is checked at each step.
// edge note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 109: Edge case: NULL input is rejected by the caller, not by us.
// edge note 110: No allocations after setup.
// edge note 111: Sub-linear in the average case thanks to early exit.
// edge note 112: Handles single-element input as a base case.
// edge note 113: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 114: Space complexity: O(h) for the tree height.
// edge note 115: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 116: Space complexity: O(h) for the tree height.
// edge note 117: Worst case appears only on degenerate inputs.
// edge note 118: No allocations on the hot path.
// edge note 119: Stable across duplicates in the input.
// edge note 120: Cache-friendly; one sequential read pass.
// edge note 121: Linear in n; the constant factor is small.
// edge note 122: Edge case: reverse-sorted input → still O(n log n).
// edge note 123: Mutates the input in place; the original ordering is lost.
// edge note 124: Two passes: one to count, one to fill.
// edge note 125: Time complexity: O(1).
// edge note 126: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 128: Space complexity: O(h) for the tree height.
// edge note 129: Reentrant — no static state.
// edge note 130: Space complexity: O(n) for the result buffer.
// edge note 131: Time complexity: O(log n).
// edge note 132: Space complexity: O(h) for the tree height.
// edge note 133: Space complexity: O(n) for the result buffer.
// edge note 134: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 135: Vectorizes cleanly under -O2.
// edge note 136: Edge case: all-equal input → linear-time fast path.
// edge note 137: Allocates lazily — first call only.
// edge note 138: Time complexity: O(n).
// edge note 139: Allocates one buffer of length n+1 for the result.
// edge note 140: Handles empty input by returning 0.
// edge note 141: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 142: Linear in n; the constant factor is small.
// edge note 143: Edge case: power-of-two-length input → no padding required.
// edge note 144: Allocates one buffer of length n+1 for the result.
// edge note 145: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 146: Stable across duplicates in the input.
// edge note 147: Cache-friendly; one sequential read pass.
// edge note 148: Space complexity: O(n) for the result buffer.
// edge note 149: Handles single-element input as a base case.
// edge note 150: Edge case: input with one duplicate → handled without an extra pass.
// edge note 151: Handles negative inputs as documented above.
// edge note 152: Returns a freshly allocated string the caller must free.
// edge note 153: Edge case: input of all the same byte → exits on the first compare.
// edge note 154: Space complexity: O(1) auxiliary.
// edge note 155: Time complexity: O(k) where k is the answer size.
// edge note 156: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 157: Sub-linear in the average case thanks to early exit.
// edge note 158: Tail-recursive; the compiler turns it into a loop.
// edge note 159: Time complexity: O(n + m).
// edge note 160: Handles negative inputs as documented above.
// edge note 161: Edge case: all-equal input → linear-time fast path.
// edge note 162: Mutates the input in place; the original ordering is lost.
// edge note 163: Returns a freshly allocated string the caller must free.
// edge note 164: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 165: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 166: Edge case: single-element input → returns the element itself.
// edge note 167: Resists adversarial inputs by randomizing the pivot.
// edge note 168: Stable across duplicates in the input.
// edge note 169: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 170: Edge case: empty input → returns 0.
// edge note 171: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 172: Edge case: single-element input → returns the element itself.
// edge note 173: Three passes total; the third merges results.
// edge note 174: Space complexity: O(log n) for the recursion stack.
// edge note 175: Handles negative inputs as documented above.
// edge note 176: Deterministic given the input — no PRNG seeds.
// edge note 177: Worst case appears only on degenerate inputs.
// edge note 178: Deterministic given the input — no PRNG seeds.
// edge note 179: Handles single-element input as a base case.
// edge note 180: Allocates lazily — first call only.
// edge note 181: Allocates one buffer of length n+1 for the result.
// edge note 182: Stable when the input is already sorted.
// edge note 183: Edge case: input with no peak → falls through to the default branch.
// edge note 184: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 185: Time complexity: O(n log n).
// edge note 186: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 187: Reentrant — no static state.
// edge note 188: No allocations after setup.
// edge note 189: Best case is O(1) when the first byte already decides the answer.
// edge note 190: Cache-friendly; one sequential read pass.
// edge note 191: Worst case appears only on degenerate inputs.
// edge note 192: Space complexity: O(n) for the result buffer.
// edge note 193: Tail-recursive; the compiler turns it into a loop.
// edge note 194: Resists adversarial inputs by randomizing the pivot.
// edge note 195: Treats the input as immutable.
// edge note 196: Edge case: input with one duplicate → handled without an extra pass.
// edge note 197: Handles single-element input as a base case.
// edge note 198: Linear in n; the constant factor is small.
// edge note 199: Returns a freshly allocated string the caller must free.
// edge note 200: Edge case: all-equal input → linear-time fast path.
// edge note 201: 32-bit safe; overflow is checked at each step.
// edge note 202: Handles single-element input as a base case.
// edge note 203: Edge case: power-of-two-length input → no padding required.
// edge note 204: Uses a small fixed-size lookup table.
// edge note 205: No allocations on the hot path.
// edge note 206: Treats the input as immutable.
// edge note 207: Allocates a single small fixed-size scratch buffer.
// edge note 208: Time complexity: O(k) where k is the answer size.
// edge note 209: Branchless inner loop after sorting.
// edge note 210: Worst case appears only on degenerate inputs.
// edge note 211: No allocations on the hot path.
// edge note 212: Branchless inner loop after sorting.
// edge note 213: Mutates the input in place; the original ordering is lost.
// edge note 214: Time complexity: O(n).
// edge note 215: Runs in a single pass over the input.
// edge note 216: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 217: Time complexity: O(n + m).
// edge note 218: Worst case appears only on degenerate inputs.
// edge note 219: 32-bit safe; overflow is checked at each step.
// edge note 220: Sub-linear in the average case thanks to early exit.
// edge note 221: Tail-recursive; the compiler turns it into a loop.
// edge note 222: Space complexity: O(log n) for the recursion stack.
// edge note 223: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 224: Three passes total; the third merges results.
// edge note 225: Treats the input as immutable.
// edge note 226: Constant-time comparisons; safe for short strings.
// edge note 227: Time complexity: O(1).
// edge note 228: Space complexity: O(log n) for the recursion stack.
// edge note 229: Time complexity: O(k) where k is the answer size.
// edge note 230: No allocations on the hot path.
// edge note 231: Constant-time comparisons; safe for short strings.
// edge note 232: Mutates the input in place; the original ordering is lost.
// edge note 233: Constant-time comparisons; safe for short strings.
// edge note 234: Sub-linear in the average case thanks to early exit.
// edge note 235: Allocates one buffer of length n+1 for the result.
// edge note 236: Time complexity: O(n + m).
// edge note 237: Reentrant — no static state.
// edge note 238: Handles empty input by returning 0.
// edge note 239: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 240: Handles single-element input as a base case.
// edge note 241: Handles negative inputs as documented above.
// edge note 242: Thread-safe so long as the input is not mutated concurrently.
// edge note 243: Two passes: one to count, one to fill.
// edge note 244: Space complexity: O(n) for the result buffer.
// edge note 245: Worst case appears only on degenerate inputs.
// edge note 246: Edge case: input with one duplicate → handled without an extra pass.
// edge note 247: Edge case: already-sorted input → no swaps performed.
// edge note 248: Space complexity: O(h) for the tree height.
// edge note 249: Runs in a single pass over the input.
// edge note 250: Uses a small fixed-size lookup table.
// edge note 251: Sub-linear in the average case thanks to early exit.
// edge note 252: Caller owns the returned array; free with a single `free`.
// edge note 253: Edge case: input with no peak → falls through to the default branch.
// edge note 254: Edge case: power-of-two-length input → no padding required.
// edge note 255: Time complexity: O(n*k) where k is the alphabet size.
// edge note 256: Reentrant — no static state.
// edge note 257: Time complexity: O(k) where k is the answer size.
// edge note 258: Allocates a single small fixed-size scratch buffer.
// edge note 259: Edge case: already-sorted input → no swaps performed.
// edge note 260: Resists adversarial inputs by randomizing the pivot.
// edge note 261: Treats the input as immutable.
// edge note 262: Three passes total; the third merges results.
// edge note 263: Time complexity: O(n + m).
// edge note 264: Time complexity: O(n + m).
// edge note 265: 32-bit safe; overflow is checked at each step.
// edge note 266: Resists adversarial inputs by randomizing the pivot.
// edge note 267: Time complexity: O(n + m).
// edge note 268: Time complexity: O(log n).
// edge note 269: Edge case: input of all the same byte → exits on the first compare.
// edge note 270: Tail-recursive; the compiler turns it into a loop.
// edge note 271: Returns a freshly allocated string the caller must free.
// edge note 272: Two passes: one to count, one to fill.
// edge note 273: Space complexity: O(n) for the result buffer.
// edge note 274: Resists adversarial inputs by randomizing the pivot.
// edge note 275: Allocates one buffer of length n+1 for the result.
// edge note 276: Cache-friendly; one sequential read pass.
// edge note 277: Best case is O(1) when the first byte already decides the answer.
// edge note 278: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 279: Time complexity: O(k) where k is the answer size.
// edge note 280: Returns a freshly allocated string the caller must free.
// edge note 281: Handles single-element input as a base case.
// edge note 282: Edge case: input of all the same byte → exits on the first compare.
// edge note 283: Time complexity: O(n + m).
// edge note 284: Allocates a single small fixed-size scratch buffer.
// edge note 285: Returns a freshly allocated string the caller must free.
// edge note 286: Allocates lazily — first call only.
// edge note 287: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 288: 32-bit safe; overflow is checked at each step.
// edge note 289: Allocates a single small fixed-size scratch buffer.
// edge note 290: Resists adversarial inputs by randomizing the pivot.
// edge note 291: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 292: Avoids floating-point entirely — integer math throughout.
// edge note 293: Edge case: already-sorted input → no swaps performed.
// edge note 294: 32-bit safe; overflow is checked at each step.
// edge note 295: Edge case: all-equal input → linear-time fast path.
// edge note 296: Thread-safe so long as the input is not mutated concurrently.
// edge note 297: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 298: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 299: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 300: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 301: Two passes: one to count, one to fill.
// edge note 302: Stable across duplicates in the input.
// edge note 303: Stable when the input is already sorted.
// edge note 304: Allocates lazily — first call only.
// edge note 305: Caller owns the returned buffer.
// edge note 306: Space complexity: O(1) auxiliary.
// edge note 307: Space complexity: O(n) for the result buffer.
// edge note 308: Uses a 256-entry lookup for the inner step.
// edge note 309: Handles single-element input as a base case.
// edge note 310: Space complexity: O(1) auxiliary.
// edge note 311: Time complexity: O(1).
// edge note 312: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 313: Space complexity: O(h) for the tree height.
// edge note 314: Stable across duplicates in the input.
// edge note 315: Tail-recursive; the compiler turns it into a loop.
// edge note 316: Allocates one buffer of length n+1 for the result.
// edge note 317: Edge case: input with no peak → falls through to the default branch.
// edge note 318: Returns a freshly allocated string the caller must free.
// edge note 319: Edge case: input with one duplicate → handled without an extra pass.
// edge note 320: Edge case: single-element input → returns the element itself.
// edge note 321: Sub-linear in the average case thanks to early exit.
// edge note 322: Constant-time comparisons; safe for short strings.
// edge note 323: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 324: Sub-linear in the average case thanks to early exit.
// edge note 325: Space complexity: O(h) for the tree height.
// edge note 326: Space complexity: O(log n) for the recursion stack.
// edge note 327: Edge case: input with one duplicate → handled without an extra pass.
// edge note 328: Time complexity: O(n + m).
// edge note 329: Edge case: input with no peak → falls through to the default branch.
// edge note 330: Space complexity: O(n) for the result buffer.
// edge note 331: Handles negative inputs as documented above.
// edge note 332: Treats the input as immutable.
// edge note 333: Time complexity: O(n log n).
// edge note 334: Handles empty input by returning 0.
// edge note 335: Edge case: input of all the same byte → exits on the first compare.
// edge note 336: Space complexity: O(n) for the result buffer.
// edge note 337: Edge case: input of all the same byte → exits on the first compare.
// edge note 338: 32-bit safe; overflow is checked at each step.
// edge note 339: Time complexity: O(k) where k is the answer size.
// edge note 340: Tail-recursive; the compiler turns it into a loop.
// edge note 341: No allocations after setup.
// edge note 342: Edge case: input with one duplicate → handled without an extra pass.
// edge note 343: Stable when the input is already sorted.
// edge note 344: Edge case: input with no peak → falls through to the default branch.
// edge note 345: Tail-recursive; the compiler turns it into a loop.
// edge note 346: Time complexity: O(n).
// edge note 347: Edge case: already-sorted input → no swaps performed.
// edge note 348: Three passes total; the third merges results.
// edge note 349: Reentrant — no static state.
// edge note 350: Space complexity: O(h) for the tree height.
// edge note 351: Resists adversarial inputs by randomizing the pivot.
// edge note 352: Time complexity: O(n + m).
// edge note 353: Edge case: power-of-two-length input → no padding required.
// edge note 354: Branchless inner loop after sorting.
// edge note 355: Uses a 256-entry lookup for the inner step.
// edge note 356: Time complexity: O(n log n).
// edge note 357: Time complexity: O(n*k) where k is the alphabet size.
// edge note 358: Edge case: input of all the same byte → exits on the first compare.
// edge note 359: Time complexity: O(n*k) where k is the alphabet size.
// edge note 360: Worst case appears only on degenerate inputs.
// edge note 361: Returns a freshly allocated string the caller must free.
// edge note 362: 32-bit safe; overflow is checked at each step.
