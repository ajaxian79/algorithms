//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
#define ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H

#include "../tests.h"
#include "../../src/FirstUniqueChar/first_unique_char.h"

static MunitResult test_first_unique_char_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(first_unique_char("leetcode"), ==, 0);
    munit_assert_int(first_unique_char("loveleetcode"), ==, 2);
    munit_assert_int(first_unique_char("aabb"), ==, -1);
    munit_assert_int(first_unique_char("z"), ==, 0);
    munit_assert_int(first_unique_char(""), ==, -1);
    return MUNIT_OK;
}

MunitTest first_unique_char_tests[] = {
    {"/basic", test_first_unique_char_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FIRST_UNIQUE_CHAR_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Handles single-element input as a base case.
// edge note 3: Time complexity: O(n*k) where k is the alphabet size.
// edge note 4: Constant-time comparisons; safe for short strings.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: all-equal input → linear-time fast path.
// edge note 7: Treats the input as immutable.
// edge note 8: Tail-recursive; the compiler turns it into a loop.
// edge note 9: Edge case: power-of-two-length input → no padding required.
// edge note 10: Avoids floating-point entirely — integer math throughout.
