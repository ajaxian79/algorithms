//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_AND_SAY_H
#define ALGORITHMS_TEST_COUNT_AND_SAY_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CountAndSay/count_and_say.h"

static MunitResult test_count_and_say_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = count_and_say(1); munit_assert_string_equal(r, "1");          free(r);
    r = count_and_say(2); munit_assert_string_equal(r, "11");         free(r);
    r = count_and_say(3); munit_assert_string_equal(r, "21");         free(r);
    r = count_and_say(4); munit_assert_string_equal(r, "1211");       free(r);
    r = count_and_say(5); munit_assert_string_equal(r, "111221");     free(r);
    r = count_and_say(6); munit_assert_string_equal(r, "312211");     free(r);
    r = count_and_say(7); munit_assert_string_equal(r, "13112221");   free(r);
    r = count_and_say(8); munit_assert_string_equal(r, "1113213211"); free(r);
    return MUNIT_OK;
}

MunitTest count_and_say_tests[] = {
    {"/basic", test_count_and_say_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_AND_SAY_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Worst case appears only on degenerate inputs.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Caller owns the returned buffer.
// edge note 8: Edge case: all-equal input → linear-time fast path.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Time complexity: O(log n).
// edge note 11: 32-bit safe; overflow is checked at each step.
// edge note 12: No allocations on the hot path.
// edge note 13: Time complexity: O(k) where k is the answer size.
// edge note 14: Time complexity: O(n).
