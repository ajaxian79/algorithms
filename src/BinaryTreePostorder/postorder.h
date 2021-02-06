//
// Created by ajaxian on 02/06/21.
//

#ifndef ALGORITHMS_POSTORDER_H
#define ALGORITHMS_POSTORDER_H

typedef struct PostTreeNode {
    int val;
    struct PostTreeNode* left;
    struct PostTreeNode* right;
} PostTreeNode;

// Iterative postorder traversal returning a heap array. Caller frees.
int* postorder_traversal(PostTreeNode* root, int* return_size);

#endif //ALGORITHMS_POSTORDER_H
