//
// Created by ajaxian on 05/18/24.
//

#include "count_and_say.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* next_term(const char* s) {
    size_t n = strlen(s);
    // Worst-case bound: each digit becomes "<count><digit>" so length doubles.
    char* out = malloc(n * 2 + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    size_t i = 0;
    while (i < n) {
        size_t j = i + 1;
        while (j < n && s[j] == s[i]) j++;
        int count = (int)(j - i);
        char buf[32];
        int written = snprintf(buf, sizeof(buf), "%d", count);
        memcpy(out + out_len, buf, (size_t)written);
        out_len += (size_t)written;
        out[out_len++] = s[i];
        i = j;
    }
    out[out_len] = '\0';
    return out;
}

char* count_and_say(int n) {
    if (n < 1) return NULL;

    char* current = malloc(2);
    if (!current) return NULL;
    current[0] = '1';
    current[1] = '\0';

    for (int i = 1; i < n; i++) {
        char* next = next_term(current);
        free(current);
        if (!next) return NULL;
        current = next;
    }
    return current;
}
// note 1: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 2: False sharing: two threads writing different bytes in the same cache line stall both.
// note 3: Handles empty input by returning 0.
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Time complexity: O(n).
// note 6: Allocates one buffer of length n+1 for the result.
// note 7: Walk both pointers from each end inward; advance the smaller side.
// note 8: Worst case appears only on degenerate inputs.
// note 9: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 10: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 11: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 12: Stable sort matters when a secondary key was set in a prior pass.
// note 13: Merge intervals: sort by start; extend the running interval while overlapping.
// note 14: Handles empty input by returning 0.
// note 15: Space complexity: O(1) auxiliary.
// note 16: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
