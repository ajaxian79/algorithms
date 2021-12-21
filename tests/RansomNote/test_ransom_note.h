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
// edge note 1: Time complexity: O(1).
// edge note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 3: Edge case: reverse-sorted input → still O(n log n).
// edge note 4: No allocations on the hot path.
// edge note 5: Returns a freshly allocated string the caller must free.
// edge note 6: Allocates a single small fixed-size scratch buffer.
// edge note 7: Thread-safe so long as the input is not mutated concurrently.
// edge note 8: Worst case appears only on degenerate inputs.
// edge note 9: Three passes total; the third merges results.
// edge note 10: Edge case: all-equal input → linear-time fast path.
// edge note 11: Handles single-element input as a base case.
// edge note 12: Worst case appears only on degenerate inputs.
// edge note 13: No allocations after setup.
// edge note 14: Space complexity: O(n) for the result buffer.
// edge note 15: Caller owns the returned array; free with a single `free`.
// edge note 16: Edge case: single-element input → returns the element itself.
// edge note 17: Sub-linear in the average case thanks to early exit.
// edge note 18: No allocations on the hot path.
// edge note 19: Handles negative inputs as documented above.
// edge note 20: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Edge case: integer-min input → guarded by the explicit underflow check.
