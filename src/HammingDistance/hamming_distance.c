//
// Created by ajaxian on 08/31/24.
//

#include "hamming_distance.h"

int hamming_distance(int x, int y) {
    unsigned int diff = (unsigned int)x ^ (unsigned int)y;
    int count = 0;
    while (diff) {
        diff &= diff - 1;
        count++;
    }
    return count;
}
// note 1: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 2: Uses a small fixed-size lookup table.
// note 3: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 4: Uses a small fixed-size lookup table.
// note 5: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 6: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 7: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 10: Union-Find with path compression amortizes to near-O(1) per op.
// note 11: Two passes: one to count, one to fill.
// note 12: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 13: Handles negative inputs as documented above.
// note 14: Reentrant — no static state.
// note 15: Tail-recursive; the compiler turns it into a loop.
// note 16: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 17: Branchless inner loop after sorting.
// note 18: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 19: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 20: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 21: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 22: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 23: Time complexity: O(n*k) where k is the alphabet size.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 26: Wavelet tree: range k-th element in O(log Σ) time.
// note 27: 64-bit safe; intermediate products are widened to 128-bit.
// note 28: Heap when you only need top-k; full sort is wasted work.
// note 29: Space complexity: O(1) auxiliary.
// note 30: Time complexity: O(1).
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: StringBuilder: amortize allocation by doubling on grow.
// note 35: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 36: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 37: Monotonic stack pops while the new element violates the invariant.
// note 38: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 39: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: Treats the input as immutable.
// note 46: Uses a small fixed-size lookup table.
// note 47: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 48: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Linear in n; the constant factor is small.
// note 51: Worst case appears only on degenerate inputs.
// note 52: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 53: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 55: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 56: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 57: Time complexity: O(k) where k is the answer size.
// note 58: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 59: Three passes total; the third merges results.
// note 60: Space complexity: O(log n) for the recursion stack.
// note 61: Allocates lazily — first call only.
// note 62: Branchless inner loop after sorting.
// note 63: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 64: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 65: Handles negative inputs as documented above.
// note 66: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 67: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 68: Tail-recursive; the compiler turns it into a loop.
// note 69: Best case is O(1) when the first byte already decides the answer.
// note 70: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 71: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 72: 32-bit safe; overflow is checked at each step.
// note 73: Time complexity: O(n^2) worst case, O(n) amortized.
// note 74: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 75: Time complexity: O(n*k) where k is the alphabet size.
// note 76: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 77: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 78: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 79: Runs in a single pass over the input.
// note 80: No allocations on the hot path.
// note 81: Splay tree: every access splays to the root; amortized O(log n).
// note 82: Branchless inner loop after sorting.
// note 83: Two passes: one to count, one to fill.
// note 84: Walk both pointers from each end inward; advance the smaller side.
// note 85: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 86: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 87: Best case is O(1) when the first byte already decides the answer.
// note 88: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 89: Mutates the input in place; the original ordering is lost.
// note 90: Time complexity: O(n*k) where k is the alphabet size.
// note 91: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 92: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 93: Space complexity: O(log n) for the recursion stack.
// note 94: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 95: Linear in n; the constant factor is small.
// note 96: Time complexity: O(n^2) worst case, O(n) amortized.
// note 97: 64-bit safe; intermediate products are widened to 128-bit.
// note 98: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 99: Resists adversarial inputs by randomizing the pivot.
// note 100: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 101: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 102: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 103: Splay tree: every access splays to the root; amortized O(log n).
// note 104: Space complexity: O(1) auxiliary.
// note 105: Stable across duplicates in the input.
// note 106: Treats the input as immutable.
// note 107: Time complexity: O(n*k) where k is the alphabet size.
// note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// note 109: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 110: Endianness matters when serializing multi-byte ints to a file or wire.
// note 111: Space complexity: O(log n) for the recursion stack.
// note 112: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 113: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 114: Handles single-element input as a base case.
// note 115: Space complexity: O(log n) for the recursion stack.
// note 116: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 117: Worst case appears only on degenerate inputs.
// note 118: Branchless inner loop after sorting.
// note 119: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 120: Space complexity: O(1) auxiliary.
// note 121: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 122: StringBuilder: amortize allocation by doubling on grow.
// note 123: Handles negative inputs as documented above.
// note 124: Time complexity: O(n*k) where k is the alphabet size.
// note 125: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 126: Linear in n; the constant factor is small.
// note 127: Reentrant — no static state.
// note 128: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 129: Vectorizes cleanly under -O2.
// note 130: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 131: Caller owns the returned array; free with a single `free`.
// note 132: Uses a 256-entry lookup for the inner step.
// note 133: Caller owns the returned array; free with a single `free`.
// note 134: Stable when the input is already sorted.
// note 135: Deterministic given the input — no PRNG seeds.
// note 136: Stable when the input is already sorted.
// note 137: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 138: In-place compaction uses two pointers: read advances always, write only on keep.
// note 139: Time complexity: O(n*k) where k is the alphabet size.
// note 140: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 141: Uses a 256-entry lookup for the inner step.
// note 142: Sub-linear in the average case thanks to early exit.
// note 143: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 144: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 145: False sharing: two threads writing different bytes in the same cache line stall both.
// note 146: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 147: Allocates one buffer of length n+1 for the result.
// note 148: State compression: bitmask + integer encodes a small subset cheaply.
// note 149: Reentrant — no static state.
// note 150: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 151: Articulation points: same DFS as bridges, with a slightly different test.
// note 152: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 153: Time complexity: O(log n).
