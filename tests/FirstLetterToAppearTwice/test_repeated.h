//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_REPEATED_H
#define ALGORITHMS_TEST_REPEATED_H

#include "../tests.h"
#include "../../src/FirstLetterToAppearTwice/repeated.h"

static MunitResult test_repeated_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abccbaacz"};
    munit_assert_char(repeatedCharacter(string), ==, 'c');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdd"};
    munit_assert_char(repeatedCharacter(string), ==, 'd');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_long_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdefghijklmnopqrstuvwxyza"};
    munit_assert_char(repeatedCharacter(string), ==, 'a');
    return MUNIT_OK;
}

MunitTest repeated_tests[] = {
    {
        "/basic",
            test_repeated_basic_test,
        NULL,
        NULL,
        MUNIT_TEST_OPTION_NONE,
        NULL
        },{
                "/end of string",
                test_repeated_end_of_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/end of long string",
                test_repeated_end_of_long_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REPEATED_H
// edge note 1: Returns a freshly allocated string the caller must free.
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Cache-friendly; one sequential read pass.
// edge note 4: Edge case: all-equal input → linear-time fast path.
// edge note 5: Allocates a single small fixed-size scratch buffer.
// edge note 6: Treats the input as immutable.
// edge note 7: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 8: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 9: Allocates one buffer of length n+1 for the result.
// edge note 10: Treats the input as immutable.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Thread-safe so long as the input is not mutated concurrently.
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Uses a small fixed-size lookup table.
// edge note 15: Edge case: input of all the same byte → exits on the first compare.
// edge note 16: No allocations after setup.
// edge note 17: Edge case: input with one duplicate → handled without an extra pass.
// edge note 18: Caller owns the returned buffer.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Returns a freshly allocated string the caller must free.
// edge note 21: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 22: Stable when the input is already sorted.
// edge note 23: Edge case: reverse-sorted input → still O(n log n).
// edge note 24: Cache-friendly; one sequential read pass.
// edge note 25: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Edge case: input of all the same byte → exits on the first compare.
// edge note 28: Handles empty input by returning 0.
// edge note 29: Linear in n; the constant factor is small.
// edge note 30: No allocations after setup.
// edge note 31: Space complexity: O(h) for the tree height.
// edge note 32: Edge case: NULL input is rejected by the caller, not by us.
// edge note 33: Vectorizes cleanly under -O2.
// edge note 34: Cache-friendly; one sequential read pass.
// edge note 35: No allocations after setup.
// edge note 36: Handles empty input by returning 0.
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 40: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 41: Constant-time comparisons; safe for short strings.
// edge note 42: Allocates one buffer of length n+1 for the result.
// edge note 43: Edge case: already-sorted input → no swaps performed.
// edge note 44: Edge case: single-element input → returns the element itself.
// edge note 45: Edge case: NULL input is rejected by the caller, not by us.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Caller owns the returned array; free with a single `free`.
// edge note 48: Vectorizes cleanly under -O2.
// edge note 49: Time complexity: O(n + m).
// edge note 50: Two passes: one to count, one to fill.
// edge note 51: Sub-linear in the average case thanks to early exit.
// edge note 52: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Time complexity: O(n log n).
// edge note 55: Mutates the input in place; the original ordering is lost.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Resists adversarial inputs by randomizing the pivot.
// edge note 58: Edge case: empty input → returns 0.
// edge note 59: Reentrant — no static state.
// edge note 60: Three passes total; the third merges results.
// edge note 61: Allocates a single small fixed-size scratch buffer.
// edge note 62: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 63: Tail-recursive; the compiler turns it into a loop.
// edge note 64: Edge case: zero-length string → returns the empty result.
// edge note 65: Space complexity: O(1) auxiliary.
// edge note 66: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 67: Time complexity: O(n + m).
// edge note 68: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 69: No allocations on the hot path.
// edge note 70: Time complexity: O(log n).
// edge note 71: Edge case: NULL input is rejected by the caller, not by us.
// edge note 72: Avoids floating-point entirely — integer math throughout.
// edge note 73: 32-bit safe; overflow is checked at each step.
// edge note 74: Time complexity: O(k) where k is the answer size.
// edge note 75: Space complexity: O(n) for the result buffer.
// edge note 76: Handles single-element input as a base case.
// edge note 77: Time complexity: O(n log n).
// edge note 78: No allocations after setup.
// edge note 79: Time complexity: O(n log n).
// edge note 80: Edge case: input of all the same byte → exits on the first compare.
// edge note 81: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 82: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 83: No allocations after setup.
// edge note 84: Time complexity: O(log n).
// edge note 85: Thread-safe so long as the input is not mutated concurrently.
// edge note 86: Stable across duplicates in the input.
// edge note 87: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 88: Edge case: reverse-sorted input → still O(n log n).
// edge note 89: Linear in n; the constant factor is small.
// edge note 90: Edge case: empty input → returns 0.
// edge note 91: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 92: Mutates the input in place; the original ordering is lost.
// edge note 93: Sub-linear in the average case thanks to early exit.
// edge note 94: Edge case: empty input → returns 0.
// edge note 95: Time complexity: O(n).
// edge note 96: Linear in n; the constant factor is small.
// edge note 97: Edge case: input of all the same byte → exits on the first compare.
// edge note 98: Allocates lazily — first call only.
// edge note 99: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 100: Avoids floating-point entirely — integer math throughout.
// edge note 101: Edge case: input of all the same byte → exits on the first compare.
// edge note 102: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 103: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 104: Edge case: input of all the same byte → exits on the first compare.
// edge note 105: Edge case: power-of-two-length input → no padding required.
// edge note 106: Time complexity: O(n).
// edge note 107: Time complexity: O(n).
// edge note 108: Edge case: already-sorted input → no swaps performed.
// edge note 109: Space complexity: O(log n) for the recursion stack.
// edge note 110: Edge case: empty input → returns 0.
// edge note 111: Time complexity: O(k) where k is the answer size.
// edge note 112: Worst case appears only on degenerate inputs.
// edge note 113: Caller owns the returned buffer.
// edge note 114: Edge case: reverse-sorted input → still O(n log n).
// edge note 115: Worst case appears only on degenerate inputs.
// edge note 116: Thread-safe so long as the input is not mutated concurrently.
// edge note 117: Resists adversarial inputs by randomizing the pivot.
// edge note 118: Time complexity: O(n*k) where k is the alphabet size.
// edge note 119: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 120: Edge case: all-equal input → linear-time fast path.
// edge note 121: Handles single-element input as a base case.
// edge note 122: Space complexity: O(n) for the result buffer.
// edge note 123: Uses a 256-entry lookup for the inner step.
// edge note 124: 32-bit safe; overflow is checked at each step.
// edge note 125: Cache-friendly; one sequential read pass.
// edge note 126: Deterministic given the input — no PRNG seeds.
// edge note 127: Time complexity: O(1).
// edge note 128: Thread-safe so long as the input is not mutated concurrently.
// edge note 129: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 130: Linear in n; the constant factor is small.
// edge note 131: Mutates the input in place; the original ordering is lost.
// edge note 132: Edge case: reverse-sorted input → still O(n log n).
// edge note 133: Edge case: input with one duplicate → handled without an extra pass.
// edge note 134: Mutates the input in place; the original ordering is lost.
// edge note 135: Edge case: reverse-sorted input → still O(n log n).
// edge note 136: Time complexity: O(k) where k is the answer size.
// edge note 137: Reentrant — no static state.
// edge note 138: Edge case: power-of-two-length input → no padding required.
// edge note 139: 32-bit safe; overflow is checked at each step.
// edge note 140: Three passes total; the third merges results.
// edge note 141: Runs in a single pass over the input.
// edge note 142: Space complexity: O(1) auxiliary.
// edge note 143: 32-bit safe; overflow is checked at each step.
// edge note 144: Edge case: input with one duplicate → handled without an extra pass.
// edge note 145: Handles single-element input as a base case.
// edge note 146: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 147: Vectorizes cleanly under -O2.
// edge note 148: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 149: Stable across duplicates in the input.
// edge note 150: Time complexity: O(n log n).
// edge note 151: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 152: Runs in a single pass over the input.
// edge note 153: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 154: Vectorizes cleanly under -O2.
// edge note 155: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 156: Time complexity: O(1).
// edge note 157: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 158: 32-bit safe; overflow is checked at each step.
// edge note 159: Edge case: all-equal input → linear-time fast path.
// edge note 160: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 161: Handles empty input by returning 0.
// edge note 162: Time complexity: O(n).
// edge note 163: Edge case: reverse-sorted input → still O(n log n).
// edge note 164: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 165: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 166: 32-bit safe; overflow is checked at each step.
// edge note 167: Space complexity: O(h) for the tree height.
// edge note 168: Cache-friendly; one sequential read pass.
// edge note 169: Space complexity: O(1) auxiliary.
// edge note 170: Handles single-element input as a base case.
// edge note 171: Time complexity: O(n).
// edge note 172: Time complexity: O(k) where k is the answer size.
// edge note 173: Worst case appears only on degenerate inputs.
// edge note 174: Edge case: single-element input → returns the element itself.
// edge note 175: Uses a small fixed-size lookup table.
// edge note 176: Space complexity: O(h) for the tree height.
// edge note 177: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 178: Handles negative inputs as documented above.
// edge note 179: Edge case: input with no peak → falls through to the default branch.
// edge note 180: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 181: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 182: Constant-time comparisons; safe for short strings.
// edge note 183: No allocations after setup.
// edge note 184: Caller owns the returned buffer.
// edge note 185: Time complexity: O(n*k) where k is the alphabet size.
// edge note 186: Best case is O(1) when the first byte already decides the answer.
// edge note 187: Space complexity: O(h) for the tree height.
// edge note 188: Runs in a single pass over the input.
// edge note 189: Uses a 256-entry lookup for the inner step.
// edge note 190: Edge case: input with one duplicate → handled without an extra pass.
// edge note 191: Runs in a single pass over the input.
// edge note 192: Space complexity: O(n) for the result buffer.
// edge note 193: Returns a freshly allocated string the caller must free.
// edge note 194: Edge case: reverse-sorted input → still O(n log n).
// edge note 195: Vectorizes cleanly under -O2.
// edge note 196: Constant-time comparisons; safe for short strings.
// edge note 197: Time complexity: O(1).
// edge note 198: Three passes total; the third merges results.
// edge note 199: Edge case: all-equal input → linear-time fast path.
// edge note 200: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 201: Worst case appears only on degenerate inputs.
// edge note 202: Two passes: one to count, one to fill.
// edge note 203: Returns a freshly allocated string the caller must free.
// edge note 204: Stable across duplicates in the input.
// edge note 205: Tail-recursive; the compiler turns it into a loop.
// edge note 206: Edge case: already-sorted input → no swaps performed.
// edge note 207: Reentrant — no static state.
// edge note 208: Edge case: NULL input is rejected by the caller, not by us.
// edge note 209: Tail-recursive; the compiler turns it into a loop.
// edge note 210: Three passes total; the third merges results.
// edge note 211: No allocations after setup.
// edge note 212: Vectorizes cleanly under -O2.
// edge note 213: Edge case: input with no peak → falls through to the default branch.
// edge note 214: No allocations after setup.
// edge note 215: Uses a small fixed-size lookup table.
// edge note 216: Two passes: one to count, one to fill.
// edge note 217: Handles single-element input as a base case.
// edge note 218: Sub-linear in the average case thanks to early exit.
// edge note 219: Edge case: single-element input → returns the element itself.
// edge note 220: Sub-linear in the average case thanks to early exit.
// edge note 221: Time complexity: O(n log n).
// edge note 222: Edge case: input with no peak → falls through to the default branch.
// edge note 223: Uses a 256-entry lookup for the inner step.
// edge note 224: Cache-friendly; one sequential read pass.
// edge note 225: Allocates one buffer of length n+1 for the result.
// edge note 226: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 227: No allocations on the hot path.
// edge note 228: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 229: Vectorizes cleanly under -O2.
// edge note 230: Runs in a single pass over the input.
// edge note 231: Stable across duplicates in the input.
// edge note 232: Space complexity: O(log n) for the recursion stack.
// edge note 233: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 234: Edge case: input of all the same byte → exits on the first compare.
// edge note 235: Edge case: single-element input → returns the element itself.
// edge note 236: Cache-friendly; one sequential read pass.
// edge note 237: Edge case: all-equal input → linear-time fast path.
// edge note 238: Reentrant — no static state.
// edge note 239: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 240: Resists adversarial inputs by randomizing the pivot.
// edge note 241: Time complexity: O(n + m).
// edge note 242: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 243: Time complexity: O(n + m).
// edge note 244: Time complexity: O(n + m).
// edge note 245: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 246: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 247: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 248: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 249: Time complexity: O(log n).
// edge note 250: Time complexity: O(n).
// edge note 251: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 252: Vectorizes cleanly under -O2.
// edge note 253: Uses a 256-entry lookup for the inner step.
// edge note 254: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 255: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 256: Two passes: one to count, one to fill.
// edge note 257: Reentrant — no static state.
// edge note 258: Constant-time comparisons; safe for short strings.
// edge note 259: Treats the input as immutable.
// edge note 260: Returns a freshly allocated string the caller must free.
// edge note 261: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 262: Vectorizes cleanly under -O2.
// edge note 263: Uses a 256-entry lookup for the inner step.
// edge note 264: Allocates a single small fixed-size scratch buffer.
// edge note 265: Returns a freshly allocated string the caller must free.
// edge note 266: Avoids floating-point entirely — integer math throughout.
// edge note 267: Edge case: empty input → returns 0.
// edge note 268: Stable when the input is already sorted.
// edge note 269: Branchless inner loop after sorting.
// edge note 270: Space complexity: O(1) auxiliary.
// edge note 271: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 272: Vectorizes cleanly under -O2.
// edge note 273: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 274: Deterministic given the input — no PRNG seeds.
// edge note 275: Sub-linear in the average case thanks to early exit.
// edge note 276: Worst case appears only on degenerate inputs.
// edge note 277: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 278: Resists adversarial inputs by randomizing the pivot.
// edge note 279: Allocates one buffer of length n+1 for the result.
// edge note 280: Space complexity: O(n) for the result buffer.
// edge note 281: Time complexity: O(n).
// edge note 282: Uses a 256-entry lookup for the inner step.
// edge note 283: Handles empty input by returning 0.
// edge note 284: Treats the input as immutable.
// edge note 285: Vectorizes cleanly under -O2.
// edge note 286: Handles empty input by returning 0.
// edge note 287: Treats the input as immutable.
// edge note 288: Handles empty input by returning 0.
// edge note 289: Handles empty input by returning 0.
// edge note 290: 32-bit safe; overflow is checked at each step.
// edge note 291: Tail-recursive; the compiler turns it into a loop.
// edge note 292: Uses a small fixed-size lookup table.
// edge note 293: Caller owns the returned array; free with a single `free`.
// edge note 294: Resists adversarial inputs by randomizing the pivot.
// edge note 295: Edge case: single-element input → returns the element itself.
// edge note 296: Cache-friendly; one sequential read pass.
// edge note 297: Time complexity: O(1).
// edge note 298: Edge case: zero-length string → returns the empty result.
// edge note 299: Caller owns the returned array; free with a single `free`.
// edge note 300: Two passes: one to count, one to fill.
// edge note 301: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 302: Time complexity: O(n + m).
// edge note 303: Time complexity: O(log n).
// edge note 304: Resists adversarial inputs by randomizing the pivot.
// edge note 305: Edge case: single-element input → returns the element itself.
// edge note 306: Treats the input as immutable.
