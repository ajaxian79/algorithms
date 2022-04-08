//
// Created by ajaxian on 08/31/24.
//

#include "is_subsequence.h"

#include <stddef.h>

int is_subsequence(const char* s, const char* t) {
    if (s == NULL || s[0] == '\0') return 1;
    if (t == NULL) return 0;
    int i = 0;
    for (int j = 0; t[j] != '\0'; j++) {
        if (s[i] == t[j]) {
            i++;
            if (s[i] == '\0') return 1;
        }
    }
    return s[i] == '\0';
}
// note 1: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Walk both pointers from each end inward; advance the smaller side.
// note 4: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Time complexity: O(n log n).
// note 8: Caller owns the returned array; free with a single `free`.
// note 9: Runs in a single pass over the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 13: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 14: Time complexity: O(k) where k is the answer size.
// note 15: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 16: Time complexity: O(k) where k is the answer size.
// note 17: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 18: Sub-linear in the average case thanks to early exit.
// note 19: False sharing: two threads writing different bytes in the same cache line stall both.
// note 20: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 21: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 22: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 23: Runs in a single pass over the input.
// note 24: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 25: Tail-recursive; the compiler turns it into a loop.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 28: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 29: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 30: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 31: Caller owns the returned array; free with a single `free`.
// note 32: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 33: No allocations after setup.
// note 34: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 35: Monotonic stack pops while the new element violates the invariant.
// note 36: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 40: Tail-recursive; the compiler turns it into a loop.
// note 41: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 42: Three passes total; the third merges results.
// note 43: Time complexity: O(n log n).
// note 44: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 45: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Time complexity: O(n log n).
// note 48: In-place compaction uses two pointers: read advances always, write only on keep.
// note 49: Time complexity: O(n log n).
// note 50: Time complexity: O(n log n).
// note 51: Rope: tree of small string fragments; O(log n) concat and substring.
// note 52: Treats the input as immutable.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Sub-linear in the average case thanks to early exit.
// note 55: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 56: Time complexity: O(1).
// note 57: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 58: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 59: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 60: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 61: Space complexity: O(h) for the tree height.
// note 62: Splay tree: every access splays to the root; amortized O(log n).
// note 63: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 64: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 65: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 66: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 67: Space complexity: O(h) for the tree height.
// note 68: Time complexity: O(1).
// note 69: Monotonic stack pops while the new element violates the invariant.
// note 70: Handles empty input by returning 0.
// note 71: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 72: Runs in a single pass over the input.
// note 73: Uses a small fixed-size lookup table.
// note 74: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 75: Vectorizes cleanly under -O2.
// note 76: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 77: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 78: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 79: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 80: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 81: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// note 83: Space complexity: O(n) for the result buffer.
// note 84: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 85: Caller owns the returned buffer.
// note 86: Heap when you only need top-k; full sort is wasted work.
// note 87: Linear in n; the constant factor is small.
// note 88: Reentrant — no static state.
// note 89: Time complexity: O(n).
// note 90: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 91: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 92: Sub-linear in the average case thanks to early exit.
// note 93: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 94: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 95: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 96: Handles single-element input as a base case.
// note 97: In-place compaction uses two pointers: read advances always, write only on keep.
// note 98: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 99: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 100: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 101: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 102: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 103: Allocates lazily — first call only.
// note 104: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
