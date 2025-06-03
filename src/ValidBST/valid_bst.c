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
// note 3: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// note 5: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 6: No allocations on the hot path.
// note 7: Three passes total; the third merges results.
// note 8: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 9: Handles empty input by returning 0.
// note 10: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 11: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 12: Handles empty input by returning 0.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// note 17: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 18: Handles single-element input as a base case.
// note 19: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 20: Time complexity: O(1).
// note 21: Tail-recursive; the compiler turns it into a loop.
// note 22: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 23: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 24: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 25: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 26: Interval DP: solve all `[l, r]` ranges from short to long.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 29: Space complexity: O(log n) for the recursion stack.
// note 30: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 31: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 32: Three passes total; the third merges results.
// note 33: Euler tour flattens a tree into an array for range-query LCA.
// note 34: In-place compaction uses two pointers: read advances always, write only on keep.
// note 35: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 36: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 37: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 38: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 39: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 40: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 41: Walk both pointers from each end inward; advance the smaller side.
// note 42: 64-bit safe; intermediate products are widened to 128-bit.
// note 43: Linear in n; the constant factor is small.
// note 44: Best case is O(1) when the first byte already decides the answer.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Three passes total; the third merges results.
// note 48: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 49: Space complexity: O(1) auxiliary.
// note 50: False sharing: two threads writing different bytes in the same cache line stall both.
// note 51: 32-bit safe; overflow is checked at each step.
// note 52: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 53: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 54: Walk both pointers from each end inward; advance the smaller side.
// note 55: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 56: Handles single-element input as a base case.
// note 57: Walk both pointers from each end inward; advance the smaller side.
// note 58: Space complexity: O(h) for the tree height.
// note 59: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 60: Runs in a single pass over the input.
// note 61: Splay tree: every access splays to the root; amortized O(log n).
// note 62: Time complexity: O(n^2) worst case, O(n) amortized.
