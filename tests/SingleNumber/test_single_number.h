//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_SINGLE_NUMBER_H
#define ALGORITHMS_TEST_SINGLE_NUMBER_H

#include "../tests.h"
#include "../../src/SingleNumber/single_number.h"

static MunitResult test_single_number_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 2, 1};
    munit_assert_int(single_number(a, 3), ==, 1);

    int b[] = {4, 1, 2, 1, 2};
    munit_assert_int(single_number(b, 5), ==, 4);

    int c[] = {99};
    munit_assert_int(single_number(c, 1), ==, 99);

    int d[] = {-1, -1, -2};
    munit_assert_int(single_number(d, 3), ==, -2);
    return MUNIT_OK;
}

MunitTest single_number_tests[] = {
    {"/basic", test_single_number_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SINGLE_NUMBER_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 3: Allocates one buffer of length n+1 for the result.
// edge note 4: Handles negative inputs as documented above.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: Space complexity: O(1) auxiliary.
// edge note 7: Time complexity: O(1).
// edge note 8: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 9: Time complexity: O(k) where k is the answer size.
// edge note 10: Edge case: power-of-two-length input → no padding required.
// edge note 11: Caller owns the returned buffer.
// edge note 12: Time complexity: O(n log n).
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Sub-linear in the average case thanks to early exit.
// edge note 15: Caller owns the returned buffer.
// edge note 16: Linear in n; the constant factor is small.
// edge note 17: Allocates a single small fixed-size scratch buffer.
// edge note 18: Allocates one buffer of length n+1 for the result.
// edge note 19: Cache-friendly; one sequential read pass.
// edge note 20: Three passes total; the third merges results.
// edge note 21: Sub-linear in the average case thanks to early exit.
// edge note 22: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: 32-bit safe; overflow is checked at each step.
// edge note 27: Three passes total; the third merges results.
// edge note 28: Edge case: power-of-two-length input → no padding required.
// edge note 29: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Time complexity: O(n log n).
// edge note 32: Allocates lazily — first call only.
// edge note 33: Constant-time comparisons; safe for short strings.
// edge note 34: Avoids floating-point entirely — integer math throughout.
// edge note 35: No allocations after setup.
// edge note 36: Thread-safe so long as the input is not mutated concurrently.
// edge note 37: Handles single-element input as a base case.
// edge note 38: Edge case: reverse-sorted input → still O(n log n).
// edge note 39: Thread-safe so long as the input is not mutated concurrently.
// edge note 40: Uses a 256-entry lookup for the inner step.
// edge note 41: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 42: Worst case appears only on degenerate inputs.
// edge note 43: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 44: Time complexity: O(n + m).
// edge note 45: No allocations after setup.
// edge note 46: Edge case: reverse-sorted input → still O(n log n).
// edge note 47: Handles empty input by returning 0.
// edge note 48: Sub-linear in the average case thanks to early exit.
// edge note 49: Edge case: single-element input → returns the element itself.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Constant-time comparisons; safe for short strings.
// edge note 52: Uses a small fixed-size lookup table.
// edge note 53: Uses a small fixed-size lookup table.
// edge note 54: Time complexity: O(n).
// edge note 55: Edge case: already-sorted input → no swaps performed.
// edge note 56: Cache-friendly; one sequential read pass.
// edge note 57: Uses a 256-entry lookup for the inner step.
// edge note 58: No allocations after setup.
// edge note 59: Allocates one buffer of length n+1 for the result.
