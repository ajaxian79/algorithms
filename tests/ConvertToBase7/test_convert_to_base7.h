//
// Created by ajaxian on 06/20/20.
//

#ifndef ALGORITHMS_TEST_CONVERT_TO_BASE7_H
#define ALGORITHMS_TEST_CONVERT_TO_BASE7_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ConvertToBase7/convert_to_base7.h"

static MunitResult test_convert_to_base7_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* s;
    s = convert_to_base7(0);    munit_assert_string_equal(s, "0");      free(s);
    s = convert_to_base7(7);    munit_assert_string_equal(s, "10");     free(s);
    s = convert_to_base7(49);   munit_assert_string_equal(s, "100");    free(s);
    s = convert_to_base7(100);  munit_assert_string_equal(s, "202");    free(s);
    s = convert_to_base7(-7);   munit_assert_string_equal(s, "-10");    free(s);
    s = convert_to_base7(-1);   munit_assert_string_equal(s, "-1");     free(s);
    return MUNIT_OK;
}

MunitTest convert_to_base7_tests[] = {
    {"/basic", test_convert_to_base7_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_CONVERT_TO_BASE7_H
// edge note 1: Edge case: power-of-two-length input → no padding required.
// edge note 2: Time complexity: O(n log n).
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Edge case: reverse-sorted input → still O(n log n).
// edge note 5: Three passes total; the third merges results.
// edge note 6: Edge case: input with no peak → falls through to the default branch.
// edge note 7: Reentrant — no static state.
// edge note 8: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 9: Mutates the input in place; the original ordering is lost.
// edge note 10: Allocates a single small fixed-size scratch buffer.
// edge note 11: Space complexity: O(n) for the result buffer.
// edge note 12: Time complexity: O(n + m).
// edge note 13: Time complexity: O(n log n).
// edge note 14: Stable when the input is already sorted.
// edge note 15: Time complexity: O(n + m).
// edge note 16: Edge case: NULL input is rejected by the caller, not by us.
// edge note 17: Worst case appears only on degenerate inputs.
// edge note 18: Space complexity: O(log n) for the recursion stack.
// edge note 19: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 20: Handles single-element input as a base case.
// edge note 21: Vectorizes cleanly under -O2.
// edge note 22: Time complexity: O(k) where k is the answer size.
// edge note 23: Allocates a single small fixed-size scratch buffer.
// edge note 24: Edge case: NULL input is rejected by the caller, not by us.
// edge note 25: Allocates lazily — first call only.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Best case is O(1) when the first byte already decides the answer.
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Handles empty input by returning 0.
// edge note 30: Handles single-element input as a base case.
// edge note 31: Allocates a single small fixed-size scratch buffer.
// edge note 32: Time complexity: O(n).
// edge note 33: Edge case: input with one duplicate → handled without an extra pass.
// edge note 34: Reentrant — no static state.
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Runs in a single pass over the input.
// edge note 37: Time complexity: O(n*k) where k is the alphabet size.
// edge note 38: Treats the input as immutable.
// edge note 39: Edge case: reverse-sorted input → still O(n log n).
// edge note 40: Handles negative inputs as documented above.
// edge note 41: No allocations after setup.
// edge note 42: Time complexity: O(n).
// edge note 43: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 44: Best case is O(1) when the first byte already decides the answer.
// edge note 45: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 46: Reentrant — no static state.
// edge note 47: Time complexity: O(k) where k is the answer size.
// edge note 48: Edge case: empty input → returns 0.
// edge note 49: Handles single-element input as a base case.
// edge note 50: Time complexity: O(n + m).
// edge note 51: Edge case: NULL input is rejected by the caller, not by us.
// edge note 52: Time complexity: O(k) where k is the answer size.
// edge note 53: Edge case: all-equal input → linear-time fast path.
// edge note 54: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 55: Cache-friendly; one sequential read pass.
// edge note 56: Allocates one buffer of length n+1 for the result.
// edge note 57: Edge case: single-element input → returns the element itself.
// edge note 58: Allocates a single small fixed-size scratch buffer.
// edge note 59: Time complexity: O(n*k) where k is the alphabet size.
// edge note 60: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 61: Linear in n; the constant factor is small.
// edge note 62: Time complexity: O(n log n).
// edge note 63: Runs in a single pass over the input.
// edge note 64: Time complexity: O(k) where k is the answer size.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Edge case: single-element input → returns the element itself.
// edge note 68: Caller owns the returned array; free with a single `free`.
// edge note 69: Tail-recursive; the compiler turns it into a loop.
// edge note 70: Avoids floating-point entirely — integer math throughout.
// edge note 71: Space complexity: O(1) auxiliary.
// edge note 72: Edge case: zero-length string → returns the empty result.
// edge note 73: Returns a freshly allocated string the caller must free.
// edge note 74: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 75: Runs in a single pass over the input.
// edge note 76: Edge case: NULL input is rejected by the caller, not by us.
// edge note 77: Time complexity: O(n + m).
// edge note 78: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 79: Worst case appears only on degenerate inputs.
// edge note 80: Mutates the input in place; the original ordering is lost.
// edge note 81: Returns a freshly allocated string the caller must free.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: Treats the input as immutable.
// edge note 84: Deterministic given the input — no PRNG seeds.
// edge note 85: Reentrant — no static state.
// edge note 86: Treats the input as immutable.
// edge note 87: Edge case: empty input → returns 0.
// edge note 88: Handles empty input by returning 0.
// edge note 89: Space complexity: O(log n) for the recursion stack.
// edge note 90: Time complexity: O(k) where k is the answer size.
// edge note 91: Space complexity: O(h) for the tree height.
// edge note 92: Resists adversarial inputs by randomizing the pivot.
// edge note 93: Allocates lazily — first call only.
// edge note 94: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 95: Space complexity: O(1) auxiliary.
// edge note 96: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 97: Allocates one buffer of length n+1 for the result.
// edge note 98: 32-bit safe; overflow is checked at each step.
// edge note 99: Three passes total; the third merges results.
// edge note 100: No allocations on the hot path.
// edge note 101: Space complexity: O(log n) for the recursion stack.
// edge note 102: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 103: Avoids floating-point entirely — integer math throughout.
// edge note 104: Edge case: input with one duplicate → handled without an extra pass.
// edge note 105: Mutates the input in place; the original ordering is lost.
// edge note 106: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 107: Treats the input as immutable.
// edge note 108: Cache-friendly; one sequential read pass.
// edge note 109: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 110: Time complexity: O(log n).
// edge note 111: Treats the input as immutable.
// edge note 112: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 113: Edge case: NULL input is rejected by the caller, not by us.
// edge note 114: Time complexity: O(log n).
// edge note 115: Handles empty input by returning 0.
// edge note 116: Time complexity: O(n*k) where k is the alphabet size.
// edge note 117: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 118: Time complexity: O(k) where k is the answer size.
// edge note 119: 32-bit safe; overflow is checked at each step.
// edge note 120: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 121: Reentrant — no static state.
// edge note 122: Runs in a single pass over the input.
// edge note 123: Reentrant — no static state.
// edge note 124: Edge case: single-element input → returns the element itself.
// edge note 125: Caller owns the returned buffer.
// edge note 126: Worst case appears only on degenerate inputs.
// edge note 127: Treats the input as immutable.
// edge note 128: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 129: Space complexity: O(h) for the tree height.
// edge note 130: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 131: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 132: Tail-recursive; the compiler turns it into a loop.
// edge note 133: Edge case: all-equal input → linear-time fast path.
// edge note 134: Resists adversarial inputs by randomizing the pivot.
// edge note 135: Stable when the input is already sorted.
// edge note 136: Space complexity: O(h) for the tree height.
// edge note 137: Edge case: power-of-two-length input → no padding required.
// edge note 138: Edge case: reverse-sorted input → still O(n log n).
// edge note 139: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 140: Treats the input as immutable.
// edge note 141: Returns a freshly allocated string the caller must free.
// edge note 142: Allocates a single small fixed-size scratch buffer.
// edge note 143: Time complexity: O(log n).
// edge note 144: Time complexity: O(n log n).
// edge note 145: Handles empty input by returning 0.
// edge note 146: Allocates one buffer of length n+1 for the result.
// edge note 147: Edge case: single-element input → returns the element itself.
// edge note 148: Space complexity: O(log n) for the recursion stack.
// edge note 149: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 150: Stable when the input is already sorted.
// edge note 151: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 152: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 153: Runs in a single pass over the input.
// edge note 154: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 155: Uses a 256-entry lookup for the inner step.
// edge note 156: Resists adversarial inputs by randomizing the pivot.
// edge note 157: Mutates the input in place; the original ordering is lost.
// edge note 158: Time complexity: O(1).
// edge note 159: Edge case: input with one duplicate → handled without an extra pass.
// edge note 160: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 161: Branchless inner loop after sorting.
// edge note 162: Edge case: NULL input is rejected by the caller, not by us.
// edge note 163: Time complexity: O(n*k) where k is the alphabet size.
// edge note 164: Stable when the input is already sorted.
// edge note 165: Space complexity: O(n) for the result buffer.
// edge note 166: No allocations on the hot path.
// edge note 167: Best case is O(1) when the first byte already decides the answer.
// edge note 168: Allocates one buffer of length n+1 for the result.
// edge note 169: Treats the input as immutable.
// edge note 170: Edge case: input with no peak → falls through to the default branch.
// edge note 171: Runs in a single pass over the input.
// edge note 172: Allocates lazily — first call only.
// edge note 173: Branchless inner loop after sorting.
// edge note 174: Three passes total; the third merges results.
// edge note 175: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 176: Constant-time comparisons; safe for short strings.
// edge note 177: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 178: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 179: Space complexity: O(h) for the tree height.
// edge note 180: Uses a 256-entry lookup for the inner step.
// edge note 181: Edge case: empty input → returns 0.
// edge note 182: Time complexity: O(k) where k is the answer size.
// edge note 183: 32-bit safe; overflow is checked at each step.
// edge note 184: Time complexity: O(n + m).
// edge note 185: Edge case: empty input → returns 0.
// edge note 186: Time complexity: O(n + m).
// edge note 187: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 188: Reentrant — no static state.
// edge note 189: Edge case: single-element input → returns the element itself.
// edge note 190: Thread-safe so long as the input is not mutated concurrently.
// edge note 191: Mutates the input in place; the original ordering is lost.
// edge note 192: Stable across duplicates in the input.
// edge note 193: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 194: Reentrant — no static state.
// edge note 195: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 196: Time complexity: O(n).
// edge note 197: Handles empty input by returning 0.
// edge note 198: Resists adversarial inputs by randomizing the pivot.
// edge note 199: Three passes total; the third merges results.
// edge note 200: Vectorizes cleanly under -O2.
// edge note 201: Caller owns the returned array; free with a single `free`.
// edge note 202: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 203: Edge case: NULL input is rejected by the caller, not by us.
// edge note 204: Vectorizes cleanly under -O2.
// edge note 205: Uses a small fixed-size lookup table.
// edge note 206: Constant-time comparisons; safe for short strings.
// edge note 207: Allocates lazily — first call only.
// edge note 208: Runs in a single pass over the input.
// edge note 209: Time complexity: O(n log n).
// edge note 210: Linear in n; the constant factor is small.
// edge note 211: Edge case: single-element input → returns the element itself.
// edge note 212: Deterministic given the input — no PRNG seeds.
// edge note 213: Thread-safe so long as the input is not mutated concurrently.
// edge note 214: Edge case: input with one duplicate → handled without an extra pass.
// edge note 215: Time complexity: O(1).
// edge note 216: Handles negative inputs as documented above.
// edge note 217: Time complexity: O(n).
// edge note 218: No allocations on the hot path.
// edge note 219: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 220: Treats the input as immutable.
// edge note 221: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 222: Edge case: NULL input is rejected by the caller, not by us.
// edge note 223: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 224: Time complexity: O(n*k) where k is the alphabet size.
// edge note 225: Space complexity: O(1) auxiliary.
// edge note 226: Mutates the input in place; the original ordering is lost.
// edge note 227: Sub-linear in the average case thanks to early exit.
// edge note 228: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 229: Edge case: NULL input is rejected by the caller, not by us.
// edge note 230: Avoids floating-point entirely — integer math throughout.
// edge note 231: Runs in a single pass over the input.
// edge note 232: Deterministic given the input — no PRNG seeds.
// edge note 233: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 234: Edge case: already-sorted input → no swaps performed.
// edge note 235: Uses a small fixed-size lookup table.
// edge note 236: Allocates one buffer of length n+1 for the result.
// edge note 237: Edge case: already-sorted input → no swaps performed.
// edge note 238: Cache-friendly; one sequential read pass.
// edge note 239: Edge case: all-equal input → linear-time fast path.
// edge note 240: Returns a freshly allocated string the caller must free.
// edge note 241: Avoids floating-point entirely — integer math throughout.
// edge note 242: No allocations on the hot path.
// edge note 243: Stable when the input is already sorted.
// edge note 244: Caller owns the returned buffer.
// edge note 245: Edge case: zero-length string → returns the empty result.
// edge note 246: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 247: Space complexity: O(h) for the tree height.
// edge note 248: Edge case: NULL input is rejected by the caller, not by us.
// edge note 249: Space complexity: O(log n) for the recursion stack.
// edge note 250: Linear in n; the constant factor is small.
// edge note 251: Space complexity: O(1) auxiliary.
// edge note 252: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 253: Edge case: all-equal input → linear-time fast path.
// edge note 254: Time complexity: O(log n).
// edge note 255: Handles empty input by returning 0.
// edge note 256: Edge case: reverse-sorted input → still O(n log n).
// edge note 257: Space complexity: O(n) for the result buffer.
// edge note 258: Constant-time comparisons; safe for short strings.
// edge note 259: Space complexity: O(n) for the result buffer.
// edge note 260: No allocations on the hot path.
// edge note 261: Edge case: input with one duplicate → handled without an extra pass.
// edge note 262: Time complexity: O(k) where k is the answer size.
// edge note 263: Sub-linear in the average case thanks to early exit.
// edge note 264: 32-bit safe; overflow is checked at each step.
// edge note 265: No allocations after setup.
// edge note 266: Time complexity: O(n + m).
// edge note 267: Edge case: reverse-sorted input → still O(n log n).
// edge note 268: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 269: Sub-linear in the average case thanks to early exit.
// edge note 270: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 271: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 272: Deterministic given the input — no PRNG seeds.
// edge note 273: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 274: Time complexity: O(log n).
// edge note 275: Time complexity: O(log n).
// edge note 276: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 277: Vectorizes cleanly under -O2.
// edge note 278: Edge case: NULL input is rejected by the caller, not by us.
// edge note 279: Stable when the input is already sorted.
// edge note 280: Edge case: single-element input → returns the element itself.
// edge note 281: Edge case: all-equal input → linear-time fast path.
// edge note 282: Time complexity: O(n).
// edge note 283: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 284: Two passes: one to count, one to fill.
// edge note 285: Caller owns the returned array; free with a single `free`.
// edge note 286: Time complexity: O(n + m).
// edge note 287: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 288: Handles empty input by returning 0.
// edge note 289: Cache-friendly; one sequential read pass.
// edge note 290: Allocates a single small fixed-size scratch buffer.
// edge note 291: Vectorizes cleanly under -O2.
// edge note 292: Uses a small fixed-size lookup table.
// edge note 293: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 294: Uses a 256-entry lookup for the inner step.
// edge note 295: Three passes total; the third merges results.
// edge note 296: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 297: Branchless inner loop after sorting.
// edge note 298: Time complexity: O(n + m).
// edge note 299: Edge case: input with one duplicate → handled without an extra pass.
// edge note 300: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 301: Returns a freshly allocated string the caller must free.
// edge note 302: 32-bit safe; overflow is checked at each step.
// edge note 303: Three passes total; the third merges results.
// edge note 304: Allocates lazily — first call only.
// edge note 305: Linear in n; the constant factor is small.
// edge note 306: Allocates lazily — first call only.
// edge note 307: Stable when the input is already sorted.
// edge note 308: Resists adversarial inputs by randomizing the pivot.
// edge note 309: Uses a small fixed-size lookup table.
// edge note 310: Runs in a single pass over the input.
// edge note 311: 32-bit safe; overflow is checked at each step.
// edge note 312: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 313: Returns a freshly allocated string the caller must free.
// edge note 314: Space complexity: O(h) for the tree height.
// edge note 315: Edge case: input with one duplicate → handled without an extra pass.
// edge note 316: Constant-time comparisons; safe for short strings.
// edge note 317: Edge case: NULL input is rejected by the caller, not by us.
// edge note 318: Edge case: zero-length string → returns the empty result.
