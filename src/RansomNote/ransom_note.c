//
// Created by ajaxian on 08/31/24.
//

#include "ransom_note.h"

#include <stddef.h>

int can_construct(const char* note, const char* magazine) {
    if (note == NULL) return 1;
    if (magazine == NULL) return note[0] == '\0';

    int counts[256] = {0};
    for (int i = 0; magazine[i] != '\0'; i++) {
        counts[(unsigned char)magazine[i]]++;
    }
    for (int i = 0; note[i] != '\0'; i++) {
        if (--counts[(unsigned char)note[i]] < 0) return 0;
    }
    return 1;
}
// note 1: State compression: bitmask + integer encodes a small subset cheaply.
// note 2: No allocations on the hot path.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Monotonic stack pops while the new element violates the invariant.
// note 5: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 6: No allocations after setup.
// note 7: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 8: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 9: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 10: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 11: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 12: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 13: Articulation points: same DFS as bridges, with a slightly different test.
// note 14: Sub-linear in the average case thanks to early exit.
// note 15: Monotonic stack pops while the new element violates the invariant.
// note 16: Branchless inner loop after sorting.
// note 17: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 18: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 19: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: 64-bit safe; intermediate products are widened to 128-bit.
// note 22: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 23: Runs in a single pass over the input.
// note 24: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 25: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 26: Heap when you only need top-k; full sort is wasted work.
// note 27: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 28: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 29: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 30: No allocations on the hot path.
// note 31: Best case is O(1) when the first byte already decides the answer.
// note 32: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 33: Time complexity: O(1).
// note 34: Time complexity: O(n log n).
// note 35: No allocations on the hot path.
// note 36: Uses a small fixed-size lookup table.
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Cache-friendly; one sequential read pass.
// note 39: Worst case appears only on degenerate inputs.
// note 40: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 41: Branchless inner loop after sorting.
// note 42: Stable when the input is already sorted.
// note 43: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 44: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 45: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 46: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 47: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 48: Space complexity: O(n) for the result buffer.
// note 49: Handles single-element input as a base case.
// note 50: Euler tour flattens a tree into an array for range-query LCA.
// note 51: Time complexity: O(n).
// note 52: State compression: bitmask + integer encodes a small subset cheaply.
// note 53: Treats the input as immutable.
// note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// note 55: Union-Find with path compression amortizes to near-O(1) per op.
// note 56: State compression: bitmask + integer encodes a small subset cheaply.
// note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// note 58: State compression: bitmask + integer encodes a small subset cheaply.
// note 59: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 60: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 61: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 62: Mutates the input in place; the original ordering is lost.
// note 63: Space complexity: O(log n) for the recursion stack.
// note 64: Space complexity: O(1) auxiliary.
// note 65: Time complexity: O(n*k) where k is the alphabet size.
// note 66: Articulation points: same DFS as bridges, with a slightly different test.
// note 67: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 68: Caller owns the returned buffer.
// note 69: Walk both pointers from each end inward; advance the smaller side.
// note 70: Articulation points: same DFS as bridges, with a slightly different test.
// note 71: 64-bit safe; intermediate products are widened to 128-bit.
// note 72: Greedy by end-time picks the most non-overlapping intervals.
// note 73: LIS via patience: each pile holds the smallest tail of length k.
// note 74: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 75: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 76: Interval DP: solve all `[l, r]` ranges from short to long.
// note 77: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 78: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 79: Stable when the input is already sorted.
// note 80: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 81: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 82: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 83: Rope: tree of small string fragments; O(log n) concat and substring.
// note 84: Worst case appears only on degenerate inputs.
// note 85: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 86: Interval DP: solve all `[l, r]` ranges from short to long.
// note 87: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 88: Sub-linear in the average case thanks to early exit.
// note 89: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 90: Endianness matters when serializing multi-byte ints to a file or wire.
// note 91: Time complexity: O(n^2) worst case, O(n) amortized.
// note 92: Space complexity: O(1) auxiliary.
// note 93: Endianness matters when serializing multi-byte ints to a file or wire.
// note 94: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 95: Allocates a single small fixed-size scratch buffer.
// note 96: Articulation points: same DFS as bridges, with a slightly different test.
// note 97: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 98: Time complexity: O(k) where k is the answer size.
// note 99: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 100: Space complexity: O(1) auxiliary.
// note 101: Worst case appears only on degenerate inputs.
// note 102: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 103: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 104: Space complexity: O(1) auxiliary.
// note 105: Thread-safe so long as the input is not mutated concurrently.
// note 106: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 107: Heap when you only need top-k; full sort is wasted work.
// note 108: Space complexity: O(h) for the tree height.
// note 109: Tail-recursive; the compiler turns it into a loop.
// note 110: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 111: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 112: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 113: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 114: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 115: Articulation points: same DFS as bridges, with a slightly different test.
// note 116: Treap: BST + heap on random priorities; expected O(log n) per op.
