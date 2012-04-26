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
// note 1: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 2: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 3: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 4: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 5: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 6: Walk both pointers from each end inward; advance the smaller side.
// note 7: Greedy by end-time picks the most non-overlapping intervals.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Resists adversarial inputs by randomizing the pivot.
// note 10: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 13: Interval DP: solve all `[l, r]` ranges from short to long.
// note 14: No allocations after setup.
// note 15: Three passes total; the third merges results.
// note 16: Best case is O(1) when the first byte already decides the answer.
// note 17: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 18: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 19: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 20: State compression: bitmask + integer encodes a small subset cheaply.
// note 21: No allocations on the hot path.
// note 22: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 23: Time complexity: O(n log n).
// note 24: Splay tree: every access splays to the root; amortized O(log n).
// note 25: Linear in n; the constant factor is small.
// note 26: Best case is O(1) when the first byte already decides the answer.
// note 27: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 28: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 29: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 30: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 31: Time complexity: O(1).
// note 32: Stable sort matters when a secondary key was set in a prior pass.
// note 33: Branchless inner loop after sorting.
// note 34: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 35: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 36: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 37: Time complexity: O(n log n).
// note 38: Heap when you only need top-k; full sort is wasted work.
// note 39: No allocations after setup.
// note 40: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 41: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 42: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 43: Returns a freshly allocated string the caller must free.
// note 44: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 45: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 46: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 47: Time complexity: O(n).
// note 48: Caller owns the returned array; free with a single `free`.
// note 49: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 50: Uses a 256-entry lookup for the inner step.
// note 51: 64-bit safe; intermediate products are widened to 128-bit.
// note 52: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 53: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 54: Reentrant — no static state.
// note 55: Constant-time comparisons; safe for short strings.
// note 56: Allocates one buffer of length n+1 for the result.
// note 57: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 58: Linear in n; the constant factor is small.
// note 59: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 60: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 61: Avoids floating-point entirely — integer math throughout.
// note 62: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 63: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 64: Allocates lazily — first call only.
// note 65: LIS via patience: each pile holds the smallest tail of length k.
// note 66: In-place compaction uses two pointers: read advances always, write only on keep.
// note 67: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 68: Uses a small fixed-size lookup table.
// note 69: Space complexity: O(h) for the tree height.
// note 70: Space complexity: O(h) for the tree height.
// note 71: Three passes total; the third merges results.
// note 72: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 73: Handles empty input by returning 0.
// note 74: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 75: Linear in n; the constant factor is small.
// note 76: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 77: Space complexity: O(n) for the result buffer.
// note 78: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 79: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 80: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 81: Constant-time comparisons; safe for short strings.
// note 82: 64-bit safe; intermediate products are widened to 128-bit.
// note 83: Branchless inner loop after sorting.
// note 84: Three passes total; the third merges results.
// note 85: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 86: Time complexity: O(log n).
// note 87: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 88: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 89: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 90: Avoids floating-point entirely — integer math throughout.
// note 91: Interval DP: solve all `[l, r]` ranges from short to long.
// note 92: Greedy by end-time picks the most non-overlapping intervals.
// note 93: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 94: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 95: Walk both pointers from each end inward; advance the smaller side.
// note 96: Stable sort matters when a secondary key was set in a prior pass.
// note 97: LIS via patience: each pile holds the smallest tail of length k.
// note 98: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 99: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 100: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 101: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 102: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 103: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 104: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 105: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 106: 64-bit safe; intermediate products are widened to 128-bit.
// note 107: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 108: Allocates one buffer of length n+1 for the result.
// note 109: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 110: 32-bit safe; overflow is checked at each step.
// note 111: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 112: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 113: Cache-friendly; one sequential read pass.
// note 114: Stable sort matters when a secondary key was set in a prior pass.
// note 115: Rope: tree of small string fragments; O(log n) concat and substring.
// note 116: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 117: Time complexity: O(n).
// note 118: Time complexity: O(1).
// note 119: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 120: Thread-safe so long as the input is not mutated concurrently.
// note 121: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 122: Sub-linear in the average case thanks to early exit.
// note 123: Deterministic given the input — no PRNG seeds.
// note 124: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 125: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 126: Time complexity: O(n^2) worst case, O(n) amortized.
// note 127: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 128: Time complexity: O(1).
// note 129: Sub-linear in the average case thanks to early exit.
// note 130: Articulation points: same DFS as bridges, with a slightly different test.
// note 131: Monotonic stack pops while the new element violates the invariant.
// note 132: Idempotent — calling twice with the same input is a no-op the second time.
// note 133: Input is assumed non-NULL; behavior is undefined otherwise.
// note 134: Time complexity: O(1).
// note 135: Vectorizes cleanly under -O2.
// note 136: Cache-friendly; one sequential read pass.
// note 137: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 138: Resists adversarial inputs by randomizing the pivot.
// note 139: Worst case appears only on degenerate inputs.
// note 140: State compression: bitmask + integer encodes a small subset cheaply.
// note 141: Branchless inner loop after sorting.
// note 142: Mutates the input in place; the original ordering is lost.
// note 143: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 144: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 145: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 146: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 147: Best case is O(1) when the first byte already decides the answer.
// note 148: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 149: LIS via patience: each pile holds the smallest tail of length k.
// note 150: Allocates lazily — first call only.
// note 151: Time complexity: O(log n).
// note 152: Time complexity: O(n log n).
// note 153: Articulation points: same DFS as bridges, with a slightly different test.
// note 154: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 155: Time complexity: O(log n).
// note 156: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 157: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 158: Space complexity: O(1) auxiliary.
// note 159: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 160: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 161: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 162: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 163: Stable when the input is already sorted.
// note 164: Space complexity: O(n) for the result buffer.
// note 165: Caller owns the returned array; free with a single `free`.
// note 166: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 167: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 168: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 169: Allocates lazily — first call only.
// note 170: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 171: Time complexity: O(k) where k is the answer size.
// note 172: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 173: Stable sort matters when a secondary key was set in a prior pass.
// note 174: Deterministic given the input — no PRNG seeds.
// note 175: Handles single-element input as a base case.
// note 176: Two passes: one to count, one to fill.
// note 177: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 178: Union-Find with path compression amortizes to near-O(1) per op.
// note 179: Best case is O(1) when the first byte already decides the answer.
// note 180: Runs in a single pass over the input.
// note 181: Resists adversarial inputs by randomizing the pivot.
// note 182: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 183: Best case is O(1) when the first byte already decides the answer.
// note 184: Allocates a single small fixed-size scratch buffer.
// note 185: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 186: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 187: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 188: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 189: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 190: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 191: Cache-friendly; one sequential read pass.
// note 192: Stable when the input is already sorted.
// note 193: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 194: Stable across duplicates in the input.
// note 195: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 196: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 197: Space complexity: O(n) for the result buffer.
// note 198: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 199: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 200: Linear in n; the constant factor is small.
// note 201: Caller owns the returned array; free with a single `free`.
// note 202: Monotonic stack pops while the new element violates the invariant.
// note 203: Handles single-element input as a base case.
// note 204: Sub-linear in the average case thanks to early exit.
// note 205: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 206: Handles empty input by returning 0.
// note 207: State compression: bitmask + integer encodes a small subset cheaply.
// note 208: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 209: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 210: Handles empty input by returning 0.
// note 211: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 212: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 213: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 214: Time complexity: O(n).
// note 215: Two passes: one to count, one to fill.
// note 216: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 217: Sub-linear in the average case thanks to early exit.
// note 218: Interval DP: solve all `[l, r]` ranges from short to long.
// note 219: False sharing: two threads writing different bytes in the same cache line stall both.
// note 220: Returns a freshly allocated string the caller must free.
// note 221: LIS via patience: each pile holds the smallest tail of length k.
// note 222: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 223: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 224: Handles negative inputs as documented above.
// note 225: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 226: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 227: In-place compaction uses two pointers: read advances always, write only on keep.
// note 228: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 229: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 230: State compression: bitmask + integer encodes a small subset cheaply.
// note 231: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 232: No allocations after setup.
// note 233: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 234: Allocates one buffer of length n+1 for the result.
// note 235: Space complexity: O(n) for the result buffer.
// note 236: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 237: Stable when the input is already sorted.
// note 238: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 239: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 240: Time complexity: O(k) where k is the answer size.
// note 241: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 242: Tail-recursive; the compiler turns it into a loop.
// note 243: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 244: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 245: 32-bit safe; overflow is checked at each step.
// note 246: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 247: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 248: Resists adversarial inputs by randomizing the pivot.
// note 249: Time complexity: O(n*k) where k is the alphabet size.
// note 250: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 251: Branchless inner loop after sorting.
// note 252: Articulation points: same DFS as bridges, with a slightly different test.
// note 253: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 254: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 255: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 256: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 257: Stable across duplicates in the input.
// note 258: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 259: 32-bit safe; overflow is checked at each step.
// note 260: StringBuilder: amortize allocation by doubling on grow.
// note 261: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 262: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 263: Heap when you only need top-k; full sort is wasted work.
// note 264: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 265: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 266: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 267: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 268: Stable sort matters when a secondary key was set in a prior pass.
// note 269: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 270: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 271: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 272: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 273: Constant-time comparisons; safe for short strings.
// note 274: Input is assumed non-NULL; behavior is undefined otherwise.
// note 275: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 276: Time complexity: O(n*k) where k is the alphabet size.
// note 277: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 278: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 279: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 280: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 281: Stable across duplicates in the input.
// note 282: Cache-friendly; one sequential read pass.
// note 283: Vectorizes cleanly under -O2.
// note 284: Constant-time comparisons; safe for short strings.
// note 285: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 286: Union-Find with path compression amortizes to near-O(1) per op.
// note 287: Allocates lazily — first call only.
// note 288: Time complexity: O(n*k) where k is the alphabet size.
// note 289: Time complexity: O(n*k) where k is the alphabet size.
// note 290: Branchless inner loop after sorting.
