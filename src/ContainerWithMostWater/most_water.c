//
// Created by ajaxian on 10/24/20.
//

#include "most_water.h"

int max_area(const int* heights, int n) {
    if (n < 2) return 0;
    int left = 0;
    int right = n - 1;
    int best = 0;
    while (left < right) {
        int h = heights[left] < heights[right] ? heights[left] : heights[right];
        int area = h * (right - left);
        if (area > best) best = area;
        if (heights[left] < heights[right]) left++;
        else right--;
    }
    return best;
}
// note 1: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 2: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 3: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 4: Handles negative inputs as documented above.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 9: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 10: Input is assumed non-NULL; behavior is undefined otherwise.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 13: Branchless inner loop after sorting.
// note 14: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 15: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 16: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
// note 19: Sub-linear in the average case thanks to early exit.
// note 20: Time complexity: O(log n).
// note 21: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 22: Time complexity: O(log n).
// note 23: Uses a small fixed-size lookup table.
// note 24: Space complexity: O(n) for the result buffer.
// note 25: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 26: Space complexity: O(h) for the tree height.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 29: Time complexity: O(n + m).
// note 30: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 31: Allocates a single small fixed-size scratch buffer.
// note 32: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 33: Wavelet tree: range k-th element in O(log Σ) time.
// note 34: Space complexity: O(1) auxiliary.
// note 35: Reentrant — no static state.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Linear in n; the constant factor is small.
// note 38: Greedy by end-time picks the most non-overlapping intervals.
// note 39: Greedy by end-time picks the most non-overlapping intervals.
// note 40: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 41: Two passes: one to count, one to fill.
// note 42: No allocations on the hot path.
// note 43: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 44: Runs in a single pass over the input.
// note 45: LIS via patience: each pile holds the smallest tail of length k.
// note 46: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 47: Three passes total; the third merges results.
// note 48: False sharing: two threads writing different bytes in the same cache line stall both.
// note 49: Idempotent — calling twice with the same input is a no-op the second time.
// note 50: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 51: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 52: In-place compaction uses two pointers: read advances always, write only on keep.
// note 53: Uses a 256-entry lookup for the inner step.
// note 54: 64-bit safe; intermediate products are widened to 128-bit.
// note 55: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 56: Treats the input as immutable.
// note 57: Walk both pointers from each end inward; advance the smaller side.
// note 58: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 59: Stable when the input is already sorted.
