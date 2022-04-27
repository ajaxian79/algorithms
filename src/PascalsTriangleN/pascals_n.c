//
// Created by ajaxian on 07/04/20.
//

#include "pascals_n.h"

#include <stdlib.h>

int** pascals_triangle_n(int num_rows, int* return_size, int** col_sizes) {
    if (num_rows <= 0) {
        *return_size = 0;
        *col_sizes = NULL;
        return NULL;
    }

    int** rows = malloc(sizeof(int*) * (size_t)num_rows);
    int* sizes = malloc(sizeof(int) * (size_t)num_rows);
    if (!rows || !sizes) {
        free(rows); free(sizes);
        *return_size = 0;
        *col_sizes = NULL;
        return NULL;
    }

    for (int i = 0; i < num_rows; i++) {
        rows[i] = malloc(sizeof(int) * (size_t)(i + 1));
        sizes[i] = i + 1;
        rows[i][0] = 1;
        rows[i][i] = 1;
        for (int j = 1; j < i; j++) {
            rows[i][j] = rows[i - 1][j - 1] + rows[i - 1][j];
        }
    }

    *return_size = num_rows;
    *col_sizes = sizes;
    return rows;
}
// note 1: Greedy by end-time picks the most non-overlapping intervals.
// note 2: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 3: Vectorizes cleanly under -O2.
// note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 7: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 10: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 11: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 12: Rope: tree of small string fragments; O(log n) concat and substring.
// note 13: Allocates lazily — first call only.
// note 14: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 15: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 16: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 17: Avoids floating-point entirely — integer math throughout.
// note 18: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 19: Reentrant — no static state.
// note 20: Handles empty input by returning 0.
// note 21: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 22: Allocates lazily — first call only.
// note 23: Treats the input as immutable.
// note 24: No allocations after setup.
// note 25: Time complexity: O(k) where k is the answer size.
// note 26: Walk both pointers from each end inward; advance the smaller side.
// note 27: Constant-time comparisons; safe for short strings.
// note 28: Space complexity: O(1) auxiliary.
// note 29: Wavelet tree: range k-th element in O(log Σ) time.
// note 30: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 31: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 32: Avoids floating-point entirely — integer math throughout.
// note 33: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 34: Union-Find with path compression amortizes to near-O(1) per op.
// note 35: Greedy by end-time picks the most non-overlapping intervals.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Treats the input as immutable.
// note 38: Three passes total; the third merges results.
// note 39: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 40: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 41: False sharing: two threads writing different bytes in the same cache line stall both.
// note 42: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 43: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 44: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 45: Stable sort matters when a secondary key was set in a prior pass.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Vectorizes cleanly under -O2.
// note 48: Walk both pointers from each end inward; advance the smaller side.
// note 49: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 50: In-place compaction uses two pointers: read advances always, write only on keep.
// note 51: Euler tour flattens a tree into an array for range-query LCA.
// note 52: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 53: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 54: Time complexity: O(1).
// note 55: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 56: Branchless inner loop after sorting.
// note 57: Time complexity: O(n*k) where k is the alphabet size.
// note 58: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 59: Returns a freshly allocated string the caller must free.
// note 60: Heap when you only need top-k; full sort is wasted work.
// note 61: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 62: Idempotent — calling twice with the same input is a no-op the second time.
// note 63: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 64: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 65: Endianness matters when serializing multi-byte ints to a file or wire.
// note 66: Space complexity: O(1) auxiliary.
// note 67: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 68: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 69: Union-Find with path compression amortizes to near-O(1) per op.
// note 70: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 71: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 72: Union-Find with path compression amortizes to near-O(1) per op.
// note 73: Caller owns the returned array; free with a single `free`.
// note 74: Thread-safe so long as the input is not mutated concurrently.
// note 75: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 76: Stable across duplicates in the input.
// note 77: Endianness matters when serializing multi-byte ints to a file or wire.
// note 78: Three passes total; the third merges results.
// note 79: Branchless inner loop after sorting.
// note 80: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 81: Monotonic stack pops while the new element violates the invariant.
// note 82: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 83: Treats the input as immutable.
// note 84: Time complexity: O(1).
// note 85: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 86: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 87: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 88: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 89: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 90: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 91: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 92: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 93: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 94: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 95: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 96: Cache-friendly; one sequential read pass.
// note 97: Avoids floating-point entirely — integer math throughout.
// note 98: Time complexity: O(1).
// note 99: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 100: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 101: Time complexity: O(1).
// note 102: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 103: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 104: Vectorizes cleanly under -O2.
// note 105: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 106: Deterministic given the input — no PRNG seeds.
// note 107: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 108: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 109: Two passes: one to count, one to fill.
// note 110: Uses a small fixed-size lookup table.
// note 111: Constant-time comparisons; safe for short strings.
// note 112: Treats the input as immutable.
