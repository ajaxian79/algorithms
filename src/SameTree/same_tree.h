//
// Created by ajaxian on 02/20/21.
//

#ifndef ALGORITHMS_SAME_TREE_H
#define ALGORITHMS_SAME_TREE_H

typedef struct StTreeNode {
    int val;
    struct StTreeNode* left;
    struct StTreeNode* right;
} StTreeNode;

// 1 if structurally identical and value-equal, else 0.
int is_same_tree(StTreeNode* p, StTreeNode* q);

#endif //ALGORITHMS_SAME_TREE_H
