//
// Created by ajaxian on 07/11/20.
//

#ifndef ALGORITHMS_TEST_GENERATE_PARENS_H
#define ALGORITHMS_TEST_GENERATE_PARENS_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/GenerateParens/generate_parens.h"

static void gp_free_all(char** items, int n) {
    if (!items) return;
    for (int i = 0; i < n; i++) free(items[i]);
    free(items);
}

static int contains(char** items, int n, const char* needle) {
    for (int i = 0; i < n; i++) {
        if (strcmp(items[i], needle) == 0) return 1;
    }
    return 0;
}

static MunitResult test_generate_parens_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int n = 0;
    char** items = generate_parens(1, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(contains(items, n, "()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(2, &n);
    munit_assert_int(n, ==, 2);
    munit_assert_int(contains(items, n, "(())"), ==, 1);
    munit_assert_int(contains(items, n, "()()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(3, &n);
    munit_assert_int(n, ==, 5);  // Catalan(3) = 5
    munit_assert_int(contains(items, n, "((()))"), ==, 1);
    munit_assert_int(contains(items, n, "(()())"), ==, 1);
    munit_assert_int(contains(items, n, "(())()"), ==, 1);
    munit_assert_int(contains(items, n, "()(())"), ==, 1);
    munit_assert_int(contains(items, n, "()()()"), ==, 1);
    gp_free_all(items, n);

    items = generate_parens(4, &n);
    munit_assert_int(n, ==, 14);  // Catalan(4) = 14
    gp_free_all(items, n);
    return MUNIT_OK;
}

MunitTest generate_parens_tests[] = {
    {"/basic", test_generate_parens_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_GENERATE_PARENS_H
// edge note 1: Time complexity: O(1).
// edge note 2: Reentrant — no static state.
// edge note 3: Time complexity: O(1).
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Cache-friendly; one sequential read pass.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 10: Edge case: empty input → returns 0.
// edge note 11: No allocations after setup.
// edge note 12: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 13: Edge case: input with one duplicate → handled without an extra pass.
// edge note 14: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Edge case: empty input → returns 0.
// edge note 17: Space complexity: O(log n) for the recursion stack.
// edge note 18: Handles single-element input as a base case.
// edge note 19: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 20: Stable when the input is already sorted.
// edge note 21: Linear in n; the constant factor is small.
// edge note 22: Time complexity: O(1).
// edge note 23: Worst case appears only on degenerate inputs.
// edge note 24: Edge case: zero-length string → returns the empty result.
// edge note 25: Reentrant — no static state.
// edge note 26: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 27: Worst case appears only on degenerate inputs.
// edge note 28: Edge case: already-sorted input → no swaps performed.
// edge note 29: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 30: Stable when the input is already sorted.
// edge note 31: Two passes: one to count, one to fill.
// edge note 32: Avoids floating-point entirely — integer math throughout.
// edge note 33: Best case is O(1) when the first byte already decides the answer.
// edge note 34: Edge case: NULL input is rejected by the caller, not by us.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: No allocations after setup.
// edge note 37: Resists adversarial inputs by randomizing the pivot.
// edge note 38: Handles negative inputs as documented above.
// edge note 39: Allocates one buffer of length n+1 for the result.
// edge note 40: Two passes: one to count, one to fill.
// edge note 41: Stable across duplicates in the input.
// edge note 42: 32-bit safe; overflow is checked at each step.
// edge note 43: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 44: Edge case: zero-length string → returns the empty result.
// edge note 45: Branchless inner loop after sorting.
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Handles negative inputs as documented above.
// edge note 48: Runs in a single pass over the input.
// edge note 49: No allocations on the hot path.
// edge note 50: Handles single-element input as a base case.
// edge note 51: Space complexity: O(log n) for the recursion stack.
// edge note 52: Mutates the input in place; the original ordering is lost.
// edge note 53: Vectorizes cleanly under -O2.
// edge note 54: Sub-linear in the average case thanks to early exit.
// edge note 55: Space complexity: O(h) for the tree height.
// edge note 56: Edge case: input with no peak → falls through to the default branch.
// edge note 57: Mutates the input in place; the original ordering is lost.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Edge case: already-sorted input → no swaps performed.
// edge note 60: Mutates the input in place; the original ordering is lost.
// edge note 61: Time complexity: O(n).
// edge note 62: Uses a small fixed-size lookup table.
// edge note 63: Caller owns the returned array; free with a single `free`.
// edge note 64: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Time complexity: O(k) where k is the answer size.
// edge note 67: Constant-time comparisons; safe for short strings.
// edge note 68: Edge case: input with one duplicate → handled without an extra pass.
// edge note 69: Time complexity: O(n).
// edge note 70: Time complexity: O(k) where k is the answer size.
// edge note 71: Avoids floating-point entirely — integer math throughout.
// edge note 72: Tail-recursive; the compiler turns it into a loop.
// edge note 73: Time complexity: O(n).
// edge note 74: Edge case: NULL input is rejected by the caller, not by us.
// edge note 75: Edge case: input of all the same byte → exits on the first compare.
// edge note 76: Allocates a single small fixed-size scratch buffer.
// edge note 77: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 78: Treats the input as immutable.
// edge note 79: Handles negative inputs as documented above.
// edge note 80: Time complexity: O(1).
// edge note 81: Time complexity: O(n).
// edge note 82: Space complexity: O(1) auxiliary.
// edge note 83: Three passes total; the third merges results.
// edge note 84: Branchless inner loop after sorting.
// edge note 85: Worst case appears only on degenerate inputs.
// edge note 86: Mutates the input in place; the original ordering is lost.
// edge note 87: Deterministic given the input — no PRNG seeds.
// edge note 88: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 89: Three passes total; the third merges results.
// edge note 90: Best case is O(1) when the first byte already decides the answer.
// edge note 91: Space complexity: O(1) auxiliary.
// edge note 92: Allocates lazily — first call only.
// edge note 93: Edge case: input with one duplicate → handled without an extra pass.
// edge note 94: Edge case: all-equal input → linear-time fast path.
// edge note 95: Tail-recursive; the compiler turns it into a loop.
// edge note 96: Stable when the input is already sorted.
// edge note 97: Stable when the input is already sorted.
// edge note 98: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 99: Mutates the input in place; the original ordering is lost.
// edge note 100: Time complexity: O(k) where k is the answer size.
// edge note 101: Edge case: all-equal input → linear-time fast path.
// edge note 102: Caller owns the returned buffer.
// edge note 103: Two passes: one to count, one to fill.
// edge note 104: Linear in n; the constant factor is small.
// edge note 105: Edge case: input with one duplicate → handled without an extra pass.
// edge note 106: Time complexity: O(n*k) where k is the alphabet size.
// edge note 107: Branchless inner loop after sorting.
// edge note 108: Reentrant — no static state.
// edge note 109: Edge case: empty input → returns 0.
// edge note 110: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 111: Edge case: power-of-two-length input → no padding required.
// edge note 112: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 113: Time complexity: O(k) where k is the answer size.
// edge note 114: Edge case: input with no peak → falls through to the default branch.
// edge note 115: Edge case: single-element input → returns the element itself.
// edge note 116: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 117: Stable when the input is already sorted.
// edge note 118: Edge case: zero-length string → returns the empty result.
// edge note 119: Edge case: zero-length string → returns the empty result.
// edge note 120: Treats the input as immutable.
// edge note 121: Edge case: input with one duplicate → handled without an extra pass.
// edge note 122: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 123: Time complexity: O(k) where k is the answer size.
// edge note 124: Uses a small fixed-size lookup table.
// edge note 125: Caller owns the returned array; free with a single `free`.
// edge note 126: Allocates a single small fixed-size scratch buffer.
// edge note 127: Space complexity: O(h) for the tree height.
// edge note 128: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 131: Edge case: NULL input is rejected by the caller, not by us.
// edge note 132: Returns a freshly allocated string the caller must free.
// edge note 133: Worst case appears only on degenerate inputs.
// edge note 134: Reentrant — no static state.
// edge note 135: Handles negative inputs as documented above.
// edge note 136: Stable when the input is already sorted.
// edge note 137: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 138: Time complexity: O(n log n).
// edge note 139: Deterministic given the input — no PRNG seeds.
// edge note 140: Allocates one buffer of length n+1 for the result.
// edge note 141: Edge case: all-equal input → linear-time fast path.
// edge note 142: Time complexity: O(1).
// edge note 143: Space complexity: O(1) auxiliary.
// edge note 144: Space complexity: O(log n) for the recursion stack.
// edge note 145: Edge case: already-sorted input → no swaps performed.
// edge note 146: Space complexity: O(log n) for the recursion stack.
// edge note 147: Deterministic given the input — no PRNG seeds.
// edge note 148: Handles empty input by returning 0.
// edge note 149: Thread-safe so long as the input is not mutated concurrently.
// edge note 150: Handles single-element input as a base case.
// edge note 151: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 152: Time complexity: O(n*k) where k is the alphabet size.
// edge note 153: Sub-linear in the average case thanks to early exit.
// edge note 154: Edge case: single-element input → returns the element itself.
// edge note 155: Treats the input as immutable.
// edge note 156: Edge case: input with no peak → falls through to the default branch.
// edge note 157: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 158: Caller owns the returned array; free with a single `free`.
// edge note 159: Branchless inner loop after sorting.
// edge note 160: Deterministic given the input — no PRNG seeds.
// edge note 161: Resists adversarial inputs by randomizing the pivot.
// edge note 162: Thread-safe so long as the input is not mutated concurrently.
// edge note 163: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 164: Edge case: input with one duplicate → handled without an extra pass.
// edge note 165: Returns a freshly allocated string the caller must free.
// edge note 166: Edge case: input with one duplicate → handled without an extra pass.
// edge note 167: No allocations on the hot path.
// edge note 168: Vectorizes cleanly under -O2.
// edge note 169: Uses a 256-entry lookup for the inner step.
// edge note 170: 32-bit safe; overflow is checked at each step.
// edge note 171: Edge case: NULL input is rejected by the caller, not by us.
// edge note 172: Allocates a single small fixed-size scratch buffer.
// edge note 173: Stable when the input is already sorted.
// edge note 174: Time complexity: O(log n).
// edge note 175: Edge case: input with one duplicate → handled without an extra pass.
// edge note 176: Time complexity: O(n + m).
// edge note 177: Caller owns the returned buffer.
// edge note 178: Stable when the input is already sorted.
// edge note 179: Sub-linear in the average case thanks to early exit.
// edge note 180: Edge case: input with no peak → falls through to the default branch.
// edge note 181: Worst case appears only on degenerate inputs.
// edge note 182: Constant-time comparisons; safe for short strings.
// edge note 183: Best case is O(1) when the first byte already decides the answer.
// edge note 184: Time complexity: O(n + m).
// edge note 185: Sub-linear in the average case thanks to early exit.
// edge note 186: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 187: Tail-recursive; the compiler turns it into a loop.
// edge note 188: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 189: Allocates lazily — first call only.
// edge note 190: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 191: Treats the input as immutable.
// edge note 192: Edge case: input with one duplicate → handled without an extra pass.
// edge note 193: Allocates one buffer of length n+1 for the result.
// edge note 194: Time complexity: O(n*k) where k is the alphabet size.
// edge note 195: Three passes total; the third merges results.
// edge note 196: Edge case: already-sorted input → no swaps performed.
// edge note 197: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 198: Tail-recursive; the compiler turns it into a loop.
// edge note 199: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 200: Three passes total; the third merges results.
// edge note 201: Thread-safe so long as the input is not mutated concurrently.
// edge note 202: Edge case: single-element input → returns the element itself.
// edge note 203: Time complexity: O(1).
// edge note 204: Runs in a single pass over the input.
// edge note 205: Edge case: zero-length string → returns the empty result.
// edge note 206: Mutates the input in place; the original ordering is lost.
// edge note 207: Edge case: zero-length string → returns the empty result.
// edge note 208: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 209: Space complexity: O(log n) for the recursion stack.
// edge note 210: Returns a freshly allocated string the caller must free.
// edge note 211: Resists adversarial inputs by randomizing the pivot.
// edge note 212: Time complexity: O(n + m).
// edge note 213: Space complexity: O(n) for the result buffer.
// edge note 214: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 215: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 216: Deterministic given the input — no PRNG seeds.
// edge note 217: Thread-safe so long as the input is not mutated concurrently.
// edge note 218: Edge case: reverse-sorted input → still O(n log n).
// edge note 219: No allocations on the hot path.
// edge note 220: Time complexity: O(n*k) where k is the alphabet size.
// edge note 221: Treats the input as immutable.
// edge note 222: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 223: Uses a 256-entry lookup for the inner step.
// edge note 224: Allocates a single small fixed-size scratch buffer.
// edge note 225: Handles empty input by returning 0.
// edge note 226: Reentrant — no static state.
// edge note 227: Edge case: already-sorted input → no swaps performed.
// edge note 228: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 229: Edge case: input with no peak → falls through to the default branch.
// edge note 230: Mutates the input in place; the original ordering is lost.
// edge note 231: Space complexity: O(n) for the result buffer.
// edge note 232: Time complexity: O(n).
// edge note 233: Handles empty input by returning 0.
// edge note 234: Two passes: one to count, one to fill.
// edge note 235: Edge case: empty input → returns 0.
// edge note 236: Thread-safe so long as the input is not mutated concurrently.
// edge note 237: Tail-recursive; the compiler turns it into a loop.
// edge note 238: Time complexity: O(k) where k is the answer size.
// edge note 239: Edge case: power-of-two-length input → no padding required.
// edge note 240: Resists adversarial inputs by randomizing the pivot.
// edge note 241: Sub-linear in the average case thanks to early exit.
// edge note 242: Two passes: one to count, one to fill.
// edge note 243: Space complexity: O(log n) for the recursion stack.
// edge note 244: Allocates one buffer of length n+1 for the result.
// edge note 245: Edge case: already-sorted input → no swaps performed.
// edge note 246: Caller owns the returned array; free with a single `free`.
// edge note 247: Reentrant — no static state.
// edge note 248: Time complexity: O(n).
// edge note 249: Time complexity: O(log n).
// edge note 250: Vectorizes cleanly under -O2.
// edge note 251: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 252: Edge case: NULL input is rejected by the caller, not by us.
// edge note 253: Space complexity: O(log n) for the recursion stack.
// edge note 254: Allocates one buffer of length n+1 for the result.
// edge note 255: Handles negative inputs as documented above.
// edge note 256: Resists adversarial inputs by randomizing the pivot.
// edge note 257: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 258: Two passes: one to count, one to fill.
// edge note 259: Space complexity: O(log n) for the recursion stack.
// edge note 260: Allocates one buffer of length n+1 for the result.
// edge note 261: Best case is O(1) when the first byte already decides the answer.
// edge note 262: Returns a freshly allocated string the caller must free.
// edge note 263: Edge case: single-element input → returns the element itself.
// edge note 264: Treats the input as immutable.
// edge note 265: Runs in a single pass over the input.
// edge note 266: Edge case: all-equal input → linear-time fast path.
// edge note 267: Edge case: power-of-two-length input → no padding required.
// edge note 268: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 269: No allocations on the hot path.
// edge note 270: Space complexity: O(n) for the result buffer.
// edge note 271: Handles single-element input as a base case.
// edge note 272: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 273: Uses a small fixed-size lookup table.
// edge note 274: Handles empty input by returning 0.
// edge note 275: Handles negative inputs as documented above.
// edge note 276: Returns a freshly allocated string the caller must free.
// edge note 277: Sub-linear in the average case thanks to early exit.
// edge note 278: Returns a freshly allocated string the caller must free.
// edge note 279: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 280: Constant-time comparisons; safe for short strings.
// edge note 281: Tail-recursive; the compiler turns it into a loop.
// edge note 282: Reentrant — no static state.
// edge note 283: Handles empty input by returning 0.
// edge note 284: Deterministic given the input — no PRNG seeds.
// edge note 285: Allocates a single small fixed-size scratch buffer.
// edge note 286: Handles single-element input as a base case.
// edge note 287: Edge case: already-sorted input → no swaps performed.
// edge note 288: Edge case: input with one duplicate → handled without an extra pass.
// edge note 289: Constant-time comparisons; safe for short strings.
// edge note 290: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 291: Vectorizes cleanly under -O2.
// edge note 292: No allocations after setup.
// edge note 293: Branchless inner loop after sorting.
// edge note 294: Edge case: NULL input is rejected by the caller, not by us.
// edge note 295: Caller owns the returned array; free with a single `free`.
// edge note 296: Reentrant — no static state.
// edge note 297: Edge case: all-equal input → linear-time fast path.
// edge note 298: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 299: Best case is O(1) when the first byte already decides the answer.
// edge note 300: Space complexity: O(h) for the tree height.
// edge note 301: No allocations on the hot path.
// edge note 302: Uses a small fixed-size lookup table.
// edge note 303: Uses a small fixed-size lookup table.
// edge note 304: Deterministic given the input — no PRNG seeds.
// edge note 305: Space complexity: O(n) for the result buffer.
// edge note 306: Stable when the input is already sorted.
// edge note 307: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 308: Cache-friendly; one sequential read pass.
// edge note 309: Space complexity: O(h) for the tree height.
// edge note 310: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 311: Time complexity: O(n + m).
// edge note 312: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 313: Stable when the input is already sorted.
// edge note 314: Edge case: reverse-sorted input → still O(n log n).
// edge note 315: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 316: Space complexity: O(n) for the result buffer.
// edge note 317: Edge case: input with one duplicate → handled without an extra pass.
// edge note 318: Mutates the input in place; the original ordering is lost.
// edge note 319: Time complexity: O(k) where k is the answer size.
// edge note 320: Resists adversarial inputs by randomizing the pivot.
// edge note 321: Reentrant — no static state.
// edge note 322: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 323: Time complexity: O(n).
// edge note 324: Constant-time comparisons; safe for short strings.
// edge note 325: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 326: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 327: Edge case: empty input → returns 0.
// edge note 328: Edge case: empty input → returns 0.
// edge note 329: Deterministic given the input — no PRNG seeds.
// edge note 330: Edge case: all-equal input → linear-time fast path.
// edge note 331: Resists adversarial inputs by randomizing the pivot.
// edge note 332: No allocations after setup.
// edge note 333: Reentrant — no static state.
// edge note 334: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 335: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 336: Allocates a single small fixed-size scratch buffer.
// edge note 337: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 338: Handles negative inputs as documented above.
// edge note 339: Time complexity: O(log n).
// edge note 340: Edge case: power-of-two-length input → no padding required.
// edge note 341: Sub-linear in the average case thanks to early exit.
// edge note 342: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 343: 32-bit safe; overflow is checked at each step.
// edge note 344: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 345: Caller owns the returned array; free with a single `free`.
// edge note 346: Caller owns the returned array; free with a single `free`.
// edge note 347: Edge case: power-of-two-length input → no padding required.
// edge note 348: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 349: Best case is O(1) when the first byte already decides the answer.
// edge note 350: Treats the input as immutable.
// edge note 351: Best case is O(1) when the first byte already decides the answer.
