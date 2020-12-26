//
// Created by ajaxian on 12/26/20.
//

#ifndef ALGORITHMS_SYMMETRIC_TREE_H
#define ALGORITHMS_SYMMETRIC_TREE_H

typedef struct STreeNode {
    int val;
    struct STreeNode* left;
    struct STreeNode* right;
} STreeNode;

// 1 if the binary tree is a mirror of itself across the root, else 0.
int is_symmetric(STreeNode* root);

#endif //ALGORITHMS_SYMMETRIC_TREE_H
