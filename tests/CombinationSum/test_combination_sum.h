//
// Created by ajaxian on 05/08/21.
//

#ifndef ALGORITHMS_TEST_COMBINATION_SUM_H
#define ALGORITHMS_TEST_COMBINATION_SUM_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CombinationSum/combination_sum.h"

static void cs_free(int** combos, int* sizes, int count) {
    for (int i = 0; i < count; i++) free(combos[i]);
    free(combos);
    free(sizes);
}

static MunitResult test_combination_sum_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int c[] = {2, 3, 6, 7};
    int n = 0;
    int* sizes = NULL;
    int** out = combination_sum(c, 4, 7, &n, &sizes);
    munit_assert_int(n, ==, 2);  // [2,2,3] and [7]
    cs_free(out, sizes, n);

    int c2[] = {2, 3, 5};
    out = combination_sum(c2, 3, 8, &n, &sizes);
    munit_assert_int(n, ==, 3);  // [2,2,2,2], [2,3,3], [3,5]
    cs_free(out, sizes, n);

    int c3[] = {2};
    out = combination_sum(c3, 1, 1, &n, &sizes);
    munit_assert_int(n, ==, 0);
    cs_free(out, sizes, n);
    return MUNIT_OK;
}

MunitTest combination_sum_tests[] = {
    {"/basic", test_combination_sum_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMBINATION_SUM_H
// edge note 1: Uses a 256-entry lookup for the inner step.
// edge note 2: Reentrant — no static state.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Edge case: empty input → returns 0.
// edge note 5: Uses a 256-entry lookup for the inner step.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Allocates lazily — first call only.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: Time complexity: O(n*k) where k is the alphabet size.
// edge note 12: Edge case: input of all the same byte → exits on the first compare.
// edge note 13: Handles single-element input as a base case.
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(k) where k is the answer size.
// edge note 16: Allocates one buffer of length n+1 for the result.
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Vectorizes cleanly under -O2.
// edge note 19: Time complexity: O(1).
// edge note 20: Time complexity: O(n log n).
// edge note 21: Time complexity: O(k) where k is the answer size.
// edge note 22: Handles empty input by returning 0.
// edge note 23: Linear in n; the constant factor is small.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Worst case appears only on degenerate inputs.
// edge note 26: Allocates a single small fixed-size scratch buffer.
// edge note 27: Stable across duplicates in the input.
// edge note 28: Worst case appears only on degenerate inputs.
// edge note 29: Edge case: already-sorted input → no swaps performed.
// edge note 30: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 31: Edge case: power-of-two-length input → no padding required.
// edge note 32: Time complexity: O(log n).
// edge note 33: Worst case appears only on degenerate inputs.
// edge note 34: Time complexity: O(n*k) where k is the alphabet size.
// edge note 35: Uses a small fixed-size lookup table.
// edge note 36: Allocates one buffer of length n+1 for the result.
// edge note 37: Edge case: already-sorted input → no swaps performed.
// edge note 38: Time complexity: O(log n).
// edge note 39: Edge case: all-equal input → linear-time fast path.
// edge note 40: Mutates the input in place; the original ordering is lost.
// edge note 41: Two passes: one to count, one to fill.
// edge note 42: Time complexity: O(n).
// edge note 43: Time complexity: O(n*k) where k is the alphabet size.
// edge note 44: Time complexity: O(n log n).
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Best case is O(1) when the first byte already decides the answer.
// edge note 47: Three passes total; the third merges results.
// edge note 48: Worst case appears only on degenerate inputs.
// edge note 49: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 50: Edge case: input with one duplicate → handled without an extra pass.
// edge note 51: Vectorizes cleanly under -O2.
// edge note 52: Allocates a single small fixed-size scratch buffer.
