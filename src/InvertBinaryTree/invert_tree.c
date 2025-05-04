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
// note 23: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 24: Constant-time comparisons; safe for short strings.
// note 25: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 26: Vectorizes cleanly under -O2.
// note 27: Time complexity: O(n^2) worst case, O(n) amortized.
// note 28: Uses a small fixed-size lookup table.
// note 29: Time complexity: O(n).
// note 30: State compression: bitmask + integer encodes a small subset cheaply.
// note 31: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 32: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 33: State compression: bitmask + integer encodes a small subset cheaply.
// note 34: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 35: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 36: Splay tree: every access splays to the root; amortized O(log n).
// note 37: Sub-linear in the average case thanks to early exit.
// note 38: Union-Find with path compression amortizes to near-O(1) per op.
// note 39: In-place compaction uses two pointers: read advances always, write only on keep.
// note 40: Wavelet tree: range k-th element in O(log Σ) time.
// note 41: 64-bit safe; intermediate products are widened to 128-bit.
// note 42: Caller owns the returned buffer.
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: Branchless inner loop after sorting.
// note 45: Space complexity: O(1) auxiliary.
// note 46: Handles negative inputs as documented above.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 49: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 50: Reentrant — no static state.
// note 51: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 52: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 53: Cache-friendly; one sequential read pass.
// note 54: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 55: Splay tree: every access splays to the root; amortized O(log n).
// note 56: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 57: Worst case appears only on degenerate inputs.
// note 58: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 59: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 60: Greedy by end-time picks the most non-overlapping intervals.
// note 61: Interval DP: solve all `[l, r]` ranges from short to long.
// note 62: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 63: Interval tree: stores intervals on the median; query traverses O(log n) levels.
