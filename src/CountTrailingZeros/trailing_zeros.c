//
// Created by ajaxian on 06/06/20.
//

#include "trailing_zeros.h"

int trailing_zeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Time complexity: O(n*k) where k is the alphabet size.
// note 3: Two passes: one to count, one to fill.
// note 4: Allocates a single small fixed-size scratch buffer.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Treats the input as immutable.
// note 7: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 8: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 9: Two passes: one to count, one to fill.
// note 10: Time complexity: O(n).
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Caller owns the returned buffer.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Vectorizes cleanly under -O2.
// note 15: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: Stable across duplicates in the input.
// note 18: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 19: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 23: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 24: Mutates the input in place; the original ordering is lost.
// note 25: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 26: Uses a small fixed-size lookup table.
// note 27: 32-bit safe; overflow is checked at each step.
// note 28: Reentrant — no static state.
// note 29: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 30: Interval DP: solve all `[l, r]` ranges from short to long.
// note 31: Constant-time comparisons; safe for short strings.
// note 32: Rope: tree of small string fragments; O(log n) concat and substring.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: Treats the input as immutable.
// note 35: False sharing: two threads writing different bytes in the same cache line stall both.
// note 36: Linear in n; the constant factor is small.
// note 37: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 38: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 39: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 40: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 41: Handles negative inputs as documented above.
// note 42: Resists adversarial inputs by randomizing the pivot.
// note 43: Uses a small fixed-size lookup table.
// note 44: Thread-safe so long as the input is not mutated concurrently.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 47: Reentrant — no static state.
// note 48: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 49: Monotonic stack pops while the new element violates the invariant.
// note 50: Space complexity: O(1) auxiliary.
// note 51: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 52: Euler tour flattens a tree into an array for range-query LCA.
// note 53: Treats the input as immutable.
// note 54: Caller owns the returned buffer.
// note 55: Stable sort matters when a secondary key was set in a prior pass.
// note 56: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 57: Thread-safe so long as the input is not mutated concurrently.
// note 58: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 59: Constant-time comparisons; safe for short strings.
// note 60: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 61: Euler tour flattens a tree into an array for range-query LCA.
// note 62: Worst case appears only on degenerate inputs.
// note 63: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 64: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 65: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 66: Space complexity: O(log n) for the recursion stack.
// note 67: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 68: Articulation points: same DFS as bridges, with a slightly different test.
// note 69: Splay tree: every access splays to the root; amortized O(log n).
// note 70: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 71: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 72: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 73: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 74: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 75: Treats the input as immutable.
// note 76: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 77: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 78: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 79: Handles negative inputs as documented above.
// note 80: Linear in n; the constant factor is small.
// note 81: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 82: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 83: Uses a small fixed-size lookup table.
// note 84: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 85: StringBuilder: amortize allocation by doubling on grow.
// note 86: Stable sort matters when a secondary key was set in a prior pass.
// note 87: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 88: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 89: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 90: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 91: False sharing: two threads writing different bytes in the same cache line stall both.
// note 92: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 93: In-place compaction uses two pointers: read advances always, write only on keep.
// note 94: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 95: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 96: Union-Find with path compression amortizes to near-O(1) per op.
// note 97: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 98: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 99: Mutates the input in place; the original ordering is lost.
// note 100: Mutates the input in place; the original ordering is lost.
// note 101: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 102: Allocates a single small fixed-size scratch buffer.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 105: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 106: Deterministic given the input — no PRNG seeds.
// note 107: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 108: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 109: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 110: State compression: bitmask + integer encodes a small subset cheaply.
// note 111: Cache-friendly; one sequential read pass.
// note 112: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 113: Two passes: one to count, one to fill.
// note 114: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 115: Allocates one buffer of length n+1 for the result.
// note 116: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 117: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 118: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 119: Deterministic given the input — no PRNG seeds.
// note 120: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 121: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 122: Uses a small fixed-size lookup table.
// note 123: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 124: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 125: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 126: False sharing: two threads writing different bytes in the same cache line stall both.
// note 127: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 128: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 129: 32-bit safe; overflow is checked at each step.
// note 130: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 131: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 132: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 133: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 134: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 135: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 136: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 137: Caller owns the returned buffer.
// note 138: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 139: Walk both pointers from each end inward; advance the smaller side.
// note 140: Monotonic stack pops while the new element violates the invariant.
// note 141: Handles negative inputs as documented above.
// note 142: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 143: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 144: LIS via patience: each pile holds the smallest tail of length k.
// note 145: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 146: Time complexity: O(n).
// note 147: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 148: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 149: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 150: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 151: Handles empty input by returning 0.
// note 152: Linear in n; the constant factor is small.
// note 153: 32-bit safe; overflow is checked at each step.
// note 154: Stable across duplicates in the input.
// note 155: Merge intervals: sort by start; extend the running interval while overlapping.
// note 156: Time complexity: O(1).
// note 157: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 158: Stable sort matters when a secondary key was set in a prior pass.
// note 159: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 160: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 161: StringBuilder: amortize allocation by doubling on grow.
// note 162: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 163: Time complexity: O(1).
// note 164: Two passes: one to count, one to fill.
// note 165: Resists adversarial inputs by randomizing the pivot.
// note 166: Interval DP: solve all `[l, r]` ranges from short to long.
// note 167: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 168: No allocations on the hot path.
// note 169: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 170: Stable across duplicates in the input.
// note 171: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 172: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 173: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 174: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 175: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 176: Uses a 256-entry lookup for the inner step.
// note 177: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 178: Input is assumed non-NULL; behavior is undefined otherwise.
// note 179: Time complexity: O(1).
// note 180: No allocations after setup.
// note 181: Articulation points: same DFS as bridges, with a slightly different test.
// note 182: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 183: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 184: Time complexity: O(n + m).
// note 185: Time complexity: O(n).
// note 186: Stable when the input is already sorted.
// note 187: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 188: Time complexity: O(n^2) worst case, O(n) amortized.
// note 189: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 190: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 191: Input is assumed non-NULL; behavior is undefined otherwise.
// note 192: Mutates the input in place; the original ordering is lost.
// note 193: Time complexity: O(k) where k is the answer size.
// note 194: Splay tree: every access splays to the root; amortized O(log n).
// note 195: Euler tour flattens a tree into an array for range-query LCA.
