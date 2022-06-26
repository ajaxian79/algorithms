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
