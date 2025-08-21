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
