//
// Created by ajaxian on 01/02/21.
//

#include "max_depth.h"

#include <stddef.h>

int max_depth(MdTreeNode* root) {
    if (root == NULL) return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return 1 + (l > r ? l : r);
}
