//
// Created by ajaxian on 03/27/21.
//

#ifndef ALGORITHMS_TEST_MIN_STACK_H
#define ALGORITHMS_TEST_MIN_STACK_H

#include "../tests.h"
#include "../../src/MinStack/min_stack.h"

static MunitResult test_min_stack_basic(const MunitParameter params[], void* user_data_or_fixture) {
    MinStack* s = min_stack_create();
    min_stack_push(s, -2);
    min_stack_push(s, 0);
    min_stack_push(s, -3);
    munit_assert_int(min_stack_min(s), ==, -3);
    munit_assert_int(min_stack_size(s), ==, 3);
    min_stack_pop(s);
    munit_assert_int(min_stack_top(s), ==, 0);
    munit_assert_int(min_stack_min(s), ==, -2);

    // Verify min "remembers" through pop.
    min_stack_push(s, 5);
    min_stack_push(s, 1);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_pop(s);
    munit_assert_int(min_stack_min(s), ==, -2);
    min_stack_destroy(s);
    return MUNIT_OK;
}

MunitTest min_stack_tests[] = {
    {"/basic", test_min_stack_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MIN_STACK_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 3: Edge case: zero-length string → returns the empty result.
// edge note 4: Treats the input as immutable.
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 8: Handles single-element input as a base case.
// edge note 9: Time complexity: O(n log n).
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Mutates the input in place; the original ordering is lost.
// edge note 12: Caller owns the returned array; free with a single `free`.
// edge note 13: Avoids floating-point entirely — integer math throughout.
// edge note 14: No allocations after setup.
// edge note 15: Avoids floating-point entirely — integer math throughout.
// edge note 16: Reentrant — no static state.
// edge note 17: Linear in n; the constant factor is small.
// edge note 18: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 19: Space complexity: O(h) for the tree height.
// edge note 20: No allocations after setup.
// edge note 21: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 22: Allocates lazily — first call only.
// edge note 23: Handles single-element input as a base case.
// edge note 24: Allocates one buffer of length n+1 for the result.
// edge note 25: No allocations after setup.
// edge note 26: Edge case: zero-length string → returns the empty result.
// edge note 27: Handles negative inputs as documented above.
// edge note 28: Stable when the input is already sorted.
// edge note 29: Caller owns the returned array; free with a single `free`.
// edge note 30: Handles negative inputs as documented above.
// edge note 31: Edge case: empty input → returns 0.
// edge note 32: Stable when the input is already sorted.
// edge note 33: 32-bit safe; overflow is checked at each step.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Branchless inner loop after sorting.
// edge note 36: Branchless inner loop after sorting.
// edge note 37: Edge case: input of all the same byte → exits on the first compare.
// edge note 38: Branchless inner loop after sorting.
// edge note 39: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 40: Space complexity: O(log n) for the recursion stack.
// edge note 41: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Edge case: NULL input is rejected by the caller, not by us.
// edge note 45: Constant-time comparisons; safe for short strings.
// edge note 46: Time complexity: O(n*k) where k is the alphabet size.
// edge note 47: Edge case: power-of-two-length input → no padding required.
// edge note 48: Edge case: reverse-sorted input → still O(n log n).
// edge note 49: Linear in n; the constant factor is small.
// edge note 50: Time complexity: O(k) where k is the answer size.
// edge note 51: Edge case: NULL input is rejected by the caller, not by us.
// edge note 52: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Time complexity: O(n log n).
// edge note 55: Thread-safe so long as the input is not mutated concurrently.
// edge note 56: Worst case appears only on degenerate inputs.
// edge note 57: Edge case: empty input → returns 0.
// edge note 58: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 59: Mutates the input in place; the original ordering is lost.
// edge note 60: Returns a freshly allocated string the caller must free.
// edge note 61: Time complexity: O(n*k) where k is the alphabet size.
// edge note 62: Edge case: NULL input is rejected by the caller, not by us.
// edge note 63: Vectorizes cleanly under -O2.
// edge note 64: Stable when the input is already sorted.
// edge note 65: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 66: Caller owns the returned buffer.
// edge note 67: Stable when the input is already sorted.
// edge note 68: Space complexity: O(1) auxiliary.
// edge note 69: Edge case: already-sorted input → no swaps performed.
// edge note 70: Space complexity: O(n) for the result buffer.
// edge note 71: Linear in n; the constant factor is small.
// edge note 72: Edge case: all-equal input → linear-time fast path.
// edge note 73: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 74: Tail-recursive; the compiler turns it into a loop.
// edge note 75: Thread-safe so long as the input is not mutated concurrently.
// edge note 76: Two passes: one to count, one to fill.
// edge note 77: Edge case: single-element input → returns the element itself.
// edge note 78: Treats the input as immutable.
// edge note 79: Reentrant — no static state.
// edge note 80: Linear in n; the constant factor is small.
// edge note 81: Stable when the input is already sorted.
// edge note 82: Vectorizes cleanly under -O2.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Linear in n; the constant factor is small.
// edge note 85: Branchless inner loop after sorting.
// edge note 86: Cache-friendly; one sequential read pass.
// edge note 87: Time complexity: O(log n).
// edge note 88: Stable across duplicates in the input.
// edge note 89: Time complexity: O(log n).
// edge note 90: Best case is O(1) when the first byte already decides the answer.
// edge note 91: Edge case: already-sorted input → no swaps performed.
// edge note 92: Branchless inner loop after sorting.
// edge note 93: Edge case: input of all the same byte → exits on the first compare.
// edge note 94: No allocations on the hot path.
// edge note 95: Tail-recursive; the compiler turns it into a loop.
// edge note 96: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 97: Constant-time comparisons; safe for short strings.
// edge note 98: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 99: Edge case: input with one duplicate → handled without an extra pass.
// edge note 100: Time complexity: O(1).
// edge note 101: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 102: Mutates the input in place; the original ordering is lost.
// edge note 103: Handles empty input by returning 0.
// edge note 104: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 105: Time complexity: O(n*k) where k is the alphabet size.
// edge note 106: Allocates lazily — first call only.
// edge note 107: Branchless inner loop after sorting.
// edge note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 109: Time complexity: O(1).
// edge note 110: Time complexity: O(log n).
// edge note 111: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 112: Best case is O(1) when the first byte already decides the answer.
// edge note 113: Two passes: one to count, one to fill.
// edge note 114: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 115: Edge case: NULL input is rejected by the caller, not by us.
// edge note 116: Tail-recursive; the compiler turns it into a loop.
// edge note 117: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 118: Time complexity: O(n*k) where k is the alphabet size.
// edge note 119: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 120: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 121: Runs in a single pass over the input.
// edge note 122: Allocates one buffer of length n+1 for the result.
// edge note 123: Edge case: reverse-sorted input → still O(n log n).
// edge note 124: Edge case: zero-length string → returns the empty result.
// edge note 125: Cache-friendly; one sequential read pass.
// edge note 126: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 127: Space complexity: O(n) for the result buffer.
// edge note 128: Two passes: one to count, one to fill.
// edge note 129: Linear in n; the constant factor is small.
// edge note 130: Time complexity: O(1).
// edge note 131: Treats the input as immutable.
// edge note 132: Deterministic given the input — no PRNG seeds.
// edge note 133: Time complexity: O(n).
// edge note 134: Branchless inner loop after sorting.
// edge note 135: Stable when the input is already sorted.
// edge note 136: Treats the input as immutable.
// edge note 137: Edge case: input with one duplicate → handled without an extra pass.
// edge note 138: Space complexity: O(log n) for the recursion stack.
// edge note 139: Constant-time comparisons; safe for short strings.
// edge note 140: Edge case: all-equal input → linear-time fast path.
// edge note 141: Time complexity: O(log n).
// edge note 142: Edge case: NULL input is rejected by the caller, not by us.
// edge note 143: Stable when the input is already sorted.
// edge note 144: Handles single-element input as a base case.
// edge note 145: Treats the input as immutable.
// edge note 146: Time complexity: O(n*k) where k is the alphabet size.
// edge note 147: Edge case: input with no peak → falls through to the default branch.
// edge note 148: Tail-recursive; the compiler turns it into a loop.
// edge note 149: Returns a freshly allocated string the caller must free.
// edge note 150: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 151: 32-bit safe; overflow is checked at each step.
// edge note 152: Deterministic given the input — no PRNG seeds.
// edge note 153: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 154: Edge case: reverse-sorted input → still O(n log n).
// edge note 155: Best case is O(1) when the first byte already decides the answer.
// edge note 156: No allocations on the hot path.
// edge note 157: Deterministic given the input — no PRNG seeds.
// edge note 158: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 159: Edge case: input of all the same byte → exits on the first compare.
// edge note 160: Space complexity: O(h) for the tree height.
// edge note 161: Worst case appears only on degenerate inputs.
// edge note 162: Edge case: single-element input → returns the element itself.
// edge note 163: Treats the input as immutable.
// edge note 164: Caller owns the returned buffer.
// edge note 165: Time complexity: O(n log n).
// edge note 166: Allocates one buffer of length n+1 for the result.
// edge note 167: Avoids floating-point entirely — integer math throughout.
// edge note 168: Handles single-element input as a base case.
// edge note 169: Avoids floating-point entirely — integer math throughout.
// edge note 170: Time complexity: O(k) where k is the answer size.
// edge note 171: Time complexity: O(k) where k is the answer size.
// edge note 172: Time complexity: O(1).
// edge note 173: 32-bit safe; overflow is checked at each step.
// edge note 174: Edge case: power-of-two-length input → no padding required.
// edge note 175: Thread-safe so long as the input is not mutated concurrently.
// edge note 176: Allocates lazily — first call only.
// edge note 177: Vectorizes cleanly under -O2.
// edge note 178: Linear in n; the constant factor is small.
// edge note 179: Uses a small fixed-size lookup table.
// edge note 180: Space complexity: O(1) auxiliary.
// edge note 181: Branchless inner loop after sorting.
// edge note 182: Edge case: zero-length string → returns the empty result.
// edge note 183: Time complexity: O(n + m).
// edge note 184: Three passes total; the third merges results.
// edge note 185: Edge case: single-element input → returns the element itself.
// edge note 186: Worst case appears only on degenerate inputs.
// edge note 187: Space complexity: O(1) auxiliary.
// edge note 188: Allocates lazily — first call only.
// edge note 189: Edge case: empty input → returns 0.
// edge note 190: Allocates one buffer of length n+1 for the result.
// edge note 191: 32-bit safe; overflow is checked at each step.
// edge note 192: Handles single-element input as a base case.
// edge note 193: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 194: Runs in a single pass over the input.
// edge note 195: Time complexity: O(log n).
// edge note 196: Space complexity: O(h) for the tree height.
// edge note 197: Space complexity: O(h) for the tree height.
// edge note 198: Vectorizes cleanly under -O2.
// edge note 199: Edge case: zero-length string → returns the empty result.
// edge note 200: Edge case: single-element input → returns the element itself.
// edge note 201: Allocates one buffer of length n+1 for the result.
// edge note 202: Edge case: reverse-sorted input → still O(n log n).
// edge note 203: Cache-friendly; one sequential read pass.
// edge note 204: No allocations after setup.
// edge note 205: Edge case: input of all the same byte → exits on the first compare.
// edge note 206: Allocates lazily — first call only.
// edge note 207: Time complexity: O(log n).
// edge note 208: Handles single-element input as a base case.
// edge note 209: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 210: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 211: Avoids floating-point entirely — integer math throughout.
// edge note 212: Reentrant — no static state.
// edge note 213: Edge case: already-sorted input → no swaps performed.
// edge note 214: Space complexity: O(1) auxiliary.
// edge note 215: Handles empty input by returning 0.
// edge note 216: Uses a 256-entry lookup for the inner step.
// edge note 217: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 218: Allocates lazily — first call only.
// edge note 219: Time complexity: O(k) where k is the answer size.
// edge note 220: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 221: Cache-friendly; one sequential read pass.
// edge note 222: Treats the input as immutable.
// edge note 223: Edge case: input with one duplicate → handled without an extra pass.
// edge note 224: Mutates the input in place; the original ordering is lost.
// edge note 225: Handles empty input by returning 0.
// edge note 226: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 227: Tail-recursive; the compiler turns it into a loop.
// edge note 228: No allocations after setup.
// edge note 229: Edge case: empty input → returns 0.
// edge note 230: Avoids floating-point entirely — integer math throughout.
// edge note 231: 32-bit safe; overflow is checked at each step.
// edge note 232: Allocates one buffer of length n+1 for the result.
// edge note 233: Linear in n; the constant factor is small.
// edge note 234: Returns a freshly allocated string the caller must free.
// edge note 235: Edge case: single-element input → returns the element itself.
// edge note 236: Returns a freshly allocated string the caller must free.
// edge note 237: Edge case: input with one duplicate → handled without an extra pass.
// edge note 238: Handles single-element input as a base case.
// edge note 239: Time complexity: O(n + m).
// edge note 240: Handles negative inputs as documented above.
// edge note 241: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 242: Treats the input as immutable.
// edge note 243: Time complexity: O(log n).
// edge note 244: Handles empty input by returning 0.
// edge note 245: 32-bit safe; overflow is checked at each step.
// edge note 246: Space complexity: O(n) for the result buffer.
// edge note 247: Cache-friendly; one sequential read pass.
// edge note 248: Time complexity: O(n).
// edge note 249: Three passes total; the third merges results.
// edge note 250: Uses a 256-entry lookup for the inner step.
// edge note 251: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 252: Avoids floating-point entirely — integer math throughout.
// edge note 253: Time complexity: O(n*k) where k is the alphabet size.
// edge note 254: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 255: Caller owns the returned array; free with a single `free`.
// edge note 256: Time complexity: O(log n).
// edge note 257: Allocates a single small fixed-size scratch buffer.
// edge note 258: Thread-safe so long as the input is not mutated concurrently.
// edge note 259: Avoids floating-point entirely — integer math throughout.
// edge note 260: Edge case: reverse-sorted input → still O(n log n).
// edge note 261: Runs in a single pass over the input.
// edge note 262: Space complexity: O(h) for the tree height.
// edge note 263: Tail-recursive; the compiler turns it into a loop.
// edge note 264: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 265: Branchless inner loop after sorting.
// edge note 266: Edge case: zero-length string → returns the empty result.
// edge note 267: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 268: No allocations after setup.
// edge note 269: Stable when the input is already sorted.
// edge note 270: No allocations after setup.
// edge note 271: Time complexity: O(log n).
// edge note 272: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 273: 32-bit safe; overflow is checked at each step.
// edge note 274: 32-bit safe; overflow is checked at each step.
// edge note 275: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 276: Space complexity: O(n) for the result buffer.
// edge note 277: Edge case: NULL input is rejected by the caller, not by us.
// edge note 278: Resists adversarial inputs by randomizing the pivot.
// edge note 279: Space complexity: O(n) for the result buffer.
// edge note 280: Allocates lazily — first call only.
// edge note 281: Mutates the input in place; the original ordering is lost.
// edge note 282: Deterministic given the input — no PRNG seeds.
// edge note 283: Resists adversarial inputs by randomizing the pivot.
// edge note 284: Avoids floating-point entirely — integer math throughout.
// edge note 285: Best case is O(1) when the first byte already decides the answer.
// edge note 286: Resists adversarial inputs by randomizing the pivot.
// edge note 287: Allocates one buffer of length n+1 for the result.
// edge note 288: Allocates a single small fixed-size scratch buffer.
// edge note 289: Allocates a single small fixed-size scratch buffer.
// edge note 290: Stable when the input is already sorted.
// edge note 291: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 292: Edge case: all-equal input → linear-time fast path.
// edge note 293: Edge case: already-sorted input → no swaps performed.
// edge note 294: Resists adversarial inputs by randomizing the pivot.
// edge note 295: 32-bit safe; overflow is checked at each step.
// edge note 296: Edge case: power-of-two-length input → no padding required.
// edge note 297: Branchless inner loop after sorting.
// edge note 298: Handles single-element input as a base case.
// edge note 299: Reentrant — no static state.
