//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_AVL_TREE_H
#define ALGORITHMS_AVL_TREE_H

#include <stddef.h>

// AVL tree of distinct ints. The tree maintains the invariant that for
// every node the heights of the two child subtrees differ by at most 1,
// which keeps the tree O(log n) deep. After every insertion we walk back
// up the recursion, recompute height, check balance factor, and apply
// one of the four rotations (LL, LR, RR, RL) when it goes out of range.
//
// This is the structure inside many in-memory ordered indices and is a
// canonical example for understanding the rotation primitives that
// red-black trees and splay trees also depend on.
typedef struct AVLNode {
    int key;
    int height;
    struct AVLNode* left;
    struct AVLNode* right;
} AVLNode;

// Insert `key` into the tree rooted at `root`. Returns the new root
// (which may differ from the input due to rotations). Inserting a
// duplicate is a no-op. Allocation failure returns the input root
// unchanged.
AVLNode* avl_insert(AVLNode* root, int key);

// Returns 1 if `key` is present, 0 otherwise.
int avl_contains(const AVLNode* root, int key);

// Free every node.
void avl_free(AVLNode* root);

// Height of the subtree rooted here. NULL is height 0.
int avl_height(const AVLNode* root);

// In-order walk into `out`, up to `cap` entries. Returns the count
// written. Useful as a sanity check that the tree's contents are sorted.
int avl_inorder(const AVLNode* root, int* out, int cap);

#endif //ALGORITHMS_AVL_TREE_H
