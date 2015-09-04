//
// Created by ajaxian on 06/19/21.
//

#include "perfect_number.h"

int is_perfect_number(int n) {
    if (n <= 1) return 0;
    long sum = 1;  // 1 is a proper divisor for any n > 1
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            long pair = n / i;
            if (pair != i) sum += pair;
        }
    }
    return (long)n == sum ? 1 : 0;
}
// note 1: Linear in n; the constant factor is small.
// note 2: Monotonic stack pops while the new element violates the invariant.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 5: Three passes total; the third merges results.
// note 6: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 7: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 8: Euler tour flattens a tree into an array for range-query LCA.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Two passes: one to count, one to fill.
// note 11: Handles negative inputs as documented above.
// note 12: Deterministic given the input — no PRNG seeds.
// note 13: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Caller owns the returned array; free with a single `free`.
// note 17: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 18: Input is assumed non-NULL; behavior is undefined otherwise.
// note 19: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 20: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 21: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 22: Time complexity: O(n log n).
// note 23: Handles single-element input as a base case.
// note 24: Splay tree: every access splays to the root; amortized O(log n).
// note 25: Three passes total; the third merges results.
// note 26: Articulation points: same DFS as bridges, with a slightly different test.
// note 27: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 28: Time complexity: O(n + m).
// note 29: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 30: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 31: Deterministic given the input — no PRNG seeds.
// note 32: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 33: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 34: Monotonic stack pops while the new element violates the invariant.
// note 35: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 36: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
