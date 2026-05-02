//
// Created by ajaxian on 05/02/26.
//

#ifndef ALGORITHMS_TEST_TOPO_SORT_H
#define ALGORITHMS_TEST_TOPO_SORT_H

#include "../tests.h"
#include "../../src/TopologicalSort/topo_sort.h"

static int ts_index_of(const int* a, int n, int v) {
    for (int i = 0; i < n; i++) if (a[i] == v) return i;
    return -1;
}

static MunitResult test_topo_sort_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int edges[] = {0, 2, 0, 3, 1, 3, 2, 3, 3, 4};
    int out[5];
    int k = topo_sort(5, edges, 5, out);
    munit_assert_int(k, ==, 5);
    munit_assert_int(ts_index_of(out, 5, 0) < ts_index_of(out, 5, 2), ==, 1);
    munit_assert_int(ts_index_of(out, 5, 2) < ts_index_of(out, 5, 3), ==, 1);
    munit_assert_int(ts_index_of(out, 5, 3) < ts_index_of(out, 5, 4), ==, 1);
    munit_assert_int(ts_index_of(out, 5, 1) < ts_index_of(out, 5, 3), ==, 1);

    int cyc[] = {0, 1, 1, 2, 2, 0};
    int co[3];
    int ck = topo_sort(3, cyc, 3, co);
    munit_assert_int(ck, <, 3);

    int empty_out[3];
    int ek = topo_sort(3, NULL, 0, empty_out);
    munit_assert_int(ek, ==, 3);

    munit_assert_int(topo_sort(0, NULL, 0, out), ==, 0);
    return MUNIT_OK;
}

MunitTest topo_sort_tests[] = {
    {"/basic", test_topo_sort_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_TOPO_SORT_H
