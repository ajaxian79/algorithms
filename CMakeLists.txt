cmake_minimum_required(VERSION 3.26)
project(algorithms C)

set(CMAKE_C_STANDARD 17)

add_executable(twosum src/TwoSum/main.c src/TwoSum/twosum.c src/FirstLetterToAppearTwice/repeated.c)
add_executable(repeatedchar src/FirstLetterToAppearTwice/main.c src/FirstLetterToAppearTwice/repeated.c)
add_executable(median src/MedianOfTwoSortedArrays/main.c src/MedianOfTwoSortedArrays/median.c)
add_executable(aoc2024_1 src/AoC2024_1/main.c src/AoC2024_1/tree_sort.c)
add_executable(aoc2024_2 src/AoC2024_2/main.c src/Aoc2024_2/report.c src/Aoc2024_2/int_hash_map.c)
add_executable(aoc2024_3 src/AoC2024_3/main.c src/AoC2024_3/scanner.c src/AoC2024_3/program.c)
add_executable(unittests
        vendor/munit/munit.c
        tests/main.c
        src/TwoSum/twosum.c
        src/FirstLetterToAppearTwice/repeated.c
        src/MedianOfTwoSortedArrays/median.c)

find_package(mimalloc CONFIG REQUIRED)
target_link_libraries(twosum PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(repeatedchar PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(median PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_1 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_2 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(aoc2024_3 PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
target_link_libraries(unittests PRIVATE $<IF:$<TARGET_EXISTS:mimalloc-static>,mimalloc-static,mimalloc>)
