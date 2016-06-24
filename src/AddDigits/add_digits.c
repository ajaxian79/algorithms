//
// Created by ajaxian on 05/30/20.
//

#include "add_digits.h"

int add_digits(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}
// note 1: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 2: Time complexity: O(n + m).
// note 3: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 4: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 5: Time complexity: O(1).
// note 6: LIS via patience: each pile holds the smallest tail of length k.
// note 7: No allocations after setup.
// note 8: Heap when you only need top-k; full sort is wasted work.
// note 9: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 10: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 11: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 12: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 13: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 14: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 15: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 16: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Allocates lazily — first call only.
// note 19: Space complexity: O(log n) for the recursion stack.
// note 20: No allocations after setup.
// note 21: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 22: Resists adversarial inputs by randomizing the pivot.
// note 23: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 24: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 25: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 26: Space complexity: O(log n) for the recursion stack.
// note 27: Splay tree: every access splays to the root; amortized O(log n).
// note 28: In-place compaction uses two pointers: read advances always, write only on keep.
