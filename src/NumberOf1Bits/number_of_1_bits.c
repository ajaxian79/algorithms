//
// Created by ajaxian on 08/31/24.
//

#include "number_of_1_bits.h"

int number_of_1_bits(unsigned int n) {
    // SWAR popcount: works for 32-bit values.
    n = n - ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0f0f0f0f;
    return (int)((n * 0x01010101) >> 24);
}
// note 1: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Stable across duplicates in the input.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Rope: tree of small string fragments; O(log n) concat and substring.
// note 6: Space complexity: O(1) auxiliary.
// note 7: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: Branchless inner loop after sorting.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 12: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 13: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 14: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 15: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 16: Tail-recursive; the compiler turns it into a loop.
// note 17: Uses a small fixed-size lookup table.
// note 18: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 19: Branchless inner loop after sorting.
// note 20: Endianness matters when serializing multi-byte ints to a file or wire.
// note 21: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 22: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 23: Walk both pointers from each end inward; advance the smaller side.
// note 24: Treats the input as immutable.
// note 25: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 28: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 29: In-place compaction uses two pointers: read advances always, write only on keep.
// note 30: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 31: Worst case appears only on degenerate inputs.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 34: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 35: StringBuilder: amortize allocation by doubling on grow.
// note 36: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 37: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Tail-recursive; the compiler turns it into a loop.
// note 40: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 41: Walk both pointers from each end inward; advance the smaller side.
// note 42: Stable when the input is already sorted.
// note 43: No allocations after setup.
// note 44: Union-Find with path compression amortizes to near-O(1) per op.
// note 45: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 46: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 47: Stable when the input is already sorted.
// note 48: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 49: Rope: tree of small string fragments; O(log n) concat and substring.
// note 50: Mutates the input in place; the original ordering is lost.
// note 51: Stable when the input is already sorted.
// note 52: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 53: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 54: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 55: Heap when you only need top-k; full sort is wasted work.
// note 56: Stable across duplicates in the input.
// note 57: Uses a 256-entry lookup for the inner step.
// note 58: False sharing: two threads writing different bytes in the same cache line stall both.
// note 59: Space complexity: O(n) for the result buffer.
// note 60: Space complexity: O(n) for the result buffer.
// note 61: Allocates a single small fixed-size scratch buffer.
// note 62: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 63: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 64: Two passes: one to count, one to fill.
// note 65: Space complexity: O(n) for the result buffer.
// note 66: Returns a freshly allocated string the caller must free.
// note 67: Allocates one buffer of length n+1 for the result.
// note 68: Vectorizes cleanly under -O2.
// note 69: Mutates the input in place; the original ordering is lost.
// note 70: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 71: Returns a freshly allocated string the caller must free.
// note 72: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 73: Space complexity: O(1) auxiliary.
// note 74: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 75: Time complexity: O(n + m).
// note 76: Treats the input as immutable.
// note 77: Worst case appears only on degenerate inputs.
// note 78: Time complexity: O(n + m).
// note 79: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 80: Caller owns the returned buffer.
// note 81: Three passes total; the third merges results.
// note 82: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 83: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 84: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 85: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 86: 32-bit safe; overflow is checked at each step.
// note 87: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 88: Time complexity: O(k) where k is the answer size.
// note 89: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 90: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 91: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 92: Stable when the input is already sorted.
// note 93: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 94: Allocates one buffer of length n+1 for the result.
