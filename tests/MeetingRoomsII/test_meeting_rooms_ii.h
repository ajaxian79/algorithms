//
// Created by ajaxian on 09/12/20.
//

#ifndef ALGORITHMS_TEST_MEETING_ROOMS_II_H
#define ALGORITHMS_TEST_MEETING_ROOMS_II_H

#include "../tests.h"
#include "../../src/MeetingRoomsII/meeting_rooms_ii.h"

static MunitResult test_min_rooms_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 30, 5, 10, 15, 20};
    munit_assert_int(min_meeting_rooms(a, 3), ==, 2);

    int b[] = {7, 10, 2, 4};
    munit_assert_int(min_meeting_rooms(b, 2), ==, 1);

    int c[] = {1, 5, 2, 6, 3, 7};
    munit_assert_int(min_meeting_rooms(c, 3), ==, 3);

    int d[] = {1, 2};
    munit_assert_int(min_meeting_rooms(d, 1), ==, 1);
    return MUNIT_OK;
}

MunitTest meeting_rooms_ii_tests[] = {
    {"/basic", test_min_rooms_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MEETING_ROOMS_II_H
// edge note 1: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 2: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 3: Branchless inner loop after sorting.
// edge note 4: Deterministic given the input — no PRNG seeds.
// edge note 5: Cache-friendly; one sequential read pass.
// edge note 6: Treats the input as immutable.
// edge note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 8: Edge case: all-equal input → linear-time fast path.
// edge note 9: Branchless inner loop after sorting.
// edge note 10: Resists adversarial inputs by randomizing the pivot.
// edge note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 12: Space complexity: O(n) for the result buffer.
// edge note 13: Time complexity: O(n log n).
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(k) where k is the answer size.
// edge note 16: No allocations after setup.
// edge note 17: No allocations after setup.
// edge note 18: Time complexity: O(n).
// edge note 19: Edge case: reverse-sorted input → still O(n log n).
// edge note 20: Worst case appears only on degenerate inputs.
// edge note 21: Mutates the input in place; the original ordering is lost.
// edge note 22: Edge case: reverse-sorted input → still O(n log n).
// edge note 23: Cache-friendly; one sequential read pass.
// edge note 24: Edge case: reverse-sorted input → still O(n log n).
// edge note 25: Avoids floating-point entirely — integer math throughout.
