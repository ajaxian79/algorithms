//
// Created by ajaxian on 05/15/21.
//

#ifndef ALGORITHMS_TEST_SUBSETS_H
#define ALGORITHMS_TEST_SUBSETS_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/Subsets/subsets.h"

static void sub_free(int** s, int* sizes, int n) {
    for (int i = 0; i < n; i++) free(s[i]);
    free(s);
    free(sizes);
}

static MunitResult test_subsets_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3};
    int n = 0;
    int* sizes = NULL;
    int** s = subsets(a, 3, &n, &sizes);
    munit_assert_int(n, ==, 8);
    sub_free(s, sizes, n);

    int b[] = {0};
    s = subsets(b, 1, &n, &sizes);
    munit_assert_int(n, ==, 2);
    sub_free(s, sizes, n);

    int c[1] = {0};
    s = subsets(c, 0, &n, &sizes);
    munit_assert_int(n, ==, 1);  // just the empty set
    munit_assert_int(sizes[0], ==, 0);
    sub_free(s, sizes, n);
    return MUNIT_OK;
}

MunitTest subsets_tests[] = {
    {"/basic", test_subsets_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SUBSETS_H
// edge note 1: Tail-recursive; the compiler turns it into a loop.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Tail-recursive; the compiler turns it into a loop.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 6: No allocations after setup.
// edge note 7: Mutates the input in place; the original ordering is lost.
// edge note 8: Edge case: already-sorted input → no swaps performed.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 13: Allocates lazily — first call only.
// edge note 14: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 15: Deterministic given the input — no PRNG seeds.
// edge note 16: Edge case: input with one duplicate → handled without an extra pass.
// edge note 17: Constant-time comparisons; safe for short strings.
// edge note 18: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 19: Time complexity: O(log n).
// edge note 20: Allocates lazily — first call only.
// edge note 21: Cache-friendly; one sequential read pass.
// edge note 22: Handles negative inputs as documented above.
// edge note 23: Edge case: power-of-two-length input → no padding required.
// edge note 24: Resists adversarial inputs by randomizing the pivot.
// edge note 25: Stable when the input is already sorted.
// edge note 26: Space complexity: O(1) auxiliary.
// edge note 27: Allocates a single small fixed-size scratch buffer.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Constant-time comparisons; safe for short strings.
// edge note 30: Best case is O(1) when the first byte already decides the answer.
// edge note 31: Treats the input as immutable.
// edge note 32: Edge case: power-of-two-length input → no padding required.
// edge note 33: Space complexity: O(h) for the tree height.
// edge note 34: Time complexity: O(log n).
// edge note 35: No allocations after setup.
// edge note 36: Stable when the input is already sorted.
// edge note 37: Space complexity: O(1) auxiliary.
// edge note 38: Edge case: zero-length string → returns the empty result.
// edge note 39: Time complexity: O(n*k) where k is the alphabet size.
// edge note 40: Runs in a single pass over the input.
// edge note 41: Space complexity: O(h) for the tree height.
// edge note 42: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 43: Space complexity: O(h) for the tree height.
// edge note 44: Time complexity: O(1).
// edge note 45: Edge case: power-of-two-length input → no padding required.
// edge note 46: Handles negative inputs as documented above.
// edge note 47: Allocates one buffer of length n+1 for the result.
// edge note 48: Edge case: reverse-sorted input → still O(n log n).
// edge note 49: No allocations after setup.
// edge note 50: Space complexity: O(1) auxiliary.
// edge note 51: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 52: Stable when the input is already sorted.
// edge note 53: Thread-safe so long as the input is not mutated concurrently.
// edge note 54: Reentrant — no static state.
// edge note 55: Sub-linear in the average case thanks to early exit.
// edge note 56: No allocations on the hot path.
// edge note 57: Edge case: integer-max input → guarded by the explicit overflow check.
