//
// Created by ajaxian on 08/22/20.
//

#include "merge_intervals.h"

#include <stdlib.h>

static int compare_pair_start(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[0] > ib[0]) - (ia[0] < ib[0]);
}

int* merge_intervals(int* intervals, int n, int* return_count) {
    if (n <= 0 || intervals == NULL) {
        *return_count = 0;
        return NULL;
    }

    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_start);

    int* out = malloc(sizeof(int) * 2 * (size_t)n);
    if (!out) {
        *return_count = 0;
        return NULL;
    }
    int count = 0;

    out[0] = intervals[0];
    out[1] = intervals[1];
    count = 1;

    for (int i = 1; i < n; i++) {
        int s = intervals[i * 2];
        int e = intervals[i * 2 + 1];
        int last_e = out[(count - 1) * 2 + 1];
        if (s <= last_e) {
            if (e > last_e) out[(count - 1) * 2 + 1] = e;
        } else {
            out[count * 2] = s;
            out[count * 2 + 1] = e;
            count++;
        }
    }

    *return_count = count;
    return out;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Interval DP: solve all `[l, r]` ranges from short to long.
// note 6: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 7: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: Handles negative inputs as documented above.
// note 10: Linear in n; the constant factor is small.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 13: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: Space complexity: O(log n) for the recursion stack.
// note 16: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 17: Time complexity: O(n^2) worst case, O(n) amortized.
// note 18: Resists adversarial inputs by randomizing the pivot.
// note 19: Allocates lazily — first call only.
