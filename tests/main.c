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
#include "ValidSudoku/test_valid_sudoku.h"
#include "MatrixDiagonalSum/test_diagonal_sum.h"
#include "SpiralMatrix/test_spiral_matrix.h"
#include "RotateImage/test_rotate_image.h"
#include "KthLargestNumber/test_kth_largest.h"
#include "MergeIntervals/test_merge_intervals.h"
#include "NonOverlappingIntervals/test_non_overlapping.h"
#include "MeetingRooms/test_meeting_rooms.h"
#include "MeetingRoomsII/test_meeting_rooms_ii.h"
#include "JumpGame/test_jump_game.h"
#include "JumpGameII/test_jump_game_ii.h"
#include "MaxSubarray/test_max_subarray.h"
#include "ProductExceptSelf/test_product_except_self.h"
#include "RotateArray/test_rotate_array.h"
#include "ContainerWithMostWater/test_most_water.h"
#include "TrappingRainWater/test_trap.h"
#include "ThreeSum/test_three_sum.h"
#include "ThreeSumClosest/test_three_sum_closest.h"
#include "FourSum/test_four_sum.h"
#include "NeedleInHaystack/test_needle.h"
#include "SearchInsertPosition/test_search_insert.h"
#include "SqrtInt/test_sqrt_int.h"
#include "SymmetricTree/test_symmetric_tree.h"
#include "MaxDepthBinaryTree/test_max_depth.h"
#include "MinDepthBinaryTree/test_min_depth.h"
#include "InvertBinaryTree/test_invert_tree.h"
#include "BinaryTreePreorder/test_preorder.h"
#include "BinaryTreeInorder/test_inorder.h"
#include "BinaryTreePostorder/test_postorder.h"
#include "PathSum/test_path_sum.h"
#include "SameTree/test_same_tree.h"
#include "ValidBST/test_valid_bst.h"
#include "RemoveDuplicatesSorted/test_remove_duplicates.h"
#include "RemoveElement/test_remove_element.h"
#include "SumOfBitDifferences/test_bit_diff_sum.h"
#include "MinStack/test_min_stack.h"
#include "ImplementQueueWithStacks/test_queue_two_stacks.h"
#include "ImplementStackWithQueues/test_stack_one_queue.h"
#include "NumIslands/test_num_islands.h"
#include "FloodFill/test_flood_fill.h"
#include "WordSearch/test_word_search.h"
#include "CombinationSum/test_combination_sum.h"
#include "Subsets/test_subsets.h"
#include "Permutations/test_permutations.h"
#include "LRUCache/test_lru_cache.h"
#include "FindDifference/test_find_difference.h"
#include "IsPalindromeIgnoreCase/test_palindrome_case.h"
#include "PerfectNumber/test_perfect_number.h"
#include "BestTimeToBuyStock/test_best_time_to_buy.h"

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
        },{
                "/valid_sudoku",
                valid_sudoku_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/diagonal_sum",
                diagonal_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/spiral_matrix",
                spiral_matrix_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/rotate_image",
                rotate_image_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/kth_largest",
                kth_largest_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/merge_intervals",
                merge_intervals_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/non_overlapping",
                non_overlapping_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/meeting_rooms",
                meeting_rooms_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/meeting_rooms_ii",
                meeting_rooms_ii_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/jump_game",
                jump_game_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/jump_game_ii",
                jump_game_ii_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/max_subarray",
                max_subarray_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/product_except_self",
                product_except_self_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/rotate_array",
                rotate_array_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/most_water",
                most_water_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/trap",
                trap_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/three_sum",
                three_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/three_sum_closest",
                three_sum_closest_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/four_sum",
                four_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/needle",
                needle_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/search_insert",
                search_insert_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/sqrt_int",
                sqrt_int_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/symmetric_tree",
                symmetric_tree_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/max_depth",
                max_depth_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/min_depth",
                min_depth_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/invert_tree",
                invert_tree_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/preorder",
                preorder_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/inorder",
                inorder_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/postorder",
                postorder_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/path_sum",
                path_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/same_tree",
                same_tree_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/valid_bst",
                valid_bst_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/remove_duplicates",
                remove_duplicates_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/remove_element",
                remove_element_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/bit_diff_sum",
                bit_diff_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/min_stack",
                min_stack_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/queue_two_stacks",
                queue_two_stacks_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/stack_one_queue",
                stack_one_queue_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/num_islands",
                num_islands_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/flood_fill",
                flood_fill_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/word_search",
                word_search_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/combination_sum",
                combination_sum_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/subsets",
                subsets_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/permutations",
                permutations_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/lru_cache",
                lru_cache_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/find_difference",
                find_difference_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/palindrome_case",
                palindrome_case_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },{
                "/perfect_number",
                perfect_number_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
        },
        },{
                "/best_time_to_buy",
                best_time_to_buy_tests,
                NULL,
                1,
                MUNIT_SUITE_OPTION_NONE
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
