//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include <memory.h>

#include "int_hash_map.h"


void map_init(HashMapNode** map) {
  for(int index = 0; index < MAP_SIZE; index++) {
    map[index] = NULL;
  }
}

void map_destroy(HashMapNode** map) {
  for (int index = 0; index < MAP_SIZE; index++) {
    HashMapNode* current = map[index];

    while(current != NULL) {
      HashMapNode* next = current->next;
      free(current);
      current = next;
    }
  }
}

int map_hash(int val) {
  return val % MAP_SIZE;
}

void map_insert(HashMapNode** map, int val) {
  int index = map_hash(val);

  HashMapNode* new_node = malloc(sizeof(HashMapNode));
  new_node->val = val;

  if (map[index] != NULL) {
    new_node->next = map[index];
  }

  map[index] = new_node;
}

int map_has_val(HashMapNode** map, int val) {
  int index = map_hash(val);
  int result = 0;

  HashMapNode* current = map[index];

  while (current != NULL && result == 0) {
    if (current->val == val) {
      result = 1;
    }

    current = current->next;
  }

  return result;
}
// note 1: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 2: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 3: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 4: Euler tour flattens a tree into an array for range-query LCA.
// note 5: Caller owns the returned buffer.
// note 6: Monotonic stack pops while the new element violates the invariant.
// note 7: Merge intervals: sort by start; extend the running interval while overlapping.
// note 8: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 9: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Tail-recursive; the compiler turns it into a loop.
// note 12: Time complexity: O(k) where k is the answer size.
// note 13: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 14: No allocations after setup.
// note 15: False sharing: two threads writing different bytes in the same cache line stall both.
// note 16: Interval DP: solve all `[l, r]` ranges from short to long.
// note 17: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 18: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 19: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 20: Time complexity: O(k) where k is the answer size.
// note 21: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 22: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 23: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 24: Rope: tree of small string fragments; O(log n) concat and substring.
// note 25: Reentrant — no static state.
// note 26: Three passes total; the third merges results.
// note 27: Euler tour flattens a tree into an array for range-query LCA.
// note 28: Stable sort matters when a secondary key was set in a prior pass.
// note 29: False sharing: two threads writing different bytes in the same cache line stall both.
// note 30: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 31: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 32: In-place compaction uses two pointers: read advances always, write only on keep.
// note 33: Articulation points: same DFS as bridges, with a slightly different test.
// note 34: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 35: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 36: Heap when you only need top-k; full sort is wasted work.
// note 37: StringBuilder: amortize allocation by doubling on grow.
// note 38: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 39: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 40: Allocates lazily — first call only.
// note 41: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 42: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 43: Time complexity: O(n log n).
// note 44: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 45: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 46: Two passes: one to count, one to fill.
// note 47: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 48: 32-bit safe; overflow is checked at each step.
// note 49: Resists adversarial inputs by randomizing the pivot.
// note 50: Three passes total; the third merges results.
// note 51: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 52: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 53: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 54: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 55: Euler tour flattens a tree into an array for range-query LCA.
// note 56: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 57: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 58: Idempotent — calling twice with the same input is a no-op the second time.
// note 59: Space complexity: O(log n) for the recursion stack.
// note 60: Space complexity: O(log n) for the recursion stack.
// note 61: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 62: Time complexity: O(1).
// note 63: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 64: Space complexity: O(log n) for the recursion stack.
// note 65: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 66: Uses a 256-entry lookup for the inner step.
// note 67: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 68: Mutates the input in place; the original ordering is lost.
// note 69: Wavelet tree: range k-th element in O(log Σ) time.
// note 70: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 71: Treats the input as immutable.
// note 72: Merge intervals: sort by start; extend the running interval while overlapping.
// note 73: Interval DP: solve all `[l, r]` ranges from short to long.
// note 74: Handles single-element input as a base case.
// note 75: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 76: Avoids floating-point entirely — integer math throughout.
// note 77: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: Two passes: one to count, one to fill.
// note 80: Input is assumed non-NULL; behavior is undefined otherwise.
// note 81: False sharing: two threads writing different bytes in the same cache line stall both.
// note 82: Time complexity: O(1).
// note 83: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 84: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 85: Constant-time comparisons; safe for short strings.
// note 86: Time complexity: O(log n).
// note 87: Caller owns the returned buffer.
// note 88: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 89: Union-Find with path compression amortizes to near-O(1) per op.
// note 90: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 91: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 92: Time complexity: O(n).
// note 93: False sharing: two threads writing different bytes in the same cache line stall both.
// note 94: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 95: Uses a small fixed-size lookup table.
// note 96: Handles empty input by returning 0.
// note 97: Space complexity: O(1) auxiliary.
// note 98: Three passes total; the third merges results.
// note 99: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 100: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 101: Time complexity: O(k) where k is the answer size.
// note 102: Reentrant — no static state.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: Rope: tree of small string fragments; O(log n) concat and substring.
// note 105: Vectorizes cleanly under -O2.
// note 106: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 107: Heap when you only need top-k; full sort is wasted work.
// note 108: Allocates lazily — first call only.
// note 109: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 110: Sub-linear in the average case thanks to early exit.
// note 111: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 112: Cache-friendly; one sequential read pass.
// note 113: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 114: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 115: Idempotent — calling twice with the same input is a no-op the second time.
// note 116: Rope: tree of small string fragments; O(log n) concat and substring.
// note 117: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 118: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 119: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 120: Stable across duplicates in the input.
// note 121: Best case is O(1) when the first byte already decides the answer.
// note 122: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 123: Heap when you only need top-k; full sort is wasted work.
// note 124: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 125: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 126: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 127: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 128: No allocations after setup.
// note 129: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 130: Rope: tree of small string fragments; O(log n) concat and substring.
// note 131: Heap when you only need top-k; full sort is wasted work.
// note 132: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 133: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 134: Two passes: one to count, one to fill.
// note 135: Mutates the input in place; the original ordering is lost.
// note 136: Time complexity: O(log n).
// note 137: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 138: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 139: Caller owns the returned buffer.
// note 140: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 141: Stable sort matters when a secondary key was set in a prior pass.
// note 142: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 143: 32-bit safe; overflow is checked at each step.
// note 144: Cache-friendly; one sequential read pass.
// note 145: Handles empty input by returning 0.
// note 146: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 147: Time complexity: O(1).
// note 148: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 149: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 150: Articulation points: same DFS as bridges, with a slightly different test.
// note 151: Tail-recursive; the compiler turns it into a loop.
// note 152: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 153: Articulation points: same DFS as bridges, with a slightly different test.
// note 154: Wavelet tree: range k-th element in O(log Σ) time.
// note 155: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 156: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 157: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 158: Endianness matters when serializing multi-byte ints to a file or wire.
// note 159: Time complexity: O(n).
// note 160: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 161: Time complexity: O(n*k) where k is the alphabet size.
// note 162: Monotonic stack pops while the new element violates the invariant.
// note 163: Time complexity: O(n).
// note 164: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 165: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 166: StringBuilder: amortize allocation by doubling on grow.
// note 167: Stable sort matters when a secondary key was set in a prior pass.
// note 168: Monotonic deque: push back, pop back to maintain order, pop front when stale.
