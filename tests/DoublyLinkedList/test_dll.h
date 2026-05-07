//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_TEST_DLL_H
#define ALGORITHMS_TEST_DLL_H

#include "../tests.h"
#include "../../src/DoublyLinkedList/dll.h"

static MunitResult test_dll_basic(const MunitParameter params[], void* user_data_or_fixture) {
    DLL l;
    dll_init(&l);
    munit_assert_int(dll_size(&l), ==, 0);

    int ok;
    dll_pop_front(&l, &ok);
    munit_assert_int(ok, ==, 0);

    dll_push_back(&l, 1);
    dll_push_back(&l, 2);
    dll_push_back(&l, 3);
    dll_push_front(&l, 0);
    munit_assert_int(dll_size(&l), ==, 4);

    int out[8];
    int n = dll_to_array(&l, out, 8);
    munit_assert_int(n, ==, 4);
    munit_assert_int(out[0], ==, 0);
    munit_assert_int(out[1], ==, 1);
    munit_assert_int(out[2], ==, 2);
    munit_assert_int(out[3], ==, 3);

    munit_assert_int(dll_pop_front(&l, &ok), ==, 0);
    munit_assert_int(ok, ==, 1);
    munit_assert_int(dll_pop_back(&l, &ok), ==, 3);

    munit_assert_int(dll_remove_first(&l, 2), ==, 1);
    munit_assert_int(dll_remove_first(&l, 99), ==, 0);
    munit_assert_int(dll_size(&l), ==, 1);

    n = dll_to_array(&l, out, 8);
    munit_assert_int(n, ==, 1);
    munit_assert_int(out[0], ==, 1);

    dll_clear(&l);
    munit_assert_int(dll_size(&l), ==, 0);
    return MUNIT_OK;
}

MunitTest dll_tests[] = {
    {"/basic", test_dll_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_DLL_H
