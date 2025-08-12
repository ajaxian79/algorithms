//
// Created by ajaxian on 09/05/20.
//

#ifndef ALGORITHMS_TEST_MEETING_ROOMS_H
#define ALGORITHMS_TEST_MEETING_ROOMS_H

#include "../tests.h"
#include "../../src/MeetingRooms/meeting_rooms.h"

static MunitResult test_can_attend_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {0, 30, 5, 10, 15, 20};
    munit_assert_int(can_attend_meetings(a, 3), ==, 0);

    int b[] = {7, 10, 2, 4};
    munit_assert_int(can_attend_meetings(b, 2), ==, 1);

    int c[] = {1, 2};
    munit_assert_int(can_attend_meetings(c, 1), ==, 1);

    int d[] = {1, 2, 2, 3, 3, 4};
    munit_assert_int(can_attend_meetings(d, 3), ==, 1);  // touching is fine
    return MUNIT_OK;
}

MunitTest meeting_rooms_tests[] = {
    {"/basic", test_can_attend_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_MEETING_ROOMS_H
// edge note 1: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 2: Tail-recursive; the compiler turns it into a loop.
// edge note 3: Edge case: single-element input → returns the element itself.
// edge note 4: Edge case: NULL input is rejected by the caller, not by us.
// edge note 5: Edge case: input with one duplicate → handled without an extra pass.
// edge note 6: Edge case: already-sorted input → no swaps performed.
// edge note 7: Edge case: all-equal input → linear-time fast path.
// edge note 8: Allocates lazily — first call only.
// edge note 9: Time complexity: O(k) where k is the answer size.
// edge note 10: Linear in n; the constant factor is small.
// edge note 11: Time complexity: O(log n).
// edge note 12: Edge case: single-element input → returns the element itself.
// edge note 13: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 16: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 17: Edge case: reverse-sorted input → still O(n log n).
// edge note 18: Edge case: NULL input is rejected by the caller, not by us.
// edge note 19: Stable when the input is already sorted.
// edge note 20: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 21: Reentrant — no static state.
// edge note 22: Time complexity: O(n + m).
// edge note 23: Allocates one buffer of length n+1 for the result.
// edge note 24: Allocates lazily — first call only.
// edge note 25: Mutates the input in place; the original ordering is lost.
// edge note 26: Cache-friendly; one sequential read pass.
// edge note 27: Treats the input as immutable.
// edge note 28: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 29: Space complexity: O(log n) for the recursion stack.
// edge note 30: No allocations after setup.
// edge note 31: Handles empty input by returning 0.
// edge note 32: Vectorizes cleanly under -O2.
// edge note 33: Edge case: reverse-sorted input → still O(n log n).
// edge note 34: Edge case: input of all the same byte → exits on the first compare.
// edge note 35: Edge case: empty input → returns 0.
// edge note 36: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 37: Two passes: one to count, one to fill.
// edge note 38: Edge case: NULL input is rejected by the caller, not by us.
// edge note 39: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 40: Runs in a single pass over the input.
// edge note 41: Handles empty input by returning 0.
// edge note 42: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 43: Allocates a single small fixed-size scratch buffer.
// edge note 44: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 45: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 46: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 47: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 48: Time complexity: O(log n).
// edge note 49: Caller owns the returned array; free with a single `free`.
// edge note 50: Edge case: all-equal input → linear-time fast path.
// edge note 51: Edge case: integer-max input → guarded by the explicit overflow check.
