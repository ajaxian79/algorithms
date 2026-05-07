//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_TEST_AVL_TREE_H
#define ALGORITHMS_TEST_AVL_TREE_H

#include "../tests.h"
#include "../../src/AVLTree/avl_tree.h"

static MunitResult test_avl_tree_basic(const MunitParameter params[], void* user_data_or_fixture) {
    AVLNode* t = NULL;

    // Right-leaning insert: 1, 2, 3 — would degenerate to a chain in a
    // plain BST. AVL must rotate so height stays at 2, not 3.
    t = avl_insert(t, 1);
    t = avl_insert(t, 2);
    t = avl_insert(t, 3);
    munit_assert_int(avl_height(t), ==, 2);

    // Add 7 more keys; height must stay <= ~1.44 * log2(n) which for
    // n=10 is < 5.
    int more[] = {4, 5, 6, 7, 8, 9, 10};
    for (size_t i = 0; i < sizeof(more) / sizeof(more[0]); i++) {
        t = avl_insert(t, more[i]);
    }
    munit_assert_int(avl_height(t), <=, 5);

    int out[16];
    int n = avl_inorder(t, out, 16);
    munit_assert_int(n, ==, 10);
    for (int i = 0; i < n; i++) {
        munit_assert_int(out[i], ==, i + 1);
    }

    munit_assert_int(avl_contains(t, 5), ==, 1);
    munit_assert_int(avl_contains(t, 11), ==, 0);

    // Insert duplicate is a no-op.
    AVLNode* before = t;
    t = avl_insert(t, 5);
    munit_assert_ptr_equal(before, t);
    int n2 = avl_inorder(t, out, 16);
    munit_assert_int(n2, ==, 10);

    avl_free(t);
    return MUNIT_OK;
}

MunitTest avl_tree_tests[] = {
    {"/basic", test_avl_tree_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_AVL_TREE_H
