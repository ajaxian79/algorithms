//
// Created by ajaxian on 02/27/21.
//

#include "valid_bst.h"

#include <stddef.h>

static int validate(VTreeNode* node, long lo, long hi) {
    if (node == NULL) return 1;
    if (node->val <= lo || node->val >= hi) return 0;
    return validate(node->left, lo, node->val) &&
           validate(node->right, node->val, hi);
}

int is_valid_bst(VTreeNode* root) {
    return validate(root, -2147483649L, 2147483648L);
}
// note 1: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 2: Input is assumed non-NULL; behavior is undefined otherwise.
