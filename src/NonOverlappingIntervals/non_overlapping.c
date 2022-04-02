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
