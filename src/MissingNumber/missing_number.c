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
// note 28: Cache-friendly; one sequential read pass.
// note 29: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 30: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 31: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 32: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 33: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 34: Time complexity: O(n + m).
// note 35: Articulation points: same DFS as bridges, with a slightly different test.
// note 36: No allocations after setup.
// note 37: Time complexity: O(k) where k is the answer size.
// note 38: False sharing: two threads writing different bytes in the same cache line stall both.
// note 39: Linear in n; the constant factor is small.
// note 40: Two passes: one to count, one to fill.
// note 41: Three passes total; the third merges results.
// note 42: Space complexity: O(1) auxiliary.
// note 43: Sub-linear in the average case thanks to early exit.
// note 44: No allocations on the hot path.
// note 45: Union-Find with path compression amortizes to near-O(1) per op.
// note 46: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 47: Time complexity: O(log n).
// note 48: Space complexity: O(1) auxiliary.
// note 49: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 50: Returns a freshly allocated string the caller must free.
// note 51: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 52: Space complexity: O(h) for the tree height.
// note 53: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 54: Space complexity: O(n) for the result buffer.
// note 55: Time complexity: O(n).
// note 56: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 57: Stable across duplicates in the input.
// note 58: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 59: No allocations after setup.
// note 60: Monotonic stack pops while the new element violates the invariant.
// note 61: Greedy by end-time picks the most non-overlapping intervals.
// note 62: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 63: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 64: No allocations after setup.
// note 65: LIS via patience: each pile holds the smallest tail of length k.
// note 66: Uses a small fixed-size lookup table.
// note 67: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 68: Time complexity: O(n*k) where k is the alphabet size.
// note 69: Cache-friendly; one sequential read pass.
// note 70: Monotonic stack pops while the new element violates the invariant.
// note 71: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 72: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 73: Vectorizes cleanly under -O2.
// note 74: Time complexity: O(log n).
// note 75: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 76: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 77: Time complexity: O(n^2) worst case, O(n) amortized.
// note 78: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 79: Runs in a single pass over the input.
// note 80: Best case is O(1) when the first byte already decides the answer.
// note 81: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 82: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 83: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 84: BFS layers carry implicit shortest-path distance in unweighted graphs.
