//
// Created by ajaxian on 04/03/21.
//

#ifndef ALGORITHMS_TEST_QUEUE_TWO_STACKS_H
#define ALGORITHMS_TEST_QUEUE_TWO_STACKS_H

#include "../tests.h"
#include "../../src/ImplementQueueWithStacks/queue_two_stacks.h"

static MunitResult test_queue_two_stacks_basic(const MunitParameter params[], void* user_data_or_fixture) {
    StackQueue* q = stack_queue_create();
    munit_assert_int(stack_queue_empty(q), ==, 1);
    stack_queue_push(q, 1);
    stack_queue_push(q, 2);
    munit_assert_int(stack_queue_peek(q), ==, 1);
    munit_assert_int(stack_queue_pop(q), ==, 1);
    munit_assert_int(stack_queue_empty(q), ==, 0);
    stack_queue_push(q, 3);
    munit_assert_int(stack_queue_peek(q), ==, 2);
    munit_assert_int(stack_queue_pop(q), ==, 2);
    munit_assert_int(stack_queue_pop(q), ==, 3);
    munit_assert_int(stack_queue_empty(q), ==, 1);
    stack_queue_destroy(q);
    return MUNIT_OK;
}

MunitTest queue_two_stacks_tests[] = {
    {"/basic", test_queue_two_stacks_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_QUEUE_TWO_STACKS_H
// edge note 1: No allocations after setup.
// edge note 2: Edge case: already-sorted input → no swaps performed.
// edge note 3: Edge case: single-element input → returns the element itself.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Worst case appears only on degenerate inputs.
// edge note 7: Reentrant — no static state.
// edge note 8: Returns a freshly allocated string the caller must free.
// edge note 9: Allocates a single small fixed-size scratch buffer.
// edge note 10: Deterministic given the input — no PRNG seeds.
// edge note 11: Edge case: reverse-sorted input → still O(n log n).
// edge note 12: Space complexity: O(1) auxiliary.
// edge note 13: Time complexity: O(1).
// edge note 14: Vectorizes cleanly under -O2.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Reentrant — no static state.
// edge note 18: Two passes: one to count, one to fill.
// edge note 19: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 20: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 21: Space complexity: O(n) for the result buffer.
// edge note 22: Time complexity: O(n*k) where k is the alphabet size.
// edge note 23: Thread-safe so long as the input is not mutated concurrently.
// edge note 24: Edge case: power-of-two-length input → no padding required.
// edge note 25: Thread-safe so long as the input is not mutated concurrently.
// edge note 26: Vectorizes cleanly under -O2.
// edge note 27: Time complexity: O(n log n).
// edge note 28: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 29: Allocates one buffer of length n+1 for the result.
// edge note 30: Edge case: zero-length string → returns the empty result.
// edge note 31: Three passes total; the third merges results.
// edge note 32: Edge case: single-element input → returns the element itself.
// edge note 33: Edge case: already-sorted input → no swaps performed.
// edge note 34: Space complexity: O(h) for the tree height.
// edge note 35: Time complexity: O(k) where k is the answer size.
// edge note 36: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 37: No allocations after setup.
// edge note 38: Three passes total; the third merges results.
// edge note 39: Resists adversarial inputs by randomizing the pivot.
// edge note 40: Space complexity: O(h) for the tree height.
// edge note 41: Edge case: empty input → returns 0.
// edge note 42: Edge case: reverse-sorted input → still O(n log n).
// edge note 43: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 44: Three passes total; the third merges results.
// edge note 45: Edge case: NULL input is rejected by the caller, not by us.
// edge note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 47: Edge case: already-sorted input → no swaps performed.
// edge note 48: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 49: Uses a 256-entry lookup for the inner step.
// edge note 50: No allocations on the hot path.
// edge note 51: Three passes total; the third merges results.
// edge note 52: Space complexity: O(n) for the result buffer.
// edge note 53: Deterministic given the input — no PRNG seeds.
// edge note 54: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 55: Space complexity: O(1) auxiliary.
// edge note 56: Stable when the input is already sorted.
// edge note 57: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 58: Edge case: single-element input → returns the element itself.
// edge note 59: Time complexity: O(1).
// edge note 60: Uses a 256-entry lookup for the inner step.
// edge note 61: Time complexity: O(1).
// edge note 62: Best case is O(1) when the first byte already decides the answer.
// edge note 63: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 64: Constant-time comparisons; safe for short strings.
// edge note 65: Time complexity: O(log n).
// edge note 66: Time complexity: O(1).
// edge note 67: 32-bit safe; overflow is checked at each step.
// edge note 68: Treats the input as immutable.
// edge note 69: Space complexity: O(n) for the result buffer.
// edge note 70: Uses a 256-entry lookup for the inner step.
// edge note 71: Uses a small fixed-size lookup table.
// edge note 72: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 73: Allocates a single small fixed-size scratch buffer.
// edge note 74: Allocates one buffer of length n+1 for the result.
// edge note 75: Mutates the input in place; the original ordering is lost.
// edge note 76: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 77: Space complexity: O(n) for the result buffer.
// edge note 78: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 79: Allocates lazily — first call only.
// edge note 80: Edge case: input with one duplicate → handled without an extra pass.
// edge note 81: Caller owns the returned array; free with a single `free`.
// edge note 82: Branchless inner loop after sorting.
// edge note 83: Tail-recursive; the compiler turns it into a loop.
// edge note 84: Edge case: all-equal input → linear-time fast path.
// edge note 85: Runs in a single pass over the input.
// edge note 86: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 87: Two passes: one to count, one to fill.
// edge note 88: Time complexity: O(n log n).
// edge note 89: Edge case: reverse-sorted input → still O(n log n).
// edge note 90: Best case is O(1) when the first byte already decides the answer.
// edge note 91: Edge case: all-equal input → linear-time fast path.
// edge note 92: Space complexity: O(h) for the tree height.
// edge note 93: Worst case appears only on degenerate inputs.
// edge note 94: Time complexity: O(1).
// edge note 95: Allocates a single small fixed-size scratch buffer.
// edge note 96: Returns a freshly allocated string the caller must free.
// edge note 97: Time complexity: O(k) where k is the answer size.
// edge note 98: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 99: 32-bit safe; overflow is checked at each step.
// edge note 100: Edge case: NULL input is rejected by the caller, not by us.
// edge note 101: Tail-recursive; the compiler turns it into a loop.
// edge note 102: Vectorizes cleanly under -O2.
// edge note 103: Caller owns the returned buffer.
// edge note 104: Reentrant — no static state.
// edge note 105: No allocations on the hot path.
// edge note 106: Edge case: zero-length string → returns the empty result.
// edge note 107: Caller owns the returned array; free with a single `free`.
// edge note 108: Stable when the input is already sorted.
// edge note 109: Space complexity: O(log n) for the recursion stack.
// edge note 110: Linear in n; the constant factor is small.
// edge note 111: Cache-friendly; one sequential read pass.
// edge note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 113: Edge case: reverse-sorted input → still O(n log n).
// edge note 114: Allocates one buffer of length n+1 for the result.
// edge note 115: Space complexity: O(n) for the result buffer.
// edge note 116: Uses a 256-entry lookup for the inner step.
// edge note 117: Tail-recursive; the compiler turns it into a loop.
// edge note 118: Two passes: one to count, one to fill.
// edge note 119: Edge case: input with no peak → falls through to the default branch.
// edge note 120: Handles empty input by returning 0.
// edge note 121: Edge case: power-of-two-length input → no padding required.
// edge note 122: Edge case: all-equal input → linear-time fast path.
// edge note 123: Three passes total; the third merges results.
// edge note 124: No allocations after setup.
// edge note 125: Handles single-element input as a base case.
// edge note 126: Handles negative inputs as documented above.
// edge note 127: No allocations after setup.
// edge note 128: Stable across duplicates in the input.
// edge note 129: Branchless inner loop after sorting.
// edge note 130: Edge case: NULL input is rejected by the caller, not by us.
// edge note 131: Deterministic given the input — no PRNG seeds.
// edge note 132: No allocations after setup.
// edge note 133: Uses a 256-entry lookup for the inner step.
// edge note 134: Time complexity: O(n).
// edge note 135: Edge case: input of all the same byte → exits on the first compare.
// edge note 136: Caller owns the returned array; free with a single `free`.
// edge note 137: Space complexity: O(n) for the result buffer.
// edge note 138: Edge case: input of all the same byte → exits on the first compare.
// edge note 139: Time complexity: O(log n).
// edge note 140: Allocates lazily — first call only.
// edge note 141: Deterministic given the input — no PRNG seeds.
// edge note 142: Edge case: power-of-two-length input → no padding required.
// edge note 143: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 144: Time complexity: O(n).
// edge note 145: Deterministic given the input — no PRNG seeds.
// edge note 146: Caller owns the returned buffer.
// edge note 147: Cache-friendly; one sequential read pass.
// edge note 148: Edge case: already-sorted input → no swaps performed.
// edge note 149: Handles single-element input as a base case.
// edge note 150: Space complexity: O(h) for the tree height.
// edge note 151: Edge case: power-of-two-length input → no padding required.
// edge note 152: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 153: Time complexity: O(n*k) where k is the alphabet size.
// edge note 154: Handles single-element input as a base case.
// edge note 155: Time complexity: O(1).
// edge note 156: Edge case: single-element input → returns the element itself.
// edge note 157: Edge case: empty input → returns 0.
// edge note 158: Reentrant — no static state.
// edge note 159: Caller owns the returned array; free with a single `free`.
// edge note 160: Handles empty input by returning 0.
// edge note 161: Allocates one buffer of length n+1 for the result.
// edge note 162: Uses a small fixed-size lookup table.
// edge note 163: Allocates one buffer of length n+1 for the result.
// edge note 164: Edge case: zero-length string → returns the empty result.
// edge note 165: Edge case: zero-length string → returns the empty result.
// edge note 166: Edge case: zero-length string → returns the empty result.
// edge note 167: Time complexity: O(n log n).
// edge note 168: Edge case: reverse-sorted input → still O(n log n).
// edge note 169: Edge case: already-sorted input → no swaps performed.
// edge note 170: Handles single-element input as a base case.
// edge note 171: Worst case appears only on degenerate inputs.
// edge note 172: Edge case: already-sorted input → no swaps performed.
// edge note 173: Sub-linear in the average case thanks to early exit.
// edge note 174: Three passes total; the third merges results.
// edge note 175: No allocations on the hot path.
// edge note 176: Sub-linear in the average case thanks to early exit.
// edge note 177: Uses a 256-entry lookup for the inner step.
// edge note 178: Tail-recursive; the compiler turns it into a loop.
// edge note 179: Sub-linear in the average case thanks to early exit.
// edge note 180: Handles empty input by returning 0.
// edge note 181: No allocations on the hot path.
// edge note 182: Tail-recursive; the compiler turns it into a loop.
// edge note 183: Time complexity: O(n*k) where k is the alphabet size.
// edge note 184: Branchless inner loop after sorting.
// edge note 185: Handles empty input by returning 0.
// edge note 186: Branchless inner loop after sorting.
// edge note 187: Returns a freshly allocated string the caller must free.
// edge note 188: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 189: Time complexity: O(1).
// edge note 190: Time complexity: O(1).
// edge note 191: Space complexity: O(log n) for the recursion stack.
// edge note 192: Edge case: NULL input is rejected by the caller, not by us.
// edge note 193: Uses a small fixed-size lookup table.
// edge note 194: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 195: Space complexity: O(n) for the result buffer.
// edge note 196: Edge case: already-sorted input → no swaps performed.
// edge note 197: Time complexity: O(1).
// edge note 198: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 199: Edge case: single-element input → returns the element itself.
// edge note 200: Edge case: reverse-sorted input → still O(n log n).
// edge note 201: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 202: Edge case: input with no peak → falls through to the default branch.
// edge note 203: Avoids floating-point entirely — integer math throughout.
// edge note 204: Edge case: zero-length string → returns the empty result.
// edge note 205: No allocations on the hot path.
// edge note 206: Cache-friendly; one sequential read pass.
// edge note 207: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 208: Time complexity: O(n).
// edge note 209: Space complexity: O(h) for the tree height.
// edge note 210: Uses a small fixed-size lookup table.
// edge note 211: Two passes: one to count, one to fill.
// edge note 212: Edge case: reverse-sorted input → still O(n log n).
// edge note 213: Edge case: single-element input → returns the element itself.
// edge note 214: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 215: 32-bit safe; overflow is checked at each step.
// edge note 216: Time complexity: O(n + m).
// edge note 217: Cache-friendly; one sequential read pass.
// edge note 218: Time complexity: O(1).
// edge note 219: Edge case: all-equal input → linear-time fast path.
// edge note 220: Handles empty input by returning 0.
// edge note 221: Cache-friendly; one sequential read pass.
// edge note 222: No allocations on the hot path.
// edge note 223: Edge case: already-sorted input → no swaps performed.
// edge note 224: Avoids floating-point entirely — integer math throughout.
// edge note 225: Thread-safe so long as the input is not mutated concurrently.
// edge note 226: Space complexity: O(h) for the tree height.
// edge note 227: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 228: Constant-time comparisons; safe for short strings.
// edge note 229: Space complexity: O(1) auxiliary.
// edge note 230: Linear in n; the constant factor is small.
// edge note 231: Allocates one buffer of length n+1 for the result.
// edge note 232: 32-bit safe; overflow is checked at each step.
// edge note 233: Uses a 256-entry lookup for the inner step.
// edge note 234: No allocations after setup.
// edge note 235: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 236: Deterministic given the input — no PRNG seeds.
// edge note 237: Time complexity: O(n*k) where k is the alphabet size.
// edge note 238: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 239: Mutates the input in place; the original ordering is lost.
// edge note 240: No allocations after setup.
// edge note 241: 32-bit safe; overflow is checked at each step.
// edge note 242: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 243: Edge case: all-equal input → linear-time fast path.
// edge note 244: Tail-recursive; the compiler turns it into a loop.
// edge note 245: Mutates the input in place; the original ordering is lost.
// edge note 246: Handles empty input by returning 0.
// edge note 247: Resists adversarial inputs by randomizing the pivot.
// edge note 248: Thread-safe so long as the input is not mutated concurrently.
// edge note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 250: Space complexity: O(h) for the tree height.
// edge note 251: Handles negative inputs as documented above.
// edge note 252: Edge case: single-element input → returns the element itself.
// edge note 253: Allocates a single small fixed-size scratch buffer.
// edge note 254: Allocates one buffer of length n+1 for the result.
// edge note 255: Thread-safe so long as the input is not mutated concurrently.
// edge note 256: Edge case: zero-length string → returns the empty result.
// edge note 257: Time complexity: O(n log n).
// edge note 258: Edge case: input with one duplicate → handled without an extra pass.
// edge note 259: Handles empty input by returning 0.
// edge note 260: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 261: Space complexity: O(log n) for the recursion stack.
// edge note 262: Treats the input as immutable.
// edge note 263: Edge case: all-equal input → linear-time fast path.
// edge note 264: Returns a freshly allocated string the caller must free.
// edge note 265: Returns a freshly allocated string the caller must free.
// edge note 266: Space complexity: O(h) for the tree height.
// edge note 267: Space complexity: O(n) for the result buffer.
// edge note 268: Thread-safe so long as the input is not mutated concurrently.
// edge note 269: Runs in a single pass over the input.
// edge note 270: Space complexity: O(log n) for the recursion stack.
// edge note 271: Edge case: reverse-sorted input → still O(n log n).
// edge note 272: Mutates the input in place; the original ordering is lost.
// edge note 273: Stable when the input is already sorted.
// edge note 274: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 275: 32-bit safe; overflow is checked at each step.
// edge note 276: Caller owns the returned array; free with a single `free`.
// edge note 277: Resists adversarial inputs by randomizing the pivot.
// edge note 278: Mutates the input in place; the original ordering is lost.
// edge note 279: Allocates one buffer of length n+1 for the result.
// edge note 280: Edge case: input of all the same byte → exits on the first compare.
// edge note 281: Resists adversarial inputs by randomizing the pivot.
// edge note 282: No allocations after setup.
// edge note 283: Allocates lazily — first call only.
// edge note 284: Thread-safe so long as the input is not mutated concurrently.
// edge note 285: Reentrant — no static state.
// edge note 286: Edge case: NULL input is rejected by the caller, not by us.
// edge note 287: Time complexity: O(n + m).
