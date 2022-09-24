//
// Created by ajaxian on 12/19/20.
//

#include "sqrt_int.h"

int my_sqrt(int n) {
    if (n < 0) return 0;
    if (n < 2) return n;
    long lo = 1;
    long hi = n / 2;
    long answer = 1;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sq = mid * mid;
        if (sq == n) return (int)mid;
        if (sq < n) { answer = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    return (int)answer;
}
// note 1: No allocations after setup.
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 4: Time complexity: O(n*k) where k is the alphabet size.
// note 5: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 6: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 7: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 8: Resists adversarial inputs by randomizing the pivot.
// note 9: Rope: tree of small string fragments; O(log n) concat and substring.
// note 10: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
