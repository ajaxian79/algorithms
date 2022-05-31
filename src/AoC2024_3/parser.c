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
