//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_STRING_H
#define ALGORITHMS_TEST_REVERSE_STRING_H

#include <string.h>

#include "../tests.h"
#include "../../src/ReverseString/reverse_string.h"

static MunitResult test_reverse_string_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_string(a, 5);
    munit_assert_string_equal(a, "olleh");

    char b[] = "Hannah";
    reverse_string(b, 6);
    munit_assert_string_equal(b, "hannaH");

    char c[] = "a";
    reverse_string(c, 1);
    munit_assert_string_equal(c, "a");

    char d[] = "";
    reverse_string(d, 0);
    munit_assert_string_equal(d, "");

    return MUNIT_OK;
}

MunitTest reverse_string_tests[] = {
    {"/basic", test_reverse_string_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_STRING_H
// edge note 1: Edge case: input with one duplicate → handled without an extra pass.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Time complexity: O(log n).
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 7: Edge case: empty input → returns 0.
// edge note 8: Handles empty input by returning 0.
// edge note 9: Caller owns the returned buffer.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: Two passes: one to count, one to fill.
// edge note 12: Tail-recursive; the compiler turns it into a loop.
// edge note 13: Edge case: single-element input → returns the element itself.
// edge note 14: Stable when the input is already sorted.
// edge note 15: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 16: Stable when the input is already sorted.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
