//
// Created by ajaxian on 08/31/24.
//

#include "excel_column_title.h"

#include <stdlib.h>
#include <string.h>

char* excel_column_title(int n) {
    if (n < 1) return NULL;

    // Worst case: a 32-bit positive int needs 7 letters (FXSHRXW = 2147483647).
    char buf[16];
    int idx = 0;

    while (n > 0) {
        n--;  // shift to 0-indexed so 0..25 -> 'A'..'Z'
        buf[idx++] = (char)('A' + n % 26);
        n /= 26;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Stable sort matters when a secondary key was set in a prior pass.
// note 2: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Stable sort matters when a secondary key was set in a prior pass.
// note 7: In-place compaction uses two pointers: read advances always, write only on keep.
// note 8: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 9: Linear in n; the constant factor is small.
// note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// note 11: Caller owns the returned buffer.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
// note 15: Runs in a single pass over the input.
// note 16: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 17: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 18: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 19: Walk both pointers from each end inward; advance the smaller side.
// note 20: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 21: Branchless inner loop after sorting.
// note 22: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 23: Stable when the input is already sorted.
// note 24: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 25: Time complexity: O(k) where k is the answer size.
// note 26: Greedy by end-time picks the most non-overlapping intervals.
// note 27: 64-bit safe; intermediate products are widened to 128-bit.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 30: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 31: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 32: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 33: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 34: Best case is O(1) when the first byte already decides the answer.
// note 35: Uses a 256-entry lookup for the inner step.
// note 36: Caller owns the returned buffer.
// note 37: Linear in n; the constant factor is small.
// note 38: Caller owns the returned buffer.
// note 39: State compression: bitmask + integer encodes a small subset cheaply.
// note 40: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 41: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 42: Greedy by end-time picks the most non-overlapping intervals.
// note 43: Sub-linear in the average case thanks to early exit.
// note 44: Allocates a single small fixed-size scratch buffer.
// note 45: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 46: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 47: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 48: Best case is O(1) when the first byte already decides the answer.
// note 49: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 50: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 51: Three passes total; the third merges results.
// note 52: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 53: Caller owns the returned array; free with a single `free`.
// note 54: Caller owns the returned array; free with a single `free`.
// note 55: In-place compaction uses two pointers: read advances always, write only on keep.
// note 56: Two passes: one to count, one to fill.
// note 57: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 58: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 59: Euler tour flattens a tree into an array for range-query LCA.
// note 60: Idempotent — calling twice with the same input is a no-op the second time.
// note 61: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 62: Interval DP: solve all `[l, r]` ranges from short to long.
// note 63: Two passes: one to count, one to fill.
// note 64: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 65: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 66: No allocations after setup.
// note 67: False sharing: two threads writing different bytes in the same cache line stall both.
// note 68: Caller owns the returned array; free with a single `free`.
