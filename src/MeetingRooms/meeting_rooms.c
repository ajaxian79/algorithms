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
