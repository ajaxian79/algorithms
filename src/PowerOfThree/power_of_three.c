//
// Created by ajaxian on 05/18/24.
//

#include "power_of_three.h"

int is_power_of_three(int n) {
    if (n < 1) return 0;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Articulation points: same DFS as bridges, with a slightly different test.
// note 3: Euler tour flattens a tree into an array for range-query LCA.
// note 4: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 5: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 6: Interval DP: solve all `[l, r]` ranges from short to long.
// note 7: Time complexity: O(log n).
// note 8: Time complexity: O(n + m).
// note 9: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 10: Time complexity: O(log n).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: Uses a small fixed-size lookup table.
// note 13: Time complexity: O(n).
// note 14: Branchless inner loop after sorting.
// note 15: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 16: Heap when you only need top-k; full sort is wasted work.
// note 17: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 18: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 19: Space complexity: O(n) for the result buffer.
// note 20: Caller owns the returned buffer.
// note 21: Treats the input as immutable.
// note 22: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 23: Caller owns the returned buffer.
// note 24: Stable sort matters when a secondary key was set in a prior pass.
// note 25: Rope: tree of small string fragments; O(log n) concat and substring.
// note 26: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 27: Interval DP: solve all `[l, r]` ranges from short to long.
// note 28: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 29: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 30: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Avoids floating-point entirely — integer math throughout.
// note 33: Allocates one buffer of length n+1 for the result.
// note 34: In-place compaction uses two pointers: read advances always, write only on keep.
// note 35: Linear in n; the constant factor is small.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 38: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 39: Sub-linear in the average case thanks to early exit.
// note 40: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 41: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 42: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 43: Tail-recursive; the compiler turns it into a loop.
// note 44: Wavelet tree: range k-th element in O(log Σ) time.
// note 45: Endianness matters when serializing multi-byte ints to a file or wire.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Thread-safe so long as the input is not mutated concurrently.
// note 48: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Time complexity: O(log n).
// note 51: No allocations on the hot path.
// note 52: Time complexity: O(n).
// note 53: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 54: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 55: Thread-safe so long as the input is not mutated concurrently.
// note 56: Graph DP on DAGs: topological order makes the dependency direction explicit.
