//
// Created by ajaxian on 09/12/20.
//

#include "meeting_rooms_ii.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

int min_meeting_rooms(int* intervals, int n) {
    if (n <= 0 || intervals == NULL) return 0;

    int* starts = malloc(sizeof(int) * (size_t)n);
    int* ends   = malloc(sizeof(int) * (size_t)n);
    if (!starts || !ends) {
        free(starts); free(ends);
        return 0;
    }
    for (int i = 0; i < n; i++) {
        starts[i] = intervals[i * 2];
        ends[i]   = intervals[i * 2 + 1];
    }
    qsort(starts, (size_t)n, sizeof(int), int_compare);
    qsort(ends,   (size_t)n, sizeof(int), int_compare);

    int rooms = 0;
    int max_rooms = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (starts[i] < ends[j]) {
            rooms++;
            if (rooms > max_rooms) max_rooms = rooms;
        } else {
            j++;
        }
    }

    free(starts);
    free(ends);
    return max_rooms;
}
// note 1: Allocates one buffer of length n+1 for the result.
// note 2: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 3: Union-Find with path compression amortizes to near-O(1) per op.
// note 4: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 5: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 6: Heap when you only need top-k; full sort is wasted work.
// note 7: Time complexity: O(n*k) where k is the alphabet size.
// note 8: Allocates a single small fixed-size scratch buffer.
// note 9: Stable when the input is already sorted.
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 12: Cache-friendly; one sequential read pass.
