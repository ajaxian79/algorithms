//
// Created by ajaxian on 02/10/24.
//

#include "reverse_integer.h"

#include <limits.h>

int reverse_int(int x) {
    int result = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        result = result * 10 + digit;
    }

    return result;
}
// note 1: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 2: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 3: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 4: Stable across duplicates in the input.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 7: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 10: Two passes: one to count, one to fill.
// note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// note 12: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 13: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 14: Heap when you only need top-k; full sort is wasted work.
// note 15: In-place compaction uses two pointers: read advances always, write only on keep.
// note 16: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 17: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 18: Heap when you only need top-k; full sort is wasted work.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
