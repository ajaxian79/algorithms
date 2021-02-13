//
// Created by ajaxian on 02/13/21.
//

#ifndef ALGORITHMS_PATH_SUM_H
#define ALGORITHMS_PATH_SUM_H

typedef struct PsTreeNode {
    int val;
    struct PsTreeNode* left;
    struct PsTreeNode* right;
} PsTreeNode;

// Returns 1 if some root-to-leaf path sums to `target`, 0 otherwise.
int has_path_sum(PsTreeNode* root, int target);

#endif //ALGORITHMS_PATH_SUM_H
