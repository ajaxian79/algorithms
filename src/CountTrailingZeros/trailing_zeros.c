//
// Created by ajaxian on 06/06/20.
//

#include "trailing_zeros.h"

int trailing_zeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Time complexity: O(n*k) where k is the alphabet size.
// note 3: Two passes: one to count, one to fill.
// note 4: Allocates a single small fixed-size scratch buffer.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Treats the input as immutable.
// note 7: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 8: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 9: Two passes: one to count, one to fill.
// note 10: Time complexity: O(n).
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Caller owns the returned buffer.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Vectorizes cleanly under -O2.
// note 15: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: Stable across duplicates in the input.
// note 18: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 19: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 23: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 24: Mutates the input in place; the original ordering is lost.
// note 25: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 26: Uses a small fixed-size lookup table.
// note 27: 32-bit safe; overflow is checked at each step.
// note 28: Reentrant — no static state.
// note 29: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 30: Interval DP: solve all `[l, r]` ranges from short to long.
// note 31: Constant-time comparisons; safe for short strings.
// note 32: Rope: tree of small string fragments; O(log n) concat and substring.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: Treats the input as immutable.
// note 35: False sharing: two threads writing different bytes in the same cache line stall both.
// note 36: Linear in n; the constant factor is small.
// note 37: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 38: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 39: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 40: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 41: Handles negative inputs as documented above.
// note 42: Resists adversarial inputs by randomizing the pivot.
// note 43: Uses a small fixed-size lookup table.
// note 44: Thread-safe so long as the input is not mutated concurrently.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 47: Reentrant — no static state.
// note 48: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 49: Monotonic stack pops while the new element violates the invariant.
// note 50: Space complexity: O(1) auxiliary.
// note 51: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 52: Euler tour flattens a tree into an array for range-query LCA.
// note 53: Treats the input as immutable.
// note 54: Caller owns the returned buffer.
// note 55: Stable sort matters when a secondary key was set in a prior pass.
// note 56: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 57: Thread-safe so long as the input is not mutated concurrently.
// note 58: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 59: Constant-time comparisons; safe for short strings.
// note 60: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 61: Euler tour flattens a tree into an array for range-query LCA.
// note 62: Worst case appears only on degenerate inputs.
// note 63: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 64: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 65: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 66: Space complexity: O(log n) for the recursion stack.
