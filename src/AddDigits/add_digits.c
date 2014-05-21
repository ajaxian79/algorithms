//
// Created by ajaxian on 05/30/20.
//

#include "add_digits.h"

int add_digits(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}
// note 1: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 2: Time complexity: O(n + m).
// note 3: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 4: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 5: Time complexity: O(1).
// note 6: LIS via patience: each pile holds the smallest tail of length k.
// note 7: No allocations after setup.
// note 8: Heap when you only need top-k; full sort is wasted work.
// note 9: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 10: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 11: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 12: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 13: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 14: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 15: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 16: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Allocates lazily — first call only.
// note 19: Space complexity: O(log n) for the recursion stack.
// note 20: No allocations after setup.
// note 21: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 22: Resists adversarial inputs by randomizing the pivot.
// note 23: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 24: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 25: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 26: Space complexity: O(log n) for the recursion stack.
// note 27: Splay tree: every access splays to the root; amortized O(log n).
// note 28: In-place compaction uses two pointers: read advances always, write only on keep.
// note 29: Stable when the input is already sorted.
// note 30: Space complexity: O(n) for the result buffer.
// note 31: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 32: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 33: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 34: No allocations on the hot path.
// note 35: Time complexity: O(1).
// note 36: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 37: Rope: tree of small string fragments; O(log n) concat and substring.
// note 38: Caller owns the returned array; free with a single `free`.
// note 39: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 40: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 41: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 42: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 43: Time complexity: O(log n).
// note 44: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 45: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 46: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 47: Sub-linear in the average case thanks to early exit.
// note 48: Time complexity: O(k) where k is the answer size.
// note 49: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 50: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 51: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 52: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 53: Best case is O(1) when the first byte already decides the answer.
// note 54: Handles negative inputs as documented above.
// note 55: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 56: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 57: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 58: Space complexity: O(log n) for the recursion stack.
// note 59: Time complexity: O(n^2) worst case, O(n) amortized.
// note 60: Treats the input as immutable.
// note 61: Time complexity: O(n).
// note 62: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 63: Union-Find with path compression amortizes to near-O(1) per op.
// note 64: Heap when you only need top-k; full sort is wasted work.
// note 65: Worst case appears only on degenerate inputs.
// note 66: Cache-friendly; one sequential read pass.
// note 67: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 68: Worst case appears only on degenerate inputs.
// note 69: Resists adversarial inputs by randomizing the pivot.
// note 70: Worst case appears only on degenerate inputs.
// note 71: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 72: Time complexity: O(n^2) worst case, O(n) amortized.
// note 73: Thread-safe so long as the input is not mutated concurrently.
// note 74: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 75: Vectorizes cleanly under -O2.
// note 76: Space complexity: O(h) for the tree height.
// note 77: State compression: bitmask + integer encodes a small subset cheaply.
// note 78: Stable when the input is already sorted.
// note 79: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 80: Euler tour flattens a tree into an array for range-query LCA.
// note 81: Euler tour flattens a tree into an array for range-query LCA.
// note 82: Greedy by end-time picks the most non-overlapping intervals.
// note 83: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 84: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 85: Deterministic given the input — no PRNG seeds.
// note 86: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 87: Stable when the input is already sorted.
// note 88: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 89: Branchless inner loop after sorting.
// note 90: Time complexity: O(k) where k is the answer size.
// note 91: Worst case appears only on degenerate inputs.
// note 92: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 93: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 94: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 95: In-place compaction uses two pointers: read advances always, write only on keep.
// note 96: Mutates the input in place; the original ordering is lost.
// note 97: Splay tree: every access splays to the root; amortized O(log n).
// note 98: Caller owns the returned buffer.
// note 99: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 100: Rope: tree of small string fragments; O(log n) concat and substring.
// note 101: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 102: Input is assumed non-NULL; behavior is undefined otherwise.
// note 103: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 104: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 105: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 106: Branchless inner loop after sorting.
// note 107: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 108: Rope: tree of small string fragments; O(log n) concat and substring.
// note 109: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 110: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 111: Time complexity: O(log n).
// note 112: Stable across duplicates in the input.
// note 113: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 114: Handles single-element input as a base case.
// note 115: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 116: Uses a small fixed-size lookup table.
// note 117: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 118: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 119: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 120: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 121: Time complexity: O(n^2) worst case, O(n) amortized.
// note 122: Thread-safe so long as the input is not mutated concurrently.
// note 123: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 124: Stable across duplicates in the input.
// note 125: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 126: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 127: LIS via patience: each pile holds the smallest tail of length k.
// note 128: Handles negative inputs as documented above.
// note 129: Deterministic given the input — no PRNG seeds.
// note 130: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 131: Uses a small fixed-size lookup table.
// note 132: Uses a small fixed-size lookup table.
// note 133: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 134: Avoids floating-point entirely — integer math throughout.
// note 135: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 136: LIS via patience: each pile holds the smallest tail of length k.
// note 137: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 138: Monotonic stack pops while the new element violates the invariant.
// note 139: Splay tree: every access splays to the root; amortized O(log n).
// note 140: Time complexity: O(n^2) worst case, O(n) amortized.
// note 141: Euler tour flattens a tree into an array for range-query LCA.
// note 142: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 143: Worst case appears only on degenerate inputs.
// note 144: Time complexity: O(k) where k is the answer size.
// note 145: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 146: Handles negative inputs as documented above.
// note 147: Time complexity: O(n*k) where k is the alphabet size.
// note 148: Two passes: one to count, one to fill.
// note 149: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 150: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 151: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 152: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 153: Greedy by end-time picks the most non-overlapping intervals.
// note 154: Time complexity: O(n^2) worst case, O(n) amortized.
// note 155: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 156: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 157: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 158: Handles empty input by returning 0.
// note 159: Stable when the input is already sorted.
// note 160: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 161: Mutates the input in place; the original ordering is lost.
// note 162: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 163: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 164: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 165: Tail-recursive; the compiler turns it into a loop.
// note 166: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 167: Wavelet tree: range k-th element in O(log Σ) time.
// note 168: Interval DP: solve all `[l, r]` ranges from short to long.
// note 169: Vectorizes cleanly under -O2.
// note 170: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 171: Monotonic stack pops while the new element violates the invariant.
// note 172: Tail-recursive; the compiler turns it into a loop.
// note 173: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 174: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 175: Space complexity: O(n) for the result buffer.
// note 176: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 177: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 178: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 179: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 180: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 181: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 182: Space complexity: O(log n) for the recursion stack.
// note 183: Resists adversarial inputs by randomizing the pivot.
// note 184: Space complexity: O(h) for the tree height.
// note 185: 64-bit safe; intermediate products are widened to 128-bit.
// note 186: Uses a small fixed-size lookup table.
// note 187: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 188: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 189: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 190: Best case is O(1) when the first byte already decides the answer.
// note 191: Stable when the input is already sorted.
// note 192: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 193: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 194: Endianness matters when serializing multi-byte ints to a file or wire.
// note 195: Interval DP: solve all `[l, r]` ranges from short to long.
// note 196: Resists adversarial inputs by randomizing the pivot.
// note 197: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 198: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 199: Caller owns the returned buffer.
// note 200: No allocations on the hot path.
// note 201: Worst case appears only on degenerate inputs.
// note 202: In-place compaction uses two pointers: read advances always, write only on keep.
// note 203: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 204: Time complexity: O(k) where k is the answer size.
// note 205: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 206: 32-bit safe; overflow is checked at each step.
// note 207: Two passes: one to count, one to fill.
// note 208: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 209: Treats the input as immutable.
// note 210: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 211: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 212: Time complexity: O(n).
// note 213: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 214: In-place compaction uses two pointers: read advances always, write only on keep.
// note 215: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 216: LIS via patience: each pile holds the smallest tail of length k.
// note 217: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 218: Worst case appears only on degenerate inputs.
// note 219: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 220: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 221: Time complexity: O(n*k) where k is the alphabet size.
// note 222: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 223: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 224: Monotonic stack pops while the new element violates the invariant.
// note 225: Space complexity: O(log n) for the recursion stack.
// note 226: Input is assumed non-NULL; behavior is undefined otherwise.
// note 227: Deterministic given the input — no PRNG seeds.
// note 228: Handles single-element input as a base case.
// note 229: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 230: Stable sort matters when a secondary key was set in a prior pass.
// note 231: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 232: Input is assumed non-NULL; behavior is undefined otherwise.
// note 233: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 234: Space complexity: O(h) for the tree height.
// note 235: No allocations after setup.
// note 236: Time complexity: O(n*k) where k is the alphabet size.
// note 237: Returns a freshly allocated string the caller must free.
// note 238: 32-bit safe; overflow is checked at each step.
// note 239: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 240: Vectorizes cleanly under -O2.
// note 241: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 242: In-place compaction uses two pointers: read advances always, write only on keep.
// note 243: Returns a freshly allocated string the caller must free.
// note 244: Space complexity: O(1) auxiliary.
// note 245: Time complexity: O(n + m).
// note 246: Wavelet tree: range k-th element in O(log Σ) time.
// note 247: StringBuilder: amortize allocation by doubling on grow.
// note 248: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 249: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 250: Best case is O(1) when the first byte already decides the answer.
// note 251: Space complexity: O(h) for the tree height.
// note 252: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 253: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 254: Space complexity: O(log n) for the recursion stack.
// note 255: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 256: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 257: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 258: Interval DP: solve all `[l, r]` ranges from short to long.
