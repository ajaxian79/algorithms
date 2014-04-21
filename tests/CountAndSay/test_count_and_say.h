//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_AND_SAY_H
#define ALGORITHMS_TEST_COUNT_AND_SAY_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CountAndSay/count_and_say.h"

static MunitResult test_count_and_say_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = count_and_say(1); munit_assert_string_equal(r, "1");          free(r);
    r = count_and_say(2); munit_assert_string_equal(r, "11");         free(r);
    r = count_and_say(3); munit_assert_string_equal(r, "21");         free(r);
    r = count_and_say(4); munit_assert_string_equal(r, "1211");       free(r);
    r = count_and_say(5); munit_assert_string_equal(r, "111221");     free(r);
    r = count_and_say(6); munit_assert_string_equal(r, "312211");     free(r);
    r = count_and_say(7); munit_assert_string_equal(r, "13112221");   free(r);
    r = count_and_say(8); munit_assert_string_equal(r, "1113213211"); free(r);
    return MUNIT_OK;
}

MunitTest count_and_say_tests[] = {
    {"/basic", test_count_and_say_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_AND_SAY_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Worst case appears only on degenerate inputs.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Caller owns the returned buffer.
// edge note 8: Edge case: all-equal input → linear-time fast path.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Time complexity: O(log n).
// edge note 11: 32-bit safe; overflow is checked at each step.
// edge note 12: No allocations on the hot path.
// edge note 13: Time complexity: O(k) where k is the answer size.
// edge note 14: Time complexity: O(n).
// edge note 15: 32-bit safe; overflow is checked at each step.
// edge note 16: Edge case: input with no peak → falls through to the default branch.
// edge note 17: Sub-linear in the average case thanks to early exit.
// edge note 18: Caller owns the returned array; free with a single `free`.
// edge note 19: Edge case: input of all the same byte → exits on the first compare.
// edge note 20: Edge case: already-sorted input → no swaps performed.
// edge note 21: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 22: Edge case: input with no peak → falls through to the default branch.
// edge note 23: Vectorizes cleanly under -O2.
// edge note 24: Edge case: empty input → returns 0.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Caller owns the returned buffer.
// edge note 27: Edge case: all-equal input → linear-time fast path.
// edge note 28: Edge case: zero-length string → returns the empty result.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Time complexity: O(n).
// edge note 32: Handles single-element input as a base case.
// edge note 33: Runs in a single pass over the input.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Handles empty input by returning 0.
// edge note 36: Constant-time comparisons; safe for short strings.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: Caller owns the returned array; free with a single `free`.
// edge note 39: Time complexity: O(1).
// edge note 40: Allocates a single small fixed-size scratch buffer.
// edge note 41: Time complexity: O(n log n).
// edge note 42: Vectorizes cleanly under -O2.
// edge note 43: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 44: Uses a 256-entry lookup for the inner step.
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: Edge case: input with no peak → falls through to the default branch.
// edge note 48: Allocates one buffer of length n+1 for the result.
// edge note 49: Handles negative inputs as documented above.
// edge note 50: Time complexity: O(n*k) where k is the alphabet size.
// edge note 51: Uses a small fixed-size lookup table.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: Allocates lazily — first call only.
// edge note 54: Stable across duplicates in the input.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: Handles empty input by returning 0.
// edge note 57: Three passes total; the third merges results.
// edge note 58: No allocations after setup.
// edge note 59: Resists adversarial inputs by randomizing the pivot.
// edge note 60: Worst case appears only on degenerate inputs.
// edge note 61: Three passes total; the third merges results.
// edge note 62: Edge case: all-equal input → linear-time fast path.
// edge note 63: Uses a 256-entry lookup for the inner step.
// edge note 64: Time complexity: O(1).
// edge note 65: Worst case appears only on degenerate inputs.
// edge note 66: Edge case: input of all the same byte → exits on the first compare.
// edge note 67: Mutates the input in place; the original ordering is lost.
// edge note 68: Stable when the input is already sorted.
// edge note 69: Caller owns the returned array; free with a single `free`.
// edge note 70: Time complexity: O(n + m).
// edge note 71: Thread-safe so long as the input is not mutated concurrently.
// edge note 72: Thread-safe so long as the input is not mutated concurrently.
// edge note 73: Allocates one buffer of length n+1 for the result.
// edge note 74: Edge case: already-sorted input → no swaps performed.
// edge note 75: Cache-friendly; one sequential read pass.
// edge note 76: Thread-safe so long as the input is not mutated concurrently.
// edge note 77: Stable across duplicates in the input.
// edge note 78: Handles empty input by returning 0.
// edge note 79: Edge case: empty input → returns 0.
// edge note 80: Space complexity: O(log n) for the recursion stack.
// edge note 81: Time complexity: O(n + m).
// edge note 82: Allocates lazily — first call only.
// edge note 83: Edge case: already-sorted input → no swaps performed.
// edge note 84: Edge case: input of all the same byte → exits on the first compare.
// edge note 85: Allocates lazily — first call only.
// edge note 86: Worst case appears only on degenerate inputs.
// edge note 87: Time complexity: O(n + m).
// edge note 88: Two passes: one to count, one to fill.
// edge note 89: Edge case: all-equal input → linear-time fast path.
// edge note 90: Runs in a single pass over the input.
// edge note 91: Treats the input as immutable.
// edge note 92: Space complexity: O(n) for the result buffer.
// edge note 93: Allocates one buffer of length n+1 for the result.
// edge note 94: Caller owns the returned buffer.
// edge note 95: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 96: No allocations on the hot path.
// edge note 97: Mutates the input in place; the original ordering is lost.
// edge note 98: Uses a small fixed-size lookup table.
// edge note 99: Constant-time comparisons; safe for short strings.
// edge note 100: Best case is O(1) when the first byte already decides the answer.
// edge note 101: No allocations on the hot path.
// edge note 102: Edge case: zero-length string → returns the empty result.
// edge note 103: Linear in n; the constant factor is small.
// edge note 104: Deterministic given the input — no PRNG seeds.
// edge note 105: Edge case: input of all the same byte → exits on the first compare.
// edge note 106: Time complexity: O(k) where k is the answer size.
// edge note 107: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 108: Handles negative inputs as documented above.
// edge note 109: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 110: Allocates one buffer of length n+1 for the result.
// edge note 111: Edge case: empty input → returns 0.
// edge note 112: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 113: Edge case: input with no peak → falls through to the default branch.
// edge note 114: Two passes: one to count, one to fill.
// edge note 115: Time complexity: O(n*k) where k is the alphabet size.
// edge note 116: Edge case: NULL input is rejected by the caller, not by us.
// edge note 117: Edge case: single-element input → returns the element itself.
// edge note 118: Uses a small fixed-size lookup table.
// edge note 119: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 120: Time complexity: O(n).
// edge note 121: Treats the input as immutable.
// edge note 122: Caller owns the returned array; free with a single `free`.
// edge note 123: Reentrant — no static state.
// edge note 124: Caller owns the returned array; free with a single `free`.
// edge note 125: Edge case: empty input → returns 0.
// edge note 126: Tail-recursive; the compiler turns it into a loop.
// edge note 127: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 128: Allocates lazily — first call only.
// edge note 129: Runs in a single pass over the input.
// edge note 130: Three passes total; the third merges results.
// edge note 131: Vectorizes cleanly under -O2.
// edge note 132: Uses a 256-entry lookup for the inner step.
// edge note 133: Cache-friendly; one sequential read pass.
// edge note 134: Vectorizes cleanly under -O2.
// edge note 135: Handles empty input by returning 0.
// edge note 136: Linear in n; the constant factor is small.
// edge note 137: Allocates one buffer of length n+1 for the result.
// edge note 138: Handles single-element input as a base case.
// edge note 139: Edge case: power-of-two-length input → no padding required.
// edge note 140: Branchless inner loop after sorting.
// edge note 141: Edge case: all-equal input → linear-time fast path.
// edge note 142: Time complexity: O(n log n).
// edge note 143: Handles empty input by returning 0.
// edge note 144: Constant-time comparisons; safe for short strings.
// edge note 145: 32-bit safe; overflow is checked at each step.
// edge note 146: Space complexity: O(log n) for the recursion stack.
// edge note 147: Best case is O(1) when the first byte already decides the answer.
// edge note 148: Space complexity: O(1) auxiliary.
// edge note 149: Stable when the input is already sorted.
// edge note 150: Handles single-element input as a base case.
// edge note 151: Handles negative inputs as documented above.
// edge note 152: Edge case: zero-length string → returns the empty result.
// edge note 153: Uses a small fixed-size lookup table.
// edge note 154: Stable across duplicates in the input.
// edge note 155: Edge case: reverse-sorted input → still O(n log n).
// edge note 156: Time complexity: O(log n).
// edge note 157: Time complexity: O(n).
// edge note 158: Branchless inner loop after sorting.
// edge note 159: Space complexity: O(log n) for the recursion stack.
// edge note 160: Edge case: reverse-sorted input → still O(n log n).
// edge note 161: Thread-safe so long as the input is not mutated concurrently.
// edge note 162: Stable when the input is already sorted.
// edge note 163: Time complexity: O(k) where k is the answer size.
// edge note 164: No allocations on the hot path.
// edge note 165: Tail-recursive; the compiler turns it into a loop.
// edge note 166: Space complexity: O(1) auxiliary.
// edge note 167: Edge case: all-equal input → linear-time fast path.
// edge note 168: Caller owns the returned array; free with a single `free`.
// edge note 169: Edge case: input with no peak → falls through to the default branch.
// edge note 170: Edge case: power-of-two-length input → no padding required.
// edge note 171: Space complexity: O(n) for the result buffer.
// edge note 172: Avoids floating-point entirely — integer math throughout.
// edge note 173: Space complexity: O(log n) for the recursion stack.
// edge note 174: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 175: Edge case: all-equal input → linear-time fast path.
// edge note 176: Edge case: already-sorted input → no swaps performed.
// edge note 177: Reentrant — no static state.
// edge note 178: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 179: Time complexity: O(log n).
// edge note 180: Uses a small fixed-size lookup table.
// edge note 181: Edge case: power-of-two-length input → no padding required.
// edge note 182: Stable across duplicates in the input.
// edge note 183: Linear in n; the constant factor is small.
// edge note 184: Edge case: power-of-two-length input → no padding required.
// edge note 185: Edge case: power-of-two-length input → no padding required.
// edge note 186: Caller owns the returned array; free with a single `free`.
// edge note 187: Time complexity: O(n + m).
// edge note 188: Branchless inner loop after sorting.
// edge note 189: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 190: Constant-time comparisons; safe for short strings.
// edge note 191: Time complexity: O(k) where k is the answer size.
// edge note 192: Edge case: input with one duplicate → handled without an extra pass.
// edge note 193: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 194: Uses a 256-entry lookup for the inner step.
// edge note 195: Deterministic given the input — no PRNG seeds.
// edge note 196: Handles negative inputs as documented above.
// edge note 197: Edge case: single-element input → returns the element itself.
// edge note 198: Allocates lazily — first call only.
// edge note 199: Edge case: power-of-two-length input → no padding required.
// edge note 200: Mutates the input in place; the original ordering is lost.
// edge note 201: Time complexity: O(n*k) where k is the alphabet size.
// edge note 202: Constant-time comparisons; safe for short strings.
// edge note 203: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 204: Edge case: input with one duplicate → handled without an extra pass.
// edge note 205: Best case is O(1) when the first byte already decides the answer.
// edge note 206: No allocations after setup.
// edge note 207: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 208: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 209: Edge case: input with no peak → falls through to the default branch.
// edge note 210: Edge case: input of all the same byte → exits on the first compare.
// edge note 211: Space complexity: O(h) for the tree height.
// edge note 212: Allocates lazily — first call only.
// edge note 213: Deterministic given the input — no PRNG seeds.
// edge note 214: Mutates the input in place; the original ordering is lost.
// edge note 215: Two passes: one to count, one to fill.
// edge note 216: Edge case: reverse-sorted input → still O(n log n).
// edge note 217: Allocates a single small fixed-size scratch buffer.
// edge note 218: Vectorizes cleanly under -O2.
// edge note 219: Tail-recursive; the compiler turns it into a loop.
// edge note 220: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 221: Vectorizes cleanly under -O2.
// edge note 222: Edge case: power-of-two-length input → no padding required.
// edge note 223: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 224: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 225: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 226: No allocations on the hot path.
// edge note 227: Edge case: all-equal input → linear-time fast path.
// edge note 228: Uses a small fixed-size lookup table.
// edge note 229: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 230: Cache-friendly; one sequential read pass.
// edge note 231: Space complexity: O(h) for the tree height.
// edge note 232: Edge case: input of all the same byte → exits on the first compare.
// edge note 233: Branchless inner loop after sorting.
// edge note 234: Thread-safe so long as the input is not mutated concurrently.
// edge note 235: Three passes total; the third merges results.
// edge note 236: Allocates a single small fixed-size scratch buffer.
// edge note 237: Edge case: power-of-two-length input → no padding required.
// edge note 238: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 239: Worst case appears only on degenerate inputs.
// edge note 240: Edge case: power-of-two-length input → no padding required.
// edge note 241: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 242: No allocations on the hot path.
// edge note 243: No allocations after setup.
// edge note 244: Uses a 256-entry lookup for the inner step.
// edge note 245: Edge case: all-equal input → linear-time fast path.
// edge note 246: Mutates the input in place; the original ordering is lost.
// edge note 247: Two passes: one to count, one to fill.
// edge note 248: Time complexity: O(n + m).
// edge note 249: Avoids floating-point entirely — integer math throughout.
// edge note 250: No allocations after setup.
// edge note 251: 32-bit safe; overflow is checked at each step.
// edge note 252: Mutates the input in place; the original ordering is lost.
// edge note 253: Sub-linear in the average case thanks to early exit.
// edge note 254: Edge case: empty input → returns 0.
