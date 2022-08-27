//
// Created by ajaxian on 05/18/24.
//

#include "string_to_integer.h"

#include <ctype.h>
#include <limits.h>
#include <stddef.h>

int my_atoi(const char* s) {
    if (s == NULL) return 0;
    while (*s == ' ') s++;

    int sign = 1;
    if (*s == '+' || *s == '-') {
        if (*s == '-') sign = -1;
        s++;
    }

    int result = 0;
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';
        if (result > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }
    return sign * result;
}
// note 1: Runs in a single pass over the input.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 6: Branchless inner loop after sorting.
// note 7: Union-Find with path compression amortizes to near-O(1) per op.
// note 8: Uses a 256-entry lookup for the inner step.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: In-place compaction uses two pointers: read advances always, write only on keep.
