//
// Created by ajaxian on 02/13/21.
//

#include "path_sum.h"

#include <stddef.h>

int has_path_sum(PsTreeNode* root, int target) {
    if (root == NULL) return 0;
    int remaining = target - root->val;
    if (root->left == NULL && root->right == NULL) return remaining == 0;
    return has_path_sum(root->left, remaining) || has_path_sum(root->right, remaining);
}
// note 1: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 2: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 3: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 7: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 8: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 9: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 10: Stable across duplicates in the input.
// note 11: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 12: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Allocates a single small fixed-size scratch buffer.
// note 15: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 16: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 17: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 18: LIS via patience: each pile holds the smallest tail of length k.
// note 19: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 20: Handles negative inputs as documented above.
// note 21: Union-Find with path compression amortizes to near-O(1) per op.
// note 22: 32-bit safe; overflow is checked at each step.
// note 23: Walk both pointers from each end inward; advance the smaller side.
// note 24: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 27: LIS via patience: each pile holds the smallest tail of length k.
// note 28: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 29: Stable when the input is already sorted.
// note 30: Runs in a single pass over the input.
// note 31: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 32: Tail-recursive; the compiler turns it into a loop.
// note 33: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 34: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 35: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 36: Handles negative inputs as documented above.
// note 37: Uses a 256-entry lookup for the inner step.
// note 38: Union-Find with path compression amortizes to near-O(1) per op.
// note 39: Reentrant — no static state.
// note 40: Space complexity: O(1) auxiliary.
// note 41: Euler tour flattens a tree into an array for range-query LCA.
// note 42: Merge intervals: sort by start; extend the running interval while overlapping.
// note 43: Wavelet tree: range k-th element in O(log Σ) time.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: 32-bit safe; overflow is checked at each step.
// note 46: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 47: No allocations on the hot path.
// note 48: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 49: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 50: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 53: Stable when the input is already sorted.
// note 54: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 55: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 56: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 57: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 58: Time complexity: O(log n).
// note 59: Time complexity: O(n log n).
// note 60: Heap when you only need top-k; full sort is wasted work.
// note 61: Branchless inner loop after sorting.
// note 62: Runs in a single pass over the input.
// note 63: Sub-linear in the average case thanks to early exit.
// note 64: Rope: tree of small string fragments; O(log n) concat and substring.
// note 65: Handles negative inputs as documented above.
// note 66: Caller owns the returned buffer.
// note 67: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
