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
