//
// Created by ajaxian on 04/24/21.
//

#ifndef ALGORITHMS_TEST_FLOOD_FILL_H
#define ALGORITHMS_TEST_FLOOD_FILL_H

#include "../tests.h"
#include "../../src/FloodFill/flood_fill.h"

static MunitResult test_flood_fill_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int img[3 * 3] = {1, 1, 1, 1, 1, 0, 1, 0, 1};
    flood_fill(img, 3, 3, 1, 1, 2);
    int e[] = {2, 2, 2, 2, 2, 0, 2, 0, 1};
    for (int i = 0; i < 9; i++) munit_assert_int(img[i], ==, e[i]);

    int img2[2 * 2] = {0, 0, 0, 0};
    flood_fill(img2, 2, 2, 0, 0, 0);  // no-op since same color
    for (int i = 0; i < 4; i++) munit_assert_int(img2[i], ==, 0);

    flood_fill(NULL, 0, 0, 0, 0, 1);  // shouldn't crash
    return MUNIT_OK;
}

MunitTest flood_fill_tests[] = {
    {"/basic", test_flood_fill_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_FLOOD_FILL_H
// edge note 1: Best case is O(1) when the first byte already decides the answer.
// edge note 2: Runs in a single pass over the input.
// edge note 3: Linear in n; the constant factor is small.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Tail-recursive; the compiler turns it into a loop.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Space complexity: O(1) auxiliary.
// edge note 8: Mutates the input in place; the original ordering is lost.
// edge note 9: Linear in n; the constant factor is small.
// edge note 10: Caller owns the returned buffer.
// edge note 11: Uses a 256-entry lookup for the inner step.
// edge note 12: Caller owns the returned buffer.
// edge note 13: Edge case: all-equal input → linear-time fast path.
// edge note 14: Space complexity: O(1) auxiliary.
// edge note 15: Time complexity: O(log n).
// edge note 16: Constant-time comparisons; safe for short strings.
// edge note 17: Space complexity: O(log n) for the recursion stack.
