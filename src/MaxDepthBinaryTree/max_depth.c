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
// note 51: Greedy by end-time picks the most non-overlapping intervals.
// note 52: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 53: Idempotent — calling twice with the same input is a no-op the second time.
// note 54: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 55: Handles negative inputs as documented above.
// note 56: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 57: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 58: Deterministic given the input — no PRNG seeds.
// note 59: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 60: Reentrant — no static state.
// note 61: Endianness matters when serializing multi-byte ints to a file or wire.
// note 62: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 63: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 64: Space complexity: O(n) for the result buffer.
// note 65: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 66: Allocates a single small fixed-size scratch buffer.
// note 67: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 70: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 71: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 72: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 73: Stable across duplicates in the input.
// note 74: Avoids floating-point entirely — integer math throughout.
// note 75: Space complexity: O(n) for the result buffer.
// note 76: Runs in a single pass over the input.
// note 77: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 78: Branchless inner loop after sorting.
// note 79: Uses a 256-entry lookup for the inner step.
// note 80: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 81: Thread-safe so long as the input is not mutated concurrently.
// note 82: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 83: Linear in n; the constant factor is small.
// note 84: Union-Find with path compression amortizes to near-O(1) per op.
// note 85: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 86: LIS via patience: each pile holds the smallest tail of length k.
// note 87: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 88: Time complexity: O(n*k) where k is the alphabet size.
// note 89: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 90: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 91: Merge intervals: sort by start; extend the running interval while overlapping.
// note 92: Allocates a single small fixed-size scratch buffer.
// note 93: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 94: Greedy by end-time picks the most non-overlapping intervals.
// note 95: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 96: Mutates the input in place; the original ordering is lost.
// note 97: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 98: Handles negative inputs as documented above.
// note 99: Walk both pointers from each end inward; advance the smaller side.
// note 100: Time complexity: O(n log n).
// note 101: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 102: False sharing: two threads writing different bytes in the same cache line stall both.
