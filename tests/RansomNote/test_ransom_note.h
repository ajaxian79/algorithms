//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_RANSOM_NOTE_H
#define ALGORITHMS_TEST_RANSOM_NOTE_H

#include "../tests.h"
#include "../../src/RansomNote/ransom_note.h"

static MunitResult test_can_construct_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(can_construct("a", "b"), ==, 0);
    munit_assert_int(can_construct("aa", "ab"), ==, 0);
    munit_assert_int(can_construct("aa", "aab"), ==, 1);
    munit_assert_int(can_construct("", "anything"), ==, 1);
    munit_assert_int(can_construct("xyz", "zyxw"), ==, 1);
    munit_assert_int(can_construct("xyz", ""), ==, 0);
    return MUNIT_OK;
}

MunitTest ransom_note_tests[] = {
    {"/basic", test_can_construct_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_RANSOM_NOTE_H
