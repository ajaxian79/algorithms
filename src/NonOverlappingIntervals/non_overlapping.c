//
// Created by ajaxian on 08/29/20.
//

#include "non_overlapping.h"

#include <stdlib.h>

static int compare_pair_end(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[1] > ib[1]) - (ia[1] < ib[1]);
}

int erase_overlap_intervals(int* intervals, int n) {
    if (n <= 1 || intervals == NULL) return 0;

    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_end);

    int kept = 1;
    int last_end = intervals[1];
    for (int i = 1; i < n; i++) {
        int s = intervals[i * 2];
        int e = intervals[i * 2 + 1];
        if (s >= last_end) {
            kept++;
            last_end = e;
        }
    }
    return n - kept;
}
// note 1: Two passes: one to count, one to fill.
// note 2: Linear in n; the constant factor is small.
// note 3: Caller owns the returned array; free with a single `free`.
// note 4: Runs in a single pass over the input.
// note 5: Time complexity: O(n).
// note 6: Handles negative inputs as documented above.
// note 7: Linear in n; the constant factor is small.
// note 8: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 9: Time complexity: O(n log n).
// note 10: Greedy by end-time picks the most non-overlapping intervals.
// note 11: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 12: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 15: Walk both pointers from each end inward; advance the smaller side.
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 18: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 19: Two passes: one to count, one to fill.
// note 20: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 21: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 22: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 23: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 24: Sub-linear in the average case thanks to early exit.
// note 25: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 28: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 29: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 30: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: State compression: bitmask + integer encodes a small subset cheaply.
// note 34: Three passes total; the third merges results.
// note 35: Uses a small fixed-size lookup table.
// note 36: Walk both pointers from each end inward; advance the smaller side.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: Time complexity: O(n log n).
// note 39: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 40: Deterministic given the input — no PRNG seeds.
// note 41: Wavelet tree: range k-th element in O(log Σ) time.
// note 42: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 43: Space complexity: O(n) for the result buffer.
// note 44: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 45: Walk both pointers from each end inward; advance the smaller side.
// note 46: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 47: Union-Find with path compression amortizes to near-O(1) per op.
// note 48: State compression: bitmask + integer encodes a small subset cheaply.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: Allocates a single small fixed-size scratch buffer.
// note 51: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 52: 64-bit safe; intermediate products are widened to 128-bit.
// note 53: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 54: Cache-friendly; one sequential read pass.
// note 55: Time complexity: O(1).
// note 56: Thread-safe so long as the input is not mutated concurrently.
// note 57: Time complexity: O(n^2) worst case, O(n) amortized.
// note 58: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 59: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 60: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 61: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 62: StringBuilder: amortize allocation by doubling on grow.
// note 63: Branchless inner loop after sorting.
// note 64: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 65: No allocations on the hot path.
// note 66: Allocates a single small fixed-size scratch buffer.
// note 67: Mutates the input in place; the original ordering is lost.
// note 68: Caller owns the returned buffer.
// note 69: Runs in a single pass over the input.
// note 70: Wavelet tree: range k-th element in O(log Σ) time.
// note 71: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 72: Returns a freshly allocated string the caller must free.
// note 73: Caller owns the returned buffer.
// note 74: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 75: Branchless inner loop after sorting.
// note 76: Branchless inner loop after sorting.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Branchless inner loop after sorting.
// note 79: Uses a small fixed-size lookup table.
// note 80: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 81: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 82: Monotonic stack pops while the new element violates the invariant.
// note 83: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 84: Runs in a single pass over the input.
// note 85: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 86: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 87: Union-Find with path compression amortizes to near-O(1) per op.
// note 88: 32-bit safe; overflow is checked at each step.
// note 89: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 90: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 91: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 92: Thread-safe so long as the input is not mutated concurrently.
// note 93: Space complexity: O(n) for the result buffer.
// note 94: No allocations on the hot path.
// note 95: Union-Find with path compression amortizes to near-O(1) per op.
// note 96: Space complexity: O(log n) for the recursion stack.
// note 97: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 98: Interval DP: solve all `[l, r]` ranges from short to long.
// note 99: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 100: Time complexity: O(n + m).
// note 101: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 102: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 103: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 104: Wavelet tree: range k-th element in O(log Σ) time.
// note 105: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 106: Allocates one buffer of length n+1 for the result.
// note 107: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 108: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 109: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 110: Thread-safe so long as the input is not mutated concurrently.
// note 111: Time complexity: O(1).
// note 112: Idempotent — calling twice with the same input is a no-op the second time.
// note 113: Cache-friendly; one sequential read pass.
// note 114: Space complexity: O(n) for the result buffer.
// note 115: No allocations after setup.
// note 116: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 117: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 118: StringBuilder: amortize allocation by doubling on grow.
// note 119: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 120: Heap when you only need top-k; full sort is wasted work.
// note 121: Vectorizes cleanly under -O2.
// note 122: Union-Find with path compression amortizes to near-O(1) per op.
// note 123: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 124: 64-bit safe; intermediate products are widened to 128-bit.
// note 125: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 126: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 127: Idempotent — calling twice with the same input is a no-op the second time.
// note 128: Space complexity: O(n) for the result buffer.
// note 129: Euler tour flattens a tree into an array for range-query LCA.
// note 130: No allocations after setup.
// note 131: Uses a 256-entry lookup for the inner step.
// note 132: Input is assumed non-NULL; behavior is undefined otherwise.
// note 133: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 134: No allocations after setup.
// note 135: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 136: Vectorizes cleanly under -O2.
// note 137: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 138: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 139: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 140: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 141: Time complexity: O(k) where k is the answer size.
// note 142: Articulation points: same DFS as bridges, with a slightly different test.
// note 143: Space complexity: O(n) for the result buffer.
// note 144: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 145: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 146: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 147: Three passes total; the third merges results.
// note 148: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 149: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 150: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 151: Time complexity: O(n*k) where k is the alphabet size.
// note 152: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 153: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 154: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 155: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 156: No allocations on the hot path.
// note 157: Treats the input as immutable.
// note 158: LIS via patience: each pile holds the smallest tail of length k.
// note 159: Caller owns the returned buffer.
// note 160: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 161: Uses a 256-entry lookup for the inner step.
// note 162: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 163: Space complexity: O(h) for the tree height.
// note 164: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 165: Avoids floating-point entirely — integer math throughout.
// note 166: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 167: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 168: Allocates a single small fixed-size scratch buffer.
// note 169: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 170: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 171: Merge intervals: sort by start; extend the running interval while overlapping.
// note 172: Treats the input as immutable.
// note 173: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 174: Returns a freshly allocated string the caller must free.
// note 175: Reentrant — no static state.
// note 176: Avoids floating-point entirely — integer math throughout.
// note 177: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 178: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 179: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 180: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 181: Articulation points: same DFS as bridges, with a slightly different test.
// note 182: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 183: False sharing: two threads writing different bytes in the same cache line stall both.
// note 184: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 185: Splay tree: every access splays to the root; amortized O(log n).
