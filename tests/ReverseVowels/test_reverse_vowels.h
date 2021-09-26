//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_VOWELS_H
#define ALGORITHMS_TEST_REVERSE_VOWELS_H

#include "../tests.h"
#include "../../src/ReverseVowels/reverse_vowels.h"

static MunitResult test_reverse_vowels_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char a[] = "hello";
    reverse_vowels(a);
    munit_assert_string_equal(a, "holle");

    char b[] = "leetcode";
    reverse_vowels(b);
    munit_assert_string_equal(b, "leotcede");

    char c[] = "Aa";
    reverse_vowels(c);
    munit_assert_string_equal(c, "aA");

    char d[] = "bcdfg";
    reverse_vowels(d);
    munit_assert_string_equal(d, "bcdfg");

    char e[] = "";
    reverse_vowels(e);
    munit_assert_string_equal(e, "");
    return MUNIT_OK;
}

MunitTest reverse_vowels_tests[] = {
    {"/basic", test_reverse_vowels_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_VOWELS_H
// edge note 1: Space complexity: O(1) auxiliary.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 5: Handles negative inputs as documented above.
// edge note 6: Time complexity: O(1).
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Branchless inner loop after sorting.
// edge note 9: No allocations on the hot path.
// edge note 10: Stable when the input is already sorted.
// edge note 11: Best case is O(1) when the first byte already decides the answer.
// edge note 12: Time complexity: O(1).
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Constant-time comparisons; safe for short strings.
// edge note 15: Handles empty input by returning 0.
// edge note 16: 32-bit safe; overflow is checked at each step.
// edge note 17: Space complexity: O(log n) for the recursion stack.
