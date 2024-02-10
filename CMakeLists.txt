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
        src/FizzBuzz/fizz_buzz.c)

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
target_link_libraries(unittests PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
