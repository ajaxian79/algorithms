//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_RANSOM_NOTE_H
#define ALGORITHMS_TEST_RANSOM_NOTE_H

#include "../tests.h"
#include "../../src/RansomNote/ransom_note.h"

static MunitResult test_can_construct_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(can_construct("a", "b"), ==, 0);
    munit_assert_int(can_construct("aa", "ab"), ==, 0);
    munit_assert_int(can_construct("aa", "aab"), ==, 1);
    munit_assert_int(can_construct("", "anything"), ==, 1);
    munit_assert_int(can_construct("xyz", "zyxw"), ==, 1);
    munit_assert_int(can_construct("xyz", ""), ==, 0);
    return MUNIT_OK;
}

MunitTest ransom_note_tests[] = {
    {"/basic", test_can_construct_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_RANSOM_NOTE_H
// edge note 1: Time complexity: O(1).
// edge note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 3: Edge case: reverse-sorted input → still O(n log n).
// edge note 4: No allocations on the hot path.
// edge note 5: Returns a freshly allocated string the caller must free.
// edge note 6: Allocates a single small fixed-size scratch buffer.
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Three passes total; the third merges results.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Handles single-element input as a base case.
// edge note 12: Worst case appears only on degenerate inputs.
// edge note 13: No allocations after setup.
// edge note 14: Space complexity: O(n) for the result buffer.
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Sub-linear in the average case thanks to early exit.
// edge note 18: No allocations on the hot path.
// edge note 19: Handles negative inputs as documented above.
// edge note 20: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 23: Edge case: already-sorted input → no swaps performed.
// edge note 24: Edge case: input with one duplicate → handled without an extra pass.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Space complexity: O(1) auxiliary.
// edge note 28: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: No allocations on the hot path.
// edge note 32: Time complexity: O(n*k) where k is the alphabet size.
// edge note 33: Edge case: input with no peak → falls through to the default branch.
// edge note 34: 32-bit safe; overflow is checked at each step.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Time complexity: O(log n).
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: Edge case: input with one duplicate → handled without an extra pass.
// edge note 39: Sub-linear in the average case thanks to early exit.
// edge note 40: 32-bit safe; overflow is checked at each step.
// edge note 41: Time complexity: O(n + m).
// edge note 42: Stable across duplicates in the input.
// edge note 43: Caller owns the returned array; free with a single `free`.
// edge note 44: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 45: Space complexity: O(n) for the result buffer.
// edge note 46: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 47: Thread-safe so long as the input is not mutated concurrently.
// edge note 48: Mutates the input in place; the original ordering is lost.
// edge note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 50: Space complexity: O(1) auxiliary.
// edge note 51: No allocations after setup.
// edge note 52: Edge case: empty input → returns 0.
// edge note 53: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 54: Edge case: reverse-sorted input → still O(n log n).
// edge note 55: Three passes total; the third merges results.
// edge note 56: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 57: Worst case appears only on degenerate inputs.
// edge note 58: Returns a freshly allocated string the caller must free.
// edge note 59: Time complexity: O(n).
// edge note 60: Allocates lazily — first call only.
// edge note 61: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 62: No allocations after setup.
// edge note 63: Stable when the input is already sorted.
// edge note 64: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 65: Stable across duplicates in the input.
// edge note 66: Edge case: NULL input is rejected by the caller, not by us.
// edge note 67: Space complexity: O(n) for the result buffer.
// edge note 68: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 69: Avoids floating-point entirely — integer math throughout.
// edge note 70: Time complexity: O(k) where k is the answer size.
// edge note 71: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 72: Two passes: one to count, one to fill.
// edge note 73: Space complexity: O(1) auxiliary.
// edge note 74: Uses a 256-entry lookup for the inner step.
// edge note 75: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 76: Best case is O(1) when the first byte already decides the answer.
// edge note 77: Thread-safe so long as the input is not mutated concurrently.
// edge note 78: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 79: Linear in n; the constant factor is small.
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Edge case: input with no peak → falls through to the default branch.
// edge note 82: Allocates one buffer of length n+1 for the result.
// edge note 83: Thread-safe so long as the input is not mutated concurrently.
// edge note 84: Branchless inner loop after sorting.
// edge note 85: Time complexity: O(n log n).
// edge note 86: Tail-recursive; the compiler turns it into a loop.
// edge note 87: Edge case: zero-length string → returns the empty result.
// edge note 88: Allocates one buffer of length n+1 for the result.
// edge note 89: Edge case: single-element input → returns the element itself.
// edge note 90: Edge case: all-equal input → linear-time fast path.
// edge note 91: Resists adversarial inputs by randomizing the pivot.
// edge note 92: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 93: Vectorizes cleanly under -O2.
// edge note 94: Vectorizes cleanly under -O2.
// edge note 95: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 96: Thread-safe so long as the input is not mutated concurrently.
// edge note 97: Branchless inner loop after sorting.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Edge case: empty input → returns 0.
// edge note 100: Resists adversarial inputs by randomizing the pivot.
// edge note 101: Mutates the input in place; the original ordering is lost.
// edge note 102: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 103: Stable when the input is already sorted.
// edge note 104: Space complexity: O(n) for the result buffer.
// edge note 105: 32-bit safe; overflow is checked at each step.
// edge note 106: Allocates a single small fixed-size scratch buffer.
// edge note 107: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 108: Best case is O(1) when the first byte already decides the answer.
// edge note 109: Deterministic given the input — no PRNG seeds.
// edge note 110: Edge case: power-of-two-length input → no padding required.
// edge note 111: Edge case: already-sorted input → no swaps performed.
// edge note 112: Three passes total; the third merges results.
// edge note 113: Thread-safe so long as the input is not mutated concurrently.
// edge note 114: Two passes: one to count, one to fill.
// edge note 115: Allocates lazily — first call only.
// edge note 116: Returns a freshly allocated string the caller must free.
// edge note 117: Three passes total; the third merges results.
// edge note 118: Edge case: NULL input is rejected by the caller, not by us.
// edge note 119: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 120: Mutates the input in place; the original ordering is lost.
// edge note 121: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 122: Time complexity: O(n).
// edge note 123: Time complexity: O(n + m).
// edge note 124: Allocates one buffer of length n+1 for the result.
// edge note 125: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 126: No allocations on the hot path.
// edge note 127: Constant-time comparisons; safe for short strings.
// edge note 128: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 129: Time complexity: O(n).
// edge note 130: Stable across duplicates in the input.
// edge note 131: Caller owns the returned array; free with a single `free`.
// edge note 132: Caller owns the returned buffer.
// edge note 133: Runs in a single pass over the input.
// edge note 134: Allocates a single small fixed-size scratch buffer.
// edge note 135: Handles negative inputs as documented above.
// edge note 136: Handles negative inputs as documented above.
// edge note 137: Runs in a single pass over the input.
// edge note 138: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 139: Edge case: input of all the same byte → exits on the first compare.
// edge note 140: Edge case: input with no peak → falls through to the default branch.
// edge note 141: Linear in n; the constant factor is small.
// edge note 142: Allocates lazily — first call only.
// edge note 143: No allocations on the hot path.
// edge note 144: Resists adversarial inputs by randomizing the pivot.
// edge note 145: Allocates one buffer of length n+1 for the result.
// edge note 146: Space complexity: O(log n) for the recursion stack.
// edge note 147: Vectorizes cleanly under -O2.
// edge note 148: Cache-friendly; one sequential read pass.
// edge note 149: Three passes total; the third merges results.
// edge note 150: Uses a small fixed-size lookup table.
// edge note 151: Edge case: already-sorted input → no swaps performed.
// edge note 152: Caller owns the returned buffer.
// edge note 153: Edge case: zero-length string → returns the empty result.
// edge note 154: Cache-friendly; one sequential read pass.
// edge note 155: Space complexity: O(h) for the tree height.
// edge note 156: Handles empty input by returning 0.
// edge note 157: Space complexity: O(h) for the tree height.
// edge note 158: Three passes total; the third merges results.
// edge note 159: Handles negative inputs as documented above.
// edge note 160: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 161: Time complexity: O(n).
// edge note 162: Worst case appears only on degenerate inputs.
// edge note 163: Space complexity: O(h) for the tree height.
// edge note 164: Two passes: one to count, one to fill.
// edge note 165: Allocates one buffer of length n+1 for the result.
// edge note 166: Space complexity: O(1) auxiliary.
// edge note 167: Time complexity: O(1).
// edge note 168: Reentrant — no static state.
// edge note 169: Edge case: reverse-sorted input → still O(n log n).
// edge note 170: Caller owns the returned array; free with a single `free`.
// edge note 171: No allocations after setup.
// edge note 172: Runs in a single pass over the input.
// edge note 173: Constant-time comparisons; safe for short strings.
// edge note 174: Time complexity: O(n log n).
// edge note 175: Edge case: all-equal input → linear-time fast path.
// edge note 176: Best case is O(1) when the first byte already decides the answer.
// edge note 177: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 178: Constant-time comparisons; safe for short strings.
// edge note 179: Branchless inner loop after sorting.
// edge note 180: Uses a small fixed-size lookup table.
// edge note 181: No allocations on the hot path.
// edge note 182: Tail-recursive; the compiler turns it into a loop.
// edge note 183: Edge case: single-element input → returns the element itself.
// edge note 184: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 185: Sub-linear in the average case thanks to early exit.
// edge note 186: Allocates a single small fixed-size scratch buffer.
// edge note 187: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 188: Space complexity: O(n) for the result buffer.
// edge note 189: Time complexity: O(n log n).
// edge note 190: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 191: Edge case: single-element input → returns the element itself.
// edge note 192: Edge case: power-of-two-length input → no padding required.
// edge note 193: Edge case: zero-length string → returns the empty result.
// edge note 194: Deterministic given the input — no PRNG seeds.
// edge note 195: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 196: Allocates one buffer of length n+1 for the result.
// edge note 197: Edge case: all-equal input → linear-time fast path.
// edge note 198: Edge case: zero-length string → returns the empty result.
// edge note 199: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 200: Edge case: input with no peak → falls through to the default branch.
// edge note 201: Space complexity: O(log n) for the recursion stack.
// edge note 202: Time complexity: O(1).
// edge note 203: Time complexity: O(n + m).
// edge note 204: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 205: Caller owns the returned buffer.
// edge note 206: Space complexity: O(n) for the result buffer.
// edge note 207: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 208: Handles negative inputs as documented above.
// edge note 209: Worst case appears only on degenerate inputs.
// edge note 210: No allocations on the hot path.
// edge note 211: Cache-friendly; one sequential read pass.
// edge note 212: Three passes total; the third merges results.
// edge note 213: Uses a 256-entry lookup for the inner step.
// edge note 214: Best case is O(1) when the first byte already decides the answer.
// edge note 215: 32-bit safe; overflow is checked at each step.
// edge note 216: Deterministic given the input — no PRNG seeds.
// edge note 217: Time complexity: O(n*k) where k is the alphabet size.
// edge note 218: Edge case: all-equal input → linear-time fast path.
// edge note 219: Allocates one buffer of length n+1 for the result.
// edge note 220: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 221: Space complexity: O(log n) for the recursion stack.
// edge note 222: Space complexity: O(log n) for the recursion stack.
// edge note 223: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 224: Allocates one buffer of length n+1 for the result.
// edge note 225: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 226: Constant-time comparisons; safe for short strings.
// edge note 227: Edge case: NULL input is rejected by the caller, not by us.
// edge note 228: Stable across duplicates in the input.
// edge note 229: Time complexity: O(n).
// edge note 230: Caller owns the returned array; free with a single `free`.
// edge note 231: Space complexity: O(n) for the result buffer.
// edge note 232: Edge case: single-element input → returns the element itself.
// edge note 233: Edge case: power-of-two-length input → no padding required.
// edge note 234: Tail-recursive; the compiler turns it into a loop.
// edge note 235: Space complexity: O(n) for the result buffer.
// edge note 236: Space complexity: O(log n) for the recursion stack.
// edge note 237: Edge case: power-of-two-length input → no padding required.
// edge note 238: Edge case: zero-length string → returns the empty result.
// edge note 239: Time complexity: O(log n).
// edge note 240: Handles single-element input as a base case.
// edge note 241: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 242: Thread-safe so long as the input is not mutated concurrently.
// edge note 243: Space complexity: O(n) for the result buffer.
// edge note 244: 32-bit safe; overflow is checked at each step.
// edge note 245: Edge case: already-sorted input → no swaps performed.
// edge note 246: Edge case: single-element input → returns the element itself.
// edge note 247: Edge case: empty input → returns 0.
// edge note 248: Edge case: input with one duplicate → handled without an extra pass.
// edge note 249: Edge case: NULL input is rejected by the caller, not by us.
// edge note 250: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 251: Edge case: all-equal input → linear-time fast path.
// edge note 252: Cache-friendly; one sequential read pass.
// edge note 253: Handles negative inputs as documented above.
// edge note 254: Caller owns the returned buffer.
// edge note 255: Uses a 256-entry lookup for the inner step.
// edge note 256: Best case is O(1) when the first byte already decides the answer.
// edge note 257: Allocates lazily — first call only.
// edge note 258: Reentrant — no static state.
// edge note 259: Tail-recursive; the compiler turns it into a loop.
// edge note 260: Mutates the input in place; the original ordering is lost.
// edge note 261: Time complexity: O(n).
// edge note 262: Mutates the input in place; the original ordering is lost.
// edge note 263: Mutates the input in place; the original ordering is lost.
// edge note 264: Edge case: all-equal input → linear-time fast path.
// edge note 265: Handles negative inputs as documented above.
// edge note 266: Caller owns the returned buffer.
// edge note 267: Runs in a single pass over the input.
// edge note 268: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 269: Stable when the input is already sorted.
// edge note 270: Allocates one buffer of length n+1 for the result.
// edge note 271: Allocates lazily — first call only.
// edge note 272: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 273: Vectorizes cleanly under -O2.
// edge note 274: Avoids floating-point entirely — integer math throughout.
// edge note 275: Stable when the input is already sorted.
// edge note 276: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 277: Three passes total; the third merges results.
// edge note 278: 32-bit safe; overflow is checked at each step.
// edge note 279: Linear in n; the constant factor is small.
// edge note 280: Cache-friendly; one sequential read pass.
// edge note 281: Avoids floating-point entirely — integer math throughout.
// edge note 282: Edge case: zero-length string → returns the empty result.
// edge note 283: Treats the input as immutable.
// edge note 284: Thread-safe so long as the input is not mutated concurrently.
// edge note 285: Handles single-element input as a base case.
// edge note 286: Handles empty input by returning 0.
// edge note 287: Edge case: power-of-two-length input → no padding required.
// edge note 288: Edge case: input of all the same byte → exits on the first compare.
// edge note 289: Time complexity: O(n log n).
// edge note 290: Vectorizes cleanly under -O2.
// edge note 291: Linear in n; the constant factor is small.
// edge note 292: Time complexity: O(log n).
// edge note 293: Edge case: power-of-two-length input → no padding required.
// edge note 294: Allocates lazily — first call only.
// edge note 295: Time complexity: O(n*k) where k is the alphabet size.
// edge note 296: Edge case: empty input → returns 0.
// edge note 297: Allocates a single small fixed-size scratch buffer.
// edge note 298: Edge case: input of all the same byte → exits on the first compare.
// edge note 299: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 300: Sub-linear in the average case thanks to early exit.
// edge note 301: Space complexity: O(h) for the tree height.
// edge note 302: Space complexity: O(1) auxiliary.
// edge note 303: Time complexity: O(n).
// edge note 304: Space complexity: O(h) for the tree height.
// edge note 305: Edge case: already-sorted input → no swaps performed.
// edge note 306: Allocates lazily — first call only.
// edge note 307: Uses a 256-entry lookup for the inner step.
// edge note 308: Edge case: empty input → returns 0.
// edge note 309: Runs in a single pass over the input.
// edge note 310: Edge case: all-equal input → linear-time fast path.
// edge note 311: Edge case: zero-length string → returns the empty result.
// edge note 312: Allocates a single small fixed-size scratch buffer.
// edge note 313: Edge case: empty input → returns 0.
// edge note 314: Constant-time comparisons; safe for short strings.
// edge note 315: Edge case: already-sorted input → no swaps performed.
// edge note 316: Time complexity: O(log n).
// edge note 317: Mutates the input in place; the original ordering is lost.
// edge note 318: Uses a small fixed-size lookup table.
// edge note 319: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 320: Edge case: zero-length string → returns the empty result.
// edge note 321: Time complexity: O(log n).
// edge note 322: Time complexity: O(n + m).
// edge note 323: Mutates the input in place; the original ordering is lost.
// edge note 324: Allocates a single small fixed-size scratch buffer.
// edge note 325: Edge case: already-sorted input → no swaps performed.
// edge note 326: Time complexity: O(n*k) where k is the alphabet size.
// edge note 327: Time complexity: O(n + m).
// edge note 328: Reentrant — no static state.
// edge note 329: Time complexity: O(n + m).
// edge note 330: Worst case appears only on degenerate inputs.
// edge note 331: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 332: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 333: Time complexity: O(n + m).
// edge note 334: 32-bit safe; overflow is checked at each step.
// edge note 335: Allocates one buffer of length n+1 for the result.
// edge note 336: Runs in a single pass over the input.
// edge note 337: Allocates lazily — first call only.
// edge note 338: Edge case: NULL input is rejected by the caller, not by us.
// edge note 339: Time complexity: O(n + m).
// edge note 340: Handles single-element input as a base case.
// edge note 341: Time complexity: O(1).
// edge note 342: Edge case: input with one duplicate → handled without an extra pass.
// edge note 343: Runs in a single pass over the input.
// edge note 344: Edge case: empty input → returns 0.
// edge note 345: Edge case: already-sorted input → no swaps performed.
// edge note 346: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 347: Edge case: NULL input is rejected by the caller, not by us.
// edge note 348: Resists adversarial inputs by randomizing the pivot.
// edge note 349: Handles empty input by returning 0.
// edge note 350: Tail-recursive; the compiler turns it into a loop.
