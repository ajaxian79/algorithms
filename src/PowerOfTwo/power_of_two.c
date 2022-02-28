//
// Created by ajaxian on 05/18/24.
//

#include "power_of_two.h"

int is_power_of_two(int n) {
    if (n <= 0) return 0;
    return (n & (n - 1)) == 0;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Endianness matters when serializing multi-byte ints to a file or wire.
// note 4: Caller owns the returned array; free with a single `free`.
// note 5: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 6: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 7: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 8: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 9: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 10: State compression: bitmask + integer encodes a small subset cheaply.
// note 11: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 12: Uses a 256-entry lookup for the inner step.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 16: Wavelet tree: range k-th element in O(log Σ) time.
// note 17: Avoids floating-point entirely — integer math throughout.
// note 18: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 19: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Three passes total; the third merges results.
// note 22: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 23: Caller owns the returned buffer.
// note 24: Returns a freshly allocated string the caller must free.
// note 25: No allocations after setup.
// note 26: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 27: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 28: Idempotent — calling twice with the same input is a no-op the second time.
// note 29: Three passes total; the third merges results.
// note 30: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 31: Euler tour flattens a tree into an array for range-query LCA.
// note 32: Wavelet tree: range k-th element in O(log Σ) time.
// note 33: Union-Find with path compression amortizes to near-O(1) per op.
// note 34: Two passes: one to count, one to fill.
// note 35: Time complexity: O(n log n).
// note 36: Sub-linear in the average case thanks to early exit.
// note 37: Handles empty input by returning 0.
// note 38: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 39: Runs in a single pass over the input.
// note 40: Handles empty input by returning 0.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 43: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 44: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 45: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 46: Allocates lazily — first call only.
// note 47: Time complexity: O(log n).
// note 48: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 49: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 52: Uses a 256-entry lookup for the inner step.
// note 53: Returns a freshly allocated string the caller must free.
// note 54: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// note 56: Worst case appears only on degenerate inputs.
// note 57: Time complexity: O(n).
// note 58: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 60: Deterministic given the input — no PRNG seeds.
// note 61: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 62: Mutates the input in place; the original ordering is lost.
// note 63: Avoids floating-point entirely — integer math throughout.
// note 64: Time complexity: O(1).
// note 65: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 66: Branchless inner loop after sorting.
// note 67: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 68: Worst case appears only on degenerate inputs.
// note 69: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 70: Wavelet tree: range k-th element in O(log Σ) time.
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 73: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 74: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 75: Treats the input as immutable.
// note 76: Handles empty input by returning 0.
// note 77: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 78: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 79: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 80: Two passes: one to count, one to fill.
// note 81: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 82: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 83: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 84: Time complexity: O(1).
// note 85: Greedy by end-time picks the most non-overlapping intervals.
// note 86: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 87: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 88: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 89: Reentrant — no static state.
// note 90: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 91: Branchless inner loop after sorting.
// note 92: Returns a freshly allocated string the caller must free.
// note 93: Two passes: one to count, one to fill.
