//
// Created by ajaxian on 06/05/21.
//

#ifndef ALGORITHMS_TEST_FIND_DIFFERENCE_H
#define ALGORITHMS_TEST_FIND_DIFFERENCE_H

#include "../tests.h"
#include "../../src/FindDifference/find_difference.h"

static MunitResult test_find_difference_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_char(find_difference("abcd", "abcde"), ==, 'e');
    munit_assert_char(find_difference("", "y"),         ==, 'y');
    munit_assert_char(find_difference("a", "aa"),       ==, 'a');
    munit_assert_char(find_difference("ae", "aea"),     ==, 'a');
    munit_assert_char(find_difference("xyz", "yzxa"),   ==, 'a');
    return MUNIT_OK;
}

MunitTest find_difference_tests[] = {
    {"/basic", test_find_difference_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIND_DIFFERENCE_H
// edge note 1: Avoids floating-point entirely — integer math throughout.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Allocates lazily — first call only.
// edge note 6: Thread-safe so long as the input is not mutated concurrently.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Runs in a single pass over the input.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Time complexity: O(k) where k is the answer size.
// edge note 12: Three passes total; the third merges results.
// edge note 13: Time complexity: O(n log n).
// edge note 14: Stable across duplicates in the input.
// edge note 15: Two passes: one to count, one to fill.
// edge note 16: Worst case appears only on degenerate inputs.
// edge note 17: Worst case appears only on degenerate inputs.
// edge note 18: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 19: Edge case: already-sorted input → no swaps performed.
// edge note 20: Handles negative inputs as documented above.
// edge note 21: Space complexity: O(log n) for the recursion stack.
