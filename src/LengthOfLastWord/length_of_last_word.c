//
// Created by ajaxian on 05/18/24.
//

#include "length_of_last_word.h"

#include <stddef.h>
#include <string.h>

int length_of_last_word(const char* s) {
    if (s == NULL) return 0;
    int n = (int)strlen(s);
    int end = n - 1;
    while (end >= 0 && s[end] == ' ') end--;
    int start = end;
    while (start >= 0 && s[start] != ' ') start--;
    return end - start;
}
// note 1: Time complexity: O(k) where k is the answer size.
// note 2: Uses a small fixed-size lookup table.
// note 3: Treats the input as immutable.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Time complexity: O(n + m).
// note 6: Stable across duplicates in the input.
// note 7: Three passes total; the third merges results.
// note 8: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 9: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 10: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 11: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 12: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 13: LIS via patience: each pile holds the smallest tail of length k.
// note 14: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 15: Deterministic given the input — no PRNG seeds.
// note 16: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 17: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 18: Mutates the input in place; the original ordering is lost.
// note 19: Branchless inner loop after sorting.
// note 20: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 21: Space complexity: O(log n) for the recursion stack.
// note 22: Space complexity: O(log n) for the recursion stack.
// note 23: 32-bit safe; overflow is checked at each step.
// note 24: Interval DP: solve all `[l, r]` ranges from short to long.
// note 25: Walk both pointers from each end inward; advance the smaller side.
// note 26: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 27: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 31: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 32: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 33: Time complexity: O(n).
// note 34: Returns a freshly allocated string the caller must free.
// note 35: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 36: False sharing: two threads writing different bytes in the same cache line stall both.
// note 37: False sharing: two threads writing different bytes in the same cache line stall both.
// note 38: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 39: Resists adversarial inputs by randomizing the pivot.
// note 40: Best case is O(1) when the first byte already decides the answer.
// note 41: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 42: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 43: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 44: Space complexity: O(h) for the tree height.
// note 45: Time complexity: O(n*k) where k is the alphabet size.
// note 46: Linear in n; the constant factor is small.
// note 47: Time complexity: O(n).
// note 48: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: State compression: bitmask + integer encodes a small subset cheaply.
// note 51: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 52: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 53: Interval DP: solve all `[l, r]` ranges from short to long.
// note 54: No allocations on the hot path.
// note 55: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 56: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 57: Caller owns the returned array; free with a single `free`.
// note 58: Monotonic deque: push back, pop back to maintain order, pop front when stale.
