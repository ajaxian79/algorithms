#include <stdio.h>

#include "../vendor/munit/munit.h"

#include "TwoSum/test_twosum.h"
#include "FirstLetterToAppearTwice/test_repeated.h"
#include "MedianOfTwoSortedArrays/test_median.h"
#include "ReverseInteger/test_reverse_integer.h"
#include "PalindromeNumber/test_palindrome_number.h"
#include "RomanToInt/test_roman_to_int.h"
#include "IntToRoman/test_int_to_roman.h"
#include "LongestCommonPrefix/test_lcp.h"
#include "ValidParentheses/test_valid_parens.h"
#include "PlusOne/test_plus_one.h"
#include "ClimbStairs/test_climb_stairs.h"
#include "SingleNumber/test_single_number.h"
#include "MajorityElement/test_majority_element.h"
#include "ContainsDuplicate/test_contains_duplicate.h"
#include "ValidAnagram/test_valid_anagram.h"
#include "MoveZeroes/test_move_zeroes.h"
#include "ReverseString/test_reverse_string.h"

static void*
test_setup(const MunitParameter params[], void* user_data) {
    return strdup("Hello, world!");
}

static void
test_tear_down(void* fixture) {
    free(fixture);
}

static MunitResult test_basic_setup(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(1, ==, 1);
    return MUNIT_OK;
}


MunitTest tests[] = {
        {
                "/basic-setup", /* name */
                test_basic_setup, /* test */
                NULL, /* setup */
                NULL, /* tear_down */
                MUNIT_TEST_OPTION_NONE, /* options */
                NULL /* parameters */
        },
        /* Mark the end of the array with an entry where the test
         * function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

MunitSuite suites[] = {
        {
                "/twosum", /* name */
                twosum_tests, /* tests */
                NULL, /* suites */
                1, /* iterations */
                MUNIT_SUITE_OPTION_NONE /* options */
        },{
                "/repeated", /* name */
                repeated_tests, /* tests */
                NULL, /* suites */
                1, /* iterations */
                MUNIT_SUITE_OPTION_NONE /* options */
        },{
                "/median", /* name */
                median_tests, /* tests */
                NULL, /* suites */
                1, /* iterations */
                MUNIT_SUITE_OPTION_NONE /* options */
        },{
                "/reverse_int",
                reverse_int_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/palindrome_number",
                palindrome_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/roman_to_int",
                roman_to_int_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/int_to_roman",
                int_to_roman_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/lcp",
                lcp_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/valid_parens",
                valid_parens_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/plus_one",
                plus_one_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/climb_stairs",
                climb_stairs_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/single_number",
                single_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/majority_element",
                majority_element_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/contains_duplicate",
                contains_duplicate_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/valid_anagram",
                valid_anagram_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/move_zeroes",
                move_zeroes_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/reverse_string",
                reverse_string_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },
        { NULL, NULL, NULL, 0, MUNIT_SUITE_OPTION_NONE }
};


int main(int argc, char *argv[]) {

    MunitSuite suite = {
            "/all", /* name */
            tests, /* tests */
            suites, /* suites */
            1, /* iterations */
            MUNIT_SUITE_OPTION_NONE /* options */
    };

    return munit_suite_main(&suite, NULL, argc, argv);
}
