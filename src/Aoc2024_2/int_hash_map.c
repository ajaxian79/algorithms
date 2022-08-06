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
