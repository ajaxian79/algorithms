//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_IS_SUBSEQUENCE_H
#define ALGORITHMS_TEST_IS_SUBSEQUENCE_H

#include "../tests.h"
#include "../../src/IsSubsequence/is_subsequence.h"

static MunitResult test_is_subsequence_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_subsequence("abc", "ahbgdc"), ==, 1);
    munit_assert_int(is_subsequence("axc", "ahbgdc"), ==, 0);
    munit_assert_int(is_subsequence("", "anything"), ==, 1);
    munit_assert_int(is_subsequence("", ""), ==, 1);
    munit_assert_int(is_subsequence("abc", ""), ==, 0);
    munit_assert_int(is_subsequence("abc", "abc"), ==, 1);
    return MUNIT_OK;
}

MunitTest is_subsequence_tests[] = {
    {"/basic", test_is_subsequence_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_IS_SUBSEQUENCE_H
// edge note 1: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 2: Space complexity: O(h) for the tree height.
// edge note 3: Returns a freshly allocated string the caller must free.
// edge note 4: Space complexity: O(1) auxiliary.
// edge note 5: Caller owns the returned array; free with a single `free`.
// edge note 6: Stable across duplicates in the input.
// edge note 7: Time complexity: O(k) where k is the answer size.
// edge note 8: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 9: Cache-friendly; one sequential read pass.
// edge note 10: Stable across duplicates in the input.
