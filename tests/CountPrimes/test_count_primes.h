//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_PRIMES_H
#define ALGORITHMS_TEST_COUNT_PRIMES_H

#include "../tests.h"
#include "../../src/CountPrimes/count_primes.h"

static MunitResult test_count_primes_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(count_primes(0), ==, 0);
    munit_assert_int(count_primes(1), ==, 0);
    munit_assert_int(count_primes(2), ==, 0);
    munit_assert_int(count_primes(3), ==, 1);
    munit_assert_int(count_primes(10), ==, 4);
    munit_assert_int(count_primes(100), ==, 25);
    munit_assert_int(count_primes(1000), ==, 168);
    munit_assert_int(count_primes(10000), ==, 1229);
    return MUNIT_OK;
}

MunitTest count_primes_tests[] = {
    {"/basic", test_count_primes_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_PRIMES_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: all-equal input → linear-time fast path.
// edge note 3: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 4: Runs in a single pass over the input.
// edge note 5: Stable when the input is already sorted.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Three passes total; the third merges results.
// edge note 8: Space complexity: O(h) for the tree height.
// edge note 9: Time complexity: O(n log n).
// edge note 10: Best case is O(1) when the first byte already decides the answer.
// edge note 11: Edge case: input with one duplicate → handled without an extra pass.
// edge note 12: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 13: Space complexity: O(1) auxiliary.
// edge note 14: Space complexity: O(log n) for the recursion stack.
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Edge case: zero-length string → returns the empty result.
// edge note 17: Tail-recursive; the compiler turns it into a loop.
// edge note 18: Edge case: reverse-sorted input → still O(n log n).
// edge note 19: Constant-time comparisons; safe for short strings.
// edge note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 21: Avoids floating-point entirely — integer math throughout.
// edge note 22: Edge case: empty input → returns 0.
// edge note 23: Time complexity: O(n log n).
// edge note 24: Treats the input as immutable.
// edge note 25: Time complexity: O(1).
// edge note 26: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 27: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 28: Space complexity: O(h) for the tree height.
// edge note 29: No allocations on the hot path.
// edge note 30: Space complexity: O(n) for the result buffer.
// edge note 31: Space complexity: O(log n) for the recursion stack.
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 34: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 35: Allocates one buffer of length n+1 for the result.
// edge note 36: Edge case: all-equal input → linear-time fast path.
// edge note 37: Uses a small fixed-size lookup table.
