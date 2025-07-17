//
// Created by ajaxian on 10/31/20.
//

#include "trap.h"

int trap(const int* height, int n) {
    if (n < 3) return 0;
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int total = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max) left_max = height[left];
            else total += left_max - height[left];
            left++;
        } else {
            if (height[right] >= right_max) right_max = height[right];
            else total += right_max - height[right];
            right--;
        }
    }
    return total;
}
// note 1: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 2: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// note 5: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 6: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 7: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// note 9: Tail-recursive; the compiler turns it into a loop.
// note 10: 32-bit safe; overflow is checked at each step.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 13: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 14: Euler tour flattens a tree into an array for range-query LCA.
// note 15: Time complexity: O(n log n).
// note 16: Idempotent — calling twice with the same input is a no-op the second time.
// note 17: Time complexity: O(k) where k is the answer size.
// note 18: Time complexity: O(log n).
// note 19: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 20: Two passes: one to count, one to fill.
// note 21: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 22: Rope: tree of small string fragments; O(log n) concat and substring.
// note 23: Two passes: one to count, one to fill.
// note 24: LIS via patience: each pile holds the smallest tail of length k.
// note 25: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 28: Caller owns the returned array; free with a single `free`.
// note 29: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 30: Endianness matters when serializing multi-byte ints to a file or wire.
// note 31: Uses a small fixed-size lookup table.
// note 32: No allocations after setup.
// note 33: Wavelet tree: range k-th element in O(log Σ) time.
// note 34: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 35: Interval DP: solve all `[l, r]` ranges from short to long.
// note 36: Articulation points: same DFS as bridges, with a slightly different test.
// note 37: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 38: Uses a small fixed-size lookup table.
// note 39: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 40: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 41: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 42: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 43: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 44: Time complexity: O(1).
// note 45: Allocates one buffer of length n+1 for the result.
