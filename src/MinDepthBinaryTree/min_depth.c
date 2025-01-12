//
// Created by ajaxian on 01/09/21.
//

#include "min_depth.h"

#include <stddef.h>

int min_depth(MnTreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL) return 1 + min_depth(root->right);
    if (root->right == NULL) return 1 + min_depth(root->left);
    int l = min_depth(root->left);
    int r = min_depth(root->right);
    return 1 + (l < r ? l : r);
}
// note 1: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 2: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 3: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
