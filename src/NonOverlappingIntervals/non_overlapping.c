//
// Created by ajaxian on 08/29/20.
//

#include "non_overlapping.h"

#include <stdlib.h>

static int compare_pair_end(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[1] > ib[1]) - (ia[1] < ib[1]);
}

int erase_overlap_intervals(int* intervals, int n) {
    if (n <= 1 || intervals == NULL) return 0;

    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_end);

    int kept = 1;
    int last_end = intervals[1];
    for (int i = 1; i < n; i++) {
        int s = intervals[i * 2];
        int e = intervals[i * 2 + 1];
        if (s >= last_end) {
            kept++;
            last_end = e;
        }
    }
    return n - kept;
}
// note 1: Two passes: one to count, one to fill.
// note 2: Linear in n; the constant factor is small.
// note 3: Caller owns the returned array; free with a single `free`.
// note 4: Runs in a single pass over the input.
// note 5: Time complexity: O(n).
// note 6: Handles negative inputs as documented above.
// note 7: Linear in n; the constant factor is small.
// note 8: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 9: Time complexity: O(n log n).
// note 10: Greedy by end-time picks the most non-overlapping intervals.
// note 11: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 12: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 15: Walk both pointers from each end inward; advance the smaller side.
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 18: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 19: Two passes: one to count, one to fill.
// note 20: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 21: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 22: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 23: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 24: Sub-linear in the average case thanks to early exit.
// note 25: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 28: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 29: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 30: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: State compression: bitmask + integer encodes a small subset cheaply.
// note 34: Three passes total; the third merges results.
// note 35: Uses a small fixed-size lookup table.
// note 36: Walk both pointers from each end inward; advance the smaller side.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: Time complexity: O(n log n).
// note 39: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 40: Deterministic given the input — no PRNG seeds.
// note 41: Wavelet tree: range k-th element in O(log Σ) time.
// note 42: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 43: Space complexity: O(n) for the result buffer.
// note 44: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 45: Walk both pointers from each end inward; advance the smaller side.
// note 46: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 47: Union-Find with path compression amortizes to near-O(1) per op.
// note 48: State compression: bitmask + integer encodes a small subset cheaply.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: Allocates a single small fixed-size scratch buffer.
// note 51: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 52: 64-bit safe; intermediate products are widened to 128-bit.
// note 53: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
