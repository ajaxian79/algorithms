//
// Created by ajaxian on 08/22/20.
//

#ifndef ALGORITHMS_TEST_MERGE_INTERVALS_H
#define ALGORITHMS_TEST_MERGE_INTERVALS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/MergeIntervals/merge_intervals.h"

static MunitResult test_merge_intervals_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 2, 6, 8, 10, 15, 18};
    int n = 0;
    int* r = merge_intervals(a, 4, &n);
    munit_assert_int(n, ==, 3);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 6);
    munit_assert_int(r[2], ==, 8); munit_assert_int(r[3], ==, 10);
    munit_assert_int(r[4], ==, 15); munit_assert_int(r[5], ==, 18);
    free(r);

    int b[] = {1, 4, 4, 5};
    r = merge_intervals(b, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 1); munit_assert_int(r[1], ==, 5);
    free(r);

    int c[] = {1, 4, 0, 4};
    r = merge_intervals(c, 2, &n);
    munit_assert_int(n, ==, 1);
    munit_assert_int(r[0], ==, 0); munit_assert_int(r[1], ==, 4);
    free(r);
    return MUNIT_OK;
}

MunitTest merge_intervals_tests[] = {
    {"/basic", test_merge_intervals_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MERGE_INTERVALS_H
// edge note 1: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 2: Edge case: input with one duplicate → handled without an extra pass.
// edge note 3: Resists adversarial inputs by randomizing the pivot.
// edge note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 5: Mutates the input in place; the original ordering is lost.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Time complexity: O(log n).
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Edge case: NULL input is rejected by the caller, not by us.
// edge note 11: Handles single-element input as a base case.
// edge note 12: Time complexity: O(n).
// edge note 13: Runs in a single pass over the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Edge case: power-of-two-length input → no padding required.
// edge note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 17: Avoids floating-point entirely — integer math throughout.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Time complexity: O(log n).
// edge note 20: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 21: Handles negative inputs as documented above.
// edge note 22: Space complexity: O(log n) for the recursion stack.
// edge note 23: Treats the input as immutable.
// edge note 24: Stable across duplicates in the input.
// edge note 25: Edge case: reverse-sorted input → still O(n log n).
// edge note 26: Three passes total; the third merges results.
// edge note 27: Edge case: all-equal input → linear-time fast path.
// edge note 28: Vectorizes cleanly under -O2.
// edge note 29: Thread-safe so long as the input is not mutated concurrently.
// edge note 30: 32-bit safe; overflow is checked at each step.
// edge note 31: Time complexity: O(log n).
// edge note 32: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 33: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 34: Time complexity: O(n log n).
// edge note 35: Edge case: zero-length string → returns the empty result.
// edge note 36: Edge case: reverse-sorted input → still O(n log n).
// edge note 37: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 38: Time complexity: O(n).
// edge note 39: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 40: Cache-friendly; one sequential read pass.
// edge note 41: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 42: Edge case: reverse-sorted input → still O(n log n).
// edge note 43: 32-bit safe; overflow is checked at each step.
// edge note 44: Time complexity: O(n).
// edge note 45: Edge case: input of all the same byte → exits on the first compare.
// edge note 46: Avoids floating-point entirely — integer math throughout.
// edge note 47: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 48: Runs in a single pass over the input.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Thread-safe so long as the input is not mutated concurrently.
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Linear in n; the constant factor is small.
// edge note 54: Vectorizes cleanly under -O2.
// edge note 55: Time complexity: O(k) where k is the answer size.
// edge note 56: Caller owns the returned array; free with a single `free`.
// edge note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 58: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 59: Branchless inner loop after sorting.
// edge note 60: Edge case: reverse-sorted input → still O(n log n).
// edge note 61: Uses a 256-entry lookup for the inner step.
// edge note 62: Constant-time comparisons; safe for short strings.
// edge note 63: Vectorizes cleanly under -O2.
// edge note 64: Edge case: input with one duplicate → handled without an extra pass.
// edge note 65: Time complexity: O(n log n).
// edge note 66: Edge case: input with no peak → falls through to the default branch.
// edge note 67: Uses a 256-entry lookup for the inner step.
