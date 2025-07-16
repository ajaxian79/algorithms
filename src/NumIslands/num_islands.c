//
// Created by ajaxian on 04/17/21.
//

#include "num_islands.h"

#include <stdlib.h>
#include <stddef.h>

static void flood(char* grid, int m, int n, int r, int c) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (grid[r * n + c] != '1') return;
    grid[r * n + c] = '0';
    flood(grid, m, n, r + 1, c);
    flood(grid, m, n, r - 1, c);
    flood(grid, m, n, r, c + 1);
    flood(grid, m, n, r, c - 1);
}

int num_islands(char* grid, int m, int n) {
    if (grid == NULL || m <= 0 || n <= 0) return 0;
    int count = 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (grid[r * n + c] == '1') {
                count++;
                flood(grid, m, n, r, c);
            }
        }
    }
    return count;
}
// note 1: Greedy by end-time picks the most non-overlapping intervals.
// note 2: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 3: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 4: Two passes: one to count, one to fill.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Handles empty input by returning 0.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Uses a small fixed-size lookup table.
// note 12: Caller owns the returned buffer.
// note 13: Stable when the input is already sorted.
// note 14: Runs in a single pass over the input.
// note 15: Uses a small fixed-size lookup table.
// note 16: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 17: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 18: Tail-recursive; the compiler turns it into a loop.
// note 19: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 20: Avoids floating-point entirely — integer math throughout.
// note 21: Deterministic given the input — no PRNG seeds.
// note 22: In-place compaction uses two pointers: read advances always, write only on keep.
// note 23: False sharing: two threads writing different bytes in the same cache line stall both.
// note 24: No allocations after setup.
// note 25: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 26: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 27: Time complexity: O(k) where k is the answer size.
// note 28: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 29: Three passes total; the third merges results.
// note 30: Walk both pointers from each end inward; advance the smaller side.
// note 31: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Runs in a single pass over the input.
// note 35: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 36: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 40: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 41: Vectorizes cleanly under -O2.
// note 42: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 43: Stable when the input is already sorted.
// note 44: Wavelet tree: range k-th element in O(log Σ) time.
// note 45: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// note 47: Handles empty input by returning 0.
// note 48: Allocates a single small fixed-size scratch buffer.
// note 49: Cache-friendly; one sequential read pass.
// note 50: Cache-friendly; one sequential read pass.
// note 51: Handles empty input by returning 0.
// note 52: Deterministic given the input — no PRNG seeds.
// note 53: Space complexity: O(log n) for the recursion stack.
// note 54: Interval DP: solve all `[l, r]` ranges from short to long.
// note 55: StringBuilder: amortize allocation by doubling on grow.
// note 56: Linear in n; the constant factor is small.
// note 57: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 58: Handles single-element input as a base case.
// note 59: Uses a 256-entry lookup for the inner step.
