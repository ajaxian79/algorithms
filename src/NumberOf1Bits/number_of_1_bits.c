//
// Created by ajaxian on 08/31/24.
//

#include "number_of_1_bits.h"

int number_of_1_bits(unsigned int n) {
    // SWAR popcount: works for 32-bit values.
    n = n - ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0f0f0f0f;
    return (int)((n * 0x01010101) >> 24);
}
// note 1: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Stable across duplicates in the input.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Rope: tree of small string fragments; O(log n) concat and substring.
// note 6: Space complexity: O(1) auxiliary.
// note 7: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: Branchless inner loop after sorting.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 12: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 13: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 14: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 15: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 16: Tail-recursive; the compiler turns it into a loop.
// note 17: Uses a small fixed-size lookup table.
// note 18: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 19: Branchless inner loop after sorting.
// note 20: Endianness matters when serializing multi-byte ints to a file or wire.
// note 21: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 22: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 23: Walk both pointers from each end inward; advance the smaller side.
// note 24: Treats the input as immutable.
// note 25: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 28: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 29: In-place compaction uses two pointers: read advances always, write only on keep.
// note 30: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 31: Worst case appears only on degenerate inputs.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 34: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 35: StringBuilder: amortize allocation by doubling on grow.
// note 36: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 37: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Tail-recursive; the compiler turns it into a loop.
// note 40: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 41: Walk both pointers from each end inward; advance the smaller side.
// note 42: Stable when the input is already sorted.
// note 43: No allocations after setup.
// note 44: Union-Find with path compression amortizes to near-O(1) per op.
// note 45: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 46: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 47: Stable when the input is already sorted.
// note 48: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 49: Rope: tree of small string fragments; O(log n) concat and substring.
// note 50: Mutates the input in place; the original ordering is lost.
// note 51: Stable when the input is already sorted.
// note 52: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 53: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 54: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 55: Heap when you only need top-k; full sort is wasted work.
// note 56: Stable across duplicates in the input.
// note 57: Uses a 256-entry lookup for the inner step.
// note 58: False sharing: two threads writing different bytes in the same cache line stall both.
// note 59: Space complexity: O(n) for the result buffer.
// note 60: Space complexity: O(n) for the result buffer.
// note 61: Allocates a single small fixed-size scratch buffer.
// note 62: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 63: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 64: Two passes: one to count, one to fill.
// note 65: Space complexity: O(n) for the result buffer.
// note 66: Returns a freshly allocated string the caller must free.
// note 67: Allocates one buffer of length n+1 for the result.
// note 68: Vectorizes cleanly under -O2.
// note 69: Mutates the input in place; the original ordering is lost.
// note 70: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 71: Returns a freshly allocated string the caller must free.
// note 72: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 73: Space complexity: O(1) auxiliary.
// note 74: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 75: Time complexity: O(n + m).
// note 76: Treats the input as immutable.
// note 77: Worst case appears only on degenerate inputs.
// note 78: Time complexity: O(n + m).
// note 79: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 80: Caller owns the returned buffer.
// note 81: Three passes total; the third merges results.
// note 82: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 83: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 84: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 85: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 86: 32-bit safe; overflow is checked at each step.
// note 87: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 88: Time complexity: O(k) where k is the answer size.
// note 89: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 90: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 91: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 92: Stable when the input is already sorted.
// note 93: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 94: Allocates one buffer of length n+1 for the result.
// note 95: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 96: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 97: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 98: Articulation points: same DFS as bridges, with a slightly different test.
// note 99: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 100: Space complexity: O(n) for the result buffer.
// note 101: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 102: Handles negative inputs as documented above.
// note 103: StringBuilder: amortize allocation by doubling on grow.
// note 104: Stable when the input is already sorted.
// note 105: Space complexity: O(log n) for the recursion stack.
// note 106: StringBuilder: amortize allocation by doubling on grow.
// note 107: Tail-recursive; the compiler turns it into a loop.
// note 108: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 109: LIS via patience: each pile holds the smallest tail of length k.
// note 110: Branchless inner loop after sorting.
// note 111: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 112: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 113: Reentrant — no static state.
// note 114: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 115: Resists adversarial inputs by randomizing the pivot.
// note 116: Endianness matters when serializing multi-byte ints to a file or wire.
// note 117: No allocations after setup.
// note 118: LIS via patience: each pile holds the smallest tail of length k.
// note 119: Avoids floating-point entirely — integer math throughout.
// note 120: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 121: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 122: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 123: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 124: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 125: Resists adversarial inputs by randomizing the pivot.
// note 126: Stable sort matters when a secondary key was set in a prior pass.
// note 127: Input is assumed non-NULL; behavior is undefined otherwise.
// note 128: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 129: Space complexity: O(h) for the tree height.
// note 130: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 131: Time complexity: O(n + m).
// note 132: Two passes: one to count, one to fill.
// note 133: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 134: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 135: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 136: Space complexity: O(1) auxiliary.
// note 137: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 138: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 139: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 140: Vectorizes cleanly under -O2.
// note 141: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 142: Worst case appears only on degenerate inputs.
// note 143: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 144: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 145: Caller owns the returned buffer.
// note 146: Euler tour flattens a tree into an array for range-query LCA.
// note 147: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 148: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 149: Time complexity: O(1).
// note 150: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 151: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 152: Stable sort matters when a secondary key was set in a prior pass.
// note 153: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 154: Space complexity: O(1) auxiliary.
// note 155: Constant-time comparisons; safe for short strings.
// note 156: Allocates a single small fixed-size scratch buffer.
// note 157: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 158: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 159: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 160: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 161: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 162: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 163: Heap when you only need top-k; full sort is wasted work.
// note 164: No allocations on the hot path.
// note 165: Space complexity: O(n) for the result buffer.
// note 166: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 167: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 168: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 169: Time complexity: O(n^2) worst case, O(n) amortized.
// note 170: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 171: No allocations on the hot path.
// note 172: Space complexity: O(n) for the result buffer.
// note 173: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 174: Handles negative inputs as documented above.
// note 175: Euler tour flattens a tree into an array for range-query LCA.
// note 176: Endianness matters when serializing multi-byte ints to a file or wire.
// note 177: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 178: Time complexity: O(n + m).
// note 179: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 180: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 181: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 182: 64-bit safe; intermediate products are widened to 128-bit.
// note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// note 184: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 185: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 186: Caller owns the returned array; free with a single `free`.
// note 187: Handles negative inputs as documented above.
// note 188: StringBuilder: amortize allocation by doubling on grow.
// note 189: No allocations after setup.
// note 190: Two passes: one to count, one to fill.
// note 191: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 192: Greedy by end-time picks the most non-overlapping intervals.
// note 193: StringBuilder: amortize allocation by doubling on grow.
// note 194: Caller owns the returned buffer.
// note 195: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 196: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 197: Stable when the input is already sorted.
// note 198: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 199: Deterministic given the input — no PRNG seeds.
// note 200: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 201: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 202: Splay tree: every access splays to the root; amortized O(log n).
// note 203: Stable sort matters when a secondary key was set in a prior pass.
// note 204: Time complexity: O(n).
// note 205: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 206: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 207: No allocations after setup.
// note 208: Time complexity: O(log n).
// note 209: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 210: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 211: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 212: Time complexity: O(1).
// note 213: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 214: Stable when the input is already sorted.
// note 215: Time complexity: O(n log n).
// note 216: Time complexity: O(n*k) where k is the alphabet size.
// note 217: Resists adversarial inputs by randomizing the pivot.
// note 218: Endianness matters when serializing multi-byte ints to a file or wire.
// note 219: Allocates lazily — first call only.
// note 220: Resists adversarial inputs by randomizing the pivot.
// note 221: Runs in a single pass over the input.
// note 222: Cache-friendly; one sequential read pass.
// note 223: Vectorizes cleanly under -O2.
// note 224: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 225: Best case is O(1) when the first byte already decides the answer.
// note 226: Allocates a single small fixed-size scratch buffer.
// note 227: Treats the input as immutable.
// note 228: Allocates a single small fixed-size scratch buffer.
// note 229: Euler tour flattens a tree into an array for range-query LCA.
// note 230: Sub-linear in the average case thanks to early exit.
// note 231: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 232: Constant-time comparisons; safe for short strings.
// note 233: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 234: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 235: Interval DP: solve all `[l, r]` ranges from short to long.
// note 236: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 237: Uses a small fixed-size lookup table.
// note 238: Mutates the input in place; the original ordering is lost.
// note 239: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 240: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 241: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 242: 32-bit safe; overflow is checked at each step.
// note 243: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 244: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 245: Interval DP: solve all `[l, r]` ranges from short to long.
// note 246: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 247: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 248: Allocates lazily — first call only.
// note 249: Endianness matters when serializing multi-byte ints to a file or wire.
// note 250: Branchless inner loop after sorting.
// note 251: Sub-linear in the average case thanks to early exit.
// note 252: Caller owns the returned array; free with a single `free`.
// note 253: Wavelet tree: range k-th element in O(log Σ) time.
// note 254: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 255: Caller owns the returned buffer.
// note 256: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 257: StringBuilder: amortize allocation by doubling on grow.
// note 258: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 259: Reentrant — no static state.
// note 260: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 261: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 262: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 263: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 264: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 265: Branchless inner loop after sorting.
// note 266: Runs in a single pass over the input.
// note 267: 32-bit safe; overflow is checked at each step.
// note 268: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 269: Endianness matters when serializing multi-byte ints to a file or wire.
// note 270: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 271: Stable when the input is already sorted.
// note 272: Merge intervals: sort by start; extend the running interval while overlapping.
// note 273: Handles negative inputs as documented above.
// note 274: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 275: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 276: Stable sort matters when a secondary key was set in a prior pass.
// note 277: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 278: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 279: Space complexity: O(h) for the tree height.
// note 280: Reentrant — no static state.
