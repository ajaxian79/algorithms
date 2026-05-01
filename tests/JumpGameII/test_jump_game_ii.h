//
// Created by ajaxian on 09/26/20.
//

#ifndef ALGORITHMS_TEST_JUMP_GAME_II_H
#define ALGORITHMS_TEST_JUMP_GAME_II_H

#include "../tests.h"
#include "../../src/JumpGameII/jump_game_ii.h"

static MunitResult test_jump_min_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 3, 1, 1, 4};
    munit_assert_int(jump_min(a, 5), ==, 2);

    int b[] = {2, 3, 0, 1, 4};
    munit_assert_int(jump_min(b, 5), ==, 2);

    int c[] = {1};
    munit_assert_int(jump_min(c, 1), ==, 0);

    int d[] = {1, 2};
    munit_assert_int(jump_min(d, 2), ==, 1);

    int e[] = {2, 1};
    munit_assert_int(jump_min(e, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest jump_game_ii_tests[] = {
    {"/basic", test_jump_min_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_JUMP_GAME_II_H
// edge note 1: Space complexity: O(n) for the result buffer.
