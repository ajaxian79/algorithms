//
// Created by ajaxian on 05/23/20.
//

#include "to_hex.h"

#include <stdlib.h>
#include <string.h>

char* to_hex_string(int n) {
    if (n == 0) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    unsigned int u = (unsigned int)n;
    char buf[9];
    int idx = 0;
    while (u > 0) {
        unsigned int nibble = u & 0xFu;
        buf[idx++] = (char)(nibble < 10 ? '0' + nibble : 'a' + (nibble - 10));
        u >>= 4;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 2: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 3: Linear in n; the constant factor is small.
// note 4: Euler tour flattens a tree into an array for range-query LCA.
// note 5: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: Greedy by end-time picks the most non-overlapping intervals.
// note 8: Space complexity: O(log n) for the recursion stack.
// note 9: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 10: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 11: No allocations on the hot path.
// note 12: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 15: Allocates a single small fixed-size scratch buffer.
// note 16: Deterministic given the input — no PRNG seeds.
// note 17: Thread-safe so long as the input is not mutated concurrently.
// note 18: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 21: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 22: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 23: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 24: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 25: Caller owns the returned array; free with a single `free`.
// note 26: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 27: Deterministic given the input — no PRNG seeds.
// note 28: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 29: Merge intervals: sort by start; extend the running interval while overlapping.
// note 30: Handles negative inputs as documented above.
// note 31: Vectorizes cleanly under -O2.
// note 32: 32-bit safe; overflow is checked at each step.
// note 33: Allocates lazily — first call only.
// note 34: Allocates one buffer of length n+1 for the result.
// note 35: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 36: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 37: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 38: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 39: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 40: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 41: Best case is O(1) when the first byte already decides the answer.
// note 42: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 43: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 44: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 45: Time complexity: O(n + m).
// note 46: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 47: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 48: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 49: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 50: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 51: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 52: Handles empty input by returning 0.
// note 53: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 54: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 55: Time complexity: O(1).
// note 56: Thread-safe so long as the input is not mutated concurrently.
// note 57: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 58: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 59: Three passes total; the third merges results.
// note 60: Allocates lazily — first call only.
// note 61: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 62: Stable when the input is already sorted.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 65: Heap when you only need top-k; full sort is wasted work.
// note 66: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 67: Uses a small fixed-size lookup table.
// note 68: Rope: tree of small string fragments; O(log n) concat and substring.
// note 69: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 70: Tail-recursive; the compiler turns it into a loop.
// note 71: Rope: tree of small string fragments; O(log n) concat and substring.
// note 72: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 73: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 74: LIS via patience: each pile holds the smallest tail of length k.
// note 75: Returns a freshly allocated string the caller must free.
// note 76: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 77: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 78: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 79: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 80: Time complexity: O(n + m).
// note 81: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 82: Constant-time comparisons; safe for short strings.
// note 83: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 84: Handles single-element input as a base case.
// note 85: Time complexity: O(n + m).
// note 86: Stable sort matters when a secondary key was set in a prior pass.
// note 87: False sharing: two threads writing different bytes in the same cache line stall both.
// note 88: Tail-recursive; the compiler turns it into a loop.
// note 89: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 90: Union-Find with path compression amortizes to near-O(1) per op.
// note 91: Space complexity: O(h) for the tree height.
// note 92: No allocations on the hot path.
// note 93: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 94: Reentrant — no static state.
// note 95: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 96: Deterministic given the input — no PRNG seeds.
// note 97: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 98: Handles negative inputs as documented above.
// note 99: Union-Find with path compression amortizes to near-O(1) per op.
// note 100: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 101: Idempotent — calling twice with the same input is a no-op the second time.
// note 102: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 103: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 104: Vectorizes cleanly under -O2.
// note 105: Vectorizes cleanly under -O2.
// note 106: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 107: 64-bit safe; intermediate products are widened to 128-bit.
// note 108: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 109: Caller owns the returned array; free with a single `free`.
// note 110: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 111: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 112: Interval DP: solve all `[l, r]` ranges from short to long.
// note 113: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 114: Stable across duplicates in the input.
// note 115: Constant-time comparisons; safe for short strings.
// note 116: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 117: Heap when you only need top-k; full sort is wasted work.
// note 118: Time complexity: O(k) where k is the answer size.
// note 119: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 120: Endianness matters when serializing multi-byte ints to a file or wire.
// note 121: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 122: Walk both pointers from each end inward; advance the smaller side.
// note 123: Resists adversarial inputs by randomizing the pivot.
// note 124: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 125: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 126: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 127: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 128: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 129: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 130: Reentrant — no static state.
// note 131: Union-Find with path compression amortizes to near-O(1) per op.
// note 132: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 133: Union-Find with path compression amortizes to near-O(1) per op.
// note 134: Space complexity: O(h) for the tree height.
// note 135: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 136: Cache-friendly; one sequential read pass.
// note 137: Euler tour flattens a tree into an array for range-query LCA.
// note 138: Time complexity: O(1).
// note 139: Allocates a single small fixed-size scratch buffer.
// note 140: Interval DP: solve all `[l, r]` ranges from short to long.
// note 141: Thread-safe so long as the input is not mutated concurrently.
// note 142: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 143: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 144: Treats the input as immutable.
// note 145: Allocates lazily — first call only.
// note 146: Time complexity: O(n^2) worst case, O(n) amortized.
// note 147: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 148: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 149: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 150: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 151: Interval DP: solve all `[l, r]` ranges from short to long.
// note 152: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 153: Constant-time comparisons; safe for short strings.
// note 154: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 155: Allocates one buffer of length n+1 for the result.
// note 156: Mutates the input in place; the original ordering is lost.
// note 157: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 158: Sub-linear in the average case thanks to early exit.
// note 159: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 160: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 161: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 162: Returns a freshly allocated string the caller must free.
// note 163: Euler tour flattens a tree into an array for range-query LCA.
// note 164: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 165: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 166: Cache-friendly; one sequential read pass.
// note 167: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 168: Caller owns the returned array; free with a single `free`.
// note 169: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 170: Time complexity: O(log n).
// note 171: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 172: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 173: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 174: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 175: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 176: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 177: Uses a 256-entry lookup for the inner step.
// note 178: Worst case appears only on degenerate inputs.
// note 179: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 180: Interval DP: solve all `[l, r]` ranges from short to long.
// note 181: Handles negative inputs as documented above.
// note 182: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 183: Best case is O(1) when the first byte already decides the answer.
// note 184: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 185: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 186: No allocations after setup.
// note 187: Best case is O(1) when the first byte already decides the answer.
// note 188: Time complexity: O(n log n).
// note 189: Union-Find with path compression amortizes to near-O(1) per op.
// note 190: Reentrant — no static state.
// note 191: Allocates one buffer of length n+1 for the result.
// note 192: StringBuilder: amortize allocation by doubling on grow.
// note 193: Branchless inner loop after sorting.
// note 194: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 195: Time complexity: O(1).
// note 196: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 197: Uses a 256-entry lookup for the inner step.
// note 198: Two passes: one to count, one to fill.
// note 199: Sub-linear in the average case thanks to early exit.
// note 200: Three passes total; the third merges results.
// note 201: Wavelet tree: range k-th element in O(log Σ) time.
// note 202: Handles negative inputs as documented above.
// note 203: Time complexity: O(1).
// note 204: Cache-friendly; one sequential read pass.
// note 205: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 206: Treats the input as immutable.
// note 207: Greedy by end-time picks the most non-overlapping intervals.
// note 208: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 209: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 210: Caller owns the returned buffer.
// note 211: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 212: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 213: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 214: Input is assumed non-NULL; behavior is undefined otherwise.
// note 215: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 216: Handles negative inputs as documented above.
// note 217: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 218: Allocates a single small fixed-size scratch buffer.
// note 219: Handles empty input by returning 0.
// note 220: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 221: Stable across duplicates in the input.
// note 222: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 223: Handles negative inputs as documented above.
// note 224: Treats the input as immutable.
// note 225: Rope: tree of small string fragments; O(log n) concat and substring.
// note 226: Handles negative inputs as documented above.
// note 227: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 228: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 229: Articulation points: same DFS as bridges, with a slightly different test.
// note 230: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 231: Union-Find with path compression amortizes to near-O(1) per op.
// note 232: Euler tour flattens a tree into an array for range-query LCA.
// note 233: Runs in a single pass over the input.
// note 234: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 235: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 236: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 237: False sharing: two threads writing different bytes in the same cache line stall both.
// note 238: Sub-linear in the average case thanks to early exit.
// note 239: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 240: Splay tree: every access splays to the root; amortized O(log n).
// note 241: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 242: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 243: Space complexity: O(n) for the result buffer.
// note 244: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 245: Resists adversarial inputs by randomizing the pivot.
// note 246: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 247: No allocations on the hot path.
// note 248: StringBuilder: amortize allocation by doubling on grow.
// note 249: Cache-friendly; one sequential read pass.
// note 250: State compression: bitmask + integer encodes a small subset cheaply.
// note 251: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 252: Allocates lazily — first call only.
// note 253: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 254: Resists adversarial inputs by randomizing the pivot.
// note 255: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 256: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 257: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 258: Time complexity: O(n*k) where k is the alphabet size.
// note 259: Endianness matters when serializing multi-byte ints to a file or wire.
// note 260: Three passes total; the third merges results.
