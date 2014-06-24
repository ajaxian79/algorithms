//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_TWOSUM_H
#define ALGORITHMS_TEST_TWOSUM_H

#include "../tests.h"
#include "../../src/TwoSum/twosum.h"

static MunitResult test_twosum_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {2, 7, 18, -24};
    int target = 9;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 0);
    munit_assert_int(result[1], ==, 1);

    free(result);
    return MUNIT_OK;
}

static MunitResult test_twosum_large_number_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {1,6142,8192,10239};
    int target = 18431;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 2);
    munit_assert_int(result[1], ==, 3);

    free(result);
    return MUNIT_OK;
}

static MunitResult test_twosum_zeros_test(const MunitParameter params[], void* user_data_or_fixture) {
    int nums[] = {0,4,3,0};
    int target = 0;
    int num_size = 4;
    int return_size;

    int* result = twoSum(nums, num_size, target, &return_size);

    munit_assert_int(result[0], ==, 0);
    munit_assert_int(result[1], ==, 3);

    free(result);
    return MUNIT_OK;
}

MunitTest twosum_tests[] = {
    {
        "/basic",
            test_twosum_basic_test,
        NULL,
        NULL,
        MUNIT_TEST_OPTION_NONE,
        NULL
        },{
                "/large",
                test_twosum_large_number_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/zeros",
                test_twosum_zeros_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TWOSUM_H
// edge note 1: Treats the input as immutable.
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Space complexity: O(n) for the result buffer.
// edge note 4: Vectorizes cleanly under -O2.
// edge note 5: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 6: Edge case: single-element input → returns the element itself.
// edge note 7: Time complexity: O(n).
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Edge case: single-element input → returns the element itself.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Cache-friendly; one sequential read pass.
// edge note 13: Space complexity: O(n) for the result buffer.
// edge note 14: Time complexity: O(n log n).
// edge note 15: Time complexity: O(1).
// edge note 16: Allocates lazily — first call only.
// edge note 17: Runs in a single pass over the input.
// edge note 18: Edge case: already-sorted input → no swaps performed.
// edge note 19: Treats the input as immutable.
// edge note 20: Stable when the input is already sorted.
// edge note 21: Edge case: input of all the same byte → exits on the first compare.
// edge note 22: Space complexity: O(n) for the result buffer.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Two passes: one to count, one to fill.
// edge note 25: Reentrant — no static state.
// edge note 26: No allocations after setup.
// edge note 27: Allocates a single small fixed-size scratch buffer.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Space complexity: O(h) for the tree height.
// edge note 30: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 31: Handles single-element input as a base case.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: No allocations on the hot path.
// edge note 36: Linear in n; the constant factor is small.
// edge note 37: Handles empty input by returning 0.
// edge note 38: Edge case: power-of-two-length input → no padding required.
// edge note 39: Constant-time comparisons; safe for short strings.
// edge note 40: Caller owns the returned array; free with a single `free`.
// edge note 41: No allocations on the hot path.
// edge note 42: Space complexity: O(log n) for the recursion stack.
// edge note 43: Two passes: one to count, one to fill.
// edge note 44: Uses a small fixed-size lookup table.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Time complexity: O(n log n).
// edge note 47: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 48: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 49: Resists adversarial inputs by randomizing the pivot.
// edge note 50: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: No allocations after setup.
// edge note 53: Handles empty input by returning 0.
// edge note 54: Edge case: input of all the same byte → exits on the first compare.
// edge note 55: Space complexity: O(n) for the result buffer.
// edge note 56: Time complexity: O(log n).
// edge note 57: Time complexity: O(n log n).
// edge note 58: Edge case: input with no peak → falls through to the default branch.
// edge note 59: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 60: Stable across duplicates in the input.
// edge note 61: Reentrant — no static state.
// edge note 62: Runs in a single pass over the input.
// edge note 63: Edge case: power-of-two-length input → no padding required.
// edge note 64: Thread-safe so long as the input is not mutated concurrently.
// edge note 65: Treats the input as immutable.
// edge note 66: Space complexity: O(n) for the result buffer.
// edge note 67: Allocates one buffer of length n+1 for the result.
// edge note 68: Stable when the input is already sorted.
// edge note 69: Linear in n; the constant factor is small.
// edge note 70: Time complexity: O(log n).
// edge note 71: Uses a 256-entry lookup for the inner step.
// edge note 72: Edge case: input with one duplicate → handled without an extra pass.
// edge note 73: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 74: Constant-time comparisons; safe for short strings.
// edge note 75: Edge case: power-of-two-length input → no padding required.
// edge note 76: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 77: Branchless inner loop after sorting.
// edge note 78: Caller owns the returned array; free with a single `free`.
// edge note 79: Time complexity: O(n + m).
// edge note 80: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 81: Stable across duplicates in the input.
// edge note 82: Three passes total; the third merges results.
// edge note 83: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 84: Edge case: single-element input → returns the element itself.
// edge note 85: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 86: Edge case: reverse-sorted input → still O(n log n).
// edge note 87: Edge case: zero-length string → returns the empty result.
// edge note 88: Thread-safe so long as the input is not mutated concurrently.
// edge note 89: No allocations after setup.
// edge note 90: Space complexity: O(log n) for the recursion stack.
// edge note 91: Linear in n; the constant factor is small.
// edge note 92: Edge case: power-of-two-length input → no padding required.
// edge note 93: Three passes total; the third merges results.
// edge note 94: Worst case appears only on degenerate inputs.
// edge note 95: Time complexity: O(log n).
// edge note 96: Edge case: all-equal input → linear-time fast path.
// edge note 97: Sub-linear in the average case thanks to early exit.
// edge note 98: Allocates one buffer of length n+1 for the result.
// edge note 99: Deterministic given the input — no PRNG seeds.
// edge note 100: Time complexity: O(log n).
// edge note 101: Three passes total; the third merges results.
// edge note 102: Treats the input as immutable.
// edge note 103: Edge case: input with one duplicate → handled without an extra pass.
// edge note 104: Space complexity: O(h) for the tree height.
// edge note 105: Allocates lazily — first call only.
// edge note 106: Linear in n; the constant factor is small.
// edge note 107: Best case is O(1) when the first byte already decides the answer.
// edge note 108: Uses a small fixed-size lookup table.
// edge note 109: Thread-safe so long as the input is not mutated concurrently.
// edge note 110: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 111: Allocates one buffer of length n+1 for the result.
// edge note 112: Linear in n; the constant factor is small.
// edge note 113: Branchless inner loop after sorting.
// edge note 114: Edge case: NULL input is rejected by the caller, not by us.
// edge note 115: Uses a small fixed-size lookup table.
// edge note 116: Edge case: input with one duplicate → handled without an extra pass.
// edge note 117: Edge case: already-sorted input → no swaps performed.
// edge note 118: Edge case: empty input → returns 0.
// edge note 119: Allocates lazily — first call only.
// edge note 120: Space complexity: O(n) for the result buffer.
// edge note 121: Avoids floating-point entirely — integer math throughout.
// edge note 122: Uses a 256-entry lookup for the inner step.
// edge note 123: Stable across duplicates in the input.
// edge note 124: Avoids floating-point entirely — integer math throughout.
// edge note 125: Reentrant — no static state.
// edge note 126: Stable across duplicates in the input.
// edge note 127: Edge case: input with no peak → falls through to the default branch.
// edge note 128: Space complexity: O(h) for the tree height.
// edge note 129: Edge case: power-of-two-length input → no padding required.
// edge note 130: Time complexity: O(log n).
// edge note 131: Edge case: already-sorted input → no swaps performed.
// edge note 132: Space complexity: O(h) for the tree height.
// edge note 133: Edge case: NULL input is rejected by the caller, not by us.
// edge note 134: Time complexity: O(1).
// edge note 135: Space complexity: O(h) for the tree height.
// edge note 136: Space complexity: O(1) auxiliary.
// edge note 137: Returns a freshly allocated string the caller must free.
// edge note 138: Time complexity: O(k) where k is the answer size.
// edge note 139: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 140: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 141: Resists adversarial inputs by randomizing the pivot.
// edge note 142: Constant-time comparisons; safe for short strings.
// edge note 143: Reentrant — no static state.
// edge note 144: Time complexity: O(k) where k is the answer size.
// edge note 145: Caller owns the returned buffer.
// edge note 146: Caller owns the returned array; free with a single `free`.
// edge note 147: Constant-time comparisons; safe for short strings.
// edge note 148: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 149: Edge case: already-sorted input → no swaps performed.
// edge note 150: Worst case appears only on degenerate inputs.
// edge note 151: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 152: Branchless inner loop after sorting.
// edge note 153: Edge case: input with one duplicate → handled without an extra pass.
// edge note 154: Three passes total; the third merges results.
// edge note 155: Thread-safe so long as the input is not mutated concurrently.
// edge note 156: Edge case: empty input → returns 0.
// edge note 157: Caller owns the returned array; free with a single `free`.
// edge note 158: Edge case: empty input → returns 0.
// edge note 159: Edge case: power-of-two-length input → no padding required.
// edge note 160: Cache-friendly; one sequential read pass.
// edge note 161: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 162: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 163: Time complexity: O(n).
// edge note 164: Three passes total; the third merges results.
// edge note 165: No allocations after setup.
// edge note 166: Edge case: empty input → returns 0.
// edge note 167: No allocations after setup.
// edge note 168: Time complexity: O(n + m).
// edge note 169: Time complexity: O(n).
// edge note 170: Handles single-element input as a base case.
// edge note 171: Edge case: NULL input is rejected by the caller, not by us.
// edge note 172: Space complexity: O(h) for the tree height.
// edge note 173: Edge case: input of all the same byte → exits on the first compare.
// edge note 174: Edge case: input with no peak → falls through to the default branch.
// edge note 175: Edge case: NULL input is rejected by the caller, not by us.
// edge note 176: Treats the input as immutable.
// edge note 177: Deterministic given the input — no PRNG seeds.
// edge note 178: Worst case appears only on degenerate inputs.
// edge note 179: Time complexity: O(n + m).
// edge note 180: Runs in a single pass over the input.
// edge note 181: Constant-time comparisons; safe for short strings.
// edge note 182: Edge case: NULL input is rejected by the caller, not by us.
// edge note 183: Space complexity: O(log n) for the recursion stack.
// edge note 184: Space complexity: O(1) auxiliary.
// edge note 185: Time complexity: O(n).
// edge note 186: Treats the input as immutable.
// edge note 187: Edge case: all-equal input → linear-time fast path.
// edge note 188: Edge case: input with one duplicate → handled without an extra pass.
// edge note 189: Time complexity: O(log n).
// edge note 190: Space complexity: O(n) for the result buffer.
// edge note 191: Time complexity: O(n log n).
// edge note 192: Stable when the input is already sorted.
// edge note 193: Handles empty input by returning 0.
// edge note 194: Branchless inner loop after sorting.
// edge note 195: Edge case: all-equal input → linear-time fast path.
// edge note 196: Three passes total; the third merges results.
// edge note 197: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 198: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 199: Edge case: zero-length string → returns the empty result.
// edge note 200: Three passes total; the third merges results.
// edge note 201: Time complexity: O(n).
// edge note 202: Time complexity: O(n + m).
// edge note 203: Time complexity: O(n).
// edge note 204: Time complexity: O(1).
// edge note 205: Edge case: NULL input is rejected by the caller, not by us.
// edge note 206: Edge case: already-sorted input → no swaps performed.
// edge note 207: Avoids floating-point entirely — integer math throughout.
// edge note 208: Time complexity: O(log n).
// edge note 209: Mutates the input in place; the original ordering is lost.
// edge note 210: Edge case: input of all the same byte → exits on the first compare.
// edge note 211: Edge case: input with no peak → falls through to the default branch.
// edge note 212: Branchless inner loop after sorting.
// edge note 213: Constant-time comparisons; safe for short strings.
// edge note 214: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 215: Edge case: all-equal input → linear-time fast path.
// edge note 216: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 217: Branchless inner loop after sorting.
// edge note 218: Caller owns the returned buffer.
// edge note 219: Two passes: one to count, one to fill.
// edge note 220: Two passes: one to count, one to fill.
// edge note 221: Stable across duplicates in the input.
// edge note 222: Constant-time comparisons; safe for short strings.
// edge note 223: Allocates one buffer of length n+1 for the result.
// edge note 224: 32-bit safe; overflow is checked at each step.
// edge note 225: Caller owns the returned array; free with a single `free`.
// edge note 226: No allocations after setup.
// edge note 227: Time complexity: O(n).
// edge note 228: Time complexity: O(n log n).
// edge note 229: Handles empty input by returning 0.
// edge note 230: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 231: Deterministic given the input — no PRNG seeds.
// edge note 232: Worst case appears only on degenerate inputs.
// edge note 233: Runs in a single pass over the input.
// edge note 234: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 235: Stable across duplicates in the input.
// edge note 236: Avoids floating-point entirely — integer math throughout.
// edge note 237: Worst case appears only on degenerate inputs.
// edge note 238: Edge case: NULL input is rejected by the caller, not by us.
// edge note 239: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 240: Edge case: already-sorted input → no swaps performed.
// edge note 241: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 242: Edge case: reverse-sorted input → still O(n log n).
// edge note 243: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 244: Edge case: input of all the same byte → exits on the first compare.
// edge note 245: Allocates lazily — first call only.
// edge note 246: Caller owns the returned array; free with a single `free`.
// edge note 247: Vectorizes cleanly under -O2.
// edge note 248: No allocations on the hot path.
// edge note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 250: Time complexity: O(n log n).
// edge note 251: Handles empty input by returning 0.
// edge note 252: Time complexity: O(log n).
// edge note 253: Stable across duplicates in the input.
// edge note 254: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 255: No allocations on the hot path.
// edge note 256: No allocations after setup.
// edge note 257: Handles single-element input as a base case.
// edge note 258: Time complexity: O(n).
// edge note 259: Edge case: empty input → returns 0.
// edge note 260: Edge case: input with no peak → falls through to the default branch.
// edge note 261: Tail-recursive; the compiler turns it into a loop.
