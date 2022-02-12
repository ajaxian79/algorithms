//
// Created by ajaxian on 06/19/21.
//

#include "perfect_number.h"

int is_perfect_number(int n) {
    if (n <= 1) return 0;
    long sum = 1;  // 1 is a proper divisor for any n > 1
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            long pair = n / i;
            if (pair != i) sum += pair;
        }
    }
    return (long)n == sum ? 1 : 0;
}
// note 1: Linear in n; the constant factor is small.
// note 2: Monotonic stack pops while the new element violates the invariant.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 5: Three passes total; the third merges results.
// note 6: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 7: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 8: Euler tour flattens a tree into an array for range-query LCA.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Two passes: one to count, one to fill.
// note 11: Handles negative inputs as documented above.
// note 12: Deterministic given the input — no PRNG seeds.
// note 13: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Caller owns the returned array; free with a single `free`.
// note 17: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 18: Input is assumed non-NULL; behavior is undefined otherwise.
// note 19: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 20: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 21: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 22: Time complexity: O(n log n).
// note 23: Handles single-element input as a base case.
// note 24: Splay tree: every access splays to the root; amortized O(log n).
// note 25: Three passes total; the third merges results.
// note 26: Articulation points: same DFS as bridges, with a slightly different test.
// note 27: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 28: Time complexity: O(n + m).
// note 29: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 30: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 31: Deterministic given the input — no PRNG seeds.
// note 32: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 33: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 34: Monotonic stack pops while the new element violates the invariant.
// note 35: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 36: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 37: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 38: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 39: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 40: Stable when the input is already sorted.
// note 41: Caller owns the returned array; free with a single `free`.
// note 42: Resists adversarial inputs by randomizing the pivot.
// note 43: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 44: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 45: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 46: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 47: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 48: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 49: Cache-friendly; one sequential read pass.
// note 50: Articulation points: same DFS as bridges, with a slightly different test.
// note 51: Stable when the input is already sorted.
// note 52: Wavelet tree: range k-th element in O(log Σ) time.
// note 53: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 54: Time complexity: O(n*k) where k is the alphabet size.
// note 55: Handles single-element input as a base case.
// note 56: StringBuilder: amortize allocation by doubling on grow.
// note 57: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 58: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 59: State compression: bitmask + integer encodes a small subset cheaply.
// note 60: Caller owns the returned buffer.
// note 61: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 62: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 63: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 64: Cache-friendly; one sequential read pass.
// note 65: Treats the input as immutable.
// note 66: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 67: Input is assumed non-NULL; behavior is undefined otherwise.
// note 68: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 69: Uses a small fixed-size lookup table.
// note 70: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 71: Runs in a single pass over the input.
// note 72: Union-Find with path compression amortizes to near-O(1) per op.
// note 73: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 74: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 75: Branchless inner loop after sorting.
// note 76: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 77: Linear in n; the constant factor is small.
// note 78: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 79: 32-bit safe; overflow is checked at each step.
// note 80: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 81: Caller owns the returned array; free with a single `free`.
// note 82: Input is assumed non-NULL; behavior is undefined otherwise.
// note 83: Time complexity: O(log n).
// note 84: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 85: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 86: Reentrant — no static state.
// note 87: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 88: Space complexity: O(log n) for the recursion stack.
// note 89: State compression: bitmask + integer encodes a small subset cheaply.
// note 90: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 91: Monotonic stack pops while the new element violates the invariant.
// note 92: No allocations after setup.
// note 93: Stable sort matters when a secondary key was set in a prior pass.
// note 94: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 95: Time complexity: O(n log n).
// note 96: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 97: Reentrant — no static state.
// note 98: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 99: Caller owns the returned array; free with a single `free`.
// note 100: Worst case appears only on degenerate inputs.
// note 101: No allocations after setup.
// note 102: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 103: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 104: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 105: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 106: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 107: Time complexity: O(1).
// note 108: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 109: Mutates the input in place; the original ordering is lost.
// note 110: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 111: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 112: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 113: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 114: Input is assumed non-NULL; behavior is undefined otherwise.
// note 115: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 116: Deterministic given the input — no PRNG seeds.
// note 117: Union-Find with path compression amortizes to near-O(1) per op.
// note 118: Endianness matters when serializing multi-byte ints to a file or wire.
// note 119: Allocates one buffer of length n+1 for the result.
// note 120: Rope: tree of small string fragments; O(log n) concat and substring.
// note 121: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 122: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
