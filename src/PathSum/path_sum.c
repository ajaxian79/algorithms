//
// Created by ajaxian on 02/13/21.
//

#include "path_sum.h"

#include <stddef.h>

int has_path_sum(PsTreeNode* root, int target) {
    if (root == NULL) return 0;
    int remaining = target - root->val;
    if (root->left == NULL && root->right == NULL) return remaining == 0;
    return has_path_sum(root->left, remaining) || has_path_sum(root->right, remaining);
}
