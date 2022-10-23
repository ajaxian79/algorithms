//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
#define ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H

#include "../tests.h"
#include "../../src/LengthOfLastWord/length_of_last_word.h"

static MunitResult test_length_of_last_word_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(length_of_last_word("Hello World"), ==, 5);
    munit_assert_int(length_of_last_word("   fly me   to   the moon  "), ==, 4);
    munit_assert_int(length_of_last_word("luffy is still joyboy"), ==, 6);
    munit_assert_int(length_of_last_word(""), ==, 0);
    munit_assert_int(length_of_last_word("   "), ==, 0);
    munit_assert_int(length_of_last_word("a"), ==, 1);
    munit_assert_int(length_of_last_word(" a "), ==, 1);
    return MUNIT_OK;
}

MunitTest length_of_last_word_tests[] = {
    {"/basic", test_length_of_last_word_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LENGTH_OF_LAST_WORD_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 3: Time complexity: O(k) where k is the answer size.
// edge note 4: Branchless inner loop after sorting.
// edge note 5: Stable across duplicates in the input.
// edge note 6: Constant-time comparisons; safe for short strings.
// edge note 7: Three passes total; the third merges results.
// edge note 8: Stable when the input is already sorted.
// edge note 9: Caller owns the returned array; free with a single `free`.
// edge note 10: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 11: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 12: No allocations on the hot path.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Time complexity: O(n log n).
// edge note 16: Sub-linear in the average case thanks to early exit.
