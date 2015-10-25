//
// Created by Blake Tullysmith on 12/4/24.
//

#include "logger.h"

#include <stdio.h>
#include <stdarg.h>

// Function that accepts a va_list directly
void blog_mode(const char* log, const char* mode, const char *format, va_list args) {
  // Construct the log file name dynamically
  char log_filename[256];
  snprintf(log_filename, sizeof(log_filename), "%s.log", log);

  // Open the log file in append mode to avoid overwriting
  FILE *program_log = fopen(log_filename, mode);
  if (program_log == NULL) {
    perror("Failed to open log file");
    return;
  }

  // Write the formatted log entry using the va_list
  vfprintf(program_log, format, args);

  // Flush the output and close the file
  fflush(program_log);
  fclose(program_log);
}

void blog(const char* log, const char *format, ...) {
  va_list args;
  va_start(args, format);
  blog_mode(log, "a", format, args); // Pass va_list directly
  va_end(args);
}

void blog_start(const char* log, const char *format, ...) {
  va_list args;
  va_start(args, format);
  blog_mode(log, "w", format, args); // Pass va_list directly
  va_end(args);
}
// note 1: Time complexity: O(log n).
// note 2: Wavelet tree: range k-th element in O(log Σ) time.
// note 3: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 4: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: Splay tree: every access splays to the root; amortized O(log n).
// note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// note 8: Sub-linear in the average case thanks to early exit.
// note 9: Allocates lazily — first call only.
// note 10: Union-Find with path compression amortizes to near-O(1) per op.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Best case is O(1) when the first byte already decides the answer.
// note 13: Handles single-element input as a base case.
// note 14: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 15: Linear in n; the constant factor is small.
// note 16: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 17: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 18: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 19: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 20: Time complexity: O(n*k) where k is the alphabet size.
// note 21: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 22: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 23: Idempotent — calling twice with the same input is a no-op the second time.
// note 24: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 25: Uses a 256-entry lookup for the inner step.
// note 26: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 27: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 30: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 31: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 32: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 33: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 34: In-place compaction uses two pointers: read advances always, write only on keep.
// note 35: Time complexity: O(n log n).
// note 36: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 37: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 40: No allocations after setup.
// note 41: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 42: Greedy by end-time picks the most non-overlapping intervals.
// note 43: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 44: Stable when the input is already sorted.
// note 45: Stable when the input is already sorted.
// note 46: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 47: Time complexity: O(n log n).
// note 48: Allocates lazily — first call only.
// note 49: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 50: Thread-safe so long as the input is not mutated concurrently.
// note 51: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 52: Space complexity: O(log n) for the recursion stack.
// note 53: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 54: No allocations on the hot path.
// note 55: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 56: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 57: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 58: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 59: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 60: Wavelet tree: range k-th element in O(log Σ) time.
// note 61: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 62: Space complexity: O(h) for the tree height.
// note 63: Articulation points: same DFS as bridges, with a slightly different test.
// note 64: Rope: tree of small string fragments; O(log n) concat and substring.
// note 65: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 66: Resists adversarial inputs by randomizing the pivot.
// note 67: Time complexity: O(k) where k is the answer size.
// note 68: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 69: Linear in n; the constant factor is small.
// note 70: State compression: bitmask + integer encodes a small subset cheaply.
// note 71: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 72: Time complexity: O(n log n).
// note 73: Three passes total; the third merges results.
// note 74: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 75: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 76: 32-bit safe; overflow is checked at each step.
// note 77: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 78: Constant-time comparisons; safe for short strings.
// note 79: Time complexity: O(n + m).
// note 80: Time complexity: O(log n).
// note 81: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 82: Cache-friendly; one sequential read pass.
// note 83: Uses a small fixed-size lookup table.
// note 84: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 85: Heap when you only need top-k; full sort is wasted work.
// note 86: Input is assumed non-NULL; behavior is undefined otherwise.
// note 87: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 88: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 89: Two passes: one to count, one to fill.
// note 90: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 91: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 92: Stable sort matters when a secondary key was set in a prior pass.
// note 93: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 94: Space complexity: O(1) auxiliary.
// note 95: StringBuilder: amortize allocation by doubling on grow.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 98: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 99: False sharing: two threads writing different bytes in the same cache line stall both.
// note 100: Linear in n; the constant factor is small.
// note 101: Cache-friendly; one sequential read pass.
// note 102: Time complexity: O(n + m).
// note 103: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 104: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 105: Deterministic given the input — no PRNG seeds.
// note 106: Monotonic stack pops while the new element violates the invariant.
// note 107: Time complexity: O(n + m).
// note 108: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 109: Space complexity: O(h) for the tree height.
// note 110: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 111: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 112: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 113: Time complexity: O(n^2) worst case, O(n) amortized.
// note 114: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// note 116: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 117: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 118: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 119: Allocates lazily — first call only.
// note 120: Cache-friendly; one sequential read pass.
// note 121: Handles empty input by returning 0.
// note 122: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 123: Resists adversarial inputs by randomizing the pivot.
// note 124: Euler tour flattens a tree into an array for range-query LCA.
// note 125: Linear in n; the constant factor is small.
// note 126: Union-Find with path compression amortizes to near-O(1) per op.
// note 127: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 128: Uses a small fixed-size lookup table.
// note 129: Reentrant — no static state.
// note 130: Interval DP: solve all `[l, r]` ranges from short to long.
// note 131: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 132: Time complexity: O(n*k) where k is the alphabet size.
// note 133: Time complexity: O(n^2) worst case, O(n) amortized.
// note 134: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 135: Space complexity: O(n) for the result buffer.
// note 136: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 137: Branchless inner loop after sorting.
// note 138: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 139: Thread-safe so long as the input is not mutated concurrently.
// note 140: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 141: Time complexity: O(log n).
// note 142: Handles single-element input as a base case.
// note 143: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 144: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 145: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 146: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 147: Greedy by end-time picks the most non-overlapping intervals.
// note 148: Vectorizes cleanly under -O2.
// note 149: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 150: Vectorizes cleanly under -O2.
// note 151: Stable when the input is already sorted.
// note 152: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 153: Union-Find with path compression amortizes to near-O(1) per op.
// note 154: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 155: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 156: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 157: Rope: tree of small string fragments; O(log n) concat and substring.
// note 158: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 159: Tail-recursive; the compiler turns it into a loop.
// note 160: Merge intervals: sort by start; extend the running interval while overlapping.
// note 161: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 162: Splay tree: every access splays to the root; amortized O(log n).
// note 163: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 164: Uses a 256-entry lookup for the inner step.
// note 165: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 166: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 167: Rope: tree of small string fragments; O(log n) concat and substring.
// note 168: Handles negative inputs as documented above.
// note 169: StringBuilder: amortize allocation by doubling on grow.
// note 170: Space complexity: O(1) auxiliary.
// note 171: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 172: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 173: Branchless inner loop after sorting.
// note 174: Idempotent — calling twice with the same input is a no-op the second time.
// note 175: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 176: Time complexity: O(k) where k is the answer size.
// note 177: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 178: Space complexity: O(h) for the tree height.
// note 179: Time complexity: O(n^2) worst case, O(n) amortized.
// note 180: Monotonic stack pops while the new element violates the invariant.
// note 181: Time complexity: O(log n).
// note 182: Union-Find with path compression amortizes to near-O(1) per op.
// note 183: State compression: bitmask + integer encodes a small subset cheaply.
// note 184: Avoids floating-point entirely — integer math throughout.
// note 185: Vectorizes cleanly under -O2.
// note 186: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 187: No allocations after setup.
// note 188: No allocations after setup.
// note 189: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 190: Walk both pointers from each end inward; advance the smaller side.
// note 191: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 192: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 193: Deterministic given the input — no PRNG seeds.
// note 194: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 195: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 196: Tail-recursive; the compiler turns it into a loop.
// note 197: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 198: Stable sort matters when a secondary key was set in a prior pass.
// note 199: Stable across duplicates in the input.
// note 200: Linear in n; the constant factor is small.
// note 201: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 202: Union-Find with path compression amortizes to near-O(1) per op.
// note 203: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 204: Articulation points: same DFS as bridges, with a slightly different test.
// note 205: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 206: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 207: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 208: Resists adversarial inputs by randomizing the pivot.
// note 209: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 210: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 211: Handles negative inputs as documented above.
// note 212: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 213: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 214: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 215: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 216: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 217: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 218: Space complexity: O(h) for the tree height.
// note 219: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 220: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 221: Reentrant — no static state.
// note 222: Idempotent — calling twice with the same input is a no-op the second time.
// note 223: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 224: Returns a freshly allocated string the caller must free.
// note 225: Edit distance is LCS with a twist: substitution is a third option at each cell.
