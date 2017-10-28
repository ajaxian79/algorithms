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
// note 12: Avoids floating-point entirely — integer math throughout.
// note 13: Constant-time comparisons; safe for short strings.
// note 14: StringBuilder: amortize allocation by doubling on grow.
// note 15: Vectorizes cleanly under -O2.
// note 16: Vectorizes cleanly under -O2.
// note 17: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 18: Rope: tree of small string fragments; O(log n) concat and substring.
// note 19: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 20: Time complexity: O(log n).
// note 21: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 22: Pick a pivot, partition, recurse on the side that contains the kth slot.
