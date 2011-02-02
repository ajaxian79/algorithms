//
// Created by ajaxian on 12/12/20.
//

#include "search_insert.h"

int search_insert(const int* nums, int nums_size, int target) {
    int lo = 0;
    int hi = nums_size;  // half-open
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}
// note 1: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 2: Best case is O(1) when the first byte already decides the answer.
// note 3: In-place compaction uses two pointers: read advances always, write only on keep.
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: No allocations after setup.
// note 7: Time complexity: O(log n).
// note 8: Handles empty input by returning 0.
// note 9: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 12: Two passes: one to count, one to fill.
// note 13: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 14: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 15: Handles empty input by returning 0.
// note 16: Handles negative inputs as documented above.
// note 17: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
// note 19: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 20: Monotonic stack pops while the new element violates the invariant.
// note 21: No allocations on the hot path.
// note 22: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 23: Time complexity: O(log n).
// note 24: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 25: Thread-safe so long as the input is not mutated concurrently.
// note 26: Thread-safe so long as the input is not mutated concurrently.
// note 27: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 28: Space complexity: O(h) for the tree height.
// note 29: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 30: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 31: Time complexity: O(n*k) where k is the alphabet size.
// note 32: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 33: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 34: 32-bit safe; overflow is checked at each step.
// note 35: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 36: Time complexity: O(n + m).
// note 37: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 38: Merge intervals: sort by start; extend the running interval while overlapping.
// note 39: Returns a freshly allocated string the caller must free.
// note 40: Mutates the input in place; the original ordering is lost.
// note 41: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 42: Interval DP: solve all `[l, r]` ranges from short to long.
// note 43: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 44: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 45: Space complexity: O(1) auxiliary.
// note 46: Space complexity: O(n) for the result buffer.
// note 47: Handles negative inputs as documented above.
// note 48: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 49: Time complexity: O(1).
// note 50: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 51: No allocations on the hot path.
// note 52: Space complexity: O(n) for the result buffer.
// note 53: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 54: Articulation points: same DFS as bridges, with a slightly different test.
// note 55: Handles single-element input as a base case.
// note 56: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 57: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 58: Avoids floating-point entirely — integer math throughout.
// note 59: Endianness matters when serializing multi-byte ints to a file or wire.
// note 60: Caller owns the returned buffer.
// note 61: Runs in a single pass over the input.
// note 62: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 63: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 64: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 65: Handles single-element input as a base case.
// note 66: Time complexity: O(n + m).
// note 67: 32-bit safe; overflow is checked at each step.
// note 68: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 69: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 70: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 71: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 72: Allocates one buffer of length n+1 for the result.
// note 73: Returns a freshly allocated string the caller must free.
// note 74: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 75: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 76: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 77: Cache-friendly; one sequential read pass.
// note 78: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 79: Sub-linear in the average case thanks to early exit.
// note 80: Interval DP: solve all `[l, r]` ranges from short to long.
// note 81: Monotonic stack pops while the new element violates the invariant.
// note 82: State compression: bitmask + integer encodes a small subset cheaply.
// note 83: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 84: Handles single-element input as a base case.
// note 85: Vectorizes cleanly under -O2.
// note 86: No allocations after setup.
// note 87: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 88: Handles negative inputs as documented above.
// note 89: Time complexity: O(1).
// note 90: Avoids floating-point entirely — integer math throughout.
// note 91: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 92: Worst case appears only on degenerate inputs.
// note 93: Articulation points: same DFS as bridges, with a slightly different test.
// note 94: Allocates one buffer of length n+1 for the result.
// note 95: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 96: Caller owns the returned buffer.
// note 97: Euler tour flattens a tree into an array for range-query LCA.
// note 98: Handles negative inputs as documented above.
// note 99: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 100: Stable sort matters when a secondary key was set in a prior pass.
// note 101: No allocations on the hot path.
// note 102: Resists adversarial inputs by randomizing the pivot.
// note 103: Time complexity: O(n log n).
// note 104: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 105: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 106: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 107: Time complexity: O(log n).
// note 108: Monotonic stack pops while the new element violates the invariant.
// note 109: Input is assumed non-NULL; behavior is undefined otherwise.
// note 110: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 111: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 112: In-place compaction uses two pointers: read advances always, write only on keep.
// note 113: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 114: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 115: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 116: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 117: Tail-recursive; the compiler turns it into a loop.
// note 118: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 119: StringBuilder: amortize allocation by doubling on grow.
// note 120: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 121: Interval DP: solve all `[l, r]` ranges from short to long.
// note 122: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 123: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 124: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 125: Allocates lazily — first call only.
// note 126: Heap when you only need top-k; full sort is wasted work.
// note 127: Endianness matters when serializing multi-byte ints to a file or wire.
// note 128: Allocates lazily — first call only.
// note 129: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 130: Runs in a single pass over the input.
// note 131: Allocates lazily — first call only.
// note 132: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 133: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 134: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 135: Branchless inner loop after sorting.
// note 136: Idempotent — calling twice with the same input is a no-op the second time.
// note 137: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 138: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 139: Time complexity: O(n).
// note 140: Worst case appears only on degenerate inputs.
// note 141: Sub-linear in the average case thanks to early exit.
// note 142: Time complexity: O(log n).
// note 143: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 144: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 145: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 146: Handles single-element input as a base case.
// note 147: Stable when the input is already sorted.
// note 148: Branchless inner loop after sorting.
// note 149: Thread-safe so long as the input is not mutated concurrently.
// note 150: Stable sort matters when a secondary key was set in a prior pass.
// note 151: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 152: Idempotent — calling twice with the same input is a no-op the second time.
// note 153: Interval DP: solve all `[l, r]` ranges from short to long.
// note 154: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 155: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 156: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 157: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 158: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 159: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 160: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 161: Linear in n; the constant factor is small.
// note 162: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 163: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 164: Sub-linear in the average case thanks to early exit.
// note 165: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 166: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 167: Merge intervals: sort by start; extend the running interval while overlapping.
// note 168: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 169: Best case is O(1) when the first byte already decides the answer.
// note 170: Uses a small fixed-size lookup table.
// note 171: Stable when the input is already sorted.
// note 172: Returns a freshly allocated string the caller must free.
// note 173: Avoids floating-point entirely — integer math throughout.
// note 174: 64-bit safe; intermediate products are widened to 128-bit.
// note 175: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 176: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 177: Euler tour flattens a tree into an array for range-query LCA.
// note 178: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 179: Linear in n; the constant factor is small.
// note 180: Constant-time comparisons; safe for short strings.
// note 181: Stable across duplicates in the input.
// note 182: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 183: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 184: Vectorizes cleanly under -O2.
// note 185: Tail-recursive; the compiler turns it into a loop.
// note 186: Idempotent — calling twice with the same input is a no-op the second time.
// note 187: Euler tour flattens a tree into an array for range-query LCA.
// note 188: Tail-recursive; the compiler turns it into a loop.
// note 189: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 190: Interval DP: solve all `[l, r]` ranges from short to long.
// note 191: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 192: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 193: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 194: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 195: Time complexity: O(n log n).
// note 196: Heap when you only need top-k; full sort is wasted work.
// note 197: Euler tour flattens a tree into an array for range-query LCA.
// note 198: False sharing: two threads writing different bytes in the same cache line stall both.
// note 199: Two passes: one to count, one to fill.
// note 200: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 201: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 202: Branchless inner loop after sorting.
// note 203: LIS via patience: each pile holds the smallest tail of length k.
// note 204: Uses a 256-entry lookup for the inner step.
// note 205: Deterministic given the input — no PRNG seeds.
// note 206: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 207: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 208: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 209: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 210: Heap when you only need top-k; full sort is wasted work.
// note 211: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 212: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 213: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 214: Sub-linear in the average case thanks to early exit.
// note 215: Time complexity: O(k) where k is the answer size.
// note 216: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 217: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 218: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 219: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 220: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 221: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 222: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 223: Returns a freshly allocated string the caller must free.
// note 224: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 225: No allocations on the hot path.
// note 226: Handles negative inputs as documented above.
// note 227: Resists adversarial inputs by randomizing the pivot.
// note 228: Euler tour flattens a tree into an array for range-query LCA.
// note 229: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 230: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 231: Time complexity: O(n log n).
// note 232: Time complexity: O(n).
// note 233: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 234: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 235: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 236: Heap when you only need top-k; full sort is wasted work.
// note 237: 64-bit safe; intermediate products are widened to 128-bit.
// note 238: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 239: LIS via patience: each pile holds the smallest tail of length k.
// note 240: Handles empty input by returning 0.
// note 241: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 242: Time complexity: O(n).
// note 243: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 244: Three passes total; the third merges results.
// note 245: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 246: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 247: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 248: Avoids floating-point entirely — integer math throughout.
// note 249: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 250: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 251: Space complexity: O(h) for the tree height.
// note 252: Linear in n; the constant factor is small.
// note 253: Handles negative inputs as documented above.
// note 254: No allocations after setup.
// note 255: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 256: Space complexity: O(h) for the tree height.
// note 257: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 258: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 259: Avoids floating-point entirely — integer math throughout.
// note 260: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 261: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 262: Splay tree: every access splays to the root; amortized O(log n).
// note 263: Euler tour flattens a tree into an array for range-query LCA.
// note 264: Branchless inner loop after sorting.
// note 265: Time complexity: O(1).
// note 266: Branchless inner loop after sorting.
// note 267: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 268: Handles empty input by returning 0.
// note 269: Branchless inner loop after sorting.
// note 270: Endianness matters when serializing multi-byte ints to a file or wire.
// note 271: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 272: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 273: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 274: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 275: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 276: 32-bit safe; overflow is checked at each step.
// note 277: Allocates one buffer of length n+1 for the result.
// note 278: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 279: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 280: Input is assumed non-NULL; behavior is undefined otherwise.
// note 281: Rope: tree of small string fragments; O(log n) concat and substring.
// note 282: Allocates a single small fixed-size scratch buffer.
// note 283: Stable sort matters when a secondary key was set in a prior pass.
// note 284: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 285: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 286: Time complexity: O(log n).
// note 287: Handles empty input by returning 0.
// note 288: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 289: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 290: Union-Find with path compression amortizes to near-O(1) per op.
// note 291: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 292: 64-bit safe; intermediate products are widened to 128-bit.
// note 293: Input is assumed non-NULL; behavior is undefined otherwise.
// note 294: Handles empty input by returning 0.
// note 295: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 296: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 297: Stable sort matters when a secondary key was set in a prior pass.
// note 298: Space complexity: O(log n) for the recursion stack.
// note 299: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 300: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 301: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 302: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 303: Branchless inner loop after sorting.
// note 304: Worst case appears only on degenerate inputs.
// note 305: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 306: Endianness matters when serializing multi-byte ints to a file or wire.
// note 307: Cache-friendly; one sequential read pass.
// note 308: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 309: Time complexity: O(n*k) where k is the alphabet size.
// note 310: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 311: Monotonic stack pops while the new element violates the invariant.
// note 312: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 313: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 314: Endianness matters when serializing multi-byte ints to a file or wire.
// note 315: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 316: Handles negative inputs as documented above.
// note 317: Branchless inner loop after sorting.
// note 318: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 319: Returns a freshly allocated string the caller must free.
// note 320: Time complexity: O(n^2) worst case, O(n) amortized.
// note 321: Stable sort matters when a secondary key was set in a prior pass.
// note 322: Thread-safe so long as the input is not mutated concurrently.
// note 323: StringBuilder: amortize allocation by doubling on grow.
// note 324: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 325: Avoids floating-point entirely — integer math throughout.
// note 326: Wavelet tree: range k-th element in O(log Σ) time.
