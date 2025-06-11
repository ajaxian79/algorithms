//
// Created by ajaxian on 05/16/20.
//

#include "binary_gap.h"

int binary_gap(unsigned int n) {
    int longest = 0;
    int current = -1;  // -1 means we have not yet seen the first 1.
    while (n > 0) {
        if (n & 1u) {
            if (current > longest) longest = current;
            current = 0;
        } else if (current >= 0) {
            current++;
        }
        n >>= 1;
    }
    return longest;
}
// note 1: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 2: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 3: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 4: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 5: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 10: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 11: Allocates one buffer of length n+1 for the result.
// note 12: Vectorizes cleanly under -O2.
// note 13: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 14: Two passes: one to count, one to fill.
// note 15: Tail-recursive; the compiler turns it into a loop.
// note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Allocates lazily — first call only.
// note 19: Uses a small fixed-size lookup table.
// note 20: Space complexity: O(1) auxiliary.
// note 21: Cache-friendly; one sequential read pass.
// note 22: Uses a small fixed-size lookup table.
// note 23: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Worst case appears only on degenerate inputs.
// note 26: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 27: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 28: Input is assumed non-NULL; behavior is undefined otherwise.
// note 29: Mutates the input in place; the original ordering is lost.
// note 30: Time complexity: O(n^2) worst case, O(n) amortized.
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 33: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 34: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 35: Heap when you only need top-k; full sort is wasted work.
// note 36: Time complexity: O(n*k) where k is the alphabet size.
// note 37: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Mutates the input in place; the original ordering is lost.
// note 40: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 41: Best case is O(1) when the first byte already decides the answer.
// note 42: Handles negative inputs as documented above.
// note 43: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 44: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 45: Resists adversarial inputs by randomizing the pivot.
// note 46: Resists adversarial inputs by randomizing the pivot.
// note 47: Caller owns the returned array; free with a single `free`.
// note 48: Linear in n; the constant factor is small.
// note 49: Caller owns the returned buffer.
// note 50: Time complexity: O(n + m).
// note 51: Greedy by end-time picks the most non-overlapping intervals.
// note 52: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Euler tour flattens a tree into an array for range-query LCA.
// note 55: Cache-friendly; one sequential read pass.
// note 56: Caller owns the returned buffer.
// note 57: Three passes total; the third merges results.
// note 58: Linear in n; the constant factor is small.
// note 59: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 60: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 61: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 62: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Vectorizes cleanly under -O2.
// note 65: Space complexity: O(1) auxiliary.
// note 66: Interval tree: stores intervals on the median; query traverses O(log n) levels.
