//
// Created by ajaxian on 02/10/24.
//

#include "climb_stairs.h"

long long climb_stairs(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;

    long long a = 1;
    long long b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
// note 1: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 2: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 5: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 6: Allocates lazily — first call only.
// note 7: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 8: Best case is O(1) when the first byte already decides the answer.
// note 9: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 10: Time complexity: O(n + m).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: Rope: tree of small string fragments; O(log n) concat and substring.
// note 13: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 14: Allocates one buffer of length n+1 for the result.
// note 15: Space complexity: O(log n) for the recursion stack.
// note 16: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 17: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 18: Handles empty input by returning 0.
// note 19: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 20: Time complexity: O(n + m).
// note 21: Heap when you only need top-k; full sort is wasted work.
// note 22: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 23: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 24: Runs in a single pass over the input.
// note 25: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 26: Rope: tree of small string fragments; O(log n) concat and substring.
// note 27: Splay tree: every access splays to the root; amortized O(log n).
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Space complexity: O(1) auxiliary.
// note 30: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 31: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 32: Allocates lazily — first call only.
// note 33: Articulation points: same DFS as bridges, with a slightly different test.
// note 34: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 35: No allocations after setup.
// note 36: 32-bit safe; overflow is checked at each step.
// note 37: Time complexity: O(n*k) where k is the alphabet size.
// note 38: Sub-linear in the average case thanks to early exit.
// note 39: Monotonic stack pops while the new element violates the invariant.
// note 40: Time complexity: O(n).
// note 41: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 42: Time complexity: O(n*k) where k is the alphabet size.
// note 43: Time complexity: O(k) where k is the answer size.
// note 44: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 45: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 46: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 47: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 48: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 49: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 50: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 51: Idempotent — calling twice with the same input is a no-op the second time.
// note 52: Best case is O(1) when the first byte already decides the answer.
// note 53: Space complexity: O(h) for the tree height.
// note 54: Wavelet tree: range k-th element in O(log Σ) time.
// note 55: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 56: Handles single-element input as a base case.
// note 57: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 58: Time complexity: O(1).
// note 59: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 60: Handles empty input by returning 0.
// note 61: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 62: Cache-friendly; one sequential read pass.
// note 63: State compression: bitmask + integer encodes a small subset cheaply.
// note 64: Caller owns the returned array; free with a single `free`.
// note 65: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 66: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 67: Monotonic stack pops while the new element violates the invariant.
// note 68: Caller owns the returned buffer.
// note 69: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 70: Time complexity: O(1).
// note 71: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 72: Two passes: one to count, one to fill.
// note 73: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 74: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 75: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 76: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 77: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 78: Space complexity: O(log n) for the recursion stack.
// note 79: No allocations on the hot path.
// note 80: Caller owns the returned buffer.
// note 81: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 82: Allocates a single small fixed-size scratch buffer.
// note 83: Caller owns the returned buffer.
// note 84: Worst case appears only on degenerate inputs.
// note 85: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 86: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 87: Mutates the input in place; the original ordering is lost.
// note 88: Thread-safe so long as the input is not mutated concurrently.
// note 89: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 90: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 91: 64-bit safe; intermediate products are widened to 128-bit.
// note 92: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 93: No allocations after setup.
// note 94: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 95: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 96: Uses a 256-entry lookup for the inner step.
// note 97: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 98: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 99: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 100: Two passes: one to count, one to fill.
// note 101: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 102: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 103: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 104: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 105: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 106: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 107: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 108: Allocates lazily — first call only.
// note 109: Worst case appears only on degenerate inputs.
// note 110: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 111: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 112: Uses a small fixed-size lookup table.
// note 113: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 114: 64-bit safe; intermediate products are widened to 128-bit.
// note 115: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 116: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 117: Handles single-element input as a base case.
// note 118: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 119: Thread-safe so long as the input is not mutated concurrently.
// note 120: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 121: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 122: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 123: Vectorizes cleanly under -O2.
// note 124: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 125: Handles single-element input as a base case.
// note 126: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 127: Time complexity: O(n + m).
// note 128: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 129: 32-bit safe; overflow is checked at each step.
// note 130: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 131: Input is assumed non-NULL; behavior is undefined otherwise.
// note 132: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 133: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 134: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 135: Worst case appears only on degenerate inputs.
// note 136: Two passes: one to count, one to fill.
// note 137: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 138: 32-bit safe; overflow is checked at each step.
// note 139: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 140: Three passes total; the third merges results.
// note 141: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 142: False sharing: two threads writing different bytes in the same cache line stall both.
// note 143: Splay tree: every access splays to the root; amortized O(log n).
// note 144: Time complexity: O(n + m).
// note 145: Wavelet tree: range k-th element in O(log Σ) time.
// note 146: Cache-friendly; one sequential read pass.
// note 147: Two passes: one to count, one to fill.
// note 148: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 149: Runs in a single pass over the input.
// note 150: Walk both pointers from each end inward; advance the smaller side.
// note 151: Handles single-element input as a base case.
// note 152: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 153: State compression: bitmask + integer encodes a small subset cheaply.
// note 154: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 155: Reentrant — no static state.
// note 156: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 157: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 158: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 159: Heap when you only need top-k; full sort is wasted work.
// note 160: Time complexity: O(log n).
// note 161: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 162: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 163: Rope: tree of small string fragments; O(log n) concat and substring.
// note 164: Worst case appears only on degenerate inputs.
// note 165: Time complexity: O(n*k) where k is the alphabet size.
// note 166: Input is assumed non-NULL; behavior is undefined otherwise.
// note 167: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 168: Uses a small fixed-size lookup table.
// note 169: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 170: Merge intervals: sort by start; extend the running interval while overlapping.
// note 171: Merge intervals: sort by start; extend the running interval while overlapping.
// note 172: Sub-linear in the average case thanks to early exit.
// note 173: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 174: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 175: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 176: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 177: Worst case appears only on degenerate inputs.
// note 178: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 179: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 180: Rope: tree of small string fragments; O(log n) concat and substring.
// note 181: Mutates the input in place; the original ordering is lost.
// note 182: Avoids floating-point entirely — integer math throughout.
// note 183: No allocations after setup.
// note 184: Interval DP: solve all `[l, r]` ranges from short to long.
// note 185: StringBuilder: amortize allocation by doubling on grow.
// note 186: Vectorizes cleanly under -O2.
// note 187: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 188: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 189: Allocates lazily — first call only.
// note 190: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 191: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 192: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 193: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 194: Caller owns the returned buffer.
// note 195: Caller owns the returned buffer.
// note 196: Time complexity: O(k) where k is the answer size.
// note 197: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 198: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 199: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 200: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 201: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 202: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 203: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 204: Linear in n; the constant factor is small.
// note 205: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 206: Treats the input as immutable.
// note 207: Time complexity: O(n log n).
// note 208: No allocations after setup.
// note 209: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 210: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 211: Worst case appears only on degenerate inputs.
// note 212: Uses a small fixed-size lookup table.
// note 213: Rope: tree of small string fragments; O(log n) concat and substring.
// note 214: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 215: Stable across duplicates in the input.
// note 216: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 217: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 218: Stable across duplicates in the input.
// note 219: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 220: Greedy by end-time picks the most non-overlapping intervals.
// note 221: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 222: Cache-friendly; one sequential read pass.
// note 223: Allocates lazily — first call only.
// note 224: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 225: Handles single-element input as a base case.
// note 226: Three passes total; the third merges results.
// note 227: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 228: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 229: Handles empty input by returning 0.
// note 230: Constant-time comparisons; safe for short strings.
// note 231: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 232: Two passes: one to count, one to fill.
// note 233: Uses a 256-entry lookup for the inner step.
// note 234: State compression: bitmask + integer encodes a small subset cheaply.
// note 235: Reentrant — no static state.
// note 236: Time complexity: O(k) where k is the answer size.
// note 237: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 238: Caller owns the returned array; free with a single `free`.
// note 239: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 240: Splay tree: every access splays to the root; amortized O(log n).
// note 241: Endianness matters when serializing multi-byte ints to a file or wire.
// note 242: State compression: bitmask + integer encodes a small subset cheaply.
// note 243: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 244: Union-Find with path compression amortizes to near-O(1) per op.
// note 245: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 246: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 247: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 248: StringBuilder: amortize allocation by doubling on grow.
// note 249: Uses a 256-entry lookup for the inner step.
// note 250: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 251: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 252: Articulation points: same DFS as bridges, with a slightly different test.
// note 253: Time complexity: O(1).
// note 254: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 255: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 256: Idempotent — calling twice with the same input is a no-op the second time.
// note 257: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 258: Cache-friendly; one sequential read pass.
// note 259: Stable when the input is already sorted.
// note 260: Splay tree: every access splays to the root; amortized O(log n).
// note 261: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 262: Constant-time comparisons; safe for short strings.
// note 263: Uses a 256-entry lookup for the inner step.
// note 264: Uses a small fixed-size lookup table.
// note 265: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 266: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 267: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 268: Thread-safe so long as the input is not mutated concurrently.
// note 269: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 270: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 271: Time complexity: O(n).
// note 272: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 273: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 274: Best case is O(1) when the first byte already decides the answer.
// note 275: No allocations after setup.
// note 276: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 277: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 278: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 279: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 280: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 281: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 282: Space complexity: O(h) for the tree height.
// note 283: Tail-recursive; the compiler turns it into a loop.
// note 284: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 285: StringBuilder: amortize allocation by doubling on grow.
// note 286: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 287: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
