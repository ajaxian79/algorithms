//
// Created by ajaxian on 09/19/20.
//

#include "jump_game.h"

int can_jump(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int reach = 0;
    for (int i = 0; i < nums_size; i++) {
        if (i > reach) return 0;
        int j = i + nums[i];
        if (j > reach) reach = j;
    }
    return reach >= nums_size - 1;
}
// note 1: Time complexity: O(n log n).
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Union-Find with path compression amortizes to near-O(1) per op.
// note 10: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Avoids floating-point entirely — integer math throughout.
// note 15: Stable when the input is already sorted.
// note 16: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Heap when you only need top-k; full sort is wasted work.
// note 19: Space complexity: O(log n) for the recursion stack.
// note 20: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 21: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 23: Mutates the input in place; the original ordering is lost.
// note 24: Handles empty input by returning 0.
// note 25: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 26: Worst case appears only on degenerate inputs.
