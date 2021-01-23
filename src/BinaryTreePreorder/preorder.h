//
// Created by ajaxian on 01/23/21.
//

#ifndef ALGORITHMS_PREORDER_H
#define ALGORITHMS_PREORDER_H

typedef struct PreTreeNode {
    int val;
    struct PreTreeNode* left;
    struct PreTreeNode* right;
} PreTreeNode;

// Iterative preorder traversal returning a heap array of node values.
// *return_size is set; caller frees.
int* preorder_traversal(PreTreeNode* root, int* return_size);

#endif //ALGORITHMS_PREORDER_H
