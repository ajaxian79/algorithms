//
// Created by ajaxian on 01/30/21.
//

#ifndef ALGORITHMS_INORDER_H
#define ALGORITHMS_INORDER_H

typedef struct InTreeNode {
    int val;
    struct InTreeNode* left;
    struct InTreeNode* right;
} InTreeNode;

// Iterative inorder traversal returning a heap array. Caller frees.
int* inorder_traversal(InTreeNode* root, int* return_size);

#endif //ALGORITHMS_INORDER_H
