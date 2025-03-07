//
// Created by ajaxian on 02/20/21.
//

#include "same_tree.h"

#include <stddef.h>

int is_same_tree(StTreeNode* p, StTreeNode* q) {
    if (p == NULL && q == NULL) return 1;
    if (p == NULL || q == NULL) return 0;
    if (p->val != q->val) return 0;
    return is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: StringBuilder pitfall: reuse forces a deep copy on the first read.
