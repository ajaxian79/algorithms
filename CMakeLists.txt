cmake_minimum_required(VERSION 3.26)
project(algorithms C)

set(CMAKE_C_STANDARD 17)

add_executable(twosum src/TwoSum/main.c src/TwoSum/twosum.c src/FirstLetterToAppearTwice/repeated.c)
add_executable(repeatedchar src/FirstLetterToAppearTwice/main.c src/FirstLetterToAppearTwice/repeated.c)
add_executable(median src/MedianOfTwoSortedArrays/main.c src/MedianOfTwoSortedArrays/median.c)
add_executable(aoc2024_1 src/AoC2024_1/main.c src/AoC2024_1/tree_sort.c)
add_executable(aoc2024_2 src/AoC2024_2/main.c src/Aoc2024_2/report.c src/Aoc2024_2/int_hash_map.c)
add_executable(aoc2024_3 src/AoC2024_3/main.c src/AoC2024_3/scanner.c src/AoC2024_3/parser.c src/AoC2024_3/logger.c src/AoC2024_3/program.c)
add_executable(aoc2024_4 src/AoC2024_4/main.c src/AoC2024_4/logger.c src/AoC2024_4/gameboard.c)
add_executable(aoc2024_5 src/AoC2024_5/main.c src/AoC2024_5/logger.c src/AoC2024_5/rule_check.c)
add_executable(reverse_integer src/ReverseInteger/main.c src/ReverseInteger/reverse_integer.c)
add_executable(palindrome_number src/PalindromeNumber/main.c src/PalindromeNumber/palindrome_number.c)
add_executable(roman_to_int src/RomanToInt/main.c src/RomanToInt/roman_to_int.c)
add_executable(int_to_roman src/IntToRoman/main.c src/IntToRoman/int_to_roman.c)
add_executable(lcp src/LongestCommonPrefix/main.c src/LongestCommonPrefix/lcp.c)
add_executable(valid_parens src/ValidParentheses/main.c src/ValidParentheses/valid_parens.c)
add_executable(plus_one src/PlusOne/main.c src/PlusOne/plus_one.c)
add_executable(climb_stairs src/ClimbStairs/main.c src/ClimbStairs/climb_stairs.c)
add_executable(single_number src/SingleNumber/main.c src/SingleNumber/single_number.c)
add_executable(majority_element src/MajorityElement/main.c src/MajorityElement/majority_element.c)
add_executable(contains_duplicate src/ContainsDuplicate/main.c src/ContainsDuplicate/contains_duplicate.c)
add_executable(valid_anagram src/ValidAnagram/main.c src/ValidAnagram/valid_anagram.c)
add_executable(move_zeroes src/MoveZeroes/main.c src/MoveZeroes/move_zeroes.c)
add_executable(reverse_string src/ReverseString/main.c src/ReverseString/reverse_string.c)
add_executable(fizz_buzz src/FizzBuzz/main.c src/FizzBuzz/fizz_buzz.c)
add_executable(count_primes src/CountPrimes/main.c src/CountPrimes/count_primes.c)
add_executable(power_of_two src/PowerOfTwo/main.c src/PowerOfTwo/power_of_two.c)
add_executable(power_of_three src/PowerOfThree/main.c src/PowerOfThree/power_of_three.c)
add_executable(power_of_four src/PowerOfFour/main.c src/PowerOfFour/power_of_four.c)
add_executable(reverse_words src/ReverseWords/main.c src/ReverseWords/reverse_words.c)
add_executable(length_of_last_word src/LengthOfLastWord/main.c src/LengthOfLastWord/length_of_last_word.c)
add_executable(add_binary src/AddBinary/main.c src/AddBinary/add_binary.c)
add_executable(add_strings src/AddStrings/main.c src/AddStrings/add_strings.c)
add_executable(multiply_strings src/MultiplyStrings/main.c src/MultiplyStrings/multiply_strings.c)
add_executable(valid_palindrome_str src/ValidPalindromeStr/main.c src/ValidPalindromeStr/valid_palindrome_str.c)
add_executable(count_and_say src/CountAndSay/main.c src/CountAndSay/count_and_say.c)
add_executable(zigzag src/ZigZagConversion/main.c src/ZigZagConversion/zigzag.c)
add_executable(string_to_integer src/StringToInteger/main.c src/StringToInteger/string_to_integer.c)
add_executable(compare_version src/CompareVersion/main.c src/CompareVersion/compare_version.c)
add_executable(excel_column_number src/ExcelColumnNumber/main.c src/ExcelColumnNumber/excel_column_number.c)
add_executable(excel_column_title src/ExcelColumnTitle/main.c src/ExcelColumnTitle/excel_column_title.c)
add_executable(rotate_string src/RotateString/main.c src/RotateString/rotate_string.c)
add_executable(reverse_vowels src/ReverseVowels/main.c src/ReverseVowels/reverse_vowels.c)
add_executable(first_unique_char src/FirstUniqueChar/main.c src/FirstUniqueChar/first_unique_char.c)
add_executable(ransom_note src/RansomNote/main.c src/RansomNote/ransom_note.c)
add_executable(is_subsequence src/IsSubsequence/main.c src/IsSubsequence/is_subsequence.c)
add_executable(happy_number src/HappyNumber/main.c src/HappyNumber/happy_number.c)
add_executable(ugly_number src/UglyNumber/main.c src/UglyNumber/ugly_number.c)
add_executable(hamming_distance src/HammingDistance/main.c src/HammingDistance/hamming_distance.c)
add_executable(number_of_1_bits src/NumberOf1Bits/main.c src/NumberOf1Bits/number_of_1_bits.c)
add_executable(reverse_bits src/ReverseBits/main.c src/ReverseBits/reverse_bits.c)
add_executable(missing_number src/MissingNumber/main.c src/MissingNumber/missing_number.c)
add_executable(number_complement src/NumberComplement/main.c src/NumberComplement/number_complement.c)
add_executable(binary_gap src/BinaryGap/main.c src/BinaryGap/binary_gap.c)
add_executable(to_hex src/ToHexString/main.c src/ToHexString/to_hex.c)
add_executable(add_digits src/AddDigits/main.c src/AddDigits/add_digits.c)
add_executable(trailing_zeros src/CountTrailingZeros/main.c src/CountTrailingZeros/trailing_zeros.c)
add_executable(perfect_square src/PerfectSquare/main.c src/PerfectSquare/perfect_square.c)
add_executable(convert_to_base7 src/ConvertToBase7/main.c src/ConvertToBase7/convert_to_base7.c)
add_executable(pascals_row src/PascalsTriangleRow/main.c src/PascalsTriangleRow/pascals_row.c)
add_executable(pascals_n src/PascalsTriangleN/main.c src/PascalsTriangleN/pascals_n.c)
add_executable(generate_parens src/GenerateParens/main.c src/GenerateParens/generate_parens.c)
add_executable(valid_sudoku src/ValidSudoku/main.c src/ValidSudoku/valid_sudoku.c)
add_executable(diagonal_sum src/MatrixDiagonalSum/main.c src/MatrixDiagonalSum/diagonal_sum.c)
add_executable(spiral_matrix src/SpiralMatrix/main.c src/SpiralMatrix/spiral_matrix.c)
add_executable(rotate_image src/RotateImage/main.c src/RotateImage/rotate_image.c)
add_executable(kth_largest src/KthLargestNumber/main.c src/KthLargestNumber/kth_largest.c)
add_executable(merge_intervals src/MergeIntervals/main.c src/MergeIntervals/merge_intervals.c)
add_executable(non_overlapping src/NonOverlappingIntervals/main.c src/NonOverlappingIntervals/non_overlapping.c)
add_executable(meeting_rooms src/MeetingRooms/main.c src/MeetingRooms/meeting_rooms.c)
add_executable(meeting_rooms_ii src/MeetingRoomsII/main.c src/MeetingRoomsII/meeting_rooms_ii.c)
add_executable(jump_game src/JumpGame/main.c src/JumpGame/jump_game.c)
add_executable(jump_game_ii src/JumpGameII/main.c src/JumpGameII/jump_game_ii.c)
add_executable(max_subarray src/MaxSubarray/main.c src/MaxSubarray/max_subarray.c)
add_executable(product_except_self src/ProductExceptSelf/main.c src/ProductExceptSelf/product_except_self.c)
add_executable(rotate_array src/RotateArray/main.c src/RotateArray/rotate_array.c)
add_executable(most_water src/ContainerWithMostWater/main.c src/ContainerWithMostWater/most_water.c)
add_executable(trap src/TrappingRainWater/main.c src/TrappingRainWater/trap.c)
add_executable(three_sum src/ThreeSum/main.c src/ThreeSum/three_sum.c)
add_executable(three_sum_closest src/ThreeSumClosest/main.c src/ThreeSumClosest/three_sum_closest.c)
add_executable(four_sum src/FourSum/main.c src/FourSum/four_sum.c)
add_executable(needle src/NeedleInHaystack/main.c src/NeedleInHaystack/needle.c)
add_executable(search_insert src/SearchInsertPosition/main.c src/SearchInsertPosition/search_insert.c)
add_executable(sqrt_int src/SqrtInt/main.c src/SqrtInt/sqrt_int.c)
add_executable(symmetric_tree src/SymmetricTree/main.c src/SymmetricTree/symmetric_tree.c)
add_executable(max_depth src/MaxDepthBinaryTree/main.c src/MaxDepthBinaryTree/max_depth.c)
add_executable(min_depth src/MinDepthBinaryTree/main.c src/MinDepthBinaryTree/min_depth.c)
add_executable(invert_tree src/InvertBinaryTree/main.c src/InvertBinaryTree/invert_tree.c)
add_executable(preorder src/BinaryTreePreorder/main.c src/BinaryTreePreorder/preorder.c)
add_executable(inorder src/BinaryTreeInorder/main.c src/BinaryTreeInorder/inorder.c)
add_executable(postorder src/BinaryTreePostorder/main.c src/BinaryTreePostorder/postorder.c)
add_executable(path_sum src/PathSum/main.c src/PathSum/path_sum.c)
add_executable(same_tree src/SameTree/main.c src/SameTree/same_tree.c)
add_executable(valid_bst src/ValidBST/main.c src/ValidBST/valid_bst.c)
add_executable(remove_duplicates src/RemoveDuplicatesSorted/main.c src/RemoveDuplicatesSorted/remove_duplicates.c)
add_executable(remove_element src/RemoveElement/main.c src/RemoveElement/remove_element.c)
add_executable(bit_diff_sum src/SumOfBitDifferences/main.c src/SumOfBitDifferences/bit_diff_sum.c)
add_executable(min_stack src/MinStack/main.c src/MinStack/min_stack.c)
add_executable(queue_two_stacks src/ImplementQueueWithStacks/main.c src/ImplementQueueWithStacks/queue_two_stacks.c)
add_executable(stack_one_queue src/ImplementStackWithQueues/main.c src/ImplementStackWithQueues/stack_one_queue.c)
add_executable(num_islands src/NumIslands/main.c src/NumIslands/num_islands.c)
add_executable(flood_fill src/FloodFill/main.c src/FloodFill/flood_fill.c)
add_executable(word_search src/WordSearch/main.c src/WordSearch/word_search.c)
add_executable(combination_sum src/CombinationSum/main.c src/CombinationSum/combination_sum.c)
add_executable(subsets src/Subsets/main.c src/Subsets/subsets.c)
add_executable(permutations src/Permutations/main.c src/Permutations/permutations.c)
add_executable(lru_cache src/LRUCache/main.c src/LRUCache/lru_cache.c)
add_executable(find_difference src/FindDifference/main.c src/FindDifference/find_difference.c)
add_executable(palindrome_case src/IsPalindromeIgnoreCase/main.c src/IsPalindromeIgnoreCase/palindrome_case.c)
add_executable(perfect_number src/PerfectNumber/main.c src/PerfectNumber/perfect_number.c)
add_executable(best_time_to_buy src/BestTimeToBuyStock/main.c src/BestTimeToBuyStock/best_time_to_buy.c)
add_executable(house_robber src/HouseRobber/main.c src/HouseRobber/house_robber.c)
add_executable(coin_change src/CoinChange/main.c src/CoinChange/coin_change.c)
add_executable(longest_no_repeat src/LongestSubstringNoRepeat/main.c src/LongestSubstringNoRepeat/longest_no_repeat.c)
add_executable(merge_two_lists src/MergeTwoSortedLists/main.c src/MergeTwoSortedLists/merge_two_lists.c)
add_executable(daily_temperatures src/DailyTemperatures/main.c src/DailyTemperatures/daily_temperatures.c)
add_executable(group_anagrams src/GroupAnagrams/main.c src/GroupAnagrams/group_anagrams.c)
add_executable(eval_rpn src/EvalReversePolish/main.c src/EvalReversePolish/eval_rpn.c)
add_executable(my_pow src/MyPow/main.c src/MyPow/my_pow.c)
add_executable(count_bits src/CountBits/main.c src/CountBits/count_bits.c)
add_executable(reverse_list src/ReverseLinkedList/main.c src/ReverseLinkedList/reverse_list.c)
add_executable(cycle_list src/LinkedListCycle/main.c src/LinkedListCycle/cycle_list.c)
add_executable(middle_list src/MiddleLinkedList/main.c src/MiddleLinkedList/middle_list.c)
add_executable(burst_balloons src/BurstBalloons/main.c src/BurstBalloons/burst_balloons.c)
add_executable(topo_sort src/TopologicalSort/main.c src/TopologicalSort/topo_sort.c)
add_executable(infix_to_postfix src/InfixToPostfix/main.c src/InfixToPostfix/infix_to_postfix.c)
add_executable(edit_distance src/EditDistance/main.c src/EditDistance/edit_distance.c)
add_executable(lcs src/LongestCommonSubsequence/main.c src/LongestCommonSubsequence/lcs.c)
add_executable(dll src/DoublyLinkedList/main.c src/DoublyLinkedList/dll.c)
add_executable(unittests
        vendor/munit/munit.c
        tests/main.c
        src/TwoSum/twosum.c
        src/FirstLetterToAppearTwice/repeated.c
        src/MedianOfTwoSortedArrays/median.c
        src/ReverseInteger/reverse_integer.c
        src/PalindromeNumber/palindrome_number.c
        src/RomanToInt/roman_to_int.c
        src/IntToRoman/int_to_roman.c
        src/LongestCommonPrefix/lcp.c
        src/ValidParentheses/valid_parens.c
        src/PlusOne/plus_one.c
        src/ClimbStairs/climb_stairs.c
        src/SingleNumber/single_number.c
        src/MajorityElement/majority_element.c
        src/ContainsDuplicate/contains_duplicate.c
        src/ValidAnagram/valid_anagram.c
        src/MoveZeroes/move_zeroes.c
        src/ReverseString/reverse_string.c
        src/FizzBuzz/fizz_buzz.c
        src/CountPrimes/count_primes.c
        src/PowerOfTwo/power_of_two.c
        src/PowerOfThree/power_of_three.c
        src/PowerOfFour/power_of_four.c
        src/ReverseWords/reverse_words.c
        src/LengthOfLastWord/length_of_last_word.c
        src/AddBinary/add_binary.c
        src/AddStrings/add_strings.c
        src/MultiplyStrings/multiply_strings.c
        src/ValidPalindromeStr/valid_palindrome_str.c
        src/CountAndSay/count_and_say.c
        src/ZigZagConversion/zigzag.c
        src/StringToInteger/string_to_integer.c
        src/CompareVersion/compare_version.c
        src/ExcelColumnNumber/excel_column_number.c
        src/ExcelColumnTitle/excel_column_title.c
        src/RotateString/rotate_string.c
        src/ReverseVowels/reverse_vowels.c
        src/FirstUniqueChar/first_unique_char.c
        src/RansomNote/ransom_note.c
        src/IsSubsequence/is_subsequence.c
        src/HappyNumber/happy_number.c
        src/UglyNumber/ugly_number.c
        src/HammingDistance/hamming_distance.c
        src/NumberOf1Bits/number_of_1_bits.c
        src/ReverseBits/reverse_bits.c
        src/MissingNumber/missing_number.c
        src/NumberComplement/number_complement.c
        src/BinaryGap/binary_gap.c
        src/ToHexString/to_hex.c
        src/AddDigits/add_digits.c
        src/CountTrailingZeros/trailing_zeros.c
        src/PerfectSquare/perfect_square.c
        src/ConvertToBase7/convert_to_base7.c
        src/PascalsTriangleRow/pascals_row.c
        src/PascalsTriangleN/pascals_n.c
        src/GenerateParens/generate_parens.c
        src/ValidSudoku/valid_sudoku.c
        src/MatrixDiagonalSum/diagonal_sum.c
        src/SpiralMatrix/spiral_matrix.c
        src/RotateImage/rotate_image.c
        src/KthLargestNumber/kth_largest.c
        src/MergeIntervals/merge_intervals.c
        src/NonOverlappingIntervals/non_overlapping.c
        src/MeetingRooms/meeting_rooms.c
        src/MeetingRoomsII/meeting_rooms_ii.c
        src/JumpGame/jump_game.c
        src/JumpGameII/jump_game_ii.c
        src/MaxSubarray/max_subarray.c
        src/ProductExceptSelf/product_except_self.c
        src/RotateArray/rotate_array.c
        src/ContainerWithMostWater/most_water.c
        src/TrappingRainWater/trap.c
        src/ThreeSum/three_sum.c
        src/ThreeSumClosest/three_sum_closest.c
        src/FourSum/four_sum.c
        src/NeedleInHaystack/needle.c
        src/SearchInsertPosition/search_insert.c
        src/SqrtInt/sqrt_int.c
        src/SymmetricTree/symmetric_tree.c
        src/MaxDepthBinaryTree/max_depth.c
        src/MinDepthBinaryTree/min_depth.c
        src/InvertBinaryTree/invert_tree.c
        src/BinaryTreePreorder/preorder.c
        src/BinaryTreeInorder/inorder.c
        src/BinaryTreePostorder/postorder.c
        src/PathSum/path_sum.c
        src/SameTree/same_tree.c
        src/ValidBST/valid_bst.c
        src/RemoveDuplicatesSorted/remove_duplicates.c
        src/RemoveElement/remove_element.c
        src/SumOfBitDifferences/bit_diff_sum.c
        src/MinStack/min_stack.c
        src/ImplementQueueWithStacks/queue_two_stacks.c
        src/ImplementStackWithQueues/stack_one_queue.c
        src/NumIslands/num_islands.c
        src/FloodFill/flood_fill.c
        src/WordSearch/word_search.c
        src/CombinationSum/combination_sum.c
        src/Subsets/subsets.c
        src/Permutations/permutations.c
        src/LRUCache/lru_cache.c
        src/FindDifference/find_difference.c
        src/IsPalindromeIgnoreCase/palindrome_case.c
        src/PerfectNumber/perfect_number.c
        src/BestTimeToBuyStock/best_time_to_buy.c
        src/HouseRobber/house_robber.c
        src/CoinChange/coin_change.c
        src/LongestSubstringNoRepeat/longest_no_repeat.c
        src/MergeTwoSortedLists/merge_two_lists.c
        src/DailyTemperatures/daily_temperatures.c
        src/GroupAnagrams/group_anagrams.c
        src/EvalReversePolish/eval_rpn.c
        src/MyPow/my_pow.c
        src/CountBits/count_bits.c
        src/ReverseLinkedList/reverse_list.c
        src/LinkedListCycle/cycle_list.c
        src/MiddleLinkedList/middle_list.c
        src/BurstBalloons/burst_balloons.c
        src/TopologicalSort/topo_sort.c
        src/InfixToPostfix/infix_to_postfix.c
        src/EditDistance/edit_distance.c
        src/LongestCommonSubsequence/lcs.c
        src/DoublyLinkedList/dll.c)

find_package(mimalloc CONFIG REQUIRED)
target_link_libraries(twosum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(repeatedchar PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(median PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_1 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_2 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_3 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_4 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_5 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_integer PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(palindrome_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(roman_to_int PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(int_to_roman PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(lcp PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(valid_parens PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(plus_one PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(climb_stairs PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(single_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(majority_element PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(contains_duplicate PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(valid_anagram PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(move_zeroes PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_string PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(fizz_buzz PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(count_primes PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(power_of_two PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(power_of_three PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(power_of_four PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_words PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(length_of_last_word PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(add_binary PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(add_strings PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(multiply_strings PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(valid_palindrome_str PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(count_and_say PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(zigzag PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(string_to_integer PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(compare_version PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(excel_column_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(excel_column_title PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(rotate_string PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_vowels PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(first_unique_char PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(ransom_note PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(is_subsequence PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(happy_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(ugly_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(hamming_distance PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(number_of_1_bits PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_bits PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(missing_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(number_complement PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(binary_gap PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(to_hex PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(add_digits PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(trailing_zeros PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(perfect_square PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(convert_to_base7 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(pascals_row PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(pascals_n PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(generate_parens PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(valid_sudoku PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(diagonal_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(spiral_matrix PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(rotate_image PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(kth_largest PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(merge_intervals PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(non_overlapping PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(meeting_rooms PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(meeting_rooms_ii PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(jump_game PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(jump_game_ii PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(max_subarray PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(product_except_self PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(rotate_array PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(most_water PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(trap PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(three_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(three_sum_closest PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(four_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(needle PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(search_insert PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(sqrt_int PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(symmetric_tree PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(max_depth PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(min_depth PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(invert_tree PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(preorder PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(inorder PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(postorder PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(path_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(same_tree PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(valid_bst PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(remove_duplicates PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(remove_element PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(bit_diff_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(min_stack PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(queue_two_stacks PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(stack_one_queue PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(num_islands PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(flood_fill PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(word_search PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(combination_sum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(subsets PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(permutations PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(lru_cache PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(find_difference PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(palindrome_case PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(perfect_number PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(best_time_to_buy PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(house_robber PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(coin_change PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(longest_no_repeat PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(merge_two_lists PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(daily_temperatures PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(group_anagrams PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(eval_rpn PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(my_pow PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(count_bits PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(reverse_list PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(cycle_list PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(middle_list PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(burst_balloons PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(topo_sort PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(infix_to_postfix PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(edit_distance PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(lcs PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(dll PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(unittests PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
