//
// Created by ajaxian on 05/18/24.
//

#include "compare_version.h"

#include <stddef.h>

static long parse_segment(const char** p) {
    long v = 0;
    while (**p >= '0' && **p <= '9') {
        v = v * 10 + (**p - '0');
        (*p)++;
    }
    if (**p == '.') (*p)++;
    return v;
}

int compare_version(const char* a, const char* b) {
    if (a == NULL) a = "";
    if (b == NULL) b = "";

    while (*a != '\0' || *b != '\0') {
        long va = (*a != '\0') ? parse_segment(&a) : 0;
        long vb = (*b != '\0') ? parse_segment(&b) : 0;
        if (va < vb) return -1;
        if (va > vb) return 1;
    }
    return 0;
}
// note 1: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 2: Returns a freshly allocated string the caller must free.
// note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// note 4: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 5: No allocations after setup.
// note 6: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 7: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 8: Stable across duplicates in the input.
// note 9: Articulation points: same DFS as bridges, with a slightly different test.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 12: Time complexity: O(n + m).
// note 13: Allocates a single small fixed-size scratch buffer.
// note 14: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 15: Time complexity: O(n*k) where k is the alphabet size.
// note 16: Sub-linear in the average case thanks to early exit.
