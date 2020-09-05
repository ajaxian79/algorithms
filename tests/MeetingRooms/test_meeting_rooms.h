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
