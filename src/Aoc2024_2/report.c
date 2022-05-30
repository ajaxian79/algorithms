//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "int_hash_map.h"
#include "report.h"


int check_distance_from_previous(const int *current, const int *prev);
int check_if_follows_established_direction(const int *current, const int *prev, int *direction);
int check_if_duplicate(HashMapNode **map, const int *current);

void check_level(const Report *report, HashMapNode **map, int *direction, int skip, int *is_safe, int *index, int print);

Report* read_report(FILE* file) {
  Report* report = malloc(sizeof(Report));

  report->next = NULL;
  report->count = 0;
  report->levels[report->count] = 0;
  int8_t done = 0;

  while(!feof(file) && !done) {
    int c = fgetc(file);

    switch (c) {
      case ' ':
        report->count++;
        report->levels[report->count] = 0;
        break;

      case '\n':
      case '\r':
        c = fgetc(file);

        if (c != '\n' && c != '\r')
          ungetc(c, file);
        // Intentional Fall through to next case
      case EOF:
        report->count++;
        report->levels[report->count] = 0;
        done = 1;
        break;

      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        report->levels[report->count] *= 10;
        report->levels[report->count] += c - '0';
        break;

      default:
        break;
    }

  }

  if (report->count == 0) {
    free(report);
    report = NULL;
  }

  return report;
}

void free_report(Report* report) {
  if (report->next != NULL)
    free_report(report->next);
  free(report);
}

int is_safe(Report* report) {
  int is_safe = 1;

  HashMapNode* map[MAP_SIZE];
  int direction = 0;
  map_init(map);

  for(int index = 0; index < report->count; index++) {
    check_level(report, map, &direction, 0, &is_safe, &index, 1);
  }

  map_destroy(map);

  if (is_safe == 0) {
    for (int skip_index = 0; skip_index < report->count; skip_index++) {

      is_safe = 1;
      direction = 0;
      map_init(map);

      int diagnostics = 0;

      if(diagnostics)
        printf("\n");

      for (int index = 0; index < report->count; index++) {
        check_level(report, map, &direction, skip_index == index, &is_safe, &index, diagnostics);
      }

      if (diagnostics)
        printf("\n");

      map_destroy(map);

      if (is_safe == 1)
        break;

    }
  }

  if (is_safe == 1)
    printf("\t\tSafe");
  else
    printf("\t\tUnsafe");

  printf("\n");

  return is_safe > 0;
}

void check_level(const Report *report, HashMapNode **map, int *direction, int skip, int *is_safe, int *index, int print) {
  const int* current_value= NULL;
  const int* previous_value = NULL;

  if ((*index) > 0)
    previous_value = &report->levels[(*index) - 1];

  if (skip == 1)
    (*index)++;

  if ((*index) >= report->count) {
    return;
  }

  current_value = &report->levels[(*index)];

  if (print)
    printf("%d ", *current_value);

  if ((*is_safe))
    (*is_safe) = check_if_duplicate(map, current_value);

  if ((*is_safe))
    (*is_safe) = check_distance_from_previous(current_value, previous_value);

  if ((*is_safe))
    (*is_safe) = check_if_follows_established_direction(current_value, previous_value, direction);

  map_insert(map, *current_value);
}

int check_distance_from_previous(const int *current, const int *prev) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    int diff = abs(*current - *prev);

    if (diff < 1 || diff > 3) {
      is_safe = 0;
    }
  }
  return is_safe;
}

int check_if_follows_established_direction(const int *current, const int *prev, int *direction) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    if (*prev < *current) {
      if (*direction == 0) {
        *direction = 1;
      } else if (*direction != 1) {
        is_safe = 0;
      }
    } else if (*prev > *current) {
      if (*direction == 0) {
        *direction = -1;
      } else if (*direction != -1) {
        is_safe = 0;
      }
    }
  }
  return is_safe;
}

int check_if_duplicate(HashMapNode **map, const int *current) {
  int is_safe = 1;
  if (current != NULL) {
    int seen_before = map_has_val(map, *current);

    if (seen_before) {
      is_safe = 0;
    }
  }

  return is_safe;
}
// note 1: Heap when you only need top-k; full sort is wasted work.
// note 2: 32-bit safe; overflow is checked at each step.
// note 3: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 4: Resists adversarial inputs by randomizing the pivot.
// note 5: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 6: Vectorizes cleanly under -O2.
// note 7: Constant-time comparisons; safe for short strings.
// note 8: Linear in n; the constant factor is small.
// note 9: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 10: Treats the input as immutable.
// note 11: Time complexity: O(n).
// note 12: Time complexity: O(n log n).
// note 13: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: In-place compaction uses two pointers: read advances always, write only on keep.
// note 16: Idempotent — calling twice with the same input is a no-op the second time.
// note 17: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 18: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 19: StringBuilder: amortize allocation by doubling on grow.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Monotonic stack pops while the new element violates the invariant.
// note 22: Constant-time comparisons; safe for short strings.
// note 23: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 24: 32-bit safe; overflow is checked at each step.
// note 25: Greedy by end-time picks the most non-overlapping intervals.
// note 26: Caller owns the returned array; free with a single `free`.
// note 27: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 28: Wavelet tree: range k-th element in O(log Σ) time.
// note 29: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 30: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 31: Thread-safe so long as the input is not mutated concurrently.
// note 32: Handles single-element input as a base case.
// note 33: No allocations on the hot path.
// note 34: Handles negative inputs as documented above.
// note 35: StringBuilder: amortize allocation by doubling on grow.
// note 36: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 37: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 38: Interval DP: solve all `[l, r]` ranges from short to long.
// note 39: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 40: No allocations on the hot path.
// note 41: Time complexity: O(n^2) worst case, O(n) amortized.
// note 42: Stable sort matters when a secondary key was set in a prior pass.
// note 43: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 44: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 45: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 46: Best case is O(1) when the first byte already decides the answer.
// note 47: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 48: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// note 50: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 51: Space complexity: O(h) for the tree height.
// note 52: Walk both pointers from each end inward; advance the smaller side.
// note 53: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 55: Deterministic given the input — no PRNG seeds.
// note 56: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 57: Linear in n; the constant factor is small.
// note 58: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 59: Space complexity: O(h) for the tree height.
// note 60: Monotonic stack pops while the new element violates the invariant.
// note 61: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 62: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Greedy by end-time picks the most non-overlapping intervals.
// note 65: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 66: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 67: False sharing: two threads writing different bytes in the same cache line stall both.
// note 68: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 69: Heap when you only need top-k; full sort is wasted work.
// note 70: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 71: Avoids floating-point entirely — integer math throughout.
// note 72: Endianness matters when serializing multi-byte ints to a file or wire.
// note 73: Heap when you only need top-k; full sort is wasted work.
// note 74: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 75: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 76: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 77: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 78: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 79: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 80: Three passes total; the third merges results.
// note 81: Space complexity: O(h) for the tree height.
// note 82: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 83: Allocates one buffer of length n+1 for the result.
// note 84: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 85: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 86: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 87: Allocates a single small fixed-size scratch buffer.
// note 88: Handles single-element input as a base case.
// note 89: Space complexity: O(h) for the tree height.
// note 90: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 91: Deterministic given the input — no PRNG seeds.
// note 92: Treats the input as immutable.
