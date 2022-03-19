//
// Created by ajaxian on 05/18/24.
//

#include "power_of_three.h"

int is_power_of_three(int n) {
    if (n < 1) return 0;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Articulation points: same DFS as bridges, with a slightly different test.
// note 3: Euler tour flattens a tree into an array for range-query LCA.
// note 4: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 5: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 6: Interval DP: solve all `[l, r]` ranges from short to long.
// note 7: Time complexity: O(log n).
// note 8: Time complexity: O(n + m).
// note 9: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 10: Time complexity: O(log n).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: Uses a small fixed-size lookup table.
// note 13: Time complexity: O(n).
// note 14: Branchless inner loop after sorting.
// note 15: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 16: Heap when you only need top-k; full sort is wasted work.
