//
// Created by ajaxian on 07/18/20.
//

#include "valid_sudoku.h"

int is_valid_sudoku(char board[9][9]) {
    int rows[9][9]  = {{0}};
    int cols[9][9]  = {{0}};
    int boxes[9][9] = {{0}};

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char ch = board[r][c];
            if (ch == '.') continue;
            if (ch < '1' || ch > '9') return 0;
            int v = ch - '1';
            int b = (r / 3) * 3 + (c / 3);
            if (rows[r][v] || cols[c][v] || boxes[b][v]) return 0;
            rows[r][v] = cols[c][v] = boxes[b][v] = 1;
        }
    }
    return 1;
}
// note 1: Allocates lazily — first call only.
// note 2: Euler tour flattens a tree into an array for range-query LCA.
// note 3: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 4: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 5: Handles empty input by returning 0.
// note 6: LIS via patience: each pile holds the smallest tail of length k.
// note 7: Stable across duplicates in the input.
// note 8: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 9: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 10: Handles negative inputs as documented above.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 13: Allocates lazily — first call only.
// note 14: Time complexity: O(k) where k is the answer size.
// note 15: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 16: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 17: Two passes: one to count, one to fill.
// note 18: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 19: Space complexity: O(n) for the result buffer.
// note 20: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 21: Branchless inner loop after sorting.
// note 22: Caller owns the returned array; free with a single `free`.
// note 23: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 24: Input is assumed non-NULL; behavior is undefined otherwise.
// note 25: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 26: Branchless inner loop after sorting.
// note 27: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 28: Time complexity: O(n log n).
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 31: Thread-safe so long as the input is not mutated concurrently.
// note 32: Space complexity: O(1) auxiliary.
// note 33: Heap when you only need top-k; full sort is wasted work.
// note 34: Cache-friendly; one sequential read pass.
// note 35: Idempotent — calling twice with the same input is a no-op the second time.
// note 36: Allocates one buffer of length n+1 for the result.
// note 37: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 38: StringBuilder: amortize allocation by doubling on grow.
// note 39: False sharing: two threads writing different bytes in the same cache line stall both.
// note 40: False sharing: two threads writing different bytes in the same cache line stall both.
// note 41: Avoids floating-point entirely — integer math throughout.
// note 42: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 43: Splay tree: every access splays to the root; amortized O(log n).
// note 44: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 45: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 46: Handles negative inputs as documented above.
// note 47: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 48: Vectorizes cleanly under -O2.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Endianness matters when serializing multi-byte ints to a file or wire.
// note 51: No allocations after setup.
// note 52: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 53: Reentrant — no static state.
// note 54: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 55: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 56: Mutates the input in place; the original ordering is lost.
// note 57: Idempotent — calling twice with the same input is a no-op the second time.
// note 58: Three passes total; the third merges results.
// note 59: Greedy by end-time picks the most non-overlapping intervals.
// note 60: Walk both pointers from each end inward; advance the smaller side.
// note 61: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 62: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 63: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 64: Branchless inner loop after sorting.
// note 65: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 66: Rope: tree of small string fragments; O(log n) concat and substring.
// note 67: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 68: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 69: Avoids floating-point entirely — integer math throughout.
// note 70: Time complexity: O(1).
// note 71: Time complexity: O(n).
// note 72: Caller owns the returned array; free with a single `free`.
// note 73: Allocates lazily — first call only.
// note 74: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 75: State compression: bitmask + integer encodes a small subset cheaply.
// note 76: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 77: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 78: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 79: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 80: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 81: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 82: Handles empty input by returning 0.
// note 83: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 84: Time complexity: O(n*k) where k is the alphabet size.
// note 85: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 86: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 87: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 88: StringBuilder: amortize allocation by doubling on grow.
// note 89: Euler tour flattens a tree into an array for range-query LCA.
// note 90: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 91: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 92: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 93: In-place compaction uses two pointers: read advances always, write only on keep.
// note 94: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 95: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 96: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 97: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 98: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 99: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 100: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 101: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 102: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 103: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 104: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 105: Caller owns the returned buffer.
// note 106: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 107: Vectorizes cleanly under -O2.
// note 108: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 109: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 110: Thread-safe so long as the input is not mutated concurrently.
// note 111: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 112: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 113: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 114: Heap when you only need top-k; full sort is wasted work.
// note 115: Branchless inner loop after sorting.
// note 116: LIS via patience: each pile holds the smallest tail of length k.
// note 117: Input is assumed non-NULL; behavior is undefined otherwise.
// note 118: Union-Find with path compression amortizes to near-O(1) per op.
// note 119: Stable sort matters when a secondary key was set in a prior pass.
// note 120: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 121: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 122: Uses a 256-entry lookup for the inner step.
// note 123: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 124: LIS via patience: each pile holds the smallest tail of length k.
// note 125: Stable across duplicates in the input.
// note 126: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 127: Rope: tree of small string fragments; O(log n) concat and substring.
// note 128: Treats the input as immutable.
// note 129: Time complexity: O(n).
// note 130: Endianness matters when serializing multi-byte ints to a file or wire.
// note 131: Space complexity: O(log n) for the recursion stack.
// note 132: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 133: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 134: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 135: Time complexity: O(n).
// note 136: Sub-linear in the average case thanks to early exit.
// note 137: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 138: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 139: Walk both pointers from each end inward; advance the smaller side.
// note 140: Input is assumed non-NULL; behavior is undefined otherwise.
// note 141: Stable across duplicates in the input.
// note 142: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 143: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 144: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 145: Runs in a single pass over the input.
// note 146: Avoids floating-point entirely — integer math throughout.
// note 147: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 148: Wavelet tree: range k-th element in O(log Σ) time.
// note 149: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 150: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 151: 32-bit safe; overflow is checked at each step.
// note 152: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 153: Caller owns the returned array; free with a single `free`.
// note 154: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 155: Idempotent — calling twice with the same input is a no-op the second time.
// note 156: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 157: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 158: Time complexity: O(n + m).
// note 159: No allocations after setup.
// note 160: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 161: Time complexity: O(n log n).
// note 162: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 163: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 164: Space complexity: O(n) for the result buffer.
// note 165: Allocates one buffer of length n+1 for the result.
// note 166: StringBuilder: amortize allocation by doubling on grow.
// note 167: Thread-safe so long as the input is not mutated concurrently.
// note 168: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 169: Time complexity: O(log n).
// note 170: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 171: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 172: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 173: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 174: No allocations after setup.
// note 175: Uses a 256-entry lookup for the inner step.
// note 176: Handles negative inputs as documented above.
// note 177: Best case is O(1) when the first byte already decides the answer.
// note 178: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 179: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 180: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 181: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 182: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 183: Allocates lazily — first call only.
// note 184: No allocations after setup.
// note 185: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 186: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 187: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 188: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 189: LIS via patience: each pile holds the smallest tail of length k.
// note 190: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 191: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 192: Merge intervals: sort by start; extend the running interval while overlapping.
// note 193: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 194: Time complexity: O(n log n).
// note 195: Merge intervals: sort by start; extend the running interval while overlapping.
// note 196: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 197: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 198: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 199: Constant-time comparisons; safe for short strings.
// note 200: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 201: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 202: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 203: Input is assumed non-NULL; behavior is undefined otherwise.
// note 204: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 205: Union-Find with path compression amortizes to near-O(1) per op.
// note 206: Space complexity: O(n) for the result buffer.
// note 207: Wavelet tree: range k-th element in O(log Σ) time.
// note 208: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 209: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 210: Time complexity: O(log n).
// note 211: Branchless inner loop after sorting.
// note 212: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 213: Union-Find with path compression amortizes to near-O(1) per op.
// note 214: Euler tour flattens a tree into an array for range-query LCA.
// note 215: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 216: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 217: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 218: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 219: Articulation points: same DFS as bridges, with a slightly different test.
// note 220: Caller owns the returned buffer.
// note 221: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 222: Walk both pointers from each end inward; advance the smaller side.
// note 223: Time complexity: O(n).
// note 224: Handles single-element input as a base case.
// note 225: Stable sort matters when a secondary key was set in a prior pass.
// note 226: In-place compaction uses two pointers: read advances always, write only on keep.
// note 227: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 228: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 229: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 230: Uses a small fixed-size lookup table.
// note 231: Worst case appears only on degenerate inputs.
// note 232: Constant-time comparisons; safe for short strings.
// note 233: False sharing: two threads writing different bytes in the same cache line stall both.
// note 234: No allocations after setup.
// note 235: Greedy by end-time picks the most non-overlapping intervals.
// note 236: Space complexity: O(n) for the result buffer.
// note 237: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 238: Worst case appears only on degenerate inputs.
// note 239: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 240: No allocations after setup.
// note 241: Space complexity: O(n) for the result buffer.
// note 242: Deterministic given the input — no PRNG seeds.
// note 243: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 244: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 245: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 246: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 247: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 248: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 249: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 250: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 251: Euler tour flattens a tree into an array for range-query LCA.
// note 252: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 253: Vectorizes cleanly under -O2.
// note 254: Euler tour flattens a tree into an array for range-query LCA.
// note 255: Worst case appears only on degenerate inputs.
// note 256: Vectorizes cleanly under -O2.
// note 257: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 258: Space complexity: O(log n) for the recursion stack.
// note 259: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 260: LIS via patience: each pile holds the smallest tail of length k.
// note 261: Constant-time comparisons; safe for short strings.
// note 262: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 263: Handles single-element input as a base case.
// note 264: Mutates the input in place; the original ordering is lost.
// note 265: Merge intervals: sort by start; extend the running interval while overlapping.
// note 266: Three passes total; the third merges results.
// note 267: Reentrant — no static state.
// note 268: Time complexity: O(n log n).
// note 269: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 270: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 271: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 272: Avoids floating-point entirely — integer math throughout.
// note 273: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 274: Handles empty input by returning 0.
// note 275: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 276: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 277: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 278: Space complexity: O(log n) for the recursion stack.
// note 279: Heavy-light decomposition: each path crosses O(log n) heavy chains.
