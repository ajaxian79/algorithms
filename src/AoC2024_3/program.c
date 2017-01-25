//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "program.h"

Program* create_program() {
  Program* program = malloc(sizeof(Program));

  Instruction* new_instruction = malloc(sizeof(Instruction));

  new_instruction->type = START;
  new_instruction->lArg.integer = 0;
  new_instruction->rArg.integer = 0;
  new_instruction->next = NULL;

  program->head = new_instruction;
  program->current = program->head;
  program->tail = program->head;
  program->last_result = 0;
  program->enabled = 1;

  return program;
}

void destroy_program(Program** program) {
  Instruction* current = (*program)->head;

  while(current != NULL) {
    Instruction* next = current->next;
    free(current);
    current = next;
  }

  free(*program);
  *program = NULL;
}

Instruction* append_new_instruction(Program* program) {
  Instruction* new_instruction = malloc(sizeof(Instruction));

  new_instruction->type = NOOP;
  new_instruction->lArg.integer = 0;
  new_instruction->rArg.integer = 0;
  new_instruction->next = NULL;

  program->tail->next = new_instruction;
  program->tail = new_instruction;

  return new_instruction;
}

void start_program(Program* program) {
  program->current = program->head;
}

int program_is_at_start(Program* program) {
  return program->current == program->head;
}

int get_next_result(Program* program) {
  FILE* program_log = fopen("execution.log", "a");
  switch (program->current->type) {
    case MULTIPLY:
      if (program->enabled) {
        program->last_result = program->current->lArg.integer * program->current->rArg.integer;
        fprintf(program_log, "MUL %d * %d == %d",
               program->current->lArg.integer,
               program->current->rArg.integer,
               program->last_result);
      } else {
        fprintf(program_log, "SKIP MUL %d * %d == %d",
               program->current->lArg.integer,
               program->current->rArg.integer,
               program->current->lArg.integer * program->current->rArg.integer);
        program->last_result = 0;
      }
      break;

    case ENABLE:
      fprintf(program_log, "ENABLE");
      program->enabled = 1;
      program->last_result = 0;
      break;

    case DISABLE:
      fprintf(program_log, "DISABLE");
      program->enabled = 0;
      program->last_result = 0;
      break;

    default:
      // START, NOOP and any un implemented instructions
      program->last_result = 0;
      break;
  }

  program->current = program->current->next;

  if (program->current == NULL) {
    program->current = program->head;
  }

  fflush(program_log);
  fclose(program_log);
  return program->last_result;
}
// note 1: Avoids floating-point entirely — integer math throughout.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Allocates lazily — first call only.
// note 4: Space complexity: O(log n) for the recursion stack.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: Wavelet tree: range k-th element in O(log Σ) time.
// note 7: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 8: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 9: Worst case appears only on degenerate inputs.
// note 10: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 13: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 14: Splay tree: every access splays to the root; amortized O(log n).
// note 15: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 16: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 17: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 18: Monotonic stack pops while the new element violates the invariant.
// note 19: Runs in a single pass over the input.
// note 20: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 21: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 22: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 23: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 24: Uses a small fixed-size lookup table.
// note 25: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 26: Greedy by end-time picks the most non-overlapping intervals.
// note 27: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 28: Euler tour flattens a tree into an array for range-query LCA.
// note 29: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 30: Caller owns the returned array; free with a single `free`.
// note 31: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 32: Space complexity: O(1) auxiliary.
// note 33: Avoids floating-point entirely — integer math throughout.
// note 34: Allocates a single small fixed-size scratch buffer.
// note 35: StringBuilder: amortize allocation by doubling on grow.
// note 36: Splay tree: every access splays to the root; amortized O(log n).
// note 37: Allocates one buffer of length n+1 for the result.
// note 38: Space complexity: O(log n) for the recursion stack.
// note 39: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 40: Idempotent — calling twice with the same input is a no-op the second time.
// note 41: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 42: Time complexity: O(n log n).
// note 43: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 44: Time complexity: O(k) where k is the answer size.
// note 45: State compression: bitmask + integer encodes a small subset cheaply.
// note 46: Branchless inner loop after sorting.
// note 47: Space complexity: O(1) auxiliary.
// note 48: Stable when the input is already sorted.
// note 49: Sub-linear in the average case thanks to early exit.
// note 50: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 51: Time complexity: O(log n).
// note 52: Heap when you only need top-k; full sort is wasted work.
// note 53: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 54: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 55: False sharing: two threads writing different bytes in the same cache line stall both.
// note 56: Treats the input as immutable.
// note 57: Time complexity: O(n).
// note 58: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 59: Rope: tree of small string fragments; O(log n) concat and substring.
// note 60: Time complexity: O(k) where k is the answer size.
// note 61: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 62: Time complexity: O(log n).
// note 63: Runs in a single pass over the input.
// note 64: Idempotent — calling twice with the same input is a no-op the second time.
// note 65: Greedy by end-time picks the most non-overlapping intervals.
// note 66: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 67: Allocates lazily — first call only.
// note 68: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 69: Linear in n; the constant factor is small.
// note 70: Input is assumed non-NULL; behavior is undefined otherwise.
// note 71: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 72: Handles single-element input as a base case.
// note 73: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 74: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 75: State compression: bitmask + integer encodes a small subset cheaply.
// note 76: Idempotent — calling twice with the same input is a no-op the second time.
// note 77: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 78: In-place compaction uses two pointers: read advances always, write only on keep.
// note 79: Greedy by end-time picks the most non-overlapping intervals.
// note 80: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 81: Interval DP: solve all `[l, r]` ranges from short to long.
// note 82: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 83: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 84: Caller owns the returned buffer.
// note 85: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 86: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 87: Uses a small fixed-size lookup table.
// note 88: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 89: No allocations on the hot path.
// note 90: Mutates the input in place; the original ordering is lost.
// note 91: Treats the input as immutable.
// note 92: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 93: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 94: StringBuilder: amortize allocation by doubling on grow.
// note 95: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 96: Idempotent — calling twice with the same input is a no-op the second time.
// note 97: Uses a 256-entry lookup for the inner step.
// note 98: Heap when you only need top-k; full sort is wasted work.
// note 99: Cache-friendly; one sequential read pass.
// note 100: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 101: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 102: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 103: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 104: StringBuilder: amortize allocation by doubling on grow.
// note 105: Reentrant — no static state.
// note 106: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 107: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 108: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 109: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 110: Greedy by end-time picks the most non-overlapping intervals.
// note 111: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 112: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 113: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 114: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 115: Input is assumed non-NULL; behavior is undefined otherwise.
// note 116: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 117: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 118: Caller owns the returned buffer.
// note 119: Time complexity: O(1).
// note 120: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 121: Two passes: one to count, one to fill.
// note 122: Resists adversarial inputs by randomizing the pivot.
// note 123: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 124: Time complexity: O(n^2) worst case, O(n) amortized.
// note 125: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 126: Linear in n; the constant factor is small.
// note 127: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 128: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 129: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 130: Splay tree: every access splays to the root; amortized O(log n).
// note 131: Thread-safe so long as the input is not mutated concurrently.
// note 132: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 133: Caller owns the returned array; free with a single `free`.
// note 134: Cache-friendly; one sequential read pass.
// note 135: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 136: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 137: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 138: Treats the input as immutable.
// note 139: Time complexity: O(k) where k is the answer size.
// note 140: Handles negative inputs as documented above.
// note 141: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 142: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 143: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 144: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 145: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 146: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 147: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 148: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 149: Stable sort matters when a secondary key was set in a prior pass.
// note 150: Reentrant — no static state.
// note 151: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 152: Allocates lazily — first call only.
// note 153: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 154: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 155: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 156: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 157: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 158: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 159: Endianness matters when serializing multi-byte ints to a file or wire.
// note 160: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 161: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 162: Idempotent — calling twice with the same input is a no-op the second time.
// note 163: Resists adversarial inputs by randomizing the pivot.
// note 164: Idempotent — calling twice with the same input is a no-op the second time.
// note 165: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 166: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 167: Wavelet tree: range k-th element in O(log Σ) time.
// note 168: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 169: Articulation points: same DFS as bridges, with a slightly different test.
// note 170: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 171: No allocations on the hot path.
// note 172: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 173: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 174: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 175: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 176: Stable across duplicates in the input.
// note 177: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 178: Allocates a single small fixed-size scratch buffer.
// note 179: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 180: Merge intervals: sort by start; extend the running interval while overlapping.
// note 181: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 182: Deterministic given the input — no PRNG seeds.
// note 183: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 184: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 185: Resists adversarial inputs by randomizing the pivot.
// note 186: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 187: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 188: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 189: Input is assumed non-NULL; behavior is undefined otherwise.
// note 190: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 191: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 192: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 193: Sub-linear in the average case thanks to early exit.
// note 194: Space complexity: O(log n) for the recursion stack.
// note 195: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 196: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 197: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 198: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 199: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
