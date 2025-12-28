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
