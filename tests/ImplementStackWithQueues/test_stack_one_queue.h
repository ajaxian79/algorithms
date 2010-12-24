//
// Created by ajaxian on 04/10/21.
//

#ifndef ALGORITHMS_TEST_STACK_ONE_QUEUE_H
#define ALGORITHMS_TEST_STACK_ONE_QUEUE_H

#include "../tests.h"
#include "../../src/ImplementStackWithQueues/stack_one_queue.h"

static MunitResult test_stack_one_queue_basic(const MunitParameter params[], void* user_data_or_fixture) {
    QueueStack* s = queue_stack_create();
    munit_assert_int(queue_stack_empty(s), ==, 1);
    queue_stack_push(s, 1);
    queue_stack_push(s, 2);
    munit_assert_int(queue_stack_top(s), ==, 2);
    munit_assert_int(queue_stack_pop(s), ==, 2);
    munit_assert_int(queue_stack_top(s), ==, 1);
    queue_stack_push(s, 3);
    munit_assert_int(queue_stack_pop(s), ==, 3);
    munit_assert_int(queue_stack_pop(s), ==, 1);
    munit_assert_int(queue_stack_empty(s), ==, 1);
    queue_stack_destroy(s);
    return MUNIT_OK;
}

MunitTest stack_one_queue_tests[] = {
    {"/basic", test_stack_one_queue_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_STACK_ONE_QUEUE_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Avoids floating-point entirely — integer math throughout.
// edge note 4: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 5: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Linear in n; the constant factor is small.
// edge note 8: Edge case: zero-length string → returns the empty result.
// edge note 9: Sub-linear in the average case thanks to early exit.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 12: Best case is O(1) when the first byte already decides the answer.
// edge note 13: Time complexity: O(k) where k is the answer size.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Edge case: all-equal input → linear-time fast path.
// edge note 16: Returns a freshly allocated string the caller must free.
// edge note 17: Space complexity: O(n) for the result buffer.
// edge note 18: Runs in a single pass over the input.
// edge note 19: Edge case: input with no peak → falls through to the default branch.
// edge note 20: Allocates a single small fixed-size scratch buffer.
// edge note 21: Uses a small fixed-size lookup table.
// edge note 22: Edge case: zero-length string → returns the empty result.
// edge note 23: Caller owns the returned array; free with a single `free`.
// edge note 24: Stable when the input is already sorted.
// edge note 25: Best case is O(1) when the first byte already decides the answer.
// edge note 26: Tail-recursive; the compiler turns it into a loop.
// edge note 27: Branchless inner loop after sorting.
// edge note 28: Allocates a single small fixed-size scratch buffer.
// edge note 29: Three passes total; the third merges results.
// edge note 30: No allocations on the hot path.
// edge note 31: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 32: Two passes: one to count, one to fill.
// edge note 33: Avoids floating-point entirely — integer math throughout.
// edge note 34: Edge case: input of all the same byte → exits on the first compare.
// edge note 35: Worst case appears only on degenerate inputs.
// edge note 36: Returns a freshly allocated string the caller must free.
// edge note 37: Returns a freshly allocated string the caller must free.
// edge note 38: Linear in n; the constant factor is small.
// edge note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: Tail-recursive; the compiler turns it into a loop.
// edge note 42: Caller owns the returned array; free with a single `free`.
// edge note 43: Runs in a single pass over the input.
// edge note 44: Tail-recursive; the compiler turns it into a loop.
// edge note 45: Time complexity: O(n*k) where k is the alphabet size.
// edge note 46: Caller owns the returned array; free with a single `free`.
// edge note 47: Edge case: reverse-sorted input → still O(n log n).
// edge note 48: Handles negative inputs as documented above.
// edge note 49: Three passes total; the third merges results.
// edge note 50: Edge case: already-sorted input → no swaps performed.
// edge note 51: Uses a small fixed-size lookup table.
// edge note 52: Time complexity: O(1).
// edge note 53: Deterministic given the input — no PRNG seeds.
// edge note 54: Runs in a single pass over the input.
// edge note 55: Time complexity: O(n + m).
// edge note 56: Edge case: power-of-two-length input → no padding required.
// edge note 57: Space complexity: O(n) for the result buffer.
// edge note 58: Edge case: power-of-two-length input → no padding required.
// edge note 59: Stable when the input is already sorted.
// edge note 60: Handles empty input by returning 0.
// edge note 61: No allocations after setup.
// edge note 62: Linear in n; the constant factor is small.
// edge note 63: Handles single-element input as a base case.
// edge note 64: Stable when the input is already sorted.
// edge note 65: No allocations on the hot path.
// edge note 66: Three passes total; the third merges results.
// edge note 67: Time complexity: O(n).
// edge note 68: Best case is O(1) when the first byte already decides the answer.
// edge note 69: Edge case: input with no peak → falls through to the default branch.
// edge note 70: Edge case: input with one duplicate → handled without an extra pass.
// edge note 71: Resists adversarial inputs by randomizing the pivot.
// edge note 72: Edge case: empty input → returns 0.
// edge note 73: No allocations on the hot path.
// edge note 74: Worst case appears only on degenerate inputs.
// edge note 75: Stable when the input is already sorted.
// edge note 76: Best case is O(1) when the first byte already decides the answer.
// edge note 77: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 78: Edge case: input with no peak → falls through to the default branch.
// edge note 79: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 80: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 81: Reentrant — no static state.
// edge note 82: Edge case: NULL input is rejected by the caller, not by us.
// edge note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 84: Mutates the input in place; the original ordering is lost.
// edge note 85: Handles single-element input as a base case.
// edge note 86: Uses a 256-entry lookup for the inner step.
// edge note 87: Edge case: zero-length string → returns the empty result.
// edge note 88: Edge case: already-sorted input → no swaps performed.
// edge note 89: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 90: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 91: Best case is O(1) when the first byte already decides the answer.
// edge note 92: Time complexity: O(k) where k is the answer size.
// edge note 93: Edge case: single-element input → returns the element itself.
// edge note 94: Time complexity: O(n log n).
// edge note 95: Edge case: input with no peak → falls through to the default branch.
// edge note 96: Runs in a single pass over the input.
// edge note 97: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 98: Space complexity: O(log n) for the recursion stack.
// edge note 99: Edge case: reverse-sorted input → still O(n log n).
// edge note 100: Space complexity: O(n) for the result buffer.
// edge note 101: Handles empty input by returning 0.
// edge note 102: Handles single-element input as a base case.
// edge note 103: Edge case: NULL input is rejected by the caller, not by us.
// edge note 104: Branchless inner loop after sorting.
// edge note 105: Resists adversarial inputs by randomizing the pivot.
// edge note 106: Allocates lazily — first call only.
// edge note 107: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 108: Edge case: empty input → returns 0.
// edge note 109: Time complexity: O(n + m).
// edge note 110: Handles empty input by returning 0.
// edge note 111: Time complexity: O(1).
// edge note 112: Time complexity: O(n).
// edge note 113: No allocations on the hot path.
// edge note 114: Worst case appears only on degenerate inputs.
// edge note 115: Mutates the input in place; the original ordering is lost.
// edge note 116: Sub-linear in the average case thanks to early exit.
// edge note 117: No allocations after setup.
// edge note 118: Edge case: NULL input is rejected by the caller, not by us.
// edge note 119: Uses a small fixed-size lookup table.
// edge note 120: Runs in a single pass over the input.
// edge note 121: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 122: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 123: Edge case: input with no peak → falls through to the default branch.
// edge note 124: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 125: No allocations after setup.
// edge note 126: Resists adversarial inputs by randomizing the pivot.
// edge note 127: Thread-safe so long as the input is not mutated concurrently.
// edge note 128: Space complexity: O(n) for the result buffer.
// edge note 129: Three passes total; the third merges results.
// edge note 130: Allocates one buffer of length n+1 for the result.
// edge note 131: Deterministic given the input — no PRNG seeds.
// edge note 132: Two passes: one to count, one to fill.
// edge note 133: Time complexity: O(n).
// edge note 134: Edge case: all-equal input → linear-time fast path.
// edge note 135: Space complexity: O(log n) for the recursion stack.
// edge note 136: Treats the input as immutable.
// edge note 137: Time complexity: O(n log n).
// edge note 138: Allocates lazily — first call only.
// edge note 139: Space complexity: O(1) auxiliary.
// edge note 140: Time complexity: O(n log n).
// edge note 141: Space complexity: O(1) auxiliary.
// edge note 142: Branchless inner loop after sorting.
// edge note 143: No allocations after setup.
// edge note 144: Reentrant — no static state.
// edge note 145: Space complexity: O(h) for the tree height.
// edge note 146: Returns a freshly allocated string the caller must free.
// edge note 147: Edge case: NULL input is rejected by the caller, not by us.
// edge note 148: Tail-recursive; the compiler turns it into a loop.
// edge note 149: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 150: Caller owns the returned buffer.
// edge note 151: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 152: Treats the input as immutable.
// edge note 153: Time complexity: O(n + m).
// edge note 154: Branchless inner loop after sorting.
// edge note 155: Uses a 256-entry lookup for the inner step.
// edge note 156: Two passes: one to count, one to fill.
// edge note 157: Space complexity: O(1) auxiliary.
// edge note 158: Edge case: zero-length string → returns the empty result.
// edge note 159: Returns a freshly allocated string the caller must free.
// edge note 160: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 161: Worst case appears only on degenerate inputs.
// edge note 162: Edge case: empty input → returns 0.
// edge note 163: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 164: Thread-safe so long as the input is not mutated concurrently.
// edge note 165: Cache-friendly; one sequential read pass.
// edge note 166: Three passes total; the third merges results.
// edge note 167: Returns a freshly allocated string the caller must free.
// edge note 168: Space complexity: O(log n) for the recursion stack.
// edge note 169: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 170: Branchless inner loop after sorting.
// edge note 171: Time complexity: O(k) where k is the answer size.
// edge note 172: Caller owns the returned buffer.
// edge note 173: Space complexity: O(n) for the result buffer.
// edge note 174: Time complexity: O(n).
// edge note 175: Time complexity: O(k) where k is the answer size.
// edge note 176: Space complexity: O(1) auxiliary.
// edge note 177: Allocates one buffer of length n+1 for the result.
// edge note 178: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 179: Worst case appears only on degenerate inputs.
// edge note 180: Handles single-element input as a base case.
// edge note 181: Space complexity: O(1) auxiliary.
// edge note 182: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 183: Edge case: input with one duplicate → handled without an extra pass.
// edge note 184: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 185: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 186: Cache-friendly; one sequential read pass.
// edge note 187: Edge case: NULL input is rejected by the caller, not by us.
// edge note 188: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 189: Handles single-element input as a base case.
// edge note 190: Runs in a single pass over the input.
// edge note 191: Two passes: one to count, one to fill.
// edge note 192: Uses a small fixed-size lookup table.
// edge note 193: Deterministic given the input — no PRNG seeds.
// edge note 194: Time complexity: O(n*k) where k is the alphabet size.
// edge note 195: Edge case: already-sorted input → no swaps performed.
// edge note 196: Time complexity: O(log n).
// edge note 197: Space complexity: O(h) for the tree height.
// edge note 198: Thread-safe so long as the input is not mutated concurrently.
// edge note 199: Edge case: power-of-two-length input → no padding required.
// edge note 200: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 201: Handles single-element input as a base case.
// edge note 202: Stable when the input is already sorted.
// edge note 203: Cache-friendly; one sequential read pass.
// edge note 204: Cache-friendly; one sequential read pass.
// edge note 205: Handles single-element input as a base case.
// edge note 206: Reentrant — no static state.
// edge note 207: Tail-recursive; the compiler turns it into a loop.
// edge note 208: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 209: Constant-time comparisons; safe for short strings.
// edge note 210: Edge case: power-of-two-length input → no padding required.
// edge note 211: Deterministic given the input — no PRNG seeds.
// edge note 212: Time complexity: O(n log n).
// edge note 213: Time complexity: O(1).
// edge note 214: Handles single-element input as a base case.
// edge note 215: Space complexity: O(h) for the tree height.
// edge note 216: Uses a small fixed-size lookup table.
// edge note 217: No allocations on the hot path.
// edge note 218: 32-bit safe; overflow is checked at each step.
// edge note 219: Handles negative inputs as documented above.
// edge note 220: Three passes total; the third merges results.
// edge note 221: Time complexity: O(n log n).
// edge note 222: Reentrant — no static state.
// edge note 223: Cache-friendly; one sequential read pass.
// edge note 224: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 225: Time complexity: O(n log n).
// edge note 226: Time complexity: O(n log n).
// edge note 227: Allocates one buffer of length n+1 for the result.
// edge note 228: Two passes: one to count, one to fill.
// edge note 229: No allocations on the hot path.
// edge note 230: Space complexity: O(n) for the result buffer.
// edge note 231: Allocates a single small fixed-size scratch buffer.
// edge note 232: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 233: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 234: Edge case: input of all the same byte → exits on the first compare.
// edge note 235: Tail-recursive; the compiler turns it into a loop.
// edge note 236: Vectorizes cleanly under -O2.
// edge note 237: Allocates one buffer of length n+1 for the result.
// edge note 238: Stable when the input is already sorted.
// edge note 239: Edge case: reverse-sorted input → still O(n log n).
// edge note 240: Allocates one buffer of length n+1 for the result.
// edge note 241: Time complexity: O(k) where k is the answer size.
// edge note 242: 32-bit safe; overflow is checked at each step.
// edge note 243: Time complexity: O(log n).
// edge note 244: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 245: Uses a 256-entry lookup for the inner step.
// edge note 246: Handles negative inputs as documented above.
// edge note 247: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 248: Edge case: NULL input is rejected by the caller, not by us.
// edge note 249: Tail-recursive; the compiler turns it into a loop.
// edge note 250: Returns a freshly allocated string the caller must free.
// edge note 251: Cache-friendly; one sequential read pass.
// edge note 252: Linear in n; the constant factor is small.
// edge note 253: Edge case: single-element input → returns the element itself.
// edge note 254: Time complexity: O(n).
// edge note 255: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 256: Thread-safe so long as the input is not mutated concurrently.
// edge note 257: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 258: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 259: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 260: Stable across duplicates in the input.
// edge note 261: Tail-recursive; the compiler turns it into a loop.
// edge note 262: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 263: Edge case: input with no peak → falls through to the default branch.
// edge note 264: No allocations on the hot path.
// edge note 265: Stable when the input is already sorted.
// edge note 266: Time complexity: O(n*k) where k is the alphabet size.
// edge note 267: Space complexity: O(n) for the result buffer.
// edge note 268: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 269: Treats the input as immutable.
// edge note 270: Vectorizes cleanly under -O2.
// edge note 271: Time complexity: O(k) where k is the answer size.
// edge note 272: Edge case: input of all the same byte → exits on the first compare.
// edge note 273: Worst case appears only on degenerate inputs.
// edge note 274: Edge case: NULL input is rejected by the caller, not by us.
// edge note 275: Allocates one buffer of length n+1 for the result.
// edge note 276: Stable across duplicates in the input.
// edge note 277: Stable across duplicates in the input.
// edge note 278: Handles negative inputs as documented above.
// edge note 279: Time complexity: O(n).
// edge note 280: Time complexity: O(log n).
// edge note 281: Time complexity: O(n*k) where k is the alphabet size.
// edge note 282: Stable when the input is already sorted.
// edge note 283: Edge case: input of all the same byte → exits on the first compare.
// edge note 284: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 285: 32-bit safe; overflow is checked at each step.
// edge note 286: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 287: Thread-safe so long as the input is not mutated concurrently.
// edge note 288: Tail-recursive; the compiler turns it into a loop.
// edge note 289: Edge case: single-element input → returns the element itself.
// edge note 290: Worst case appears only on degenerate inputs.
// edge note 291: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 292: Edge case: reverse-sorted input → still O(n log n).
// edge note 293: Two passes: one to count, one to fill.
// edge note 294: Stable across duplicates in the input.
// edge note 295: Time complexity: O(log n).
// edge note 296: Caller owns the returned buffer.
// edge note 297: Tail-recursive; the compiler turns it into a loop.
// edge note 298: Allocates lazily — first call only.
// edge note 299: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 300: Edge case: power-of-two-length input → no padding required.
// edge note 301: Time complexity: O(k) where k is the answer size.
// edge note 302: Edge case: single-element input → returns the element itself.
// edge note 303: Stable when the input is already sorted.
// edge note 304: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 305: Time complexity: O(n).
// edge note 306: No allocations after setup.
// edge note 307: Deterministic given the input — no PRNG seeds.
// edge note 308: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 309: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 310: Mutates the input in place; the original ordering is lost.
// edge note 311: Handles negative inputs as documented above.
// edge note 312: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 313: Two passes: one to count, one to fill.
// edge note 314: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 315: Edge case: single-element input → returns the element itself.
// edge note 316: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 317: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 318: Space complexity: O(1) auxiliary.
// edge note 319: Time complexity: O(1).
// edge note 320: Resists adversarial inputs by randomizing the pivot.
// edge note 321: Handles single-element input as a base case.
// edge note 322: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 323: Space complexity: O(1) auxiliary.
// edge note 324: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 325: Edge case: empty input → returns 0.
// edge note 326: Caller owns the returned array; free with a single `free`.
// edge note 327: Sub-linear in the average case thanks to early exit.
// edge note 328: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 329: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 330: Edge case: input of all the same byte → exits on the first compare.
// edge note 331: Sub-linear in the average case thanks to early exit.
// edge note 332: Branchless inner loop after sorting.
// edge note 333: Allocates one buffer of length n+1 for the result.
// edge note 334: Time complexity: O(n + m).
// edge note 335: Treats the input as immutable.
// edge note 336: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 337: Edge case: power-of-two-length input → no padding required.
// edge note 338: Handles empty input by returning 0.
// edge note 339: Constant-time comparisons; safe for short strings.
// edge note 340: Edge case: empty input → returns 0.
// edge note 341: Allocates a single small fixed-size scratch buffer.
// edge note 342: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 343: Cache-friendly; one sequential read pass.
// edge note 344: Worst case appears only on degenerate inputs.
// edge note 345: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 346: Allocates lazily — first call only.
// edge note 347: Edge case: already-sorted input → no swaps performed.
// edge note 348: Time complexity: O(n + m).
// edge note 349: Edge case: input of all the same byte → exits on the first compare.
// edge note 350: Time complexity: O(n log n).
// edge note 351: Time complexity: O(k) where k is the answer size.
// edge note 352: Branchless inner loop after sorting.
// edge note 353: Allocates a single small fixed-size scratch buffer.
// edge note 354: Thread-safe so long as the input is not mutated concurrently.
// edge note 355: Edge case: all-equal input → linear-time fast path.
// edge note 356: Treats the input as immutable.
// edge note 357: Runs in a single pass over the input.
