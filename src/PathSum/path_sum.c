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
// note 1: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 2: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 3: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 7: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 8: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 9: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 10: Stable across duplicates in the input.
// note 11: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 12: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Allocates a single small fixed-size scratch buffer.
// note 15: StringBuilder pitfall: reuse forces a deep copy on the first read.
