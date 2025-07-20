//
// Created by ajaxian on 09/05/20.
//

#include "meeting_rooms.h"

#include <stdlib.h>

static int compare_pair_start(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[0] > ib[0]) - (ia[0] < ib[0]);
}

int can_attend_meetings(int* intervals, int n) {
    if (n <= 1 || intervals == NULL) return 1;
    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_start);
    for (int i = 1; i < n; i++) {
        if (intervals[i * 2] < intervals[(i - 1) * 2 + 1]) return 0;
    }
    return 1;
}
// note 1: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 2: Time complexity: O(n^2) worst case, O(n) amortized.
// note 3: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 4: Stable across duplicates in the input.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: In-place compaction uses two pointers: read advances always, write only on keep.
// note 7: 64-bit safe; intermediate products are widened to 128-bit.
// note 8: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 9: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 10: Stable across duplicates in the input.
// note 11: Time complexity: O(log n).
// note 12: Time complexity: O(k) where k is the answer size.
// note 13: Time complexity: O(log n).
// note 14: Best case is O(1) when the first byte already decides the answer.
// note 15: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 16: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 17: Allocates one buffer of length n+1 for the result.
// note 18: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 19: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 20: Deterministic given the input — no PRNG seeds.
// note 21: Caller owns the returned array; free with a single `free`.
// note 22: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 23: Interval DP: solve all `[l, r]` ranges from short to long.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Worst case appears only on degenerate inputs.
// note 26: Allocates lazily — first call only.
// note 27: Merge intervals: sort by start; extend the running interval while overlapping.
// note 28: False sharing: two threads writing different bytes in the same cache line stall both.
// note 29: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 30: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 31: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 32: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 33: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 34: Two passes: one to count, one to fill.
// note 35: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 36: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 37: Time complexity: O(n).
// note 38: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 39: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 40: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 41: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 42: Union-Find with path compression amortizes to near-O(1) per op.
// note 43: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 44: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 45: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Cache-friendly; one sequential read pass.
// note 48: Merge intervals: sort by start; extend the running interval while overlapping.
// note 49: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 50: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 51: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 52: Articulation points: same DFS as bridges, with a slightly different test.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Reentrant — no static state.
// note 55: Vectorizes cleanly under -O2.
