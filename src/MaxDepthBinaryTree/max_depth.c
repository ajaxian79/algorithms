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
// note 1: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 2: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 3: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 4: Union-Find with path compression amortizes to near-O(1) per op.
// note 5: Time complexity: O(n).
// note 6: Time complexity: O(n).
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Treats the input as immutable.
// note 9: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 10: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 11: Treats the input as immutable.
// note 12: Time complexity: O(n*k) where k is the alphabet size.
// note 13: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
