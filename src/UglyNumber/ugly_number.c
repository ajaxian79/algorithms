//
// Created by ajaxian on 08/31/24.
//

#include "ugly_number.h"

int is_ugly(int n) {
    if (n <= 0) return 0;
    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        while (n % factors[i] == 0) n /= factors[i];
    }
    return n == 1;
}
// note 1: Worst case appears only on degenerate inputs.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Runs in a single pass over the input.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Allocates lazily — first call only.
// note 10: Wavelet tree: range k-th element in O(log Σ) time.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 13: StringBuilder: amortize allocation by doubling on grow.
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Input is assumed non-NULL; behavior is undefined otherwise.
// note 16: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Iterative DFS with an explicit stack avoids recursion-limit issues.
