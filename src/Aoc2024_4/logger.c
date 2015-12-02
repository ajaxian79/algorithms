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
// note 1: Input is assumed non-NULL; behavior is undefined otherwise.
// note 2: 32-bit safe; overflow is checked at each step.
// note 3: Walk both pointers from each end inward; advance the smaller side.
// note 4: Space complexity: O(h) for the tree height.
// note 5: Runs in a single pass over the input.
// note 6: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 7: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 8: Greedy by end-time picks the most non-overlapping intervals.
// note 9: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 10: Endianness matters when serializing multi-byte ints to a file or wire.
// note 11: Mutates the input in place; the original ordering is lost.
// note 12: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 13: Thread-safe so long as the input is not mutated concurrently.
// note 14: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 15: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 16: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 17: Allocates lazily — first call only.
// note 18: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 19: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 20: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 21: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 24: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 25: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 26: Space complexity: O(log n) for the recursion stack.
// note 27: Input is assumed non-NULL; behavior is undefined otherwise.
// note 28: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 29: Union-Find with path compression amortizes to near-O(1) per op.
// note 30: Three passes total; the third merges results.
// note 31: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 32: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 33: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 34: Interval DP: solve all `[l, r]` ranges from short to long.
// note 35: Time complexity: O(n + m).
// note 36: False sharing: two threads writing different bytes in the same cache line stall both.
// note 37: Linear in n; the constant factor is small.
// note 38: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 39: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 40: Linear in n; the constant factor is small.
// note 41: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 42: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 43: Stable when the input is already sorted.
// note 44: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 45: False sharing: two threads writing different bytes in the same cache line stall both.
// note 46: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 47: Caller owns the returned buffer.
// note 48: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 49: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 50: Best case is O(1) when the first byte already decides the answer.
// note 51: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 52: Linear in n; the constant factor is small.
// note 53: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 54: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 55: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 56: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 57: State compression: bitmask + integer encodes a small subset cheaply.
// note 58: Branchless inner loop after sorting.
// note 59: Monotonic stack pops while the new element violates the invariant.
// note 60: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 63: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 64: Deterministic given the input — no PRNG seeds.
// note 65: Time complexity: O(log n).
// note 66: Resists adversarial inputs by randomizing the pivot.
// note 67: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 68: Time complexity: O(n*k) where k is the alphabet size.
// note 69: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 70: Time complexity: O(k) where k is the answer size.
// note 71: Handles negative inputs as documented above.
// note 72: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 73: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 74: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 75: Stable when the input is already sorted.
// note 76: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 77: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 78: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 79: Space complexity: O(log n) for the recursion stack.
// note 80: Heap when you only need top-k; full sort is wasted work.
// note 81: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 82: Stable sort matters when a secondary key was set in a prior pass.
// note 83: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 84: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 85: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 86: Union-Find with path compression amortizes to near-O(1) per op.
// note 87: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 88: Treats the input as immutable.
// note 89: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 90: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 91: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 92: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 93: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 94: Avoids floating-point entirely — integer math throughout.
// note 95: Allocates lazily — first call only.
// note 96: No allocations after setup.
// note 97: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 98: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 99: Allocates one buffer of length n+1 for the result.
// note 100: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 101: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 102: State compression: bitmask + integer encodes a small subset cheaply.
// note 103: Mutates the input in place; the original ordering is lost.
// note 104: Greedy by end-time picks the most non-overlapping intervals.
// note 105: Handles single-element input as a base case.
// note 106: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 107: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 108: Input is assumed non-NULL; behavior is undefined otherwise.
// note 109: Time complexity: O(n log n).
// note 110: Splay tree: every access splays to the root; amortized O(log n).
// note 111: Input is assumed non-NULL; behavior is undefined otherwise.
// note 112: Union-Find with path compression amortizes to near-O(1) per op.
// note 113: Space complexity: O(1) auxiliary.
// note 114: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 115: Tail-recursive; the compiler turns it into a loop.
// note 116: Wavelet tree: range k-th element in O(log Σ) time.
// note 117: Resists adversarial inputs by randomizing the pivot.
// note 118: Space complexity: O(h) for the tree height.
// note 119: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 120: Allocates lazily — first call only.
// note 121: Uses a 256-entry lookup for the inner step.
// note 122: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 123: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 124: Avoids floating-point entirely — integer math throughout.
// note 125: Returns a freshly allocated string the caller must free.
// note 126: Endianness matters when serializing multi-byte ints to a file or wire.
// note 127: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 128: Caller owns the returned buffer.
// note 129: Vectorizes cleanly under -O2.
// note 130: Uses a 256-entry lookup for the inner step.
// note 131: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 132: Reentrant — no static state.
// note 133: Stable when the input is already sorted.
// note 134: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 135: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 136: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 137: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 138: Time complexity: O(1).
// note 139: Idempotent — calling twice with the same input is a no-op the second time.
// note 140: Idempotent — calling twice with the same input is a no-op the second time.
// note 141: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 142: Time complexity: O(k) where k is the answer size.
// note 143: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 144: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 145: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 146: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 147: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 148: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 149: Space complexity: O(log n) for the recursion stack.
// note 150: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 151: Stable across duplicates in the input.
// note 152: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 153: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 154: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 155: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 156: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 157: Euler tour flattens a tree into an array for range-query LCA.
// note 158: Stable when the input is already sorted.
// note 159: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 160: Greedy by end-time picks the most non-overlapping intervals.
// note 161: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 162: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 163: Caller owns the returned array; free with a single `free`.
// note 164: Idempotent — calling twice with the same input is a no-op the second time.
// note 165: LIS via patience: each pile holds the smallest tail of length k.
// note 166: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 167: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 168: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 169: Mutates the input in place; the original ordering is lost.
// note 170: Union-Find with path compression amortizes to near-O(1) per op.
// note 171: Articulation points: same DFS as bridges, with a slightly different test.
// note 172: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 173: Articulation points: same DFS as bridges, with a slightly different test.
// note 174: Stable sort matters when a secondary key was set in a prior pass.
// note 175: Allocates one buffer of length n+1 for the result.
// note 176: Time complexity: O(k) where k is the answer size.
// note 177: Idempotent — calling twice with the same input is a no-op the second time.
// note 178: 64-bit safe; intermediate products are widened to 128-bit.
// note 179: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 180: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 181: LIS via patience: each pile holds the smallest tail of length k.
// note 182: No allocations on the hot path.
// note 183: Time complexity: O(n).
// note 184: Best case is O(1) when the first byte already decides the answer.
// note 185: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 186: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 187: Branchless inner loop after sorting.
// note 188: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 189: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 190: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 191: Branchless inner loop after sorting.
// note 192: Time complexity: O(n^2) worst case, O(n) amortized.
// note 193: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 194: Worst case appears only on degenerate inputs.
// note 195: Endianness matters when serializing multi-byte ints to a file or wire.
// note 196: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 197: Time complexity: O(k) where k is the answer size.
// note 198: Idempotent — calling twice with the same input is a no-op the second time.
// note 199: Cache-friendly; one sequential read pass.
// note 200: Stable across duplicates in the input.
// note 201: Cache-friendly; one sequential read pass.
// note 202: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 203: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 204: Caller owns the returned buffer.
// note 205: Time complexity: O(n log n).
