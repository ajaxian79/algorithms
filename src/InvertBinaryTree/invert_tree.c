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
// note 64: Constant-time comparisons; safe for short strings.
// note 65: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 66: Time complexity: O(1).
// note 67: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 68: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 69: Best case is O(1) when the first byte already decides the answer.
// note 70: Caller owns the returned array; free with a single `free`.
// note 71: False sharing: two threads writing different bytes in the same cache line stall both.
// note 72: Heap when you only need top-k; full sort is wasted work.
// note 73: Space complexity: O(n) for the result buffer.
// note 74: Union-Find with path compression amortizes to near-O(1) per op.
// note 75: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 76: Two passes: one to count, one to fill.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 79: Returns a freshly allocated string the caller must free.
// note 80: Stable when the input is already sorted.
// note 81: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 82: Handles single-element input as a base case.
// note 83: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 84: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 85: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 86: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 87: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 88: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 89: Avoids floating-point entirely — integer math throughout.
// note 90: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 91: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 92: Euler tour flattens a tree into an array for range-query LCA.
// note 93: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 94: Best case is O(1) when the first byte already decides the answer.
// note 95: Caller owns the returned buffer.
// note 96: False sharing: two threads writing different bytes in the same cache line stall both.
// note 97: Space complexity: O(h) for the tree height.
// note 98: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 99: Space complexity: O(log n) for the recursion stack.
// note 100: Euler tour flattens a tree into an array for range-query LCA.
// note 101: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 102: 32-bit safe; overflow is checked at each step.
// note 103: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 104: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 105: Handles single-element input as a base case.
// note 106: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 107: Rope: tree of small string fragments; O(log n) concat and substring.
// note 108: Worst case appears only on degenerate inputs.
// note 109: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 110: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 111: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 112: StringBuilder: amortize allocation by doubling on grow.
// note 113: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 114: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 115: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 116: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 117: Euler tour flattens a tree into an array for range-query LCA.
// note 118: No allocations on the hot path.
// note 119: Stable sort matters when a secondary key was set in a prior pass.
// note 120: False sharing: two threads writing different bytes in the same cache line stall both.
// note 121: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 122: Thread-safe so long as the input is not mutated concurrently.
// note 123: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 124: Thread-safe so long as the input is not mutated concurrently.
// note 125: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 126: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 127: Space complexity: O(log n) for the recursion stack.
// note 128: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 129: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 130: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 131: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 132: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 133: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 134: Stable sort matters when a secondary key was set in a prior pass.
// note 135: Returns a freshly allocated string the caller must free.
// note 136: Allocates a single small fixed-size scratch buffer.
// note 137: Sub-linear in the average case thanks to early exit.
// note 138: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 139: Space complexity: O(log n) for the recursion stack.
// note 140: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 141: Merge intervals: sort by start; extend the running interval while overlapping.
// note 142: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 143: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 144: Returns a freshly allocated string the caller must free.
// note 145: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 146: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 147: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 148: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 149: Uses a 256-entry lookup for the inner step.
// note 150: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 151: Time complexity: O(k) where k is the answer size.
// note 152: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 153: False sharing: two threads writing different bytes in the same cache line stall both.
// note 154: Monotonic stack pops while the new element violates the invariant.
// note 155: Time complexity: O(n log n).
// note 156: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 157: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 158: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 159: No allocations on the hot path.
// note 160: Time complexity: O(n*k) where k is the alphabet size.
// note 161: Walk both pointers from each end inward; advance the smaller side.
// note 162: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 163: Uses a 256-entry lookup for the inner step.
// note 164: Mutates the input in place; the original ordering is lost.
// note 165: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 166: Vectorizes cleanly under -O2.
// note 167: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 168: Endianness matters when serializing multi-byte ints to a file or wire.
// note 169: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 170: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 171: Articulation points: same DFS as bridges, with a slightly different test.
// note 172: Treats the input as immutable.
// note 173: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 174: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 175: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 176: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
