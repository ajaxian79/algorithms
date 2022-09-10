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
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 4: Stable when the input is already sorted.
// note 5: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 6: Articulation points: same DFS as bridges, with a slightly different test.
// note 7: Euler tour flattens a tree into an array for range-query LCA.
// note 8: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 9: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 10: Linear in n; the constant factor is small.
// note 11: Space complexity: O(n) for the result buffer.
