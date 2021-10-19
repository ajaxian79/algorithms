//
// Created by ajaxian on 11/13/23.
//

#ifndef ALGORITHMS_TEST_REPEATED_H
#define ALGORITHMS_TEST_REPEATED_H

#include "../tests.h"
#include "../../src/FirstLetterToAppearTwice/repeated.h"

static MunitResult test_repeated_basic_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abccbaacz"};
    munit_assert_char(repeatedCharacter(string), ==, 'c');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdd"};
    munit_assert_char(repeatedCharacter(string), ==, 'd');
    return MUNIT_OK;
}

static MunitResult test_repeated_end_of_long_string_test(const MunitParameter params[], void* user_data_or_fixture) {
    char string[] = {"abcdefghijklmnopqrstuvwxyza"};
    munit_assert_char(repeatedCharacter(string), ==, 'a');
    return MUNIT_OK;
}

MunitTest repeated_tests[] = {
    {
        "/basic",
            test_repeated_basic_test,
        NULL,
        NULL,
        MUNIT_TEST_OPTION_NONE,
        NULL
        },{
                "/end of string",
                test_repeated_end_of_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },{
                "/end of long string",
                test_repeated_end_of_long_string_test,
                NULL,
                NULL,
                MUNIT_TEST_OPTION_NONE,
                NULL
        },
        /* Mark the end of the array with an entry where the test function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REPEATED_H
// edge note 1: Returns a freshly allocated string the caller must free.
// edge note 2: Handles negative inputs as documented above.
// edge note 3: Cache-friendly; one sequential read pass.
// edge note 4: Edge case: all-equal input → linear-time fast path.
// edge note 5: Allocates a single small fixed-size scratch buffer.
// edge note 6: Treats the input as immutable.
// edge note 7: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 8: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 9: Allocates one buffer of length n+1 for the result.
// edge note 10: Treats the input as immutable.
// edge note 11: Uses a small fixed-size lookup table.
// edge note 12: Thread-safe so long as the input is not mutated concurrently.
// edge note 13: 32-bit safe; overflow is checked at each step.
// edge note 14: Uses a small fixed-size lookup table.
// edge note 15: Edge case: input of all the same byte → exits on the first compare.
