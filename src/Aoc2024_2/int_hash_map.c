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
