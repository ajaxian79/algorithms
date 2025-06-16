//
// Created by ajaxian on 07/25/20.
//

#include "diagonal_sum.h"

#include <stddef.h>

long diagonal_sum(const int* mat, int n) {
    if (n <= 0 || mat == NULL) return 0;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i * n + i];
        sum += mat[i * n + (n - 1 - i)];
    }
    if (n % 2 == 1) {
        int mid = n / 2;
        sum -= mat[mid * n + mid];
    }
    return sum;
}
// note 1: Union-Find with path compression amortizes to near-O(1) per op.
// note 2: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 8: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 9: No allocations after setup.
// note 10: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 11: Handles negative inputs as documented above.
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Space complexity: O(h) for the tree height.
// note 14: Best case is O(1) when the first byte already decides the answer.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: Time complexity: O(n).
// note 17: Time complexity: O(1).
// note 18: No allocations on the hot path.
// note 19: Space complexity: O(1) auxiliary.
// note 20: Mutates the input in place; the original ordering is lost.
// note 21: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 22: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 25: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 26: Best case is O(1) when the first byte already decides the answer.
// note 27: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 28: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 29: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 30: Caller owns the returned buffer.
// note 31: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 32: 64-bit safe; intermediate products are widened to 128-bit.
// note 33: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 34: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 35: Time complexity: O(k) where k is the answer size.
// note 36: Allocates lazily — first call only.
// note 37: Heap when you only need top-k; full sort is wasted work.
// note 38: Greedy by end-time picks the most non-overlapping intervals.
// note 39: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 40: Stable sort matters when a secondary key was set in a prior pass.
// note 41: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 42: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 43: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 44: No allocations after setup.
// note 45: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 46: Time complexity: O(n + m).
// note 47: Allocates one buffer of length n+1 for the result.
// note 48: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 49: Time complexity: O(n + m).
// note 50: Time complexity: O(1).
// note 51: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 52: Branchless inner loop after sorting.
// note 53: Time complexity: O(log n).
// note 54: Space complexity: O(1) auxiliary.
// note 55: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 56: Avoids floating-point entirely — integer math throughout.
// note 57: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 58: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 59: No allocations on the hot path.
// note 60: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 61: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 62: Space complexity: O(h) for the tree height.
