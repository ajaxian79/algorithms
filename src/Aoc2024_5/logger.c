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
