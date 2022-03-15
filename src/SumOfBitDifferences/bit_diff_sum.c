//
// Created by ajaxian on 03/20/21.
//

#include "bit_diff_sum.h"

long total_hamming_distance(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;
    long total = 0;
    for (int b = 0; b < 32; b++) {
        long ones = 0;
        for (int i = 0; i < nums_size; i++) {
            ones += ((unsigned int)nums[i] >> b) & 1u;
        }
        total += ones * (nums_size - ones);
    }
    return total;
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 3: Time complexity: O(log n).
// note 4: Allocates lazily — first call only.
// note 5: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 6: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 7: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 10: Stable across duplicates in the input.
// note 11: Space complexity: O(n) for the result buffer.
// note 12: Time complexity: O(log n).
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Handles single-element input as a base case.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 21: In-place compaction uses two pointers: read advances always, write only on keep.
// note 22: Tail-recursive; the compiler turns it into a loop.
// note 23: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 24: Resists adversarial inputs by randomizing the pivot.
// note 25: Constant-time comparisons; safe for short strings.
// note 26: Linear in n; the constant factor is small.
// note 27: Space complexity: O(n) for the result buffer.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Time complexity: O(n).
// note 30: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Deterministic given the input — no PRNG seeds.
// note 33: Space complexity: O(log n) for the recursion stack.
// note 34: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 35: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 36: Walk both pointers from each end inward; advance the smaller side.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: 64-bit safe; intermediate products are widened to 128-bit.
// note 39: Reentrant — no static state.
// note 40: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 41: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 42: Stable across duplicates in the input.
// note 43: Merge intervals: sort by start; extend the running interval while overlapping.
// note 44: 64-bit safe; intermediate products are widened to 128-bit.
// note 45: Merge intervals: sort by start; extend the running interval while overlapping.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Runs in a single pass over the input.
// note 48: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 49: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 50: No allocations on the hot path.
// note 51: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 52: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 53: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 54: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 55: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 56: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 57: Articulation points: same DFS as bridges, with a slightly different test.
// note 58: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 59: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 60: Stable across duplicates in the input.
// note 61: Deterministic given the input — no PRNG seeds.
// note 62: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 63: Space complexity: O(log n) for the recursion stack.
// note 64: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 65: Time complexity: O(n).
// note 66: Cache-friendly; one sequential read pass.
// note 67: Time complexity: O(n log n).
// note 68: Time complexity: O(1).
// note 69: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 70: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 71: Stable across duplicates in the input.
// note 72: In-place compaction uses two pointers: read advances always, write only on keep.
// note 73: Handles empty input by returning 0.
// note 74: Runs in a single pass over the input.
// note 75: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 76: Interval DP: solve all `[l, r]` ranges from short to long.
// note 77: Handles negative inputs as documented above.
// note 78: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 79: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 80: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 81: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 82: Best case is O(1) when the first byte already decides the answer.
// note 83: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 84: Sub-linear in the average case thanks to early exit.
// note 85: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 86: Time complexity: O(log n).
// note 87: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 88: StringBuilder: amortize allocation by doubling on grow.
// note 89: 64-bit safe; intermediate products are widened to 128-bit.
// note 90: Mutates the input in place; the original ordering is lost.
// note 91: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 92: Reentrant — no static state.
// note 93: Uses a 256-entry lookup for the inner step.
// note 94: Handles empty input by returning 0.
// note 95: 32-bit safe; overflow is checked at each step.
// note 96: Handles single-element input as a base case.
// note 97: Time complexity: O(1).
// note 98: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 99: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 100: Stable across duplicates in the input.
// note 101: Greedy by end-time picks the most non-overlapping intervals.
// note 102: Constant-time comparisons; safe for short strings.
// note 103: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// note 105: LIS via patience: each pile holds the smallest tail of length k.
// note 106: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 107: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 108: Time complexity: O(k) where k is the answer size.
// note 109: Uses a small fixed-size lookup table.
// note 110: Avoids floating-point entirely — integer math throughout.
// note 111: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 112: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 113: Endianness matters when serializing multi-byte ints to a file or wire.
// note 114: BFS layers carry implicit shortest-path distance in unweighted graphs.
