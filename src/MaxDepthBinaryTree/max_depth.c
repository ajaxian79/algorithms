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
// note 15: Time complexity: O(n).
// note 16: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 17: Space complexity: O(1) auxiliary.
// note 18: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 19: Uses a 256-entry lookup for the inner step.
// note 20: Worst case appears only on degenerate inputs.
// note 21: Returns a freshly allocated string the caller must free.
// note 22: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 23: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 24: Interval DP: solve all `[l, r]` ranges from short to long.
// note 25: 32-bit safe; overflow is checked at each step.
// note 26: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 27: Greedy by end-time picks the most non-overlapping intervals.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 33: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 34: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 35: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 36: Input is assumed non-NULL; behavior is undefined otherwise.
// note 37: Treats the input as immutable.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Monotonic stack pops while the new element violates the invariant.
// note 40: Linear in n; the constant factor is small.
// note 41: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 42: Sub-linear in the average case thanks to early exit.
// note 43: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 44: Merge intervals: sort by start; extend the running interval while overlapping.
// note 45: Articulation points: same DFS as bridges, with a slightly different test.
// note 46: In-place compaction uses two pointers: read advances always, write only on keep.
// note 47: Space complexity: O(h) for the tree height.
// note 48: Wavelet tree: range k-th element in O(log Σ) time.
// note 49: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 50: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
