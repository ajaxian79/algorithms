//
// Created by ajaxian on 02/20/21.
//

#ifndef ALGORITHMS_TEST_SAME_TREE_H
#define ALGORITHMS_TEST_SAME_TREE_H

#include "../tests.h"
#include "../../src/SameTree/same_tree.h"

static MunitResult test_same_tree_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(is_same_tree(NULL, NULL), ==, 1);

    StTreeNode a = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, NULL), ==, 0);

    StTreeNode b = {1, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &b), ==, 1);

    StTreeNode c = {2, NULL, NULL};
    munit_assert_int(is_same_tree(&a, &c), ==, 0);

    StTreeNode al = {2, NULL, NULL};
    StTreeNode bl = {2, NULL, NULL};
    StTreeNode A = {1, &al, NULL};
    StTreeNode B = {1, NULL, &bl};
    munit_assert_int(is_same_tree(&A, &B), ==, 0);
    return MUNIT_OK;
}

MunitTest same_tree_tests[] = {
    {"/basic", test_same_tree_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SAME_TREE_H
