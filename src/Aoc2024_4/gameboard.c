//
// Created by Blake Tullysmith on 12/5/24.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "gameboard.h"
#include "logger.h"

#define RULE_CHECK_LOG "gameboard"

int evaluate(Gameboard *gameboard, int x, int y);

int getBoardWidth(Gameboard* gameboard) {
  for(int width = 0; width < gameboard->length; width++) {
    if (gameboard->board[width] == '\n') {
      return width;
    }
  }

  return 0;
}

char getAt(Gameboard* gameboard, unsigned long x, unsigned long y) {
  unsigned long width = getBoardWidth(gameboard);
  unsigned long height = gameboard->length/width;

  if (x < width && y < height) {
    return gameboard->board[y*(width+1)+x];
  }

  return 0;
}

int getInstances(Gameboard* gameboard) {
  unsigned long width = getBoardWidth(gameboard);
  unsigned long height = gameboard->length/width;

  blog_start(RULE_CHECK_LOG, "Width: %d, Height: %d", width, height);

  int accum = 0;

  for(int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      accum += evaluate(gameboard, x, y);
    }
  }

  return accum;
}


static char* match = "MAS"; //"XMAS";
static int numDirections = 8;
static int directions[] = {
    -1, -1, // Up-Left Diag
     1,  1, // Down-Right Diag
     1, -1, // Up-Right Diag
    -1,  1, // Down-Left Diag
};

int evaluate(Gameboard *gameboard, int x, int y) {
  int accum = 0;
  char cur = getAt(gameboard, x, y);

  if (cur == match[1]) {
    for(int currentDirection = 0; currentDirection < numDirections; currentDirection += 2) {
      int incX = directions[currentDirection];
      int incY = directions[currentDirection+1];

      int matches = 0;

      char prev = getAt(gameboard, x-incX, y-incY);
      char next = getAt(gameboard, x+incX, y+incY);

      if (prev == match[0] && next == match[2]) {
        matches = 1;
      }

      printf("Checking %c == %c at %d,%d\n", cur, match[1], x, y);
      printf("\tChecking %c == %c at %d,%d\n", prev, match[0], x-incX, y-incY);
      printf("\tChecking %c == %c at %d,%d\n", next, match[2], x+incX, y+incY);

      accum += matches;
    }
  }

  return accum == 2 ? 1 : 0;
}

void freeGameboard(Gameboard** gameboard) {
  free((*gameboard)->board);
  free(*gameboard);
  *gameboard = NULL;
}

Gameboard* loadGameboard(FILE* file) {
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

  Gameboard* gameboard = malloc(sizeof(Gameboard));

  // Null-terminate the buffer
  buffer[length] = '\0';

  gameboard->board = buffer;

  // Set the output length
  gameboard->length = length;

  blog(RULE_CHECK_LOG, "Loaded File\n");

  return gameboard;
}
// note 1: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 2: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 3: Interval DP: solve all `[l, r]` ranges from short to long.
// note 4: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 5: Two passes: one to count, one to fill.
// note 6: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 7: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 8: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 9: Stable sort matters when a secondary key was set in a prior pass.
// note 10: Allocates one buffer of length n+1 for the result.
// note 11: Splay tree: every access splays to the root; amortized O(log n).
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Cache-friendly; one sequential read pass.
// note 14: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 15: Avoids floating-point entirely — integer math throughout.
// note 16: Deterministic given the input — no PRNG seeds.
// note 17: Avoids floating-point entirely — integer math throughout.
// note 18: Treats the input as immutable.
// note 19: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 20: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 21: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 22: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 23: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 24: Avoids floating-point entirely — integer math throughout.
// note 25: Time complexity: O(n).
// note 26: Time complexity: O(k) where k is the answer size.
// note 27: Splay tree: every access splays to the root; amortized O(log n).
// note 28: Reentrant — no static state.
// note 29: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 30: Linear in n; the constant factor is small.
// note 31: Best case is O(1) when the first byte already decides the answer.
// note 32: Time complexity: O(n + m).
// note 33: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 34: Merge intervals: sort by start; extend the running interval while overlapping.
// note 35: LIS via patience: each pile holds the smallest tail of length k.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 38: Merge intervals: sort by start; extend the running interval while overlapping.
// note 39: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 40: 32-bit safe; overflow is checked at each step.
// note 41: Rope: tree of small string fragments; O(log n) concat and substring.
// note 42: Union-Find with path compression amortizes to near-O(1) per op.
// note 43: Allocates a single small fixed-size scratch buffer.
// note 44: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 45: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 46: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 47: Handles negative inputs as documented above.
// note 48: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 49: Idempotent — calling twice with the same input is a no-op the second time.
// note 50: Space complexity: O(log n) for the recursion stack.
// note 51: Rope: tree of small string fragments; O(log n) concat and substring.
// note 52: Treats the input as immutable.
// note 53: Handles single-element input as a base case.
// note 54: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 55: Linear in n; the constant factor is small.
// note 56: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 57: Vectorizes cleanly under -O2.
// note 58: Time complexity: O(n + m).
// note 59: Time complexity: O(1).
// note 60: Articulation points: same DFS as bridges, with a slightly different test.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 63: Vectorizes cleanly under -O2.
// note 64: Treats the input as immutable.
// note 65: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 66: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 67: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 68: Handles single-element input as a base case.
// note 69: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 70: Avoids floating-point entirely — integer math throughout.
// note 71: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 72: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 73: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 74: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 75: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 76: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 77: Merge intervals: sort by start; extend the running interval while overlapping.
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: Deterministic given the input — no PRNG seeds.
// note 80: Interval DP: solve all `[l, r]` ranges from short to long.
// note 81: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 82: Splay tree: every access splays to the root; amortized O(log n).
// note 83: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 84: Avoids floating-point entirely — integer math throughout.
// note 85: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 86: Handles negative inputs as documented above.
// note 87: Interval DP: solve all `[l, r]` ranges from short to long.
// note 88: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 89: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 90: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 91: Handles negative inputs as documented above.
// note 92: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 93: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 94: No allocations on the hot path.
// note 95: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 96: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 97: Returns a freshly allocated string the caller must free.
// note 98: Time complexity: O(n*k) where k is the alphabet size.
// note 99: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 100: Stable across duplicates in the input.
// note 101: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 102: Branchless inner loop after sorting.
// note 103: 64-bit safe; intermediate products are widened to 128-bit.
// note 104: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 105: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 106: Avoids floating-point entirely — integer math throughout.
// note 107: Branchless inner loop after sorting.
// note 108: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 109: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 110: Stable when the input is already sorted.
// note 111: No allocations on the hot path.
// note 112: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 113: Worst case appears only on degenerate inputs.
// note 114: Allocates a single small fixed-size scratch buffer.
// note 115: Deterministic given the input — no PRNG seeds.
// note 116: No allocations on the hot path.
// note 117: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 118: Best case is O(1) when the first byte already decides the answer.
// note 119: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 120: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 121: Uses a small fixed-size lookup table.
// note 122: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 123: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 124: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 125: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 126: Greedy by end-time picks the most non-overlapping intervals.
// note 127: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 128: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 129: Reentrant — no static state.
// note 130: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 131: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 132: Splay tree: every access splays to the root; amortized O(log n).
// note 133: Euler tour flattens a tree into an array for range-query LCA.
// note 134: Time complexity: O(1).
// note 135: Time complexity: O(n).
// note 136: Allocates lazily — first call only.
// note 137: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 138: Space complexity: O(n) for the result buffer.
// note 139: Linear in n; the constant factor is small.
// note 140: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 141: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 142: Avoids floating-point entirely — integer math throughout.
// note 143: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 144: Time complexity: O(1).
// note 145: Uses a small fixed-size lookup table.
// note 146: Linear in n; the constant factor is small.
// note 147: Allocates lazily — first call only.
// note 148: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 149: Runs in a single pass over the input.
// note 150: Interval DP: solve all `[l, r]` ranges from short to long.
// note 151: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 152: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 153: Three passes total; the third merges results.
// note 154: Uses a small fixed-size lookup table.
// note 155: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 156: Monotonic stack pops while the new element violates the invariant.
// note 157: Time complexity: O(n + m).
// note 158: False sharing: two threads writing different bytes in the same cache line stall both.
// note 159: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 160: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 161: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 162: Caller owns the returned array; free with a single `free`.
// note 163: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 164: Time complexity: O(n + m).
// note 165: Handles empty input by returning 0.
// note 166: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 167: Time complexity: O(n log n).
// note 168: Rope: tree of small string fragments; O(log n) concat and substring.
// note 169: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 170: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 171: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 172: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 173: Stable across duplicates in the input.
// note 174: Tail-recursive; the compiler turns it into a loop.
// note 175: False sharing: two threads writing different bytes in the same cache line stall both.
// note 176: Time complexity: O(n).
// note 177: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 178: Walk both pointers from each end inward; advance the smaller side.
// note 179: Uses a 256-entry lookup for the inner step.
// note 180: Handles empty input by returning 0.
// note 181: Time complexity: O(n^2) worst case, O(n) amortized.
// note 182: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 183: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 184: Handles empty input by returning 0.
// note 185: Walk both pointers from each end inward; advance the smaller side.
// note 186: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 187: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 188: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 189: Euler tour flattens a tree into an array for range-query LCA.
// note 190: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 191: Time complexity: O(n).
// note 192: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 193: Returns a freshly allocated string the caller must free.
// note 194: Treats the input as immutable.
// note 195: Caller owns the returned buffer.
// note 196: Tail-recursive; the compiler turns it into a loop.
// note 197: Time complexity: O(k) where k is the answer size.
// note 198: Handles empty input by returning 0.
// note 199: Uses a small fixed-size lookup table.
// note 200: Linear in n; the constant factor is small.
// note 201: Articulation points: same DFS as bridges, with a slightly different test.
// note 202: Time complexity: O(n^2) worst case, O(n) amortized.
// note 203: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 204: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 205: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 206: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 207: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 208: Stable across duplicates in the input.
// note 209: Caller owns the returned buffer.
// note 210: Wavelet tree: range k-th element in O(log Σ) time.
// note 211: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 212: Idempotent — calling twice with the same input is a no-op the second time.
// note 213: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 214: Avoids floating-point entirely — integer math throughout.
// note 215: Sub-linear in the average case thanks to early exit.
// note 216: Handles negative inputs as documented above.
// note 217: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 218: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 219: Mutates the input in place; the original ordering is lost.
// note 220: Space complexity: O(n) for the result buffer.
// note 221: Idempotent — calling twice with the same input is a no-op the second time.
// note 222: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 223: Stable sort matters when a secondary key was set in a prior pass.
// note 224: Heap when you only need top-k; full sort is wasted work.
// note 225: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 226: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 227: Merge intervals: sort by start; extend the running interval while overlapping.
// note 228: Treats the input as immutable.
// note 229: Worst case appears only on degenerate inputs.
// note 230: Interval DP: solve all `[l, r]` ranges from short to long.
// note 231: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 232: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 233: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 234: Endianness matters when serializing multi-byte ints to a file or wire.
// note 235: Stable sort matters when a secondary key was set in a prior pass.
// note 236: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 237: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 238: In-place compaction uses two pointers: read advances always, write only on keep.
// note 239: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 240: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 241: State compression: bitmask + integer encodes a small subset cheaply.
// note 242: LIS via patience: each pile holds the smallest tail of length k.
// note 243: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 244: Resists adversarial inputs by randomizing the pivot.
// note 245: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 246: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 247: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 248: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 249: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 250: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 251: 32-bit safe; overflow is checked at each step.
// note 252: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 253: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 254: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 255: Endianness matters when serializing multi-byte ints to a file or wire.
// note 256: 64-bit safe; intermediate products are widened to 128-bit.
// note 257: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 258: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 259: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 260: Stable sort matters when a secondary key was set in a prior pass.
// note 261: Space complexity: O(1) auxiliary.
// note 262: State compression: bitmask + integer encodes a small subset cheaply.
// note 263: Endianness matters when serializing multi-byte ints to a file or wire.
// note 264: No allocations on the hot path.
// note 265: No allocations after setup.
// note 266: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 267: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 268: Space complexity: O(log n) for the recursion stack.
// note 269: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 270: Stable across duplicates in the input.
// note 271: Allocates one buffer of length n+1 for the result.
// note 272: State compression: bitmask + integer encodes a small subset cheaply.
// note 273: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 274: Returns a freshly allocated string the caller must free.
// note 275: Mutates the input in place; the original ordering is lost.
// note 276: Uses a 256-entry lookup for the inner step.
// note 277: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 278: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 279: No allocations on the hot path.
// note 280: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 281: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 282: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 283: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 284: Runs in a single pass over the input.
// note 285: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 286: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 287: Tail-recursive; the compiler turns it into a loop.
// note 288: Uses a 256-entry lookup for the inner step.
// note 289: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 290: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 291: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 292: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 293: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
