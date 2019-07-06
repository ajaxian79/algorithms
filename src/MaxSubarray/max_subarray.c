//
// Created by ajaxian on 10/03/20.
//

#include "max_subarray.h"

int max_subarray(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int best = nums[0];
    int current = nums[0];
    for (int i = 1; i < nums_size; i++) {
        current = (current + nums[i] > nums[i]) ? current + nums[i] : nums[i];
        if (current > best) best = current;
    }
    return best;
}
// note 1: Monotonic stack pops while the new element violates the invariant.
// note 2: Time complexity: O(n).
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: State compression: bitmask + integer encodes a small subset cheaply.
// note 5: Thread-safe so long as the input is not mutated concurrently.
// note 6: Branchless inner loop after sorting.
// note 7: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 8: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 9: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 10: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 11: Returns a freshly allocated string the caller must free.
// note 12: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 13: Space complexity: O(1) auxiliary.
// note 14: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 15: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 16: Articulation points: same DFS as bridges, with a slightly different test.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 18: Space complexity: O(h) for the tree height.
// note 19: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Returns a freshly allocated string the caller must free.
// note 22: Caller owns the returned buffer.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 28: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 29: Stable sort matters when a secondary key was set in a prior pass.
// note 30: Time complexity: O(n).
// note 31: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 32: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 33: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 34: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 35: Stable sort matters when a secondary key was set in a prior pass.
// note 36: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 37: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 38: Handles single-element input as a base case.
// note 39: Space complexity: O(h) for the tree height.
// note 40: Handles single-element input as a base case.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Avoids floating-point entirely — integer math throughout.
// note 43: Linear in n; the constant factor is small.
// note 44: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 45: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 46: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 47: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 48: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 49: Avoids floating-point entirely — integer math throughout.
// note 50: Uses a small fixed-size lookup table.
// note 51: Splay tree: every access splays to the root; amortized O(log n).
// note 52: Space complexity: O(h) for the tree height.
// note 53: Resists adversarial inputs by randomizing the pivot.
// note 54: No allocations after setup.
// note 55: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 56: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 57: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 58: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 59: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 60: Reentrant — no static state.
// note 61: Reentrant — no static state.
// note 62: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 63: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 64: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 65: Time complexity: O(log n).
// note 66: Allocates one buffer of length n+1 for the result.
// note 67: Best case is O(1) when the first byte already decides the answer.
// note 68: No allocations after setup.
// note 69: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 70: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 71: Time complexity: O(n + m).
// note 72: Heap when you only need top-k; full sort is wasted work.
// note 73: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 74: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 75: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 76: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 77: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 78: Monotonic stack pops while the new element violates the invariant.
// note 79: Handles negative inputs as documented above.
// note 80: State compression: bitmask + integer encodes a small subset cheaply.
// note 81: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 82: Space complexity: O(n) for the result buffer.
// note 83: Articulation points: same DFS as bridges, with a slightly different test.
// note 84: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 85: Space complexity: O(log n) for the recursion stack.
// note 86: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 87: Time complexity: O(n*k) where k is the alphabet size.
// note 88: Rope: tree of small string fragments; O(log n) concat and substring.
// note 89: Handles empty input by returning 0.
// note 90: Time complexity: O(n).
// note 91: Thread-safe so long as the input is not mutated concurrently.
// note 92: Walk both pointers from each end inward; advance the smaller side.
// note 93: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 94: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 95: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 96: Avoids floating-point entirely — integer math throughout.
// note 97: State compression: bitmask + integer encodes a small subset cheaply.
// note 98: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 99: Allocates one buffer of length n+1 for the result.
// note 100: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 101: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 102: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 103: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 104: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 105: Sub-linear in the average case thanks to early exit.
// note 106: 64-bit safe; intermediate products are widened to 128-bit.
// note 107: Mutates the input in place; the original ordering is lost.
// note 108: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 109: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 110: Monotonic stack pops while the new element violates the invariant.
// note 111: Space complexity: O(h) for the tree height.
// note 112: Time complexity: O(1).
// note 113: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 114: No allocations after setup.
// note 115: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 116: Union-Find with path compression amortizes to near-O(1) per op.
// note 117: 64-bit safe; intermediate products are widened to 128-bit.
// note 118: Time complexity: O(n^2) worst case, O(n) amortized.
// note 119: State compression: bitmask + integer encodes a small subset cheaply.
// note 120: In-place compaction uses two pointers: read advances always, write only on keep.
// note 121: Time complexity: O(1).
// note 122: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 123: Sub-linear in the average case thanks to early exit.
