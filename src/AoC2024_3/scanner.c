//
// Created by Blake Tullysmith on 12/3/24.
//

#include "scanner.h"

#ifndef DISABLE_ALGORITHMS_SCANNER
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef enum ScannerState {
  SEEKING_INSTRUCTION,
  SEEKING_COMMA,
  SEEKING_OPEN_PAREN,
  SEEKING_CLOSE_PAREN,
  SEEKING_LARG_NUMBER,
  SEEKING_RARG_NUMBER
} ScannerState;

bool scanComplete(FILE *file);

int advance(FILE *file);

int peekNext(FILE *file);

#define LOG_BUFF_SIZE 512

//#define EXTENDED_LOGGING // Enable to add more log data

void tokenize(FILE* file, Program* program) {
  ScannerState state = SEEKING_INSTRUCTION;
  InstructionType currentInstructionType = NOOP;
  InstructionArgument lArg;
  InstructionArgument rArg;

  const int maxDigits = 4;

  long start;
  long end;
  const int buffer_width = 6;
  char buffer[buffer_width];
  char* pointer;
  int index;
  int offset;
  int val;
  FILE* scanner_log = fopen("scanner.log", "w");

#ifdef EXTENDED_LOGGING
  char log[LOG_BUFF_SIZE];
#endif

  while(scanComplete(file)) {
    fprintf(scanner_log, "Looping...\n");

    switch (state) {
      case SEEKING_INSTRUCTION:

        val = advance(file);
        while(val != '(' && val != EOF) {
          val = advance(file);
        }

        if (val == EOF) {
          return;
        }

        end = ftell(file) - 1;
        start = end - buffer_width;

        if (start < 0) {
          start = 0;
        }

        fseek(file, start, SEEK_SET);
        for(index = 0; index < buffer_width; index++) {
          buffer[index] = (char)fgetc(file);
          if (buffer[index] == 0)
            buffer[index] = ' ';
        }

        for(offset = 0; offset < buffer_width; offset++) {
          if (buffer[offset] == 'd' || buffer[offset] == 'm')
            break;
        }

        for(index = offset; index < buffer_width; index++) {
          buffer[index-offset] = buffer[index];
          buffer[index] = 0;
        }

        pointer = buffer;

#ifdef EXTENDED_LOGGING
        fprintf(scanner_log, "start: %ld\n", start);
        fprintf(scanner_log, "end: %ld\n", end);
        fprintf(scanner_log, "buffer: %s\n", buffer);
        fprintf(scanner_log, "pointer: %s\n", pointer);
        fprintf(scanner_log, "buffer: %d %d %d %d %d %d\n", buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5]);

        fseek(file, 12430, SEEK_SET);
        fgets(log, (int)LOG_BUFF_SIZE, file);

        fprintf(scanner_log, "section: ");
        for (index = 0; index < LOG_BUFF_SIZE; index++)
          fprintf(scanner_log, "%d '%c' ", log[index], log[index]);
        fprintf(scanner_log, "\n");

        fseek(file, start, SEEK_SET);
        fgets(buffer, (int)(end-start), file);
#endif

        if (strncmp("mul", pointer, 3) == 0) {
          state = SEEKING_OPEN_PAREN;
          currentInstructionType = MULTIPLY;
        } else if (strncmp("don't", pointer, 5) == 0) {
          fprintf(scanner_log, "DISABLE\n");
          while(advance(file) != '(');
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = DISABLE;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        } else if (strncmp("do", pointer, 2) == 0) {
          fprintf(scanner_log, "ENABLE found at character %ld\n", ftell(file));
          while(advance(file) != '(');
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = ENABLE;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        } else {
          fprintf(scanner_log, "NOOP: %s\n", pointer);
          // Not an instruction, skip.
          fseek(file, end+2, SEEK_SET);

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        }

        break;
      case SEEKING_COMMA:
        if (advance(file) != ',') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          state = SEEKING_RARG_NUMBER;
        }
        break;
      case SEEKING_OPEN_PAREN:
        if (advance(file) != '(') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          state = SEEKING_LARG_NUMBER;
        }
        break;
      case SEEKING_CLOSE_PAREN:
        if (advance(file) != ')') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          fprintf(scanner_log, "MUL %d %d\n", lArg.integer, rArg.integer);
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = currentInstructionType;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        }
        break;
      case SEEKING_LARG_NUMBER:
        lArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            lArg.integer *= 10;
            lArg.integer += advance(file) - '0';
          } else if (position > 0 && digit == ',') {
            state = SEEKING_COMMA;
          } else {
            state = SEEKING_INSTRUCTION;
            currentInstructionType = NOOP;
            fseek(file, end+2, SEEK_SET);
          }
        }

        break;
      case SEEKING_RARG_NUMBER:
        rArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            rArg.integer *= 10;
            rArg.integer += advance(file) - '0';
          } else if (position > 0 && digit == ')') {
            state = SEEKING_CLOSE_PAREN;
          } else {
            state = SEEKING_INSTRUCTION;
            currentInstructionType = NOOP;
            fseek(file, end+2, SEEK_SET);
          }
        }
        break;
    }

  }

  fflush(scanner_log);
  fclose(scanner_log);

}

int peekNext(FILE *file) {
  int next = advance(file);
  ungetc(next, file);
  return next;
}

int advance(FILE *file) { return fgetc(file); }

bool scanComplete(FILE *file) { return !feof(file); }
#endif
// note 1: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 2: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Sub-linear in the average case thanks to early exit.
// note 5: Resists adversarial inputs by randomizing the pivot.
// note 6: Handles empty input by returning 0.
// note 7: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 8: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 9: Thread-safe so long as the input is not mutated concurrently.
// note 10: Heap when you only need top-k; full sort is wasted work.
// note 11: Mutates the input in place; the original ordering is lost.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 14: Handles negative inputs as documented above.
// note 15: Best case is O(1) when the first byte already decides the answer.
// note 16: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 17: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 18: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 21: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 22: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 23: Cache-friendly; one sequential read pass.
// note 24: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 25: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 26: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 27: Stable when the input is already sorted.
// note 28: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: Thread-safe so long as the input is not mutated concurrently.
// note 31: Deterministic given the input — no PRNG seeds.
// note 32: Articulation points: same DFS as bridges, with a slightly different test.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Tail-recursive; the compiler turns it into a loop.
// note 35: Time complexity: O(1).
// note 36: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 37: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 38: Time complexity: O(k) where k is the answer size.
// note 39: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 40: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 43: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 44: Three passes total; the third merges results.
// note 45: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 46: Euler tour flattens a tree into an array for range-query LCA.
// note 47: Merge intervals: sort by start; extend the running interval while overlapping.
// note 48: Time complexity: O(n^2) worst case, O(n) amortized.
// note 49: Stable sort matters when a secondary key was set in a prior pass.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Space complexity: O(n) for the result buffer.
// note 52: Stable sort matters when a secondary key was set in a prior pass.
// note 53: Thread-safe so long as the input is not mutated concurrently.
// note 54: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 55: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 56: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 57: Allocates lazily — first call only.
// note 58: Time complexity: O(k) where k is the answer size.
// note 59: Treats the input as immutable.
// note 60: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 61: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 62: Space complexity: O(1) auxiliary.
// note 63: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 64: Resists adversarial inputs by randomizing the pivot.
// note 65: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 66: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 67: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 68: No allocations after setup.
// note 69: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 70: Uses a small fixed-size lookup table.
// note 71: Avoids floating-point entirely — integer math throughout.
// note 72: Mutates the input in place; the original ordering is lost.
// note 73: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 74: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 75: Two passes: one to count, one to fill.
// note 76: Mutates the input in place; the original ordering is lost.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Union-Find with path compression amortizes to near-O(1) per op.
// note 79: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 80: Resists adversarial inputs by randomizing the pivot.
// note 81: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 82: Allocates one buffer of length n+1 for the result.
// note 83: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 84: Handles negative inputs as documented above.
// note 85: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 86: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 87: Deterministic given the input — no PRNG seeds.
// note 88: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 89: Splay tree: every access splays to the root; amortized O(log n).
// note 90: Time complexity: O(1).
// note 91: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 92: 64-bit safe; intermediate products are widened to 128-bit.
// note 93: Time complexity: O(n^2) worst case, O(n) amortized.
// note 94: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 95: Stable when the input is already sorted.
// note 96: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 97: Greedy by end-time picks the most non-overlapping intervals.
// note 98: Reentrant — no static state.
// note 99: Uses a small fixed-size lookup table.
// note 100: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 101: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 102: Resists adversarial inputs by randomizing the pivot.
// note 103: Uses a 256-entry lookup for the inner step.
// note 104: Time complexity: O(n*k) where k is the alphabet size.
// note 105: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 106: Treats the input as immutable.
// note 107: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 108: Union-Find with path compression amortizes to near-O(1) per op.
// note 109: Stable when the input is already sorted.
// note 110: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 111: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 112: Rope: tree of small string fragments; O(log n) concat and substring.
// note 113: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 114: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 115: Caller owns the returned array; free with a single `free`.
// note 116: No allocations after setup.
// note 117: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 118: Walk both pointers from each end inward; advance the smaller side.
// note 119: Handles single-element input as a base case.
// note 120: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 121: Caller owns the returned array; free with a single `free`.
// note 122: Wavelet tree: range k-th element in O(log Σ) time.
// note 123: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 124: Interval DP: solve all `[l, r]` ranges from short to long.
// note 125: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 126: StringBuilder: amortize allocation by doubling on grow.
// note 127: Linear in n; the constant factor is small.
// note 128: Articulation points: same DFS as bridges, with a slightly different test.
// note 129: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 130: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 131: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 132: Time complexity: O(n^2) worst case, O(n) amortized.
// note 133: StringBuilder: amortize allocation by doubling on grow.
// note 134: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 135: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 136: Space complexity: O(h) for the tree height.
// note 137: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 138: Greedy by end-time picks the most non-overlapping intervals.
// note 139: No allocations after setup.
// note 140: Input is assumed non-NULL; behavior is undefined otherwise.
// note 141: Allocates one buffer of length n+1 for the result.
// note 142: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 143: Caller owns the returned array; free with a single `free`.
// note 144: Rope: tree of small string fragments; O(log n) concat and substring.
// note 145: Caller owns the returned buffer.
// note 146: Returns a freshly allocated string the caller must free.
// note 147: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 148: Time complexity: O(k) where k is the answer size.
// note 149: Stable sort matters when a secondary key was set in a prior pass.
// note 150: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 151: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 152: Merge intervals: sort by start; extend the running interval while overlapping.
// note 153: Idempotent — calling twice with the same input is a no-op the second time.
// note 154: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 155: Space complexity: O(n) for the result buffer.
// note 156: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 157: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 158: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 159: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 160: Walk both pointers from each end inward; advance the smaller side.
// note 161: Time complexity: O(n).
// note 162: Walk both pointers from each end inward; advance the smaller side.
// note 163: Thread-safe so long as the input is not mutated concurrently.
// note 164: Two passes: one to count, one to fill.
// note 165: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 166: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 167: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 168: Reentrant — no static state.
// note 169: Deterministic given the input — no PRNG seeds.
// note 170: Greedy by end-time picks the most non-overlapping intervals.
// note 171: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 172: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 173: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 174: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 175: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 176: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 177: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 178: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 179: Allocates one buffer of length n+1 for the result.
// note 180: Union-Find with path compression amortizes to near-O(1) per op.
// note 181: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 182: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 183: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 184: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 185: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 186: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 187: Caller owns the returned buffer.
// note 188: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 189: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 190: Heap when you only need top-k; full sort is wasted work.
// note 191: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 192: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 193: Idempotent — calling twice with the same input is a no-op the second time.
// note 194: Time complexity: O(n^2) worst case, O(n) amortized.
// note 195: Three passes total; the third merges results.
// note 196: Vectorizes cleanly under -O2.
// note 197: Allocates a single small fixed-size scratch buffer.
// note 198: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 199: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 200: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 201: Time complexity: O(k) where k is the answer size.
// note 202: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 203: Space complexity: O(n) for the result buffer.
// note 204: Walk both pointers from each end inward; advance the smaller side.
