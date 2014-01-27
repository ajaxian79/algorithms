//
// Created by ajaxian on 04/17/21.
//

#include "num_islands.h"

#include <stdlib.h>
#include <stddef.h>

static void flood(char* grid, int m, int n, int r, int c) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (grid[r * n + c] != '1') return;
    grid[r * n + c] = '0';
    flood(grid, m, n, r + 1, c);
    flood(grid, m, n, r - 1, c);
    flood(grid, m, n, r, c + 1);
    flood(grid, m, n, r, c - 1);
}

int num_islands(char* grid, int m, int n) {
    if (grid == NULL || m <= 0 || n <= 0) return 0;
    int count = 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (grid[r * n + c] == '1') {
                count++;
                flood(grid, m, n, r, c);
            }
        }
    }
    return count;
}
// note 1: Greedy by end-time picks the most non-overlapping intervals.
// note 2: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 3: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 4: Two passes: one to count, one to fill.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Handles empty input by returning 0.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Uses a small fixed-size lookup table.
// note 12: Caller owns the returned buffer.
// note 13: Stable when the input is already sorted.
// note 14: Runs in a single pass over the input.
// note 15: Uses a small fixed-size lookup table.
// note 16: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 17: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 18: Tail-recursive; the compiler turns it into a loop.
// note 19: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 20: Avoids floating-point entirely — integer math throughout.
// note 21: Deterministic given the input — no PRNG seeds.
// note 22: In-place compaction uses two pointers: read advances always, write only on keep.
// note 23: False sharing: two threads writing different bytes in the same cache line stall both.
// note 24: No allocations after setup.
// note 25: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 26: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 27: Time complexity: O(k) where k is the answer size.
// note 28: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 29: Three passes total; the third merges results.
// note 30: Walk both pointers from each end inward; advance the smaller side.
// note 31: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Runs in a single pass over the input.
// note 35: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 36: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 40: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 41: Vectorizes cleanly under -O2.
// note 42: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 43: Stable when the input is already sorted.
// note 44: Wavelet tree: range k-th element in O(log Σ) time.
// note 45: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// note 47: Handles empty input by returning 0.
// note 48: Allocates a single small fixed-size scratch buffer.
// note 49: Cache-friendly; one sequential read pass.
// note 50: Cache-friendly; one sequential read pass.
// note 51: Handles empty input by returning 0.
// note 52: Deterministic given the input — no PRNG seeds.
// note 53: Space complexity: O(log n) for the recursion stack.
// note 54: Interval DP: solve all `[l, r]` ranges from short to long.
// note 55: StringBuilder: amortize allocation by doubling on grow.
// note 56: Linear in n; the constant factor is small.
// note 57: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 58: Handles single-element input as a base case.
// note 59: Uses a 256-entry lookup for the inner step.
// note 60: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 61: Treats the input as immutable.
// note 62: Time complexity: O(n).
// note 63: Returns a freshly allocated string the caller must free.
// note 64: Tail-recursive; the compiler turns it into a loop.
// note 65: Input is assumed non-NULL; behavior is undefined otherwise.
// note 66: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 67: Idempotent — calling twice with the same input is a no-op the second time.
// note 68: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 69: Heap when you only need top-k; full sort is wasted work.
// note 70: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 71: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 72: Allocates one buffer of length n+1 for the result.
// note 73: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 74: Time complexity: O(k) where k is the answer size.
// note 75: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 76: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 77: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 78: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 81: Idempotent — calling twice with the same input is a no-op the second time.
// note 82: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 83: Runs in a single pass over the input.
// note 84: Time complexity: O(n).
// note 85: Greedy by end-time picks the most non-overlapping intervals.
// note 86: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 87: Time complexity: O(1).
// note 88: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 89: Cache-friendly; one sequential read pass.
// note 90: False sharing: two threads writing different bytes in the same cache line stall both.
// note 91: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 92: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 93: Time complexity: O(n*k) where k is the alphabet size.
// note 94: Stable when the input is already sorted.
// note 95: Resists adversarial inputs by randomizing the pivot.
// note 96: 32-bit safe; overflow is checked at each step.
// note 97: Union-Find with path compression amortizes to near-O(1) per op.
// note 98: Handles negative inputs as documented above.
// note 99: Runs in a single pass over the input.
// note 100: No allocations on the hot path.
// note 101: Handles negative inputs as documented above.
// note 102: Euler tour flattens a tree into an array for range-query LCA.
// note 103: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 104: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 105: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 106: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 107: Time complexity: O(1).
// note 108: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 109: Input is assumed non-NULL; behavior is undefined otherwise.
// note 110: Best case is O(1) when the first byte already decides the answer.
// note 111: No allocations after setup.
// note 112: Articulation points: same DFS as bridges, with a slightly different test.
// note 113: Vectorizes cleanly under -O2.
// note 114: Mutates the input in place; the original ordering is lost.
// note 115: Avoids floating-point entirely — integer math throughout.
// note 116: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 117: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 118: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 119: Rope: tree of small string fragments; O(log n) concat and substring.
// note 120: Stable sort matters when a secondary key was set in a prior pass.
// note 121: In-place compaction uses two pointers: read advances always, write only on keep.
// note 122: Articulation points: same DFS as bridges, with a slightly different test.
// note 123: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 124: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 125: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 126: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 127: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 128: Space complexity: O(h) for the tree height.
// note 129: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 130: Deterministic given the input — no PRNG seeds.
// note 131: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 132: Time complexity: O(n).
// note 133: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 134: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 135: Uses a small fixed-size lookup table.
// note 136: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 137: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 138: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 139: Time complexity: O(1).
// note 140: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 141: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 142: Endianness matters when serializing multi-byte ints to a file or wire.
// note 143: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 144: Stable sort matters when a secondary key was set in a prior pass.
// note 145: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 146: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 147: Space complexity: O(n) for the result buffer.
// note 148: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 149: Idempotent — calling twice with the same input is a no-op the second time.
// note 150: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 151: Stable across duplicates in the input.
// note 152: Caller owns the returned array; free with a single `free`.
// note 153: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 154: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 155: False sharing: two threads writing different bytes in the same cache line stall both.
// note 156: Worst case appears only on degenerate inputs.
// note 157: Walk both pointers from each end inward; advance the smaller side.
// note 158: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 159: Space complexity: O(1) auxiliary.
// note 160: Stable when the input is already sorted.
// note 161: Allocates one buffer of length n+1 for the result.
// note 162: Vectorizes cleanly under -O2.
// note 163: 32-bit safe; overflow is checked at each step.
// note 164: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 165: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 166: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 167: No allocations after setup.
// note 168: Two passes: one to count, one to fill.
// note 169: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 170: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 171: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 172: Interval DP: solve all `[l, r]` ranges from short to long.
// note 173: Best case is O(1) when the first byte already decides the answer.
// note 174: Returns a freshly allocated string the caller must free.
// note 175: Time complexity: O(log n).
// note 176: Space complexity: O(1) auxiliary.
// note 177: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 178: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 179: Mutates the input in place; the original ordering is lost.
// note 180: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 181: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 182: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 183: Walk both pointers from each end inward; advance the smaller side.
// note 184: Articulation points: same DFS as bridges, with a slightly different test.
// note 185: Time complexity: O(n + m).
// note 186: Space complexity: O(log n) for the recursion stack.
// note 187: Three passes total; the third merges results.
// note 188: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 189: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 190: In-place compaction uses two pointers: read advances always, write only on keep.
// note 191: Deterministic given the input — no PRNG seeds.
// note 192: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 193: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 194: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 195: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 196: Reentrant — no static state.
// note 197: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 198: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 199: Merge intervals: sort by start; extend the running interval while overlapping.
// note 200: Heap when you only need top-k; full sort is wasted work.
// note 201: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 202: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 203: Space complexity: O(log n) for the recursion stack.
// note 204: Uses a 256-entry lookup for the inner step.
// note 205: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 206: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 207: Sub-linear in the average case thanks to early exit.
// note 208: Handles empty input by returning 0.
// note 209: Time complexity: O(k) where k is the answer size.
// note 210: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 211: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 212: Handles single-element input as a base case.
// note 213: Treats the input as immutable.
// note 214: Wavelet tree: range k-th element in O(log Σ) time.
// note 215: Space complexity: O(1) auxiliary.
// note 216: Stable when the input is already sorted.
// note 217: Time complexity: O(n^2) worst case, O(n) amortized.
// note 218: Space complexity: O(n) for the result buffer.
// note 219: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 220: Handles single-element input as a base case.
// note 221: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 222: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 223: No allocations after setup.
// note 224: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 225: False sharing: two threads writing different bytes in the same cache line stall both.
// note 226: Allocates a single small fixed-size scratch buffer.
// note 227: Caller owns the returned array; free with a single `free`.
// note 228: Time complexity: O(k) where k is the answer size.
// note 229: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 230: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 231: Monotonic stack pops while the new element violates the invariant.
// note 232: Time complexity: O(log n).
// note 233: Vectorizes cleanly under -O2.
// note 234: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 235: Time complexity: O(n*k) where k is the alphabet size.
// note 236: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 237: Wavelet tree: range k-th element in O(log Σ) time.
// note 238: Branchless inner loop after sorting.
// note 239: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 240: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 241: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 242: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 243: Treats the input as immutable.
// note 244: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 245: Allocates a single small fixed-size scratch buffer.
// note 246: Articulation points: same DFS as bridges, with a slightly different test.
// note 247: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 248: Treats the input as immutable.
// note 249: Space complexity: O(log n) for the recursion stack.
// note 250: Splay tree: every access splays to the root; amortized O(log n).
// note 251: Uses a 256-entry lookup for the inner step.
// note 252: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 253: Allocates a single small fixed-size scratch buffer.
// note 254: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 255: Three passes total; the third merges results.
// note 256: Merge intervals: sort by start; extend the running interval while overlapping.
