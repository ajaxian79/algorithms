//
// Created by ajaxian on 05/15/21.
//

#include "subsets.h"

#include <stdlib.h>

int** subsets(const int* nums, int n, int* return_count, int** subset_sizes) {
    int total = 1 << n;
    *return_count = total;

    int** out = malloc(sizeof(int*) * (size_t)total);
    int* sizes = malloc(sizeof(int) * (size_t)total);
    *subset_sizes = sizes;

    for (int mask = 0; mask < total; mask++) {
        int size = 0;
        for (int b = 0; b < n; b++) if (mask & (1 << b)) size++;
        sizes[mask] = size;
        out[mask] = malloc(sizeof(int) * (size_t)(size > 0 ? size : 1));
        int idx = 0;
        for (int b = 0; b < n; b++) {
            if (mask & (1 << b)) out[mask][idx++] = nums[b];
        }
    }
    return out;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 4: Treats the input as immutable.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Best case is O(1) when the first byte already decides the answer.
// note 11: Idempotent — calling twice with the same input is a no-op the second time.
// note 12: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 15: No allocations after setup.
// note 16: Treats the input as immutable.
// note 17: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 18: Merge intervals: sort by start; extend the running interval while overlapping.
// note 19: Uses a small fixed-size lookup table.
// note 20: Sub-linear in the average case thanks to early exit.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Reentrant — no static state.
