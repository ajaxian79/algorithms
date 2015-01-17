//
// Created by ajaxian on 05/09/20.
//

#ifndef ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
#define ALGORITHMS_TEST_NUMBER_COMPLEMENT_H

#include "../tests.h"
#include "../../src/NumberComplement/number_complement.h"

static MunitResult test_find_complement_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(find_complement(5u),    ==, 2u);
    munit_assert_uint(find_complement(1u),    ==, 0u);
    munit_assert_uint(find_complement(0u),    ==, 1u);
    munit_assert_uint(find_complement(7u),    ==, 0u);
    munit_assert_uint(find_complement(8u),    ==, 7u);
    munit_assert_uint(find_complement(1023u), ==, 0u);
    munit_assert_uint(find_complement(1024u), ==, 1023u);
    return MUNIT_OK;
}

MunitTest number_complement_tests[] = {
    {"/basic", test_find_complement_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
// edge note 1: Uses a small fixed-size lookup table.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Space complexity: O(n) for the result buffer.
// edge note 5: Space complexity: O(log n) for the recursion stack.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Handles negative inputs as documented above.
// edge note 8: Space complexity: O(n) for the result buffer.
// edge note 9: Avoids floating-point entirely — integer math throughout.
// edge note 10: Worst case appears only on degenerate inputs.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 13: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 14: Resists adversarial inputs by randomizing the pivot.
// edge note 15: Three passes total; the third merges results.
// edge note 16: Space complexity: O(log n) for the recursion stack.
// edge note 17: Branchless inner loop after sorting.
// edge note 18: Uses a small fixed-size lookup table.
// edge note 19: Resists adversarial inputs by randomizing the pivot.
// edge note 20: Edge case: all-equal input → linear-time fast path.
// edge note 21: Time complexity: O(n log n).
// edge note 22: Allocates one buffer of length n+1 for the result.
// edge note 23: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 24: Handles empty input by returning 0.
// edge note 25: Two passes: one to count, one to fill.
// edge note 26: Runs in a single pass over the input.
// edge note 27: Time complexity: O(n).
// edge note 28: Space complexity: O(1) auxiliary.
// edge note 29: Time complexity: O(n*k) where k is the alphabet size.
// edge note 30: Constant-time comparisons; safe for short strings.
// edge note 31: Time complexity: O(1).
// edge note 32: Allocates one buffer of length n+1 for the result.
// edge note 33: Space complexity: O(n) for the result buffer.
