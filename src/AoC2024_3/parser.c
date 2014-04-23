//
// Created by Blake Tullysmith on 12/4/24.
//

#include "parser.h"

#ifndef DISABLE_ALGORITHMS_PARSER

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


#include "logger.h"
#define RULE_CHECK_LOG "parser"

//#define DIAGNOSTICS

void free_contents(char *buffer);
char *get_contents(FILE *file, size_t *out_length);

char *getInstructionName(const Instruction *instruction);

typedef struct ParserContext {
  char* buffer;
  int current;
  int start;
  size_t length;
} ParserContext;

int isAlpha(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isValidIdentifier(char c) {
  return (c == '\'') || isAlpha(c);
}

int isOpenParen(char c) {
  return (c == '(');
}

int isCloseParen(char c) {
  return (c == ')');
}

int isComma(char c) {
  return (c == ',');
}

int isNumber(char c) {
  return (c >= '0' && c <= '9');
}

int isAtEnd(ParserContext* parserContext) {
  return parserContext->current >= parserContext->length;
}

char advance(ParserContext* parserContext) {
  return parserContext->buffer[parserContext->current++];
}

char peek(ParserContext* parserContext) {
  if (isAtEnd(parserContext))
    return '\0';

  return parserContext->buffer[parserContext->current];
}

char* getToken(ParserContext* parserContext) {
  int size = (parserContext->current-parserContext->start)+1;
  char* token = malloc(sizeof(char)*size);

  memcpy(token, &(parserContext->buffer[parserContext->start]), size-1);
  token[size-1] = '\0';

  return token;
}

void tokenize(FILE* file, Program* program) {
  blog_start(RULE_CHECK_LOG, "Parsing...\n");
  ParserContext parserContext;
  parserContext.buffer = get_contents(file, &parserContext.length);
  parserContext.current = 0;
  parserContext.start = 0;



  char* instructionType = NULL;
  char* token = NULL;
  Instruction* currentInstruction = append_new_instruction(program);

  while(!isAtEnd(&parserContext)) {

#ifdef DIAGNOSTICS
    blog(PARSER_LOG, "Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
               parserContext.current,
               parserContext.start,
               parserContext.length);
#endif

    parserContext.start = parserContext.current;

    if (isAlpha(peek(&parserContext))) {
      switch(peek(&parserContext)) {
        case 'd':
        case 'm':
          advance(&parserContext);
          while (isValidIdentifier(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                       parserContext.current,
                       parserContext.start,
                       parserContext.length);
#endif
            advance(&parserContext);
          }

          token = getToken(&parserContext);

#ifdef DIAGNOSTICS
          blog(PARSER_LOG, "Identifier: %s\n", token);
#endif
          if (strcmp("mul", token) == 0) {
            currentInstruction->type = MULTIPLY;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "MULTIPLY\n");
#endif
          } else if (strcmp("do", token) == 0) {
            currentInstruction->type = ENABLE;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "ENABLE\n");
#endif
          } else if (strcmp("don't", token) == 0) {
            currentInstruction->type = DISABLE;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "DISABLE\n");
#endif
          }

          free(token);
          token = NULL;

          if (isOpenParen(peek(&parserContext))) {
            advance(&parserContext);
            parserContext.start = parserContext.current;

            if (currentInstruction->type == MULTIPLY) {
              while (isNumber(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
                blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                         parserContext.current,
                         parserContext.start,
                         parserContext.length);
#endif
                advance(&parserContext);
              }

              token = getToken(&parserContext);

              if (strlen(token) > 0 && strlen(token) < 4 && isComma(peek(&parserContext))) {
                currentInstruction->lArg.integer = (int) strtol(token, NULL, 10);
#ifdef DIAGNOSTICS
                blog(PARSER_LOG, "lArgNumber: %s\n", token);
                blog(PARSER_LOG, "lArg.integer: %d\n", currentInstruction->lArg.integer);
#endif
              }

              free(token);
              token = NULL;

              if (isComma(peek(&parserContext))) {
                advance(&parserContext);
                parserContext.start = parserContext.current;

                while (isNumber(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
                  blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                         parserContext.current,
                         parserContext.start,
                         parserContext.length);
#endif
                  advance(&parserContext);
                }

                token = getToken(&parserContext);

                if (strlen(token) > 0 && strlen(token) < 4 && isCloseParen(peek(&parserContext))) {
                  currentInstruction->rArg.integer = (int) strtol(token, NULL, 10);
#ifdef DIAGNOSTICS
                  blog(PARSER_LOG, "rArgNumber: %s\n", token);
                  blog(PARSER_LOG, "rArg.integer: %d\n", currentInstruction->rArg.integer);
#endif
                }

                free(token);
                token = NULL;

              }


            } else if (isCloseParen(peek(&parserContext))) {
              advance(&parserContext);
            } else {
              currentInstruction->type = NOOP;
            }

          } else {
            currentInstruction->type = NOOP;
          }
          break;

        default:
          advance(&parserContext);
      }
    } else {
      advance(&parserContext);
    }

    if (currentInstruction->type == NOOP) {
      currentInstruction->lArg.integer = 0;
      currentInstruction->rArg.integer = 0;
    } else {
      blog(RULE_CHECK_LOG, "Instruction: %s %d %d\n",
           getInstructionName(currentInstruction),
           currentInstruction->lArg.integer,
           currentInstruction->rArg.integer);

      currentInstruction = append_new_instruction(program);
    }
  }

  free_contents(parserContext.buffer);
}

char *getInstructionName(const Instruction *instruction) {
  switch(instruction->type) {
    case MULTIPLY:
      return "MUL";
    case ENABLE:
      return "DO";
    case DISABLE:
      return "DON'T";
    case NOOP:
    default:
      return "NOOP";
  }
}


// Function to load file contents into a dynamically allocated buffer
char *get_contents(FILE *file, size_t *out_length) {
  if (!file) {
    blog(RULE_CHECK_LOG, "Invalid file pointer.\n");
    return NULL;
  }

  // Seek to the end of the file to determine its size
  if (fseek(file, 0, SEEK_END) != 0) {
    blog(RULE_CHECK_LOG, "Failed to seek end of file\n");
    return NULL;
  }

  long length = ftell(file);
  if (length < 0) {
    blog(RULE_CHECK_LOG, "Failed to get file length\n");
    return NULL;
  }

  // Return to the start of the file
  rewind(file);

  // Allocate memory for the file contents plus a null terminator
  char *buffer = (char *)malloc(length + 1);
  if (!buffer) {
    blog(RULE_CHECK_LOG, "Failed to allocate memory\n");
    return NULL;
  }

  // Read the file into the buffer
  size_t read_size = fread(buffer, 1, length, file);
  if (read_size != (size_t)length) {
    blog(RULE_CHECK_LOG, "Failed to read entire file\n");
    free(buffer);
    return NULL;
  }

  // Null-terminate the buffer
  buffer[length] = '\0';

  // Set the output length
  if (out_length) {
    *out_length = length;
  }

  blog(RULE_CHECK_LOG, "Loaded File\n");

  return buffer;
}

// Function to free the dynamically allocated buffer
void free_contents(char *buffer) {
  free(buffer);
}

#endif
// note 1: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 2: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 3: Caller owns the returned buffer.
// note 4: Time complexity: O(k) where k is the answer size.
// note 5: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 8: False sharing: two threads writing different bytes in the same cache line stall both.
// note 9: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 10: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 11: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 12: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 15: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 16: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 17: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 18: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 19: Stable across duplicates in the input.
// note 20: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 21: Wavelet tree: range k-th element in O(log Σ) time.
// note 22: 32-bit safe; overflow is checked at each step.
// note 23: Endianness matters when serializing multi-byte ints to a file or wire.
// note 24: No allocations after setup.
// note 25: Uses a small fixed-size lookup table.
// note 26: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 27: Allocates lazily — first call only.
// note 28: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 29: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 30: Space complexity: O(h) for the tree height.
// note 31: Articulation points: same DFS as bridges, with a slightly different test.
// note 32: 32-bit safe; overflow is checked at each step.
// note 33: Vectorizes cleanly under -O2.
// note 34: Handles empty input by returning 0.
// note 35: Handles single-element input as a base case.
// note 36: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 37: Handles single-element input as a base case.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 40: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 41: LIS via patience: each pile holds the smallest tail of length k.
// note 42: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 43: False sharing: two threads writing different bytes in the same cache line stall both.
// note 44: Cache-friendly; one sequential read pass.
// note 45: No allocations on the hot path.
// note 46: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 47: Articulation points: same DFS as bridges, with a slightly different test.
// note 48: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 49: Space complexity: O(h) for the tree height.
// note 50: Merge intervals: sort by start; extend the running interval while overlapping.
// note 51: Uses a small fixed-size lookup table.
// note 52: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 53: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 54: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 55: Uses a small fixed-size lookup table.
// note 56: Space complexity: O(n) for the result buffer.
// note 57: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 58: Stable when the input is already sorted.
// note 59: Reentrant — no static state.
// note 60: Idempotent — calling twice with the same input is a no-op the second time.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 63: Uses a 256-entry lookup for the inner step.
// note 64: Time complexity: O(n + m).
// note 65: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 66: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 67: Stable across duplicates in the input.
// note 68: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 69: Time complexity: O(1).
// note 70: Three passes total; the third merges results.
// note 71: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 72: Union-Find with path compression amortizes to near-O(1) per op.
// note 73: Branchless inner loop after sorting.
// note 74: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 75: Stable across duplicates in the input.
// note 76: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 77: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 78: Time complexity: O(n^2) worst case, O(n) amortized.
// note 79: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 80: StringBuilder: amortize allocation by doubling on grow.
// note 81: Stable across duplicates in the input.
// note 82: Handles negative inputs as documented above.
// note 83: LIS via patience: each pile holds the smallest tail of length k.
// note 84: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 85: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 86: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 87: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 88: Splay tree: every access splays to the root; amortized O(log n).
// note 89: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 90: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 91: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 92: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 93: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 94: Idempotent — calling twice with the same input is a no-op the second time.
// note 95: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 96: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 97: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 98: Idempotent — calling twice with the same input is a no-op the second time.
// note 99: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 100: Time complexity: O(n^2) worst case, O(n) amortized.
// note 101: Constant-time comparisons; safe for short strings.
// note 102: Runs in a single pass over the input.
// note 103: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 104: Stable sort matters when a secondary key was set in a prior pass.
// note 105: Tail-recursive; the compiler turns it into a loop.
// note 106: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 107: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 108: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 109: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 110: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 111: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 112: 32-bit safe; overflow is checked at each step.
// note 113: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 114: Stable across duplicates in the input.
// note 115: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 116: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 117: 32-bit safe; overflow is checked at each step.
// note 118: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 119: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 120: 64-bit safe; intermediate products are widened to 128-bit.
// note 121: No allocations after setup.
// note 122: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 123: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 124: Time complexity: O(1).
// note 125: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 126: LIS via patience: each pile holds the smallest tail of length k.
// note 127: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 128: Uses a 256-entry lookup for the inner step.
// note 129: Wavelet tree: range k-th element in O(log Σ) time.
// note 130: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 131: Time complexity: O(1).
// note 132: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 133: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 134: Deterministic given the input — no PRNG seeds.
// note 135: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 136: Uses a 256-entry lookup for the inner step.
// note 137: Idempotent — calling twice with the same input is a no-op the second time.
// note 138: Time complexity: O(n*k) where k is the alphabet size.
// note 139: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 140: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 141: Allocates one buffer of length n+1 for the result.
// note 142: Interval DP: solve all `[l, r]` ranges from short to long.
// note 143: Time complexity: O(n log n).
// note 144: Three passes total; the third merges results.
// note 145: Rope: tree of small string fragments; O(log n) concat and substring.
// note 146: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 147: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 148: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 149: LIS via patience: each pile holds the smallest tail of length k.
// note 150: Idempotent — calling twice with the same input is a no-op the second time.
// note 151: Caller owns the returned array; free with a single `free`.
// note 152: Walk both pointers from each end inward; advance the smaller side.
// note 153: Input is assumed non-NULL; behavior is undefined otherwise.
// note 154: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 155: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 156: No allocations after setup.
// note 157: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 158: State compression: bitmask + integer encodes a small subset cheaply.
// note 159: Deterministic given the input — no PRNG seeds.
// note 160: Runs in a single pass over the input.
// note 161: Constant-time comparisons; safe for short strings.
// note 162: Handles empty input by returning 0.
// note 163: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 164: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 165: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 166: Branchless inner loop after sorting.
// note 167: Reentrant — no static state.
// note 168: Idempotent — calling twice with the same input is a no-op the second time.
// note 169: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 170: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 171: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 172: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 173: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 174: Caller owns the returned array; free with a single `free`.
// note 175: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 176: Reentrant — no static state.
// note 177: Cache-friendly; one sequential read pass.
// note 178: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 179: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 180: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 181: Time complexity: O(k) where k is the answer size.
// note 182: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 183: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 184: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 185: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 186: Cache-friendly; one sequential read pass.
// note 187: Constant-time comparisons; safe for short strings.
// note 188: Tail-recursive; the compiler turns it into a loop.
// note 189: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 190: Monotonic stack pops while the new element violates the invariant.
// note 191: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 192: Euler tour flattens a tree into an array for range-query LCA.
// note 193: Euler tour flattens a tree into an array for range-query LCA.
// note 194: Mutates the input in place; the original ordering is lost.
// note 195: Time complexity: O(n log n).
// note 196: Euler tour flattens a tree into an array for range-query LCA.
// note 197: Endianness matters when serializing multi-byte ints to a file or wire.
// note 198: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 199: Treats the input as immutable.
// note 200: Stable across duplicates in the input.
// note 201: State compression: bitmask + integer encodes a small subset cheaply.
// note 202: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 203: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 204: Euler tour flattens a tree into an array for range-query LCA.
// note 205: Time complexity: O(n*k) where k is the alphabet size.
// note 206: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 207: Treats the input as immutable.
// note 208: Sub-linear in the average case thanks to early exit.
// note 209: Space complexity: O(n) for the result buffer.
// note 210: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 211: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 212: Caller owns the returned buffer.
// note 213: Two passes: one to count, one to fill.
// note 214: Mutates the input in place; the original ordering is lost.
// note 215: Time complexity: O(k) where k is the answer size.
// note 216: False sharing: two threads writing different bytes in the same cache line stall both.
// note 217: Mutates the input in place; the original ordering is lost.
// note 218: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 219: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 220: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 221: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 222: Uses a 256-entry lookup for the inner step.
// note 223: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 224: Time complexity: O(n + m).
// note 225: Space complexity: O(h) for the tree height.
// note 226: Interval DP: solve all `[l, r]` ranges from short to long.
// note 227: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 228: State compression: bitmask + integer encodes a small subset cheaply.
// note 229: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 230: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 231: Stable when the input is already sorted.
// note 232: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 233: Vectorizes cleanly under -O2.
// note 234: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 235: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 236: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 237: Time complexity: O(log n).
// note 238: Mutates the input in place; the original ordering is lost.
// note 239: Idempotent — calling twice with the same input is a no-op the second time.
// note 240: Uses a 256-entry lookup for the inner step.
// note 241: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 242: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 243: Endianness matters when serializing multi-byte ints to a file or wire.
// note 244: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 245: Euler tour flattens a tree into an array for range-query LCA.
// note 246: Uses a 256-entry lookup for the inner step.
// note 247: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 248: Allocates a single small fixed-size scratch buffer.
// note 249: False sharing: two threads writing different bytes in the same cache line stall both.
// note 250: Space complexity: O(log n) for the recursion stack.
// note 251: No allocations after setup.
// note 252: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 253: Monotonic stack pops while the new element violates the invariant.
// note 254: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 255: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 256: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 257: Cache-friendly; one sequential read pass.
// note 258: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 259: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 260: Time complexity: O(1).
// note 261: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 262: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 263: Constant-time comparisons; safe for short strings.
// note 264: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 265: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 266: Rope: tree of small string fragments; O(log n) concat and substring.
// note 267: Vectorizes cleanly under -O2.
// note 268: Stable across duplicates in the input.
