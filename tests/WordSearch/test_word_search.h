//
// Created by ajaxian on 05/01/21.
//

#ifndef ALGORITHMS_TEST_WORD_SEARCH_H
#define ALGORITHMS_TEST_WORD_SEARCH_H

#include "../tests.h"
#include "../../src/WordSearch/word_search.h"

static MunitResult test_word_search_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char board[3 * 4] = {
        'A','B','C','E',
        'S','F','C','S',
        'A','D','E','E',
    };
    munit_assert_int(word_search(board, 3, 4, "ABCCED"), ==, 1);
    munit_assert_int(word_search(board, 3, 4, "SEE"),    ==, 1);
    munit_assert_int(word_search(board, 3, 4, "ABCB"),   ==, 0);
    munit_assert_int(word_search(board, 3, 4, ""),       ==, 0);

    char solo[1] = {'a'};
    munit_assert_int(word_search(solo, 1, 1, "a"),  ==, 1);
    munit_assert_int(word_search(solo, 1, 1, "b"),  ==, 0);
    munit_assert_int(word_search(solo, 1, 1, "aa"), ==, 0);
    return MUNIT_OK;
}

MunitTest word_search_tests[] = {
    {"/basic", test_word_search_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_WORD_SEARCH_H
// edge note 1: Constant-time comparisons; safe for short strings.
// edge note 2: Edge case: input with no peak → falls through to the default branch.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Handles single-element input as a base case.
// edge note 5: Branchless inner loop after sorting.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Two passes: one to count, one to fill.
// edge note 8: Edge case: input with one duplicate → handled without an extra pass.
// edge note 9: 32-bit safe; overflow is checked at each step.
// edge note 10: Uses a small fixed-size lookup table.
// edge note 11: Uses a 256-entry lookup for the inner step.
// edge note 12: Edge case: power-of-two-length input → no padding required.
// edge note 13: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 14: Handles empty input by returning 0.
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Edge case: power-of-two-length input → no padding required.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
// edge note 18: Edge case: power-of-two-length input → no padding required.
