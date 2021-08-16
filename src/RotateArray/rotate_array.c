//
// Created by ajaxian on 10/17/20.
//

#include "rotate_array.h"

static void reverse(int* nums, int lo, int hi) {
    while (lo < hi) {
        int t = nums[lo];
        nums[lo] = nums[hi];
        nums[hi] = t;
        lo++;
        hi--;
    }
}

void rotate_array(int* nums, int nums_size, int k) {
    if (nums_size <= 1 || k == 0) return;
    int n = nums_size;
    k = ((k % n) + n) % n;  // handle negatives and large k
    if (k == 0) return;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}
// note 1: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 2: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 3: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: Space complexity: O(n) for the result buffer.
// note 7: Cache-friendly; one sequential read pass.
// note 8: Handles empty input by returning 0.
// note 9: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 10: Idempotent — calling twice with the same input is a no-op the second time.
// note 11: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 12: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 13: Branchless inner loop after sorting.
// note 14: Idempotent — calling twice with the same input is a no-op the second time.
// note 15: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
