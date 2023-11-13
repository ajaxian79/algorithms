cmake_minimum_required(VERSION 3.26)
project(algorithms C)

set(CMAKE_C_STANDARD 17)

add_executable(twosum TwoSum/main.c TwoSum/twosum.c
        FirstLetterToAppearTwice/repeated.c)
add_executable(repeatedchar FirstLetterToAppearTwice/main.c FirstLetterToAppearTwice/repeated.c
        FirstLetterToAppearTwice/repeated.h)
add_executable(unittests vendor/munit/munit.c TwoSum/twosum.c tests/main.c
        FirstLetterToAppearTwice/repeated.c
        FirstLetterToAppearTwice/repeated.h)

