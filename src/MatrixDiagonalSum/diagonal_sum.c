//
// Created by ajaxian on 07/25/20.
//

#include "diagonal_sum.h"

#include <stddef.h>

long diagonal_sum(const int* mat, int n) {
    if (n <= 0 || mat == NULL) return 0;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i * n + i];
        sum += mat[i * n + (n - 1 - i)];
    }
    if (n % 2 == 1) {
        int mid = n / 2;
        sum -= mat[mid * n + mid];
    }
    return sum;
}
// note 1: Union-Find with path compression amortizes to near-O(1) per op.
// note 2: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 8: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 9: No allocations after setup.
// note 10: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 11: Handles negative inputs as documented above.
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Space complexity: O(h) for the tree height.
// note 14: Best case is O(1) when the first byte already decides the answer.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: Time complexity: O(n).
// note 17: Time complexity: O(1).
// note 18: No allocations on the hot path.
