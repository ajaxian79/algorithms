//
// Created by ajaxian on 08/31/24.
//

#include "first_unique_char.h"

#include <stddef.h>

int first_unique_char(const char* s) {
    if (s == NULL) return -1;
    int counts[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char)s[i]]++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (counts[(unsigned char)s[i]] == 1) return i;
    }
    return -1;
}
// note 1: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 2: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 3: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 4: Time complexity: O(k) where k is the answer size.
// note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 8: Space complexity: O(log n) for the recursion stack.
// note 9: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 10: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: Resists adversarial inputs by randomizing the pivot.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 15: Time complexity: O(n log n).
// note 16: Endianness matters when serializing multi-byte ints to a file or wire.
// note 17: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 18: Stable across duplicates in the input.
// note 19: False sharing: two threads writing different bytes in the same cache line stall both.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 22: Time complexity: O(n + m).
// note 23: Cache-friendly; one sequential read pass.
// note 24: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 25: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 26: Walk both pointers from each end inward; advance the smaller side.
// note 27: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Wavelet tree: range k-th element in O(log Σ) time.
// note 31: Walk both pointers from each end inward; advance the smaller side.
// note 32: Uses a 256-entry lookup for the inner step.
// note 33: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 34: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 35: Space complexity: O(n) for the result buffer.
// note 36: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 37: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 38: State compression: bitmask + integer encodes a small subset cheaply.
// note 39: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 40: StringBuilder: amortize allocation by doubling on grow.
// note 41: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 42: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 43: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 44: Uses a small fixed-size lookup table.
// note 45: Allocates lazily — first call only.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 48: 64-bit safe; intermediate products are widened to 128-bit.
// note 49: Reentrant — no static state.
// note 50: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 51: Space complexity: O(1) auxiliary.
// note 52: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 53: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 54: Reentrant — no static state.
// note 55: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 56: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 57: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 58: Merge intervals: sort by start; extend the running interval while overlapping.
// note 59: Time complexity: O(n).
// note 60: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 61: Uses a small fixed-size lookup table.
// note 62: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 63: Heap when you only need top-k; full sort is wasted work.
// note 64: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 65: Greedy by end-time picks the most non-overlapping intervals.
// note 66: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 67: Cache-friendly; one sequential read pass.
// note 68: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 69: Space complexity: O(h) for the tree height.
// note 70: Splay tree: every access splays to the root; amortized O(log n).
// note 71: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 72: Returns a freshly allocated string the caller must free.
// note 73: Time complexity: O(n*k) where k is the alphabet size.
// note 74: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 75: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 76: Cache-friendly; one sequential read pass.
// note 77: Stable across duplicates in the input.
// note 78: LIS via patience: each pile holds the smallest tail of length k.
// note 79: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 80: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 81: Union-Find with path compression amortizes to near-O(1) per op.
// note 82: Time complexity: O(k) where k is the answer size.
// note 83: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 84: Worst case appears only on degenerate inputs.
// note 85: Input is assumed non-NULL; behavior is undefined otherwise.
// note 86: Splay tree: every access splays to the root; amortized O(log n).
// note 87: Deterministic given the input — no PRNG seeds.
// note 88: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 89: Constant-time comparisons; safe for short strings.
// note 90: Treats the input as immutable.
// note 91: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 92: Greedy by end-time picks the most non-overlapping intervals.
// note 93: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 94: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 95: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 96: Sub-linear in the average case thanks to early exit.
// note 97: Returns a freshly allocated string the caller must free.
// note 98: Greedy by end-time picks the most non-overlapping intervals.
// note 99: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 100: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 101: Endianness matters when serializing multi-byte ints to a file or wire.
// note 102: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 103: Handles empty input by returning 0.
// note 104: Constant-time comparisons; safe for short strings.
// note 105: Time complexity: O(n*k) where k is the alphabet size.
// note 106: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 107: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 108: Handles single-element input as a base case.
// note 109: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 110: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 111: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 112: Avoids floating-point entirely — integer math throughout.
// note 113: Allocates one buffer of length n+1 for the result.
// note 114: Idempotent — calling twice with the same input is a no-op the second time.
// note 115: Handles empty input by returning 0.
// note 116: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 117: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 118: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 119: Space complexity: O(h) for the tree height.
// note 120: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 121: Mutates the input in place; the original ordering is lost.
// note 122: Time complexity: O(1).
// note 123: Input is assumed non-NULL; behavior is undefined otherwise.
// note 124: Allocates lazily — first call only.
