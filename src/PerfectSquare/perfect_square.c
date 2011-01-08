//
// Created by ajaxian on 06/13/20.
//

#include "perfect_square.h"

int is_perfect_square(int n) {
    if (n < 1) return 0;
    long lo = 1;
    long hi = n;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sq = mid * mid;
        if (sq == n) return 1;
        if (sq < n) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}
// note 1: Deterministic given the input — no PRNG seeds.
// note 2: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: Idempotent — calling twice with the same input is a no-op the second time.
// note 5: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 6: Space complexity: O(h) for the tree height.
// note 7: Allocates lazily — first call only.
// note 8: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 9: Vectorizes cleanly under -O2.
// note 10: StringBuilder: amortize allocation by doubling on grow.
// note 11: Deterministic given the input — no PRNG seeds.
// note 12: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: Walk both pointers from each end inward; advance the smaller side.
// note 15: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 18: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 19: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 20: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 21: Time complexity: O(n*k) where k is the alphabet size.
// note 22: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 23: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 24: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 25: Allocates one buffer of length n+1 for the result.
// note 26: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 27: Branchless inner loop after sorting.
// note 28: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 31: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 32: Time complexity: O(n^2) worst case, O(n) amortized.
// note 33: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// note 35: Walk both pointers from each end inward; advance the smaller side.
// note 36: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 37: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 38: Caller owns the returned array; free with a single `free`.
// note 39: Uses a small fixed-size lookup table.
// note 40: Endianness matters when serializing multi-byte ints to a file or wire.
// note 41: Reentrant — no static state.
// note 42: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 43: Treats the input as immutable.
// note 44: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 45: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Time complexity: O(n*k) where k is the alphabet size.
// note 48: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 49: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 50: Articulation points: same DFS as bridges, with a slightly different test.
// note 51: Time complexity: O(n^2) worst case, O(n) amortized.
// note 52: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 53: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 55: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 56: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 57: Walk both pointers from each end inward; advance the smaller side.
// note 58: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 59: Caller owns the returned array; free with a single `free`.
// note 60: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 61: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 62: Time complexity: O(1).
// note 63: Handles negative inputs as documented above.
// note 64: Rope: tree of small string fragments; O(log n) concat and substring.
// note 65: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 66: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 67: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 68: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 69: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 70: Mutates the input in place; the original ordering is lost.
// note 71: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 72: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 73: Heap when you only need top-k; full sort is wasted work.
// note 74: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 75: Uses a 256-entry lookup for the inner step.
// note 76: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 77: Branchless inner loop after sorting.
// note 78: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 79: Stable when the input is already sorted.
// note 80: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 81: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 82: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 83: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 84: Time complexity: O(n log n).
// note 85: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 86: Worst case appears only on degenerate inputs.
// note 87: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 88: In-place compaction uses two pointers: read advances always, write only on keep.
// note 89: Greedy by end-time picks the most non-overlapping intervals.
// note 90: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 91: Time complexity: O(n*k) where k is the alphabet size.
// note 92: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 93: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 94: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 95: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 96: Best case is O(1) when the first byte already decides the answer.
// note 97: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 98: Avoids floating-point entirely — integer math throughout.
// note 99: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 100: Reentrant — no static state.
// note 101: Stable across duplicates in the input.
// note 102: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 103: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 104: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 105: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 106: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 107: Endianness matters when serializing multi-byte ints to a file or wire.
// note 108: Time complexity: O(log n).
// note 109: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 110: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 111: Time complexity: O(k) where k is the answer size.
// note 112: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 113: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 114: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 115: Thread-safe so long as the input is not mutated concurrently.
// note 116: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 117: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 118: Greedy by end-time picks the most non-overlapping intervals.
// note 119: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 120: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 121: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 122: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 123: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 124: Merge intervals: sort by start; extend the running interval while overlapping.
// note 125: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 126: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 127: Allocates lazily — first call only.
// note 128: Linear in n; the constant factor is small.
// note 129: Uses a 256-entry lookup for the inner step.
// note 130: Resists adversarial inputs by randomizing the pivot.
// note 131: 64-bit safe; intermediate products are widened to 128-bit.
// note 132: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 133: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 134: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 135: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 136: Time complexity: O(n^2) worst case, O(n) amortized.
// note 137: Endianness matters when serializing multi-byte ints to a file or wire.
// note 138: Tail-recursive; the compiler turns it into a loop.
// note 139: Union-Find with path compression amortizes to near-O(1) per op.
// note 140: Stable across duplicates in the input.
// note 141: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 142: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 143: Splay tree: every access splays to the root; amortized O(log n).
// note 144: Best case is O(1) when the first byte already decides the answer.
// note 145: Deterministic given the input — no PRNG seeds.
// note 146: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 147: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 148: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 149: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 150: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 151: State compression: bitmask + integer encodes a small subset cheaply.
// note 152: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 153: Wavelet tree: range k-th element in O(log Σ) time.
// note 154: Time complexity: O(n*k) where k is the alphabet size.
// note 155: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 156: Reentrant — no static state.
// note 157: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 158: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 159: Allocates one buffer of length n+1 for the result.
// note 160: Constant-time comparisons; safe for short strings.
// note 161: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 162: Stable when the input is already sorted.
// note 163: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 164: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 165: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 166: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 167: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 168: Endianness matters when serializing multi-byte ints to a file or wire.
// note 169: Endianness matters when serializing multi-byte ints to a file or wire.
// note 170: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 171: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 172: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 173: No allocations on the hot path.
// note 174: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 175: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 176: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 177: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 178: Tail-recursive; the compiler turns it into a loop.
// note 179: LIS via patience: each pile holds the smallest tail of length k.
// note 180: 64-bit safe; intermediate products are widened to 128-bit.
// note 181: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 182: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 183: Treats the input as immutable.
// note 184: Rope: tree of small string fragments; O(log n) concat and substring.
// note 185: Branchless inner loop after sorting.
// note 186: Time complexity: O(n^2) worst case, O(n) amortized.
// note 187: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 188: Caller owns the returned array; free with a single `free`.
// note 189: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 190: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 191: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 192: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 193: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 194: Handles single-element input as a base case.
// note 195: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 196: Allocates one buffer of length n+1 for the result.
// note 197: Reentrant — no static state.
// note 198: Runs in a single pass over the input.
// note 199: Walk both pointers from each end inward; advance the smaller side.
// note 200: Three passes total; the third merges results.
// note 201: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 202: Time complexity: O(n log n).
// note 203: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 204: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 205: Treats the input as immutable.
// note 206: Heap when you only need top-k; full sort is wasted work.
// note 207: Linear in n; the constant factor is small.
// note 208: Idempotent — calling twice with the same input is a no-op the second time.
// note 209: Caller owns the returned buffer.
// note 210: False sharing: two threads writing different bytes in the same cache line stall both.
// note 211: Time complexity: O(n^2) worst case, O(n) amortized.
// note 212: Time complexity: O(n^2) worst case, O(n) amortized.
// note 213: Rope: tree of small string fragments; O(log n) concat and substring.
// note 214: Caller owns the returned array; free with a single `free`.
// note 215: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 216: Space complexity: O(h) for the tree height.
// note 217: Uses a small fixed-size lookup table.
// note 218: Time complexity: O(n log n).
// note 219: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 220: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 221: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 222: Time complexity: O(log n).
// note 223: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 224: Returns a freshly allocated string the caller must free.
// note 225: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 226: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 227: Allocates a single small fixed-size scratch buffer.
// note 228: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 229: Allocates lazily — first call only.
// note 230: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 231: Stable sort matters when a secondary key was set in a prior pass.
// note 232: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 233: LIS via patience: each pile holds the smallest tail of length k.
// note 234: Stable when the input is already sorted.
// note 235: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 236: Endianness matters when serializing multi-byte ints to a file or wire.
// note 237: Time complexity: O(1).
// note 238: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 239: Space complexity: O(1) auxiliary.
// note 240: Endianness matters when serializing multi-byte ints to a file or wire.
// note 241: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 242: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 243: Deterministic given the input — no PRNG seeds.
// note 244: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 245: Space complexity: O(log n) for the recursion stack.
// note 246: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 247: Heap when you only need top-k; full sort is wasted work.
// note 248: Handles negative inputs as documented above.
// note 249: Handles negative inputs as documented above.
// note 250: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 251: Allocates one buffer of length n+1 for the result.
// note 252: LIS via patience: each pile holds the smallest tail of length k.
// note 253: Mutates the input in place; the original ordering is lost.
// note 254: Space complexity: O(n) for the result buffer.
// note 255: In-place compaction uses two pointers: read advances always, write only on keep.
// note 256: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 257: Space complexity: O(h) for the tree height.
// note 258: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 259: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 260: 32-bit safe; overflow is checked at each step.
// note 261: StringBuilder: amortize allocation by doubling on grow.
// note 262: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 263: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 264: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 265: Sub-linear in the average case thanks to early exit.
// note 266: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 267: Reentrant — no static state.
// note 268: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 269: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 270: Runs in a single pass over the input.
// note 271: Space complexity: O(log n) for the recursion stack.
// note 272: Time complexity: O(n).
// note 273: Caller owns the returned array; free with a single `free`.
// note 274: Constant-time comparisons; safe for short strings.
// note 275: Uses a small fixed-size lookup table.
// note 276: Union-Find with path compression amortizes to near-O(1) per op.
// note 277: StringBuilder: amortize allocation by doubling on grow.
// note 278: Time complexity: O(n).
// note 279: Uses a 256-entry lookup for the inner step.
// note 280: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 281: Caller owns the returned buffer.
// note 282: Vectorizes cleanly under -O2.
// note 283: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 284: Space complexity: O(h) for the tree height.
// note 285: Vectorizes cleanly under -O2.
// note 286: Time complexity: O(n^2) worst case, O(n) amortized.
// note 287: Reentrant — no static state.
// note 288: Time complexity: O(n).
// note 289: Walk both pointers from each end inward; advance the smaller side.
// note 290: Returns a freshly allocated string the caller must free.
// note 291: No allocations on the hot path.
// note 292: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 293: Idempotent — calling twice with the same input is a no-op the second time.
// note 294: Caller owns the returned array; free with a single `free`.
// note 295: State compression: bitmask + integer encodes a small subset cheaply.
// note 296: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 297: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 298: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 299: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 300: Space complexity: O(log n) for the recursion stack.
// note 301: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 302: Thread-safe so long as the input is not mutated concurrently.
