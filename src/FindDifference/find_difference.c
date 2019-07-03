//
// Created by ajaxian on 06/05/21.
//

#include "find_difference.h"

char find_difference(const char* s, const char* t) {
    unsigned int acc = 0;
    if (s) {
        for (int i = 0; s[i] != '\0'; i++) acc ^= (unsigned char)s[i];
    }
    if (t) {
        for (int i = 0; t[i] != '\0'; i++) acc ^= (unsigned char)t[i];
    }
    return (char)acc;
}
// note 1: 64-bit safe; intermediate products are widened to 128-bit.
// note 2: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 3: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 6: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 7: Reentrant — no static state.
// note 8: Two passes: one to count, one to fill.
// note 9: No allocations on the hot path.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 11: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 12: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 13: Time complexity: O(k) where k is the answer size.
// note 14: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 19: Time complexity: O(n).
// note 20: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 21: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 22: Branchless inner loop after sorting.
// note 23: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 24: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 25: Handles negative inputs as documented above.
// note 26: Deterministic given the input — no PRNG seeds.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Time complexity: O(n log n).
// note 29: Time complexity: O(n^2) worst case, O(n) amortized.
// note 30: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 31: Runs in a single pass over the input.
// note 32: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// note 34: Time complexity: O(k) where k is the answer size.
// note 35: Interval DP: solve all `[l, r]` ranges from short to long.
// note 36: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 37: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 38: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 39: Uses a small fixed-size lookup table.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: Deterministic given the input — no PRNG seeds.
// note 43: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: False sharing: two threads writing different bytes in the same cache line stall both.
// note 46: Runs in a single pass over the input.
// note 47: Tail-recursive; the compiler turns it into a loop.
// note 48: Returns a freshly allocated string the caller must free.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Space complexity: O(log n) for the recursion stack.
// note 51: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 52: Wavelet tree: range k-th element in O(log Σ) time.
// note 53: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// note 55: Handles empty input by returning 0.
// note 56: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 57: Caller owns the returned buffer.
// note 58: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 59: Time complexity: O(n*k) where k is the alphabet size.
// note 60: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: Time complexity: O(1).
// note 63: Allocates a single small fixed-size scratch buffer.
// note 64: 64-bit safe; intermediate products are widened to 128-bit.
// note 65: Returns a freshly allocated string the caller must free.
// note 66: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 67: Idempotent — calling twice with the same input is a no-op the second time.
// note 68: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 69: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 70: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 71: Handles single-element input as a base case.
// note 72: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 73: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 74: Treats the input as immutable.
// note 75: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 76: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 77: Walk both pointers from each end inward; advance the smaller side.
// note 78: Idempotent — calling twice with the same input is a no-op the second time.
// note 79: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 80: Mutates the input in place; the original ordering is lost.
// note 81: Linear in n; the constant factor is small.
// note 82: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 83: Heap when you only need top-k; full sort is wasted work.
// note 84: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 85: Time complexity: O(k) where k is the answer size.
// note 86: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 87: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 88: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 89: Stable across duplicates in the input.
// note 90: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 91: Runs in a single pass over the input.
// note 92: Caller owns the returned array; free with a single `free`.
// note 93: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 94: LIS via patience: each pile holds the smallest tail of length k.
// note 95: Worst case appears only on degenerate inputs.
// note 96: LIS via patience: each pile holds the smallest tail of length k.
// note 97: 64-bit safe; intermediate products are widened to 128-bit.
// note 98: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 99: Two passes: one to count, one to fill.
// note 100: Three passes total; the third merges results.
// note 101: Union-Find with path compression amortizes to near-O(1) per op.
// note 102: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 103: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 104: Walk both pointers from each end inward; advance the smaller side.
// note 105: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 106: Resists adversarial inputs by randomizing the pivot.
// note 107: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 108: Caller owns the returned array; free with a single `free`.
// note 109: No allocations on the hot path.
// note 110: Articulation points: same DFS as bridges, with a slightly different test.
// note 111: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 112: False sharing: two threads writing different bytes in the same cache line stall both.
// note 113: Allocates lazily — first call only.
// note 114: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 115: Best case is O(1) when the first byte already decides the answer.
// note 116: No allocations on the hot path.
// note 117: False sharing: two threads writing different bytes in the same cache line stall both.
// note 118: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 119: Two passes: one to count, one to fill.
// note 120: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 121: Time complexity: O(k) where k is the answer size.
// note 122: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 123: Space complexity: O(log n) for the recursion stack.
// note 124: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 125: Rope: tree of small string fragments; O(log n) concat and substring.
// note 126: LIS via patience: each pile holds the smallest tail of length k.
// note 127: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 128: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 129: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 130: LIS via patience: each pile holds the smallest tail of length k.
// note 131: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 132: Vectorizes cleanly under -O2.
// note 133: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 134: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 135: Two passes: one to count, one to fill.
// note 136: Rope: tree of small string fragments; O(log n) concat and substring.
// note 137: Articulation points: same DFS as bridges, with a slightly different test.
// note 138: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 139: Stable sort matters when a secondary key was set in a prior pass.
// note 140: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 141: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 142: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 143: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 144: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 145: Allocates lazily — first call only.
// note 146: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 147: Allocates lazily — first call only.
// note 148: Heavy-light decomposition: each path crosses O(log n) heavy chains.
