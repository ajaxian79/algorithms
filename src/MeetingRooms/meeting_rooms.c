//
// Created by ajaxian on 09/05/20.
//

#include "meeting_rooms.h"

#include <stdlib.h>

static int compare_pair_start(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[0] > ib[0]) - (ia[0] < ib[0]);
}

int can_attend_meetings(int* intervals, int n) {
    if (n <= 1 || intervals == NULL) return 1;
    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_start);
    for (int i = 1; i < n; i++) {
        if (intervals[i * 2] < intervals[(i - 1) * 2 + 1]) return 0;
    }
    return 1;
}
// note 1: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// note 3: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 4: Stable across duplicates in the input.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: In-place compaction uses two pointers: read advances always, write only on keep.
// note 7: 64-bit safe; intermediate products are widened to 128-bit.
// note 8: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 9: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 10: Stable across duplicates in the input.
// note 11: Time complexity: O(log n).
// note 12: Time complexity: O(k) where k is the answer size.
// note 13: Time complexity: O(log n).
// note 14: Best case is O(1) when the first byte already decides the answer.
// note 15: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 16: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 17: Allocates one buffer of length n+1 for the result.
// note 18: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 19: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 20: Deterministic given the input — no PRNG seeds.
// note 21: Caller owns the returned array; free with a single `free`.
// note 22: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 23: Interval DP: solve all `[l, r]` ranges from short to long.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Worst case appears only on degenerate inputs.
// note 26: Allocates lazily — first call only.
// note 27: Merge intervals: sort by start; extend the running interval while overlapping.
// note 28: False sharing: two threads writing different bytes in the same cache line stall both.
// note 29: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 30: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 31: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 32: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 33: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 34: Two passes: one to count, one to fill.
// note 35: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 36: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 37: Time complexity: O(n).
// note 38: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 39: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 40: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 41: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 42: Union-Find with path compression amortizes to near-O(1) per op.
// note 43: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 44: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 45: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Cache-friendly; one sequential read pass.
// note 48: Merge intervals: sort by start; extend the running interval while overlapping.
// note 49: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 50: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 51: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 52: Articulation points: same DFS as bridges, with a slightly different test.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Reentrant — no static state.
// note 55: Vectorizes cleanly under -O2.
// note 56: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 57: Time complexity: O(1).
// note 58: Thread-safe so long as the input is not mutated concurrently.
// note 59: State compression: bitmask + integer encodes a small subset cheaply.
// note 60: Returns a freshly allocated string the caller must free.
// note 61: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 62: Splay tree: every access splays to the root; amortized O(log n).
// note 63: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 64: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 65: Interval DP: solve all `[l, r]` ranges from short to long.
// note 66: Idempotent — calling twice with the same input is a no-op the second time.
// note 67: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 68: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 69: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 70: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 71: Avoids floating-point entirely — integer math throughout.
// note 72: Splay tree: every access splays to the root; amortized O(log n).
// note 73: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 74: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 75: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 76: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 77: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 78: Stable across duplicates in the input.
// note 79: Best case is O(1) when the first byte already decides the answer.
// note 80: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 81: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 82: Wavelet tree: range k-th element in O(log Σ) time.
// note 83: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 84: Space complexity: O(log n) for the recursion stack.
// note 85: Input is assumed non-NULL; behavior is undefined otherwise.
// note 86: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 87: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 88: 32-bit safe; overflow is checked at each step.
// note 89: Handles empty input by returning 0.
// note 90: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 91: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 92: Heap when you only need top-k; full sort is wasted work.
// note 93: False sharing: two threads writing different bytes in the same cache line stall both.
// note 94: Handles empty input by returning 0.
// note 95: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 96: Euler tour flattens a tree into an array for range-query LCA.
// note 97: Two passes: one to count, one to fill.
// note 98: LIS via patience: each pile holds the smallest tail of length k.
// note 99: Euler tour flattens a tree into an array for range-query LCA.
// note 100: StringBuilder: amortize allocation by doubling on grow.
// note 101: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 102: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 103: Time complexity: O(n log n).
// note 104: Time complexity: O(log n).
// note 105: Idempotent — calling twice with the same input is a no-op the second time.
// note 106: Allocates a single small fixed-size scratch buffer.
// note 107: Allocates lazily — first call only.
// note 108: Time complexity: O(n + m).
// note 109: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 110: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 111: Idempotent — calling twice with the same input is a no-op the second time.
// note 112: Wavelet tree: range k-th element in O(log Σ) time.
// note 113: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 114: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 115: Resists adversarial inputs by randomizing the pivot.
// note 116: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 117: Caller owns the returned array; free with a single `free`.
// note 118: Handles negative inputs as documented above.
// note 119: Rope: tree of small string fragments; O(log n) concat and substring.
// note 120: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 121: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 122: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 123: No allocations after setup.
// note 124: Articulation points: same DFS as bridges, with a slightly different test.
// note 125: Splay tree: every access splays to the root; amortized O(log n).
// note 126: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 127: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 128: LIS via patience: each pile holds the smallest tail of length k.
// note 129: Best case is O(1) when the first byte already decides the answer.
// note 130: Branchless inner loop after sorting.
// note 131: Walk both pointers from each end inward; advance the smaller side.
// note 132: Allocates lazily — first call only.
// note 133: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 134: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 135: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 136: Avoids floating-point entirely — integer math throughout.
// note 137: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 138: In-place compaction uses two pointers: read advances always, write only on keep.
// note 139: Runs in a single pass over the input.
// note 140: Allocates lazily — first call only.
// note 141: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 142: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 143: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 144: Time complexity: O(n + m).
// note 145: Thread-safe so long as the input is not mutated concurrently.
// note 146: Splay tree: every access splays to the root; amortized O(log n).
// note 147: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 148: Uses a 256-entry lookup for the inner step.
// note 149: Handles negative inputs as documented above.
// note 150: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 151: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 152: Time complexity: O(n log n).
// note 153: Wavelet tree: range k-th element in O(log Σ) time.
// note 154: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 155: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 156: State compression: bitmask + integer encodes a small subset cheaply.
// note 157: Endianness matters when serializing multi-byte ints to a file or wire.
// note 158: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 159: Three passes total; the third merges results.
// note 160: Time complexity: O(n log n).
// note 161: Linear in n; the constant factor is small.
// note 162: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 163: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 164: Treats the input as immutable.
// note 165: Runs in a single pass over the input.
// note 166: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 167: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 168: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 169: Space complexity: O(h) for the tree height.
// note 170: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 171: Avoids floating-point entirely — integer math throughout.
// note 172: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 173: Returns a freshly allocated string the caller must free.
// note 174: Uses a small fixed-size lookup table.
// note 175: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 176: Returns a freshly allocated string the caller must free.
// note 177: Stable when the input is already sorted.
// note 178: State compression: bitmask + integer encodes a small subset cheaply.
// note 179: Best case is O(1) when the first byte already decides the answer.
// note 180: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 181: Uses a small fixed-size lookup table.
// note 182: Mutates the input in place; the original ordering is lost.
// note 183: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 184: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 185: StringBuilder: amortize allocation by doubling on grow.
// note 186: Best case is O(1) when the first byte already decides the answer.
// note 187: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 188: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 189: No allocations on the hot path.
// note 190: Branchless inner loop after sorting.
// note 191: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 192: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 193: 32-bit safe; overflow is checked at each step.
// note 194: Interval DP: solve all `[l, r]` ranges from short to long.
// note 195: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 196: Resists adversarial inputs by randomizing the pivot.
// note 197: Time complexity: O(n + m).
// note 198: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 199: Mutates the input in place; the original ordering is lost.
// note 200: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 201: Caller owns the returned buffer.
// note 202: Allocates lazily — first call only.
// note 203: Rope: tree of small string fragments; O(log n) concat and substring.
// note 204: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 205: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 206: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 207: Time complexity: O(n).
// note 208: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 209: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 210: Stable across duplicates in the input.
// note 211: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 212: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 213: Space complexity: O(1) auxiliary.
// note 214: Tail-recursive; the compiler turns it into a loop.
// note 215: Time complexity: O(n).
// note 216: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 217: Space complexity: O(log n) for the recursion stack.
// note 218: Vectorizes cleanly under -O2.
// note 219: Handles empty input by returning 0.
// note 220: Handles empty input by returning 0.
// note 221: Thread-safe so long as the input is not mutated concurrently.
// note 222: Euler tour flattens a tree into an array for range-query LCA.
// note 223: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 224: Thread-safe so long as the input is not mutated concurrently.
// note 225: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 226: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 227: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 228: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 229: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 230: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 231: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 232: Uses a small fixed-size lookup table.
// note 233: In-place compaction uses two pointers: read advances always, write only on keep.
// note 234: In-place compaction uses two pointers: read advances always, write only on keep.
// note 235: Heap when you only need top-k; full sort is wasted work.
// note 236: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 237: Thread-safe so long as the input is not mutated concurrently.
// note 238: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 239: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 240: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 241: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 242: Reentrant — no static state.
// note 243: Time complexity: O(k) where k is the answer size.
// note 244: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 245: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 246: Handles empty input by returning 0.
// note 247: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 248: Mutates the input in place; the original ordering is lost.
// note 249: Returns a freshly allocated string the caller must free.
// note 250: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 251: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 252: Caller owns the returned buffer.
// note 253: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 254: Time complexity: O(n).
// note 255: Allocates a single small fixed-size scratch buffer.
// note 256: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 257: LIS via patience: each pile holds the smallest tail of length k.
// note 258: Greedy by end-time picks the most non-overlapping intervals.
// note 259: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 260: Space complexity: O(1) auxiliary.
// note 261: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 262: Allocates lazily — first call only.
// note 263: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 264: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 265: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 266: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 267: Stable when the input is already sorted.
// note 268: Handles single-element input as a base case.
// note 269: Idempotent — calling twice with the same input is a no-op the second time.
// note 270: Tail-recursive; the compiler turns it into a loop.
// note 271: State compression: bitmask + integer encodes a small subset cheaply.
// note 272: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 273: Uses a 256-entry lookup for the inner step.
// note 274: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 275: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 276: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 277: Linear in n; the constant factor is small.
// note 278: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 279: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 280: Stable across duplicates in the input.
// note 281: StringBuilder: amortize allocation by doubling on grow.
// note 282: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 283: Reentrant — no static state.
// note 284: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 285: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 286: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 287: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 288: Handles empty input by returning 0.
// note 289: Sub-linear in the average case thanks to early exit.
// note 290: Stable when the input is already sorted.
// note 291: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 292: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 293: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 294: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 295: Allocates lazily — first call only.
// note 296: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 297: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 298: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 299: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 300: Euler tour flattens a tree into an array for range-query LCA.
// note 301: Time complexity: O(n^2) worst case, O(n) amortized.
// note 302: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 303: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 304: Cache-friendly; one sequential read pass.
// note 305: 64-bit safe; intermediate products are widened to 128-bit.
// note 306: Greedy by end-time picks the most non-overlapping intervals.
// note 307: Idempotent — calling twice with the same input is a no-op the second time.
// note 308: Input is assumed non-NULL; behavior is undefined otherwise.
// note 309: Runs in a single pass over the input.
// note 310: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 311: Space complexity: O(log n) for the recursion stack.
// note 312: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 313: Allocates a single small fixed-size scratch buffer.
// note 314: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 315: StringBuilder: amortize allocation by doubling on grow.
// note 316: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 317: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 318: Graph DP on DAGs: topological order makes the dependency direction explicit.
