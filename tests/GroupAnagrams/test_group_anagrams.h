//
// Created by ajaxian on 04/12/25.
//

#ifndef ALGORITHMS_TEST_GROUP_ANAGRAMS_H
#define ALGORITHMS_TEST_GROUP_ANAGRAMS_H

#include "../tests.h"
#include "../../src/GroupAnagrams/group_anagrams.h"

static MunitResult test_group_anagrams_basic(const MunitParameter params[], void* user_data_or_fixture) {
    const char* a[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    munit_assert_int(count_anagram_groups(a, 6), ==, 3);

    const char* b[] = {""};
    munit_assert_int(count_anagram_groups(b, 1), ==, 1);

    const char* c[] = {"a"};
    munit_assert_int(count_anagram_groups(c, 1), ==, 1);

    const char* d[] = {"abc", "bca", "cab", "xyz"};
    munit_assert_int(count_anagram_groups(d, 4), ==, 2);

    const char* e[] = {"aaa", "aaa", "aaa"};
    munit_assert_int(count_anagram_groups(e, 3), ==, 1);

    munit_assert_int(count_anagram_groups(NULL, 0), ==, 0);
    munit_assert_int(count_anagram_groups(a, 0),    ==, 0);
    return MUNIT_OK;
}

MunitTest group_anagrams_tests[] = {
    {"/basic", test_group_anagrams_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_GROUP_ANAGRAMS_H
