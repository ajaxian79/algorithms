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
// note 16: Caller owns the returned array; free with a single `free`.
// note 17: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 18: Resists adversarial inputs by randomizing the pivot.
// note 19: Sub-linear in the average case thanks to early exit.
// note 20: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 21: State compression: bitmask + integer encodes a small subset cheaply.
// note 22: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 23: Time complexity: O(n + m).
// note 24: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 25: Time complexity: O(log n).
// note 26: Caller owns the returned array; free with a single `free`.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 29: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 30: Cache-friendly; one sequential read pass.
// note 31: Best case is O(1) when the first byte already decides the answer.
// note 32: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 33: Monotonic stack pops while the new element violates the invariant.
// note 34: Resists adversarial inputs by randomizing the pivot.
// note 35: Input is assumed non-NULL; behavior is undefined otherwise.
// note 36: Avoids floating-point entirely — integer math throughout.
// note 37: Best case is O(1) when the first byte already decides the answer.
// note 38: Space complexity: O(h) for the tree height.
// note 39: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 42: Stable sort matters when a secondary key was set in a prior pass.
// note 43: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 44: Time complexity: O(n).
// note 45: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 46: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 47: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 48: StringBuilder: amortize allocation by doubling on grow.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
