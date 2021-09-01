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
