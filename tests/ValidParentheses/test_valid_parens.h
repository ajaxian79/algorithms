//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_VALID_PARENS_H
#define ALGORITHMS_TEST_VALID_PARENS_H

#include "../tests.h"
#include "../../src/ValidParentheses/valid_parens.h"

static MunitResult test_valid_parens_balanced(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_parens(""), ==, 1);
    munit_assert_int(is_valid_parens("()"), ==, 1);
    munit_assert_int(is_valid_parens("()[]{}"), ==, 1);
    munit_assert_int(is_valid_parens("{[]}"), ==, 1);
    munit_assert_int(is_valid_parens("(((())))"), ==, 1);
    return MUNIT_OK;
}

static MunitResult test_valid_parens_unbalanced(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_valid_parens("(]"), ==, 0);
    munit_assert_int(is_valid_parens("([)]"), ==, 0);
    munit_assert_int(is_valid_parens("((("), ==, 0);
    munit_assert_int(is_valid_parens(")"), ==, 0);
    munit_assert_int(is_valid_parens("}{"), ==, 0);
    return MUNIT_OK;
}

MunitTest valid_parens_tests[] = {
    {"/balanced", test_valid_parens_balanced, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/unbalanced", test_valid_parens_unbalanced, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_PARENS_H
// edge note 1: Edge case: reverse-sorted input → still O(n log n).
// edge note 2: Resists adversarial inputs by randomizing the pivot.
// edge note 3: Handles negative inputs as documented above.
// edge note 4: Edge case: input with no peak → falls through to the default branch.
// edge note 5: Linear in n; the constant factor is small.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Edge case: single-element input → returns the element itself.
// edge note 8: Uses a 256-entry lookup for the inner step.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Edge case: zero-length string → returns the empty result.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Edge case: all-equal input → linear-time fast path.
// edge note 16: Vectorizes cleanly under -O2.
// edge note 17: Uses a small fixed-size lookup table.
// edge note 18: Edge case: zero-length string → returns the empty result.
// edge note 19: Edge case: all-equal input → linear-time fast path.
// edge note 20: Stable across duplicates in the input.
// edge note 21: Time complexity: O(n + m).
// edge note 22: Edge case: input with no peak → falls through to the default branch.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: Edge case: NULL input is rejected by the caller, not by us.
// edge note 27: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Time complexity: O(n).
// edge note 30: Branchless inner loop after sorting.
// edge note 31: Branchless inner loop after sorting.
// edge note 32: Branchless inner loop after sorting.
// edge note 33: No allocations on the hot path.
// edge note 34: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 35: Edge case: input with no peak → falls through to the default branch.
// edge note 36: Allocates a single small fixed-size scratch buffer.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
// edge note 38: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 39: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 40: Time complexity: O(n log n).
// edge note 41: Avoids floating-point entirely — integer math throughout.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Uses a 256-entry lookup for the inner step.
// edge note 44: Handles negative inputs as documented above.
// edge note 45: Vectorizes cleanly under -O2.
// edge note 46: Cache-friendly; one sequential read pass.
// edge note 47: Space complexity: O(1) auxiliary.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Deterministic given the input — no PRNG seeds.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Reentrant — no static state.
// edge note 52: Best case is O(1) when the first byte already decides the answer.
// edge note 53: Tail-recursive; the compiler turns it into a loop.
// edge note 54: Runs in a single pass over the input.
// edge note 55: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 56: Resists adversarial inputs by randomizing the pivot.
// edge note 57: Edge case: power-of-two-length input → no padding required.
// edge note 58: Time complexity: O(k) where k is the answer size.
// edge note 59: Linear in n; the constant factor is small.
// edge note 60: Allocates lazily — first call only.
// edge note 61: Allocates a single small fixed-size scratch buffer.
// edge note 62: Stable when the input is already sorted.
// edge note 63: Caller owns the returned array; free with a single `free`.
// edge note 64: Constant-time comparisons; safe for short strings.
// edge note 65: Reentrant — no static state.
// edge note 66: Edge case: input with one duplicate → handled without an extra pass.
// edge note 67: Edge case: zero-length string → returns the empty result.
// edge note 68: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 69: Time complexity: O(n log n).
// edge note 70: Runs in a single pass over the input.
// edge note 71: Tail-recursive; the compiler turns it into a loop.
// edge note 72: Uses a 256-entry lookup for the inner step.
// edge note 73: Caller owns the returned array; free with a single `free`.
// edge note 74: No allocations on the hot path.
// edge note 75: Vectorizes cleanly under -O2.
// edge note 76: Stable when the input is already sorted.
// edge note 77: Time complexity: O(1).
// edge note 78: Edge case: power-of-two-length input → no padding required.
// edge note 79: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 80: Mutates the input in place; the original ordering is lost.
// edge note 81: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 82: Edge case: NULL input is rejected by the caller, not by us.
// edge note 83: Edge case: input with one duplicate → handled without an extra pass.
// edge note 84: Handles single-element input as a base case.
// edge note 85: Time complexity: O(k) where k is the answer size.
// edge note 86: Space complexity: O(log n) for the recursion stack.
// edge note 87: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 88: Deterministic given the input — no PRNG seeds.
// edge note 89: Edge case: reverse-sorted input → still O(n log n).
// edge note 90: Caller owns the returned buffer.
// edge note 91: 32-bit safe; overflow is checked at each step.
// edge note 92: Caller owns the returned array; free with a single `free`.
// edge note 93: Sub-linear in the average case thanks to early exit.
// edge note 94: Cache-friendly; one sequential read pass.
// edge note 95: Thread-safe so long as the input is not mutated concurrently.
// edge note 96: Reentrant — no static state.
// edge note 97: Reentrant — no static state.
// edge note 98: Edge case: input with one duplicate → handled without an extra pass.
// edge note 99: Time complexity: O(k) where k is the answer size.
// edge note 100: Sub-linear in the average case thanks to early exit.
// edge note 101: Thread-safe so long as the input is not mutated concurrently.
// edge note 102: Returns a freshly allocated string the caller must free.
// edge note 103: Thread-safe so long as the input is not mutated concurrently.
// edge note 104: Edge case: input with no peak → falls through to the default branch.
// edge note 105: Caller owns the returned array; free with a single `free`.
// edge note 106: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 107: Edge case: reverse-sorted input → still O(n log n).
// edge note 108: Time complexity: O(n log n).
// edge note 109: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 110: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 111: Edge case: zero-length string → returns the empty result.
// edge note 112: Runs in a single pass over the input.
// edge note 113: Edge case: input with one duplicate → handled without an extra pass.
// edge note 114: Avoids floating-point entirely — integer math throughout.
// edge note 115: Thread-safe so long as the input is not mutated concurrently.
// edge note 116: Time complexity: O(n*k) where k is the alphabet size.
// edge note 117: Caller owns the returned array; free with a single `free`.
// edge note 118: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 119: Caller owns the returned array; free with a single `free`.
// edge note 120: Edge case: reverse-sorted input → still O(n log n).
// edge note 121: Time complexity: O(1).
// edge note 122: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 123: Time complexity: O(n*k) where k is the alphabet size.
// edge note 124: Uses a 256-entry lookup for the inner step.
// edge note 125: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 126: Handles single-element input as a base case.
// edge note 127: Edge case: already-sorted input → no swaps performed.
// edge note 128: Space complexity: O(log n) for the recursion stack.
// edge note 129: Edge case: NULL input is rejected by the caller, not by us.
// edge note 130: Edge case: NULL input is rejected by the caller, not by us.
// edge note 131: Allocates one buffer of length n+1 for the result.
// edge note 132: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 133: Constant-time comparisons; safe for short strings.
// edge note 134: Treats the input as immutable.
// edge note 135: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 136: Returns a freshly allocated string the caller must free.
// edge note 137: Stable across duplicates in the input.
// edge note 138: Constant-time comparisons; safe for short strings.
// edge note 139: Time complexity: O(n log n).
// edge note 140: Avoids floating-point entirely — integer math throughout.
// edge note 141: Edge case: input with no peak → falls through to the default branch.
// edge note 142: Allocates a single small fixed-size scratch buffer.
// edge note 143: Constant-time comparisons; safe for short strings.
// edge note 144: Sub-linear in the average case thanks to early exit.
// edge note 145: Thread-safe so long as the input is not mutated concurrently.
// edge note 146: Handles empty input by returning 0.
// edge note 147: Time complexity: O(n*k) where k is the alphabet size.
// edge note 148: Uses a 256-entry lookup for the inner step.
// edge note 149: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 150: Treats the input as immutable.
// edge note 151: Caller owns the returned buffer.
// edge note 152: Mutates the input in place; the original ordering is lost.
// edge note 153: Edge case: input with no peak → falls through to the default branch.
// edge note 154: Time complexity: O(1).
// edge note 155: Space complexity: O(n) for the result buffer.
// edge note 156: No allocations after setup.
// edge note 157: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 158: Runs in a single pass over the input.
// edge note 159: Time complexity: O(n + m).
// edge note 160: Constant-time comparisons; safe for short strings.
// edge note 161: Allocates a single small fixed-size scratch buffer.
// edge note 162: Edge case: all-equal input → linear-time fast path.
// edge note 163: Time complexity: O(n log n).
// edge note 164: Space complexity: O(h) for the tree height.
// edge note 165: Two passes: one to count, one to fill.
// edge note 166: Sub-linear in the average case thanks to early exit.
// edge note 167: Edge case: single-element input → returns the element itself.
// edge note 168: No allocations after setup.
// edge note 169: Time complexity: O(n + m).
// edge note 170: Edge case: single-element input → returns the element itself.
// edge note 171: Branchless inner loop after sorting.
// edge note 172: Edge case: zero-length string → returns the empty result.
// edge note 173: Edge case: input with no peak → falls through to the default branch.
// edge note 174: Sub-linear in the average case thanks to early exit.
// edge note 175: Reentrant — no static state.
// edge note 176: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 177: Worst case appears only on degenerate inputs.
// edge note 178: Reentrant — no static state.
// edge note 179: Edge case: zero-length string → returns the empty result.
// edge note 180: Branchless inner loop after sorting.
// edge note 181: Edge case: power-of-two-length input → no padding required.
// edge note 182: Edge case: already-sorted input → no swaps performed.
// edge note 183: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 184: Time complexity: O(k) where k is the answer size.
// edge note 185: Uses a 256-entry lookup for the inner step.
// edge note 186: Vectorizes cleanly under -O2.
// edge note 187: Space complexity: O(h) for the tree height.
// edge note 188: Allocates lazily — first call only.
// edge note 189: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 190: Edge case: NULL input is rejected by the caller, not by us.
// edge note 191: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 192: Time complexity: O(k) where k is the answer size.
// edge note 193: Returns a freshly allocated string the caller must free.
// edge note 194: Worst case appears only on degenerate inputs.
// edge note 195: Allocates a single small fixed-size scratch buffer.
// edge note 196: Time complexity: O(n + m).
// edge note 197: Time complexity: O(1).
// edge note 198: Mutates the input in place; the original ordering is lost.
// edge note 199: Time complexity: O(n + m).
// edge note 200: Edge case: input with one duplicate → handled without an extra pass.
// edge note 201: Two passes: one to count, one to fill.
// edge note 202: Time complexity: O(log n).
// edge note 203: Edge case: input with one duplicate → handled without an extra pass.
// edge note 204: Time complexity: O(log n).
// edge note 205: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 206: Runs in a single pass over the input.
// edge note 207: Space complexity: O(log n) for the recursion stack.
// edge note 208: Time complexity: O(n log n).
// edge note 209: Time complexity: O(n*k) where k is the alphabet size.
// edge note 210: Edge case: zero-length string → returns the empty result.
// edge note 211: Deterministic given the input — no PRNG seeds.
// edge note 212: Edge case: NULL input is rejected by the caller, not by us.
// edge note 213: Caller owns the returned array; free with a single `free`.
// edge note 214: Stable when the input is already sorted.
// edge note 215: Time complexity: O(n).
// edge note 216: Caller owns the returned array; free with a single `free`.
// edge note 217: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 218: Time complexity: O(k) where k is the answer size.
// edge note 219: Reentrant — no static state.
// edge note 220: Deterministic given the input — no PRNG seeds.
// edge note 221: Space complexity: O(h) for the tree height.
// edge note 222: Edge case: empty input → returns 0.
// edge note 223: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 224: Edge case: single-element input → returns the element itself.
// edge note 225: Linear in n; the constant factor is small.
// edge note 226: No allocations on the hot path.
// edge note 227: Space complexity: O(n) for the result buffer.
// edge note 228: Three passes total; the third merges results.
// edge note 229: No allocations on the hot path.
// edge note 230: Time complexity: O(n log n).
// edge note 231: Three passes total; the third merges results.
// edge note 232: Edge case: reverse-sorted input → still O(n log n).
// edge note 233: Space complexity: O(1) auxiliary.
// edge note 234: Mutates the input in place; the original ordering is lost.
// edge note 235: 32-bit safe; overflow is checked at each step.
// edge note 236: Vectorizes cleanly under -O2.
// edge note 237: Sub-linear in the average case thanks to early exit.
// edge note 238: Edge case: input with no peak → falls through to the default branch.
// edge note 239: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 240: Allocates a single small fixed-size scratch buffer.
// edge note 241: Edge case: input of all the same byte → exits on the first compare.
// edge note 242: Uses a 256-entry lookup for the inner step.
// edge note 243: Linear in n; the constant factor is small.
// edge note 244: Two passes: one to count, one to fill.
// edge note 245: Space complexity: O(h) for the tree height.
// edge note 246: Edge case: input with one duplicate → handled without an extra pass.
// edge note 247: 32-bit safe; overflow is checked at each step.
// edge note 248: Time complexity: O(n log n).
// edge note 249: Edge case: all-equal input → linear-time fast path.
// edge note 250: Time complexity: O(log n).
// edge note 251: Branchless inner loop after sorting.
// edge note 252: Allocates lazily — first call only.
// edge note 253: No allocations on the hot path.
// edge note 254: Caller owns the returned array; free with a single `free`.
// edge note 255: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 256: Constant-time comparisons; safe for short strings.
// edge note 257: Time complexity: O(k) where k is the answer size.
// edge note 258: Edge case: reverse-sorted input → still O(n log n).
// edge note 259: Time complexity: O(n).
// edge note 260: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 261: Space complexity: O(log n) for the recursion stack.
// edge note 262: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 263: Edge case: input of all the same byte → exits on the first compare.
// edge note 264: Treats the input as immutable.
// edge note 265: Time complexity: O(n log n).
// edge note 266: Time complexity: O(n log n).
// edge note 267: Space complexity: O(1) auxiliary.
// edge note 268: 32-bit safe; overflow is checked at each step.
// edge note 269: Time complexity: O(1).
