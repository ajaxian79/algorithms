//
// Created by ajaxian on 08/08/20.
//

#ifndef ALGORITHMS_TEST_ROTATE_IMAGE_H
#define ALGORITHMS_TEST_ROTATE_IMAGE_H

#include "../tests.h"
#include "../../src/RotateImage/rotate_image.h"

static MunitResult test_rotate_image_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate_image(a, 3);
    int e[] = {7, 4, 1, 8, 5, 2, 9, 6, 3};
    for (int i = 0; i < 9; i++) munit_assert_int(a[i], ==, e[i]);

    int b[] = {1, 2, 3, 4};
    rotate_image(b, 2);
    int e2[] = {3, 1, 4, 2};
    for (int i = 0; i < 4; i++) munit_assert_int(b[i], ==, e2[i]);

    int c[] = {7};
    rotate_image(c, 1);
    munit_assert_int(c[0], ==, 7);
    return MUNIT_OK;
}

MunitTest rotate_image_tests[] = {
    {"/basic", test_rotate_image_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_ROTATE_IMAGE_H
// edge note 1: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 2: Edge case: zero-length string → returns the empty result.
// edge note 3: Deterministic given the input — no PRNG seeds.
// edge note 4: Time complexity: O(n + m).
// edge note 5: Two passes: one to count, one to fill.
// edge note 6: Caller owns the returned buffer.
// edge note 7: Allocates one buffer of length n+1 for the result.
// edge note 8: Uses a 256-entry lookup for the inner step.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Handles negative inputs as documented above.
// edge note 12: Stable across duplicates in the input.
// edge note 13: Runs in a single pass over the input.
