cmake_minimum_required(VERSION 3.26)
project(algorithms C)

set(CMAKE_C_STANDARD 17)

add_executable(twosum src/TwoSum/main.c src/TwoSum/twosum.c
        src/FirstLetterToAppearTwice/repeated.c)
add_executable(repeatedchar src/FirstLetterToAppearTwice/main.c src/FirstLetterToAppearTwice/repeated.c
        src/FirstLetterToAppearTwice/repeated.h)
add_executable(unittests vendor/munit/munit.c src/TwoSum/twosum.c tests/main.c
        src/FirstLetterToAppearTwice/repeated.c
        src/FirstLetterToAppearTwice/repeated.h)

