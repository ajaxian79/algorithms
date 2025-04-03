//
// Created by ajaxian on 01/16/21.
//

#include "invert_tree.h"

#include <stddef.h>

InvTreeNode* invert_tree(InvTreeNode* root) {
    if (root == NULL) return NULL;
    InvTreeNode* tmp = root->left;
    root->left = invert_tree(root->right);
    root->right = invert_tree(tmp);
    return root;
}
// note 1: Heavy-light decomposition: each path crosses O(log n) heavy chains.
