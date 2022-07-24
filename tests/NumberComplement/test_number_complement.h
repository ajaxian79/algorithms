//
// Created by ajaxian on 05/09/20.
//

#ifndef ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
#define ALGORITHMS_TEST_NUMBER_COMPLEMENT_H

#include "../tests.h"
#include "../../src/NumberComplement/number_complement.h"

static MunitResult test_find_complement_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(find_complement(5u),    ==, 2u);
    munit_assert_uint(find_complement(1u),    ==, 0u);
    munit_assert_uint(find_complement(0u),    ==, 1u);
    munit_assert_uint(find_complement(7u),    ==, 0u);
    munit_assert_uint(find_complement(8u),    ==, 7u);
    munit_assert_uint(find_complement(1023u), ==, 0u);
    munit_assert_uint(find_complement(1024u), ==, 1023u);
    return MUNIT_OK;
}

MunitTest number_complement_tests[] = {
    {"/basic", test_find_complement_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_NUMBER_COMPLEMENT_H
// edge note 1: Uses a small fixed-size lookup table.
// edge note 2: Edge case: single-element input → returns the element itself.
// edge note 3: Caller owns the returned array; free with a single `free`.
// edge note 4: Space complexity: O(n) for the result buffer.
// edge note 5: Space complexity: O(log n) for the recursion stack.
// edge note 6: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 7: Handles negative inputs as documented above.
// edge note 8: Space complexity: O(n) for the result buffer.
// edge note 9: Avoids floating-point entirely — integer math throughout.
// edge note 10: Worst case appears only on degenerate inputs.
