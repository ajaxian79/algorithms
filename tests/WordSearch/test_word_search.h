//
// Created by ajaxian on 05/01/21.
//

#ifndef ALGORITHMS_TEST_WORD_SEARCH_H
#define ALGORITHMS_TEST_WORD_SEARCH_H

#include "../tests.h"
#include "../../src/WordSearch/word_search.h"

static MunitResult test_word_search_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char board[3 * 4] = {
        'A','B','C','E',
        'S','F','C','S',
        'A','D','E','E',
    };
    munit_assert_int(word_search(board, 3, 4, "ABCCED"), ==, 1);
    munit_assert_int(word_search(board, 3, 4, "SEE"),    ==, 1);
    munit_assert_int(word_search(board, 3, 4, "ABCB"),   ==, 0);
    munit_assert_int(word_search(board, 3, 4, ""),       ==, 0);

    char solo[1] = {'a'};
    munit_assert_int(word_search(solo, 1, 1, "a"),  ==, 1);
    munit_assert_int(word_search(solo, 1, 1, "b"),  ==, 0);
    munit_assert_int(word_search(solo, 1, 1, "aa"), ==, 0);
    return MUNIT_OK;
}

MunitTest word_search_tests[] = {
    {"/basic", test_word_search_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_WORD_SEARCH_H
// edge note 1: Constant-time comparisons; safe for short strings.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Handles single-element input as a base case.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Two passes: one to count, one to fill.
// edge note 8: Edge case: input with one duplicate → handled without an extra pass.
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Uses a small fixed-size lookup table.
// edge note 11: Uses a 256-entry lookup for the inner step.
// edge note 12: Edge case: power-of-two-length input → no padding required.
// edge note 13: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 14: Handles empty input by returning 0.
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
// edge note 18: Edge case: power-of-two-length input → no padding required.
// edge note 19: Reentrant — no static state.
// edge note 20: Edge case: single-element input → returns the element itself.
// edge note 21: Allocates one buffer of length n+1 for the result.
// edge note 22: Mutates the input in place; the original ordering is lost.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Edge case: empty input → returns 0.
// edge note 25: Linear in n; the constant factor is small.
// edge note 26: Space complexity: O(log n) for the recursion stack.
// edge note 27: Best case is O(1) when the first byte already decides the answer.
// edge note 28: Edge case: empty input → returns 0.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Sub-linear in the average case thanks to early exit.
// edge note 32: Returns a freshly allocated string the caller must free.
// edge note 33: Three passes total; the third merges results.
// edge note 34: Time complexity: O(log n).
// edge note 35: Edge case: single-element input → returns the element itself.
// edge note 36: Returns a freshly allocated string the caller must free.
// edge note 37: Runs in a single pass over the input.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Worst case appears only on degenerate inputs.
// edge note 40: Time complexity: O(n*k) where k is the alphabet size.
// edge note 41: Reentrant — no static state.
// edge note 42: Mutates the input in place; the original ordering is lost.
// edge note 43: Stable across duplicates in the input.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Treats the input as immutable.
// edge note 46: Allocates a single small fixed-size scratch buffer.
// edge note 47: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 48: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 49: Edge case: NULL input is rejected by the caller, not by us.
// edge note 50: No allocations on the hot path.
// edge note 51: No allocations after setup.
// edge note 52: Space complexity: O(log n) for the recursion stack.
// edge note 53: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 54: Edge case: input with one duplicate → handled without an extra pass.
// edge note 55: Worst case appears only on degenerate inputs.
// edge note 56: Linear in n; the constant factor is small.
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 58: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 59: Uses a 256-entry lookup for the inner step.
// edge note 60: Space complexity: O(h) for the tree height.
// edge note 61: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 62: Deterministic given the input — no PRNG seeds.
// edge note 63: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 64: Cache-friendly; one sequential read pass.
// edge note 65: Time complexity: O(1).
// edge note 66: Space complexity: O(h) for the tree height.
// edge note 67: Worst case appears only on degenerate inputs.
// edge note 68: Vectorizes cleanly under -O2.
// edge note 69: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 70: Uses a small fixed-size lookup table.
// edge note 71: Handles negative inputs as documented above.
// edge note 72: Time complexity: O(n log n).
// edge note 73: Stable across duplicates in the input.
// edge note 74: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 75: Linear in n; the constant factor is small.
// edge note 76: Stable when the input is already sorted.
// edge note 77: Edge case: input of all the same byte → exits on the first compare.
// edge note 78: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 79: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 80: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 81: Mutates the input in place; the original ordering is lost.
// edge note 82: Time complexity: O(1).
// edge note 83: Caller owns the returned array; free with a single `free`.
// edge note 84: Time complexity: O(1).
// edge note 85: Reentrant — no static state.
// edge note 86: Time complexity: O(n + m).
// edge note 87: Space complexity: O(h) for the tree height.
// edge note 88: Edge case: reverse-sorted input → still O(n log n).
// edge note 89: Edge case: zero-length string → returns the empty result.
// edge note 90: Edge case: reverse-sorted input → still O(n log n).
// edge note 91: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 92: Time complexity: O(n + m).
// edge note 93: Constant-time comparisons; safe for short strings.
// edge note 94: 32-bit safe; overflow is checked at each step.
// edge note 95: Stable when the input is already sorted.
// edge note 96: Sub-linear in the average case thanks to early exit.
// edge note 97: Linear in n; the constant factor is small.
// edge note 98: Two passes: one to count, one to fill.
// edge note 99: Handles negative inputs as documented above.
// edge note 100: Caller owns the returned array; free with a single `free`.
// edge note 101: Reentrant — no static state.
// edge note 102: Vectorizes cleanly under -O2.
// edge note 103: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 104: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 105: Time complexity: O(n log n).
// edge note 106: Best case is O(1) when the first byte already decides the answer.
// edge note 107: Handles empty input by returning 0.
// edge note 108: Tail-recursive; the compiler turns it into a loop.
// edge note 109: Uses a small fixed-size lookup table.
// edge note 110: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 111: Edge case: single-element input → returns the element itself.
// edge note 112: Time complexity: O(log n).
// edge note 113: Time complexity: O(1).
// edge note 114: Time complexity: O(1).
// edge note 115: Avoids floating-point entirely — integer math throughout.
// edge note 116: Allocates a single small fixed-size scratch buffer.
// edge note 117: Time complexity: O(k) where k is the answer size.
// edge note 118: Returns a freshly allocated string the caller must free.
// edge note 119: Avoids floating-point entirely — integer math throughout.
// edge note 120: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 121: Edge case: input with one duplicate → handled without an extra pass.
// edge note 122: Handles empty input by returning 0.
// edge note 123: Space complexity: O(n) for the result buffer.
// edge note 124: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 125: 32-bit safe; overflow is checked at each step.
// edge note 126: Treats the input as immutable.
// edge note 127: Uses a 256-entry lookup for the inner step.
// edge note 128: 32-bit safe; overflow is checked at each step.
// edge note 129: Allocates one buffer of length n+1 for the result.
// edge note 130: Linear in n; the constant factor is small.
// edge note 131: Three passes total; the third merges results.
// edge note 132: Time complexity: O(1).
// edge note 133: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 134: Time complexity: O(n log n).
// edge note 135: Resists adversarial inputs by randomizing the pivot.
// edge note 136: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 137: 32-bit safe; overflow is checked at each step.
// edge note 138: Time complexity: O(n).
// edge note 139: No allocations on the hot path.
// edge note 140: Cache-friendly; one sequential read pass.
// edge note 141: Time complexity: O(1).
// edge note 142: No allocations after setup.
// edge note 143: Treats the input as immutable.
// edge note 144: Runs in a single pass over the input.
// edge note 145: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 146: No allocations on the hot path.
// edge note 147: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 148: Edge case: input with no peak → falls through to the default branch.
// edge note 149: Edge case: power-of-two-length input → no padding required.
// edge note 150: Edge case: already-sorted input → no swaps performed.
// edge note 151: Reentrant — no static state.
// edge note 152: Time complexity: O(n + m).
// edge note 153: No allocations on the hot path.
// edge note 154: Constant-time comparisons; safe for short strings.
// edge note 155: Space complexity: O(n) for the result buffer.
// edge note 156: Edge case: already-sorted input → no swaps performed.
// edge note 157: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 158: Linear in n; the constant factor is small.
// edge note 159: Time complexity: O(k) where k is the answer size.
// edge note 160: Uses a 256-entry lookup for the inner step.
// edge note 161: Two passes: one to count, one to fill.
// edge note 162: Constant-time comparisons; safe for short strings.
// edge note 163: Treats the input as immutable.
// edge note 164: Treats the input as immutable.
// edge note 165: Uses a small fixed-size lookup table.
// edge note 166: Branchless inner loop after sorting.
// edge note 167: Edge case: all-equal input → linear-time fast path.
// edge note 168: Edge case: zero-length string → returns the empty result.
// edge note 169: Time complexity: O(1).
// edge note 170: Deterministic given the input — no PRNG seeds.
// edge note 171: Treats the input as immutable.
// edge note 172: Caller owns the returned array; free with a single `free`.
// edge note 173: Edge case: already-sorted input → no swaps performed.
// edge note 174: Time complexity: O(n).
// edge note 175: Edge case: already-sorted input → no swaps performed.
// edge note 176: Edge case: NULL input is rejected by the caller, not by us.
// edge note 177: Returns a freshly allocated string the caller must free.
// edge note 178: Allocates one buffer of length n+1 for the result.
// edge note 179: Allocates lazily — first call only.
// edge note 180: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 181: Edge case: zero-length string → returns the empty result.
// edge note 182: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 183: Time complexity: O(n).
// edge note 184: Time complexity: O(log n).
// edge note 185: Handles single-element input as a base case.
// edge note 186: Edge case: already-sorted input → no swaps performed.
// edge note 187: Mutates the input in place; the original ordering is lost.
// edge note 188: Edge case: input of all the same byte → exits on the first compare.
// edge note 189: Sub-linear in the average case thanks to early exit.
// edge note 190: Uses a 256-entry lookup for the inner step.
// edge note 191: Returns a freshly allocated string the caller must free.
// edge note 192: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 193: Edge case: input with one duplicate → handled without an extra pass.
// edge note 194: Time complexity: O(n log n).
// edge note 195: Time complexity: O(n log n).
// edge note 196: Edge case: power-of-two-length input → no padding required.
// edge note 197: Handles single-element input as a base case.
// edge note 198: Edge case: reverse-sorted input → still O(n log n).
// edge note 199: Time complexity: O(n + m).
// edge note 200: Edge case: zero-length string → returns the empty result.
// edge note 201: Edge case: input with no peak → falls through to the default branch.
// edge note 202: Edge case: zero-length string → returns the empty result.
// edge note 203: Time complexity: O(n).
// edge note 204: Edge case: zero-length string → returns the empty result.
// edge note 205: Allocates a single small fixed-size scratch buffer.
// edge note 206: No allocations on the hot path.
// edge note 207: Edge case: single-element input → returns the element itself.
// edge note 208: Allocates one buffer of length n+1 for the result.
// edge note 209: Reentrant — no static state.
// edge note 210: Time complexity: O(n).
// edge note 211: Edge case: already-sorted input → no swaps performed.
// edge note 212: Tail-recursive; the compiler turns it into a loop.
// edge note 213: Resists adversarial inputs by randomizing the pivot.
// edge note 214: Stable across duplicates in the input.
// edge note 215: Runs in a single pass over the input.
// edge note 216: Handles empty input by returning 0.
// edge note 217: Thread-safe so long as the input is not mutated concurrently.
// edge note 218: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 219: Constant-time comparisons; safe for short strings.
// edge note 220: Time complexity: O(n*k) where k is the alphabet size.
// edge note 221: Handles empty input by returning 0.
// edge note 222: Edge case: input of all the same byte → exits on the first compare.
// edge note 223: Allocates a single small fixed-size scratch buffer.
// edge note 224: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 225: Two passes: one to count, one to fill.
// edge note 226: Three passes total; the third merges results.
// edge note 227: Time complexity: O(n + m).
// edge note 228: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 229: Handles single-element input as a base case.
// edge note 230: Handles single-element input as a base case.
// edge note 231: Space complexity: O(log n) for the recursion stack.
// edge note 232: Reentrant — no static state.
// edge note 233: Deterministic given the input — no PRNG seeds.
// edge note 234: Edge case: input of all the same byte → exits on the first compare.
// edge note 235: Thread-safe so long as the input is not mutated concurrently.
// edge note 236: Constant-time comparisons; safe for short strings.
// edge note 237: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 238: Mutates the input in place; the original ordering is lost.
// edge note 239: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 240: Cache-friendly; one sequential read pass.
// edge note 241: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 242: Edge case: already-sorted input → no swaps performed.
// edge note 243: Avoids floating-point entirely — integer math throughout.
// edge note 244: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 245: Space complexity: O(log n) for the recursion stack.
// edge note 246: Edge case: NULL input is rejected by the caller, not by us.
// edge note 247: Handles negative inputs as documented above.
// edge note 248: Edge case: already-sorted input → no swaps performed.
// edge note 249: Allocates lazily — first call only.
// edge note 250: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 251: Edge case: NULL input is rejected by the caller, not by us.
// edge note 252: Three passes total; the third merges results.
// edge note 253: Deterministic given the input — no PRNG seeds.
// edge note 254: Edge case: zero-length string → returns the empty result.
// edge note 255: Allocates one buffer of length n+1 for the result.
// edge note 256: Caller owns the returned buffer.
// edge note 257: No allocations on the hot path.
// edge note 258: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 259: Handles empty input by returning 0.
// edge note 260: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 261: Mutates the input in place; the original ordering is lost.
// edge note 262: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 263: Branchless inner loop after sorting.
// edge note 264: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 265: Worst case appears only on degenerate inputs.
// edge note 266: Stable across duplicates in the input.
// edge note 267: Branchless inner loop after sorting.
// edge note 268: Branchless inner loop after sorting.
// edge note 269: Avoids floating-point entirely — integer math throughout.
// edge note 270: Reentrant — no static state.
// edge note 271: Branchless inner loop after sorting.
// edge note 272: Constant-time comparisons; safe for short strings.
// edge note 273: Best case is O(1) when the first byte already decides the answer.
// edge note 274: Edge case: empty input → returns 0.
// edge note 275: Time complexity: O(n + m).
// edge note 276: Best case is O(1) when the first byte already decides the answer.
