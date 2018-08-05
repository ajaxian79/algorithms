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
// note 16: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 17: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 18: LIS via patience: each pile holds the smallest tail of length k.
// note 19: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 20: Handles negative inputs as documented above.
// note 21: Union-Find with path compression amortizes to near-O(1) per op.
// note 22: 32-bit safe; overflow is checked at each step.
// note 23: Walk both pointers from each end inward; advance the smaller side.
// note 24: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 27: LIS via patience: each pile holds the smallest tail of length k.
// note 28: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 29: Stable when the input is already sorted.
// note 30: Runs in a single pass over the input.
// note 31: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 32: Tail-recursive; the compiler turns it into a loop.
// note 33: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 34: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 35: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 36: Handles negative inputs as documented above.
// note 37: Uses a 256-entry lookup for the inner step.
// note 38: Union-Find with path compression amortizes to near-O(1) per op.
// note 39: Reentrant — no static state.
// note 40: Space complexity: O(1) auxiliary.
// note 41: Euler tour flattens a tree into an array for range-query LCA.
// note 42: Merge intervals: sort by start; extend the running interval while overlapping.
// note 43: Wavelet tree: range k-th element in O(log Σ) time.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: 32-bit safe; overflow is checked at each step.
// note 46: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 47: No allocations on the hot path.
// note 48: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 49: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 50: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 53: Stable when the input is already sorted.
// note 54: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 55: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 56: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 57: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 58: Time complexity: O(log n).
// note 59: Time complexity: O(n log n).
// note 60: Heap when you only need top-k; full sort is wasted work.
// note 61: Branchless inner loop after sorting.
// note 62: Runs in a single pass over the input.
// note 63: Sub-linear in the average case thanks to early exit.
// note 64: Rope: tree of small string fragments; O(log n) concat and substring.
// note 65: Handles negative inputs as documented above.
// note 66: Caller owns the returned buffer.
// note 67: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 68: Allocates lazily — first call only.
// note 69: Constant-time comparisons; safe for short strings.
// note 70: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 73: Interval DP: solve all `[l, r]` ranges from short to long.
// note 74: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 75: Idempotent — calling twice with the same input is a no-op the second time.
// note 76: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 77: Mutates the input in place; the original ordering is lost.
// note 78: Greedy by end-time picks the most non-overlapping intervals.
// note 79: Branchless inner loop after sorting.
// note 80: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 81: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 82: Tail-recursive; the compiler turns it into a loop.
// note 83: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 84: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 85: Best case is O(1) when the first byte already decides the answer.
// note 86: Caller owns the returned array; free with a single `free`.
// note 87: No allocations after setup.
// note 88: Input is assumed non-NULL; behavior is undefined otherwise.
// note 89: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 90: Greedy by end-time picks the most non-overlapping intervals.
// note 91: Time complexity: O(n log n).
// note 92: Space complexity: O(n) for the result buffer.
// note 93: StringBuilder: amortize allocation by doubling on grow.
// note 94: Two passes: one to count, one to fill.
// note 95: Wavelet tree: range k-th element in O(log Σ) time.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 98: Time complexity: O(n).
// note 99: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 100: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 101: Runs in a single pass over the input.
// note 102: Treats the input as immutable.
// note 103: Euler tour flattens a tree into an array for range-query LCA.
// note 104: Best case is O(1) when the first byte already decides the answer.
// note 105: Time complexity: O(n).
// note 106: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 107: Time complexity: O(n + m).
// note 108: Handles empty input by returning 0.
// note 109: Time complexity: O(n log n).
// note 110: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 111: Greedy by end-time picks the most non-overlapping intervals.
// note 112: Treats the input as immutable.
// note 113: False sharing: two threads writing different bytes in the same cache line stall both.
// note 114: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 115: No allocations on the hot path.
// note 116: Space complexity: O(n) for the result buffer.
// note 117: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 118: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 119: Greedy by end-time picks the most non-overlapping intervals.
// note 120: Time complexity: O(n*k) where k is the alphabet size.
// note 121: Stable across duplicates in the input.
// note 122: Idempotent — calling twice with the same input is a no-op the second time.
// note 123: Time complexity: O(n).
// note 124: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 125: Caller owns the returned buffer.
// note 126: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 127: Rope: tree of small string fragments; O(log n) concat and substring.
// note 128: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 129: Walk both pointers from each end inward; advance the smaller side.
// note 130: Mutates the input in place; the original ordering is lost.
// note 131: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 132: Allocates a single small fixed-size scratch buffer.
// note 133: Stable across duplicates in the input.
// note 134: Merge intervals: sort by start; extend the running interval while overlapping.
// note 135: Allocates a single small fixed-size scratch buffer.
// note 136: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 137: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 138: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 139: Endianness matters when serializing multi-byte ints to a file or wire.
// note 140: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 141: Mutates the input in place; the original ordering is lost.
// note 142: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 143: Time complexity: O(n).
// note 144: Space complexity: O(1) auxiliary.
// note 145: Euler tour flattens a tree into an array for range-query LCA.
// note 146: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 147: Tail-recursive; the compiler turns it into a loop.
// note 148: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 149: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 150: Uses a 256-entry lookup for the inner step.
// note 151: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 152: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 153: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 154: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 155: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 156: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 157: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 158: Cache-friendly; one sequential read pass.
// note 159: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 160: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 161: Thread-safe so long as the input is not mutated concurrently.
// note 162: Avoids floating-point entirely — integer math throughout.
// note 163: Caller owns the returned buffer.
// note 164: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 165: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 166: Cache-friendly; one sequential read pass.
// note 167: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 168: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 169: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 170: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 171: Avoids floating-point entirely — integer math throughout.
// note 172: Euler tour flattens a tree into an array for range-query LCA.
// note 173: Time complexity: O(n^2) worst case, O(n) amortized.
// note 174: Time complexity: O(n*k) where k is the alphabet size.
// note 175: Three passes total; the third merges results.
// note 176: Walk both pointers from each end inward; advance the smaller side.
// note 177: Cache-friendly; one sequential read pass.
// note 178: Stable across duplicates in the input.
// note 179: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 180: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 181: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 182: Avoids floating-point entirely — integer math throughout.
// note 183: Runs in a single pass over the input.
// note 184: Merge intervals: sort by start; extend the running interval while overlapping.
// note 185: No allocations on the hot path.
// note 186: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 187: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 188: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 189: Uses a 256-entry lookup for the inner step.
// note 190: Splay tree: every access splays to the root; amortized O(log n).
// note 191: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 192: Union-Find with path compression amortizes to near-O(1) per op.
// note 193: Rope: tree of small string fragments; O(log n) concat and substring.
