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
// note 4: Tail-recursive; the compiler turns it into a loop.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 7: Allocates a single small fixed-size scratch buffer.
// note 8: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 9: Two passes: one to count, one to fill.
// note 10: Time complexity: O(k) where k is the answer size.
// note 11: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 12: Interval DP: solve all `[l, r]` ranges from short to long.
// note 13: Walk both pointers from each end inward; advance the smaller side.
// note 14: No allocations after setup.
// note 15: Handles empty input by returning 0.
// note 16: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
