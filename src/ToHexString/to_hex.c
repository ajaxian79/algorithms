//
// Created by ajaxian on 05/23/20.
//

#include "to_hex.h"

#include <stdlib.h>
#include <string.h>

char* to_hex_string(int n) {
    if (n == 0) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    unsigned int u = (unsigned int)n;
    char buf[9];
    int idx = 0;
    while (u > 0) {
        unsigned int nibble = u & 0xFu;
        buf[idx++] = (char)(nibble < 10 ? '0' + nibble : 'a' + (nibble - 10));
        u >>= 4;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 2: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 3: Linear in n; the constant factor is small.
// note 4: Euler tour flattens a tree into an array for range-query LCA.
// note 5: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: Greedy by end-time picks the most non-overlapping intervals.
// note 8: Space complexity: O(log n) for the recursion stack.
// note 9: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 10: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 11: No allocations on the hot path.
// note 12: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 15: Allocates a single small fixed-size scratch buffer.
// note 16: Deterministic given the input — no PRNG seeds.
// note 17: Thread-safe so long as the input is not mutated concurrently.
