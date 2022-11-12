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
