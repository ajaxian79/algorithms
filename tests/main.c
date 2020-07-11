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
#include "FizzBuzz/test_fizz_buzz.h"
#include "CountPrimes/test_count_primes.h"
#include "PowerOfTwo/test_power_of_two.h"
#include "PowerOfThree/test_power_of_three.h"
#include "PowerOfFour/test_power_of_four.h"
#include "ReverseWords/test_reverse_words.h"
#include "LengthOfLastWord/test_length_of_last_word.h"
#include "AddBinary/test_add_binary.h"
#include "AddStrings/test_add_strings.h"
#include "MultiplyStrings/test_multiply_strings.h"
#include "ValidPalindromeStr/test_valid_palindrome_str.h"
#include "CountAndSay/test_count_and_say.h"
#include "ZigZagConversion/test_zigzag.h"
#include "StringToInteger/test_string_to_integer.h"
#include "CompareVersion/test_compare_version.h"
#include "ExcelColumnNumber/test_excel_column_number.h"
#include "ExcelColumnTitle/test_excel_column_title.h"
#include "RotateString/test_rotate_string.h"
#include "ReverseVowels/test_reverse_vowels.h"
#include "FirstUniqueChar/test_first_unique_char.h"
#include "RansomNote/test_ransom_note.h"
#include "IsSubsequence/test_is_subsequence.h"
#include "HappyNumber/test_happy_number.h"
#include "UglyNumber/test_ugly_number.h"
#include "HammingDistance/test_hamming_distance.h"
#include "NumberOf1Bits/test_number_of_1_bits.h"
#include "ReverseBits/test_reverse_bits.h"
#include "MissingNumber/test_missing_number.h"
#include "NumberComplement/test_number_complement.h"
#include "BinaryGap/test_binary_gap.h"
#include "ToHexString/test_to_hex.h"
#include "AddDigits/test_add_digits.h"
#include "CountTrailingZeros/test_trailing_zeros.h"
#include "PerfectSquare/test_perfect_square.h"
#include "ConvertToBase7/test_convert_to_base7.h"
#include "PascalsTriangleRow/test_pascals_row.h"
#include "PascalsTriangleN/test_pascals_n.h"
#include "GenerateParens/test_generate_parens.h"

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
        },{
                "/fizz_buzz",
                fizz_buzz_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/count_primes",
                count_primes_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/power_of_two",
                power_of_two_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/power_of_three",
                power_of_three_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/power_of_four",
                power_of_four_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/reverse_words",
                reverse_words_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/length_of_last_word",
                length_of_last_word_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/add_binary",
                add_binary_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/add_strings",
                add_strings_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/multiply_strings",
                multiply_strings_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/valid_palindrome_str",
                valid_palindrome_str_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/count_and_say",
                count_and_say_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/zigzag",
                zigzag_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/my_atoi",
                my_atoi_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/compare_version",
                compare_version_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/excel_column_number",
                excel_column_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/excel_column_title",
                excel_column_title_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/rotate_string",
                rotate_string_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/reverse_vowels",
                reverse_vowels_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/first_unique_char",
                first_unique_char_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/ransom_note",
                ransom_note_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/is_subsequence",
                is_subsequence_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/happy_number",
                happy_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/ugly_number",
                ugly_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/hamming_distance",
                hamming_distance_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/number_of_1_bits",
                number_of_1_bits_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/reverse_bits",
                reverse_bits_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/missing_number",
                missing_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/number_complement",
                number_complement_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/binary_gap",
                binary_gap_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/to_hex",
                to_hex_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/add_digits",
                add_digits_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/trailing_zeros",
                trailing_zeros_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/perfect_square",
                perfect_square_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/convert_to_base7",
                convert_to_base7_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/pascals_row",
                pascals_row_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/pascals_n",
                pascals_n_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/generate_parens",
                generate_parens_tests,
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
