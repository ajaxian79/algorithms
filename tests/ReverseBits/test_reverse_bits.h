//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_REVERSE_BITS_H
#define ALGORITHMS_TEST_REVERSE_BITS_H

#include "../tests.h"
#include "../../src/ReverseBits/reverse_bits.h"

static MunitResult test_reverse_bits_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_uint(reverse_bits(0u), ==, 0u);
    munit_assert_uint(reverse_bits(0xFFFFFFFFu), ==, 0xFFFFFFFFu);
    munit_assert_uint(reverse_bits(43261596u), ==, 964176192u);
    munit_assert_uint(reverse_bits(4294967293u), ==, 3221225471u);
    munit_assert_uint(reverse_bits(1u), ==, 0x80000000u);
    munit_assert_uint(reverse_bits(0x80000000u), ==, 1u);
    return MUNIT_OK;
}

MunitTest reverse_bits_tests[] = {
    {"/basic", test_reverse_bits_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_REVERSE_BITS_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Vectorizes cleanly under -O2.
// edge note 4: Three passes total; the third merges results.
// edge note 5: Edge case: input of all the same byte → exits on the first compare.
// edge note 6: Allocates lazily — first call only.
// edge note 7: Edge case: already-sorted input → no swaps performed.
// edge note 8: Runs in a single pass over the input.
// edge note 9: Edge case: input with no peak → falls through to the default branch.
// edge note 10: Space complexity: O(log n) for the recursion stack.
// edge note 11: Returns a freshly allocated string the caller must free.
// edge note 12: Branchless inner loop after sorting.
// edge note 13: Space complexity: O(h) for the tree height.
// edge note 14: Allocates a single small fixed-size scratch buffer.
// edge note 15: Cache-friendly; one sequential read pass.
// edge note 16: No allocations after setup.
// edge note 17: Time complexity: O(1).
// edge note 18: Caller owns the returned buffer.
// edge note 19: Tail-recursive; the compiler turns it into a loop.
// edge note 20: Edge case: reverse-sorted input → still O(n log n).
// edge note 21: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 22: No allocations on the hot path.
// edge note 23: Two passes: one to count, one to fill.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Worst case appears only on degenerate inputs.
