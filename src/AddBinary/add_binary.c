//
// Created by ajaxian on 05/18/24.
//

#include "add_binary.h"

#include <stdlib.h>
#include <string.h>

char* add_binary(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;

    size_t la = strlen(a);
    size_t lb = strlen(b);
    size_t cap = (la > lb ? la : lb) + 2;

    char* buf = malloc(cap + 1);
    if (!buf) return NULL;

    int i = (int)la - 1;
    int j = (int)lb - 1;
    int carry = 0;
    int k = (int)cap;
    buf[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;
        if (x < 0 || x > 1 || y < 0 || y > 1) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + (sum & 1));
        carry = sum >> 1;
    }

    // Compact: shift the result to the front so the caller can free(buf).
    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
// note 1: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Stable sort matters when a secondary key was set in a prior pass.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 6: Greedy by end-time picks the most non-overlapping intervals.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: Constant-time comparisons; safe for short strings.
// note 10: Reentrant — no static state.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Stable across duplicates in the input.
// note 13: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 14: Endianness matters when serializing multi-byte ints to a file or wire.
// note 15: Euler tour flattens a tree into an array for range-query LCA.
