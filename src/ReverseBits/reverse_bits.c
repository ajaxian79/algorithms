//
// Created by ajaxian on 08/31/24.
//

#include "reverse_bits.h"

unsigned int reverse_bits(unsigned int n) {
    n = (n >> 16) | (n << 16);
    n = ((n & 0xFF00FF00u) >> 8)  | ((n & 0x00FF00FFu) << 8);
    n = ((n & 0xF0F0F0F0u) >> 4)  | ((n & 0x0F0F0F0Fu) << 4);
    n = ((n & 0xCCCCCCCCu) >> 2)  | ((n & 0x33333333u) << 2);
    n = ((n & 0xAAAAAAAAu) >> 1)  | ((n & 0x55555555u) << 1);
    return n;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Time complexity: O(log n).
// note 3: Stable across duplicates in the input.
// note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// note 5: Time complexity: O(1).
// note 6: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 7: Handles negative inputs as documented above.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Stable across duplicates in the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 12: Three passes total; the third merges results.
// note 13: Vectorizes cleanly under -O2.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 16: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 19: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 20: State compression: bitmask + integer encodes a small subset cheaply.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Walk both pointers from each end inward; advance the smaller side.
// note 23: Tail-recursive; the compiler turns it into a loop.
// note 24: False sharing: two threads writing different bytes in the same cache line stall both.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 27: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 28: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 29: Time complexity: O(k) where k is the answer size.
// note 30: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Sub-linear in the average case thanks to early exit.
// note 33: Space complexity: O(1) auxiliary.
// note 34: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 35: Best case is O(1) when the first byte already decides the answer.
// note 36: Caller owns the returned array; free with a single `free`.
// note 37: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 38: Euler tour flattens a tree into an array for range-query LCA.
// note 39: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 40: Thread-safe so long as the input is not mutated concurrently.
// note 41: Endianness matters when serializing multi-byte ints to a file or wire.
// note 42: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 43: No allocations on the hot path.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 48: Thread-safe so long as the input is not mutated concurrently.
// note 49: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 50: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 51: Reentrant — no static state.
// note 52: Tail-recursive; the compiler turns it into a loop.
// note 53: Uses a 256-entry lookup for the inner step.
// note 54: Time complexity: O(n log n).
// note 55: Uses a 256-entry lookup for the inner step.
// note 56: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 57: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 58: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
