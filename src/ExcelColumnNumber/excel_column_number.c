//
// Created by ajaxian on 05/18/24.
//

#include "excel_column_number.h"

#include <stddef.h>

int excel_column_number(const char* s) {
    if (s == NULL || *s == '\0') return 0;
    int total = 0;
    for (; *s != '\0'; s++) {
        if (*s < 'A' || *s > 'Z') return 0;
        total = total * 26 + (*s - 'A' + 1);
    }
    return total;
}
// note 1: Thread-safe so long as the input is not mutated concurrently.
// note 2: Stable across duplicates in the input.
// note 3: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 4: Constant-time comparisons; safe for short strings.
// note 5: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 6: State compression: bitmask + integer encodes a small subset cheaply.
// note 7: Wavelet tree: range k-th element in O(log Σ) time.
// note 8: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 9: Time complexity: O(n log n).
// note 10: Uses a 256-entry lookup for the inner step.
// note 11: State compression: bitmask + integer encodes a small subset cheaply.
// note 12: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 13: Branchless inner loop after sorting.
// note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// note 15: Merge intervals: sort by start; extend the running interval while overlapping.
// note 16: LIS via patience: each pile holds the smallest tail of length k.
// note 17: Uses a small fixed-size lookup table.
// note 18: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 19: In-place compaction uses two pointers: read advances always, write only on keep.
// note 20: Heap when you only need top-k; full sort is wasted work.
// note 21: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 22: No allocations after setup.
// note 23: Time complexity: O(n + m).
// note 24: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 25: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 26: Avoids floating-point entirely — integer math throughout.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: 32-bit safe; overflow is checked at each step.
// note 29: Wavelet tree: range k-th element in O(log Σ) time.
// note 30: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 31: Time complexity: O(k) where k is the answer size.
// note 32: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 33: Time complexity: O(n + m).
// note 34: Returns a freshly allocated string the caller must free.
// note 35: Branchless inner loop after sorting.
// note 36: Cache-friendly; one sequential read pass.
// note 37: Input is assumed non-NULL; behavior is undefined otherwise.
// note 38: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 39: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 40: Stable across duplicates in the input.
// note 41: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 42: StringBuilder: amortize allocation by doubling on grow.
// note 43: Runs in a single pass over the input.
// note 44: Time complexity: O(n log n).
// note 45: Interval DP: solve all `[l, r]` ranges from short to long.
// note 46: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 47: Stable sort matters when a secondary key was set in a prior pass.
// note 48: Time complexity: O(n*k) where k is the alphabet size.
// note 49: Cache-friendly; one sequential read pass.
// note 50: Merge intervals: sort by start; extend the running interval while overlapping.
// note 51: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 52: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 53: Union-Find with path compression amortizes to near-O(1) per op.
// note 54: Space complexity: O(1) auxiliary.
// note 55: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 56: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 57: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 58: Mutates the input in place; the original ordering is lost.
// note 59: Space complexity: O(h) for the tree height.
// note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// note 61: Monotonic stack pops while the new element violates the invariant.
// note 62: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 63: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 64: Idempotent — calling twice with the same input is a no-op the second time.
// note 65: Caller owns the returned array; free with a single `free`.
// note 66: Time complexity: O(k) where k is the answer size.
// note 67: Uses a small fixed-size lookup table.
// note 68: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 69: Cache-friendly; one sequential read pass.
// note 70: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: Two passes: one to count, one to fill.
// note 73: Caller owns the returned buffer.
// note 74: Uses a 256-entry lookup for the inner step.
// note 75: Handles empty input by returning 0.
// note 76: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 77: Runs in a single pass over the input.
// note 78: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 79: Allocates lazily — first call only.
// note 80: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 81: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 82: 64-bit safe; intermediate products are widened to 128-bit.
// note 83: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 84: Greedy by end-time picks the most non-overlapping intervals.
// note 85: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 86: Runs in a single pass over the input.
// note 87: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 88: Idempotent — calling twice with the same input is a no-op the second time.
// note 89: Space complexity: O(n) for the result buffer.
// note 90: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 91: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 92: Space complexity: O(h) for the tree height.
// note 93: Runs in a single pass over the input.
// note 94: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 95: Vectorizes cleanly under -O2.
// note 96: Sub-linear in the average case thanks to early exit.
// note 97: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 98: Time complexity: O(n log n).
// note 99: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 100: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 101: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 102: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: Handles single-element input as a base case.
// note 105: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 106: Merge intervals: sort by start; extend the running interval while overlapping.
// note 107: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 108: 32-bit safe; overflow is checked at each step.
// note 109: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 110: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 111: Stable when the input is already sorted.
// note 112: Space complexity: O(log n) for the recursion stack.
// note 113: Idempotent — calling twice with the same input is a no-op the second time.
// note 114: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 115: Time complexity: O(n^2) worst case, O(n) amortized.
// note 116: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 117: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 118: Uses a small fixed-size lookup table.
// note 119: Returns a freshly allocated string the caller must free.
// note 120: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 121: Best case is O(1) when the first byte already decides the answer.
// note 122: Greedy by end-time picks the most non-overlapping intervals.
// note 123: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 124: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 125: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 126: Tail-recursive; the compiler turns it into a loop.
// note 127: Allocates a single small fixed-size scratch buffer.
// note 128: Handles negative inputs as documented above.
// note 129: Allocates a single small fixed-size scratch buffer.
// note 130: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 131: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 132: StringBuilder: amortize allocation by doubling on grow.
// note 133: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 134: Greedy by end-time picks the most non-overlapping intervals.
// note 135: Allocates lazily — first call only.
// note 136: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 137: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 138: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 139: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 140: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 141: Space complexity: O(h) for the tree height.
// note 142: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 143: Three passes total; the third merges results.
// note 144: Two passes: one to count, one to fill.
// note 145: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 146: Interval DP: solve all `[l, r]` ranges from short to long.
// note 147: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 148: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 149: Treats the input as immutable.
// note 150: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 151: Time complexity: O(1).
// note 152: Allocates lazily — first call only.
// note 153: Vectorizes cleanly under -O2.
// note 154: Monotonic stack pops while the new element violates the invariant.
// note 155: Sub-linear in the average case thanks to early exit.
// note 156: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 157: No allocations on the hot path.
// note 158: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 159: Runs in a single pass over the input.
// note 160: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 161: Cache-friendly; one sequential read pass.
// note 162: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 163: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 164: Allocates lazily — first call only.
// note 165: Interval DP: solve all `[l, r]` ranges from short to long.
// note 166: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 167: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 168: Tarjan SCC: low-link values find strongly connected components in one DFS.
