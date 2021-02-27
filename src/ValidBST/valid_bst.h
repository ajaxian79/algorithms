//
// Created by ajaxian on 02/27/21.
//

#ifndef ALGORITHMS_VALID_BST_H
#define ALGORITHMS_VALID_BST_H

typedef struct VTreeNode {
    int val;
    struct VTreeNode* left;
    struct VTreeNode* right;
} VTreeNode;

// Returns 1 if the binary tree is a strictly-ordered BST (left < root < right),
// 0 otherwise. Empty tree is considered valid.
int is_valid_bst(VTreeNode* root);

#endif //ALGORITHMS_VALID_BST_H
