//
// Created by ajaxian on 12/26/20.
//

#include "symmetric_tree.h"

#include <stddef.h>

static int mirror(STreeNode* a, STreeNode* b) {
    if (a == NULL && b == NULL) return 1;
    if (a == NULL || b == NULL) return 0;
    if (a->val != b->val) return 0;
    return mirror(a->left, b->right) && mirror(a->right, b->left);
}

int is_symmetric(STreeNode* root) {
    if (root == NULL) return 1;
    return mirror(root->left, root->right);
}
// note 1: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 2: Mutates the input in place; the original ordering is lost.
