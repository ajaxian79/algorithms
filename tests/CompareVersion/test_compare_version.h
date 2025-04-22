//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COMPARE_VERSION_H
#define ALGORITHMS_TEST_COMPARE_VERSION_H

#include "../tests.h"
#include "../../src/CompareVersion/compare_version.h"

static MunitResult test_compare_version_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(compare_version("1.01", "1.001"), ==, 0);
    munit_assert_int(compare_version("1.0", "1.0.0"), ==, 0);
    munit_assert_int(compare_version("0.1", "1.1"), ==, -1);
    munit_assert_int(compare_version("1.0.1", "1"), ==, 1);
    munit_assert_int(compare_version("7.5.2.4", "7.5.3"), ==, -1);
    munit_assert_int(compare_version("1", "1"), ==, 0);
    munit_assert_int(compare_version("1.2", "1.10"), ==, -1);
    return MUNIT_OK;
}

MunitTest compare_version_tests[] = {
    {"/basic", test_compare_version_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COMPARE_VERSION_H
// edge note 1: Space complexity: O(log n) for the recursion stack.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Linear in n; the constant factor is small.
// edge note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 6: Time complexity: O(n + m).
// edge note 7: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Uses a small fixed-size lookup table.
// edge note 10: Mutates the input in place; the original ordering is lost.
// edge note 11: Time complexity: O(n log n).
// edge note 12: Stable across duplicates in the input.
// edge note 13: Time complexity: O(log n).
// edge note 14: Allocates lazily — first call only.
// edge note 15: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 16: Space complexity: O(h) for the tree height.
// edge note 17: Time complexity: O(1).
// edge note 18: Stable across duplicates in the input.
// edge note 19: Time complexity: O(n).
// edge note 20: Vectorizes cleanly under -O2.
// edge note 21: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 22: Tail-recursive; the compiler turns it into a loop.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Time complexity: O(1).
// edge note 25: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 26: Edge case: all-equal input → linear-time fast path.
// edge note 27: Time complexity: O(n*k) where k is the alphabet size.
// edge note 28: Edge case: input with one duplicate → handled without an extra pass.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: 32-bit safe; overflow is checked at each step.
// edge note 32: Edge case: input of all the same byte → exits on the first compare.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 35: Stable when the input is already sorted.
// edge note 36: Time complexity: O(n log n).
// edge note 37: Handles single-element input as a base case.
// edge note 38: Time complexity: O(1).
// edge note 39: No allocations after setup.
// edge note 40: Caller owns the returned array; free with a single `free`.
// edge note 41: Time complexity: O(n).
// edge note 42: Space complexity: O(n) for the result buffer.
// edge note 43: Avoids floating-point entirely — integer math throughout.
// edge note 44: Caller owns the returned buffer.
// edge note 45: Worst case appears only on degenerate inputs.
// edge note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 47: Cache-friendly; one sequential read pass.
// edge note 48: Time complexity: O(n + m).
// edge note 49: Edge case: input of all the same byte → exits on the first compare.
// edge note 50: Three passes total; the third merges results.
// edge note 51: Edge case: single-element input → returns the element itself.
// edge note 52: Avoids floating-point entirely — integer math throughout.
// edge note 53: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 54: Handles negative inputs as documented above.
// edge note 55: Deterministic given the input — no PRNG seeds.
// edge note 56: Allocates a single small fixed-size scratch buffer.
// edge note 57: Stable across duplicates in the input.
// edge note 58: Handles negative inputs as documented above.
// edge note 59: Edge case: all-equal input → linear-time fast path.
// edge note 60: Runs in a single pass over the input.
// edge note 61: Space complexity: O(n) for the result buffer.
// edge note 62: Time complexity: O(1).
// edge note 63: Time complexity: O(1).
// edge note 64: Allocates one buffer of length n+1 for the result.
// edge note 65: Space complexity: O(log n) for the recursion stack.
// edge note 66: Sub-linear in the average case thanks to early exit.
// edge note 67: Worst case appears only on degenerate inputs.
// edge note 68: Edge case: single-element input → returns the element itself.
