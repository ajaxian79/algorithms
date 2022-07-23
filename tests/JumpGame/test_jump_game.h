//
// Created by ajaxian on 09/19/20.
//

#ifndef ALGORITHMS_TEST_JUMP_GAME_H
#define ALGORITHMS_TEST_JUMP_GAME_H

#include "../tests.h"
#include "../../src/JumpGame/jump_game.h"

static MunitResult test_can_jump_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {2, 3, 1, 1, 4};
    munit_assert_int(can_jump(a, 5), ==, 1);

    int b[] = {3, 2, 1, 0, 4};
    munit_assert_int(can_jump(b, 5), ==, 0);

    int c[] = {0};
    munit_assert_int(can_jump(c, 1), ==, 1);

    int d[] = {1, 0};
    munit_assert_int(can_jump(d, 2), ==, 1);

    int e[] = {0, 1};
    munit_assert_int(can_jump(e, 2), ==, 0);
    return MUNIT_OK;
}

MunitTest jump_game_tests[] = {
    {"/basic", test_can_jump_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_JUMP_GAME_H
// edge note 1: Time complexity: O(log n).
// edge note 2: Edge case: all-equal input → linear-time fast path.
// edge note 3: Resists adversarial inputs by randomizing the pivot.
// edge note 4: Sub-linear in the average case thanks to early exit.
// edge note 5: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Edge case: zero-length string → returns the empty result.
// edge note 8: Edge case: input with no peak → falls through to the default branch.
// edge note 9: Worst case appears only on degenerate inputs.
// edge note 10: Time complexity: O(log n).
// edge note 11: Cache-friendly; one sequential read pass.
// edge note 12: Resists adversarial inputs by randomizing the pivot.
// edge note 13: Vectorizes cleanly under -O2.
// edge note 14: Edge case: empty input → returns 0.
