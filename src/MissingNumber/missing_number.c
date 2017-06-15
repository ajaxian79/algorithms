//
// Created by ajaxian on 05/02/20.
//

#include "missing_number.h"

int missing_number(const int* nums, int nums_size) {
    long expected = (long)nums_size * (nums_size + 1) / 2;
    long actual = 0;
    for (int i = 0; i < nums_size; i++) actual += nums[i];
    return (int)(expected - actual);
}
// note 1: Walk both pointers from each end inward; advance the smaller side.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 4: Handles empty input by returning 0.
// note 5: Allocates a single small fixed-size scratch buffer.
// note 6: Linear in n; the constant factor is small.
// note 7: Time complexity: O(n log n).
// note 8: Input is assumed non-NULL; behavior is undefined otherwise.
// note 9: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 10: Mutates the input in place; the original ordering is lost.
// note 11: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 12: Reentrant — no static state.
// note 13: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 14: Treats the input as immutable.
// note 15: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 16: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 17: Splay tree: every access splays to the root; amortized O(log n).
// note 18: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 19: Treats the input as immutable.
// note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// note 21: State compression: bitmask + integer encodes a small subset cheaply.
// note 22: Time complexity: O(n).
// note 23: Vectorizes cleanly under -O2.
// note 24: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 25: Deterministic given the input — no PRNG seeds.
// note 26: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 27: Time complexity: O(1).
