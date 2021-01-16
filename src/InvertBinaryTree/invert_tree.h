//
// Created by ajaxian on 01/16/21.
//

#ifndef ALGORITHMS_INVERT_TREE_H
#define ALGORITHMS_INVERT_TREE_H

typedef struct InvTreeNode {
    int val;
    struct InvTreeNode* left;
    struct InvTreeNode* right;
} InvTreeNode;

// Mirror the tree by swapping every node's left/right children. Returns
// root for convenience.
InvTreeNode* invert_tree(InvTreeNode* root);

#endif //ALGORITHMS_INVERT_TREE_H
