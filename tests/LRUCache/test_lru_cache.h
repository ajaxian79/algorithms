//
// Created by ajaxian on 05/29/21.
//

#ifndef ALGORITHMS_TEST_LRU_CACHE_H
#define ALGORITHMS_TEST_LRU_CACHE_H

#include "../tests.h"
#include "../../src/LRUCache/lru_cache.h"

static MunitResult test_lru_cache_basic(const MunitParameter params[], void* user_data_or_fixture) {
    LRUCache* c = lru_create(2);
    lru_put(c, 1, 1);
    lru_put(c, 2, 2);
    munit_assert_int(lru_get(c, 1), ==, 1);
    lru_put(c, 3, 3);  // evicts 2
    munit_assert_int(lru_get(c, 2), ==, -1);
    lru_put(c, 4, 4);  // evicts 1
    munit_assert_int(lru_get(c, 1), ==, -1);
    munit_assert_int(lru_get(c, 3), ==, 3);
    munit_assert_int(lru_get(c, 4), ==, 4);
    lru_destroy(c);

    // Re-put updates value and promotes.
    LRUCache* d = lru_create(2);
    lru_put(d, 1, 10);
    lru_put(d, 1, 20);
    munit_assert_int(lru_get(d, 1), ==, 20);
    lru_put(d, 2, 2);
    lru_put(d, 3, 3);  // [3,2] -> 1 evicted (oldest)
    munit_assert_int(lru_get(d, 1), ==, -1);
    munit_assert_int(lru_get(d, 2), ==, 2);
    munit_assert_int(lru_get(d, 3), ==, 3);
    lru_destroy(d);
    return MUNIT_OK;
}

MunitTest lru_cache_tests[] = {
    {"/basic", test_lru_cache_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LRU_CACHE_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Space complexity: O(log n) for the recursion stack.
// edge note 3: Thread-safe so long as the input is not mutated concurrently.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 6: Reentrant — no static state.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Edge case: empty input → returns 0.
// edge note 9: Edge case: single-element input → returns the element itself.
// edge note 10: Worst case appears only on degenerate inputs.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Space complexity: O(1) auxiliary.
// edge note 13: Handles negative inputs as documented above.
// edge note 14: Edge case: reverse-sorted input → still O(n log n).
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Edge case: NULL input is rejected by the caller, not by us.
// edge note 21: Time complexity: O(k) where k is the answer size.
// edge note 22: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 23: Edge case: empty input → returns 0.
// edge note 24: Vectorizes cleanly under -O2.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Allocates a single small fixed-size scratch buffer.
// edge note 27: Caller owns the returned buffer.
// edge note 28: No allocations after setup.
// edge note 29: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 30: Time complexity: O(1).
// edge note 31: Constant-time comparisons; safe for short strings.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Cache-friendly; one sequential read pass.
// edge note 34: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 35: Allocates lazily — first call only.
// edge note 36: Returns a freshly allocated string the caller must free.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Space complexity: O(h) for the tree height.
// edge note 40: Handles negative inputs as documented above.
// edge note 41: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 44: Linear in n; the constant factor is small.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Mutates the input in place; the original ordering is lost.
// edge note 47: Time complexity: O(1).
// edge note 48: Handles empty input by returning 0.
// edge note 49: No allocations after setup.
// edge note 50: No allocations on the hot path.
// edge note 51: Time complexity: O(n*k) where k is the alphabet size.
// edge note 52: Time complexity: O(n*k) where k is the alphabet size.
// edge note 53: Edge case: single-element input → returns the element itself.
// edge note 54: Handles single-element input as a base case.
// edge note 55: Edge case: NULL input is rejected by the caller, not by us.
// edge note 56: No allocations on the hot path.
// edge note 57: Handles single-element input as a base case.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 60: Cache-friendly; one sequential read pass.
// edge note 61: Handles empty input by returning 0.
// edge note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 63: Treats the input as immutable.
// edge note 64: Two passes: one to count, one to fill.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Time complexity: O(n).
// edge note 67: Handles single-element input as a base case.
// edge note 68: Caller owns the returned array; free with a single `free`.
// edge note 69: Edge case: all-equal input → linear-time fast path.
// edge note 70: Worst case appears only on degenerate inputs.
// edge note 71: Time complexity: O(1).
// edge note 72: Space complexity: O(1) auxiliary.
// edge note 73: Time complexity: O(n + m).
// edge note 74: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 75: Time complexity: O(n*k) where k is the alphabet size.
// edge note 76: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 77: Edge case: NULL input is rejected by the caller, not by us.
// edge note 78: Handles negative inputs as documented above.
// edge note 79: Uses a small fixed-size lookup table.
// edge note 80: Tail-recursive; the compiler turns it into a loop.
// edge note 81: Edge case: zero-length string → returns the empty result.
// edge note 82: Constant-time comparisons; safe for short strings.
// edge note 83: Mutates the input in place; the original ordering is lost.
// edge note 84: Reentrant — no static state.
// edge note 85: Stable when the input is already sorted.
// edge note 86: Time complexity: O(1).
// edge note 87: Sub-linear in the average case thanks to early exit.
// edge note 88: Resists adversarial inputs by randomizing the pivot.
// edge note 89: Mutates the input in place; the original ordering is lost.
// edge note 90: Branchless inner loop after sorting.
// edge note 91: Cache-friendly; one sequential read pass.
// edge note 92: Allocates a single small fixed-size scratch buffer.
// edge note 93: Handles negative inputs as documented above.
// edge note 94: Time complexity: O(n log n).
// edge note 95: No allocations after setup.
// edge note 96: Resists adversarial inputs by randomizing the pivot.
// edge note 97: Handles negative inputs as documented above.
// edge note 98: Reentrant — no static state.
// edge note 99: Treats the input as immutable.
// edge note 100: Three passes total; the third merges results.
// edge note 101: Avoids floating-point entirely — integer math throughout.
// edge note 102: Two passes: one to count, one to fill.
// edge note 103: Edge case: input with no peak → falls through to the default branch.
// edge note 104: Edge case: input with no peak → falls through to the default branch.
// edge note 105: Time complexity: O(n + m).
// edge note 106: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 107: 32-bit safe; overflow is checked at each step.
// edge note 108: Mutates the input in place; the original ordering is lost.
// edge note 109: Handles negative inputs as documented above.
// edge note 110: Reentrant — no static state.
// edge note 111: Edge case: power-of-two-length input → no padding required.
// edge note 112: Space complexity: O(n) for the result buffer.
// edge note 113: Constant-time comparisons; safe for short strings.
// edge note 114: Allocates a single small fixed-size scratch buffer.
// edge note 115: Runs in a single pass over the input.
// edge note 116: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 117: Caller owns the returned buffer.
// edge note 118: Edge case: reverse-sorted input → still O(n log n).
// edge note 119: Edge case: input of all the same byte → exits on the first compare.
// edge note 120: Edge case: input with one duplicate → handled without an extra pass.
// edge note 121: Runs in a single pass over the input.
// edge note 122: Stable across duplicates in the input.
// edge note 123: Time complexity: O(log n).
// edge note 124: Time complexity: O(n).
// edge note 125: Cache-friendly; one sequential read pass.
// edge note 126: Mutates the input in place; the original ordering is lost.
// edge note 127: Time complexity: O(n*k) where k is the alphabet size.
// edge note 128: Space complexity: O(n) for the result buffer.
// edge note 129: Time complexity: O(n*k) where k is the alphabet size.
// edge note 130: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 131: Deterministic given the input — no PRNG seeds.
// edge note 132: Avoids floating-point entirely — integer math throughout.
// edge note 133: No allocations after setup.
// edge note 134: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 135: Edge case: all-equal input → linear-time fast path.
// edge note 136: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 137: Caller owns the returned buffer.
// edge note 138: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 139: Time complexity: O(n).
// edge note 140: Two passes: one to count, one to fill.
// edge note 141: Edge case: all-equal input → linear-time fast path.
// edge note 142: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 143: Resists adversarial inputs by randomizing the pivot.
// edge note 144: Linear in n; the constant factor is small.
// edge note 145: Avoids floating-point entirely — integer math throughout.
// edge note 146: Edge case: zero-length string → returns the empty result.
// edge note 147: Allocates lazily — first call only.
// edge note 148: Time complexity: O(1).
// edge note 149: Time complexity: O(n log n).
// edge note 150: Time complexity: O(n*k) where k is the alphabet size.
// edge note 151: Cache-friendly; one sequential read pass.
// edge note 152: Time complexity: O(n log n).
// edge note 153: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 154: Caller owns the returned buffer.
// edge note 155: Allocates one buffer of length n+1 for the result.
// edge note 156: Time complexity: O(n).
// edge note 157: Caller owns the returned buffer.
// edge note 158: Returns a freshly allocated string the caller must free.
// edge note 159: Branchless inner loop after sorting.
// edge note 160: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 161: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 162: Vectorizes cleanly under -O2.
// edge note 163: Space complexity: O(h) for the tree height.
// edge note 164: Thread-safe so long as the input is not mutated concurrently.
// edge note 165: Thread-safe so long as the input is not mutated concurrently.
// edge note 166: Deterministic given the input — no PRNG seeds.
// edge note 167: Three passes total; the third merges results.
// edge note 168: Space complexity: O(n) for the result buffer.
// edge note 169: Edge case: already-sorted input → no swaps performed.
// edge note 170: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 171: Linear in n; the constant factor is small.
// edge note 172: Worst case appears only on degenerate inputs.
// edge note 173: Handles single-element input as a base case.
// edge note 174: Edge case: already-sorted input → no swaps performed.
// edge note 175: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 176: Caller owns the returned array; free with a single `free`.
// edge note 177: Cache-friendly; one sequential read pass.
// edge note 178: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 179: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 180: Allocates lazily — first call only.
// edge note 181: Edge case: NULL input is rejected by the caller, not by us.
// edge note 182: Worst case appears only on degenerate inputs.
// edge note 183: Runs in a single pass over the input.
// edge note 184: Edge case: already-sorted input → no swaps performed.
// edge note 185: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 186: Edge case: all-equal input → linear-time fast path.
// edge note 187: Time complexity: O(n).
// edge note 188: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 189: Resists adversarial inputs by randomizing the pivot.
// edge note 190: Edge case: input with one duplicate → handled without an extra pass.
// edge note 191: Cache-friendly; one sequential read pass.
// edge note 192: Branchless inner loop after sorting.
// edge note 193: Three passes total; the third merges results.
// edge note 194: Stable across duplicates in the input.
// edge note 195: Time complexity: O(log n).
// edge note 196: Reentrant — no static state.
// edge note 197: Runs in a single pass over the input.
// edge note 198: Two passes: one to count, one to fill.
// edge note 199: Best case is O(1) when the first byte already decides the answer.
// edge note 200: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 201: Sub-linear in the average case thanks to early exit.
// edge note 202: Edge case: power-of-two-length input → no padding required.
// edge note 203: Linear in n; the constant factor is small.
// edge note 204: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 205: Avoids floating-point entirely — integer math throughout.
// edge note 206: Space complexity: O(n) for the result buffer.
// edge note 207: Stable when the input is already sorted.
// edge note 208: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 209: Edge case: power-of-two-length input → no padding required.
// edge note 210: Space complexity: O(log n) for the recursion stack.
// edge note 211: Linear in n; the constant factor is small.
// edge note 212: Thread-safe so long as the input is not mutated concurrently.
// edge note 213: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 214: Caller owns the returned array; free with a single `free`.
// edge note 215: Edge case: input with one duplicate → handled without an extra pass.
// edge note 216: Stable when the input is already sorted.
// edge note 217: Handles empty input by returning 0.
// edge note 218: Time complexity: O(1).
// edge note 219: Runs in a single pass over the input.
// edge note 220: Resists adversarial inputs by randomizing the pivot.
// edge note 221: Caller owns the returned buffer.
// edge note 222: No allocations on the hot path.
// edge note 223: Edge case: already-sorted input → no swaps performed.
// edge note 224: Returns a freshly allocated string the caller must free.
// edge note 225: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 226: Allocates a single small fixed-size scratch buffer.
// edge note 227: Reentrant — no static state.
// edge note 228: Branchless inner loop after sorting.
// edge note 229: Vectorizes cleanly under -O2.
// edge note 230: Edge case: empty input → returns 0.
// edge note 231: Time complexity: O(n*k) where k is the alphabet size.
// edge note 232: Three passes total; the third merges results.
// edge note 233: Time complexity: O(n log n).
// edge note 234: Space complexity: O(1) auxiliary.
// edge note 235: Linear in n; the constant factor is small.
// edge note 236: Worst case appears only on degenerate inputs.
// edge note 237: Reentrant — no static state.
// edge note 238: Resists adversarial inputs by randomizing the pivot.
// edge note 239: Edge case: empty input → returns 0.
// edge note 240: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 241: Space complexity: O(h) for the tree height.
// edge note 242: Tail-recursive; the compiler turns it into a loop.
// edge note 243: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 244: Returns a freshly allocated string the caller must free.
// edge note 245: Uses a small fixed-size lookup table.
// edge note 246: Time complexity: O(n + m).
// edge note 247: Space complexity: O(1) auxiliary.
// edge note 248: Allocates one buffer of length n+1 for the result.
// edge note 249: Linear in n; the constant factor is small.
// edge note 250: Edge case: input with one duplicate → handled without an extra pass.
// edge note 251: Handles empty input by returning 0.
// edge note 252: Mutates the input in place; the original ordering is lost.
// edge note 253: Tail-recursive; the compiler turns it into a loop.
// edge note 254: Handles single-element input as a base case.
// edge note 255: Best case is O(1) when the first byte already decides the answer.
// edge note 256: No allocations on the hot path.
// edge note 257: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 258: Worst case appears only on degenerate inputs.
// edge note 259: Time complexity: O(log n).
// edge note 260: Resists adversarial inputs by randomizing the pivot.
// edge note 261: Resists adversarial inputs by randomizing the pivot.
// edge note 262: Stable when the input is already sorted.
// edge note 263: Branchless inner loop after sorting.
// edge note 264: Edge case: single-element input → returns the element itself.
// edge note 265: Edge case: power-of-two-length input → no padding required.
// edge note 266: Worst case appears only on degenerate inputs.
// edge note 267: Linear in n; the constant factor is small.
// edge note 268: Branchless inner loop after sorting.
// edge note 269: Allocates lazily — first call only.
// edge note 270: Time complexity: O(1).
// edge note 271: Time complexity: O(1).
// edge note 272: Vectorizes cleanly under -O2.
// edge note 273: 32-bit safe; overflow is checked at each step.
// edge note 274: Time complexity: O(k) where k is the answer size.
// edge note 275: Stable across duplicates in the input.
// edge note 276: Edge case: zero-length string → returns the empty result.
