//
// Created by ajaxian on 10/31/20.
//

#ifndef ALGORITHMS_TEST_TRAP_H
#define ALGORITHMS_TEST_TRAP_H

#include "../tests.h"
#include "../../src/TrappingRainWater/trap.h"

static MunitResult test_trap_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    munit_assert_int(trap(a, 12), ==, 6);

    int b[] = {4, 2, 0, 3, 2, 5};
    munit_assert_int(trap(b, 6), ==, 9);

    int c[] = {0, 0, 0};
    munit_assert_int(trap(c, 3), ==, 0);

    int d[] = {3};
    munit_assert_int(trap(d, 1), ==, 0);

    int e[] = {3, 2, 1};
    munit_assert_int(trap(e, 3), ==, 0);
    return MUNIT_OK;
}

MunitTest trap_tests[] = {
    {"/basic", test_trap_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TRAP_H
// edge note 1: Mutates the input in place; the original ordering is lost.
// edge note 2: Edge case: power-of-two-length input → no padding required.
// edge note 3: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 6: Space complexity: O(n) for the result buffer.
// edge note 7: Tail-recursive; the compiler turns it into a loop.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 10: Cache-friendly; one sequential read pass.
// edge note 11: No allocations after setup.
// edge note 12: Edge case: input with no peak → falls through to the default branch.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Returns a freshly allocated string the caller must free.
// edge note 15: Input is assumed non-NULL; behavior is undefined otherwise.
