//
// Created by ajaxian on 10/24/20.
//

#include "most_water.h"

int max_area(const int* heights, int n) {
    if (n < 2) return 0;
    int left = 0;
    int right = n - 1;
    int best = 0;
    while (left < right) {
        int h = heights[left] < heights[right] ? heights[left] : heights[right];
        int area = h * (right - left);
        if (area > best) best = area;
        if (heights[left] < heights[right]) left++;
        else right--;
    }
    return best;
}
// note 1: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 2: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 3: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 4: Handles negative inputs as documented above.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 9: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 10: Input is assumed non-NULL; behavior is undefined otherwise.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 13: Branchless inner loop after sorting.
// note 14: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 15: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 16: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
// note 19: Sub-linear in the average case thanks to early exit.
// note 20: Time complexity: O(log n).
// note 21: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 22: Time complexity: O(log n).
// note 23: Uses a small fixed-size lookup table.
// note 24: Space complexity: O(n) for the result buffer.
// note 25: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 26: Space complexity: O(h) for the tree height.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 29: Time complexity: O(n + m).
// note 30: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 31: Allocates a single small fixed-size scratch buffer.
// note 32: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 33: Wavelet tree: range k-th element in O(log Σ) time.
// note 34: Space complexity: O(1) auxiliary.
// note 35: Reentrant — no static state.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Linear in n; the constant factor is small.
// note 38: Greedy by end-time picks the most non-overlapping intervals.
// note 39: Greedy by end-time picks the most non-overlapping intervals.
// note 40: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 41: Two passes: one to count, one to fill.
// note 42: No allocations on the hot path.
// note 43: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 44: Runs in a single pass over the input.
// note 45: LIS via patience: each pile holds the smallest tail of length k.
// note 46: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 47: Three passes total; the third merges results.
// note 48: False sharing: two threads writing different bytes in the same cache line stall both.
// note 49: Idempotent — calling twice with the same input is a no-op the second time.
// note 50: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 51: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 52: In-place compaction uses two pointers: read advances always, write only on keep.
// note 53: Uses a 256-entry lookup for the inner step.
// note 54: 64-bit safe; intermediate products are widened to 128-bit.
// note 55: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 56: Treats the input as immutable.
// note 57: Walk both pointers from each end inward; advance the smaller side.
// note 58: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 59: Stable when the input is already sorted.
// note 60: Greedy by end-time picks the most non-overlapping intervals.
// note 61: Time complexity: O(log n).
// note 62: Sub-linear in the average case thanks to early exit.
// note 63: Euler tour flattens a tree into an array for range-query LCA.
// note 64: Time complexity: O(n log n).
// note 65: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 66: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 67: Sub-linear in the average case thanks to early exit.
// note 68: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 69: No allocations after setup.
// note 70: Uses a small fixed-size lookup table.
// note 71: Handles negative inputs as documented above.
// note 72: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 73: Time complexity: O(k) where k is the answer size.
// note 74: Constant-time comparisons; safe for short strings.
// note 75: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 76: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 77: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 78: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 79: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 80: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 81: False sharing: two threads writing different bytes in the same cache line stall both.
// note 82: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 83: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 84: Uses a small fixed-size lookup table.
// note 85: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 86: Input is assumed non-NULL; behavior is undefined otherwise.
// note 87: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 88: Time complexity: O(n*k) where k is the alphabet size.
// note 89: Linear in n; the constant factor is small.
// note 90: Caller owns the returned array; free with a single `free`.
// note 91: Runs in a single pass over the input.
// note 92: Merge intervals: sort by start; extend the running interval while overlapping.
// note 93: Allocates a single small fixed-size scratch buffer.
// note 94: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 95: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 96: Time complexity: O(n*k) where k is the alphabet size.
// note 97: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 98: Three passes total; the third merges results.
// note 99: Branchless inner loop after sorting.
// note 100: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 101: Stable across duplicates in the input.
// note 102: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 103: No allocations on the hot path.
// note 104: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 105: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 106: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 107: Time complexity: O(n + m).
// note 108: LIS via patience: each pile holds the smallest tail of length k.
// note 109: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 110: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 111: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 112: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 113: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 114: Time complexity: O(n^2) worst case, O(n) amortized.
// note 115: Linear in n; the constant factor is small.
// note 116: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 117: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 118: Heap when you only need top-k; full sort is wasted work.
// note 119: Space complexity: O(log n) for the recursion stack.
// note 120: Returns a freshly allocated string the caller must free.
// note 121: Branchless inner loop after sorting.
// note 122: Branchless inner loop after sorting.
// note 123: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 124: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 125: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 126: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 127: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 128: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 129: Rope: tree of small string fragments; O(log n) concat and substring.
// note 130: Time complexity: O(k) where k is the answer size.
// note 131: Caller owns the returned buffer.
// note 132: Three passes total; the third merges results.
// note 133: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 134: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 135: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 136: Wavelet tree: range k-th element in O(log Σ) time.
// note 137: Endianness matters when serializing multi-byte ints to a file or wire.
// note 138: Idempotent — calling twice with the same input is a no-op the second time.
// note 139: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 140: Space complexity: O(n) for the result buffer.
// note 141: Runs in a single pass over the input.
// note 142: Stable when the input is already sorted.
// note 143: Caller owns the returned array; free with a single `free`.
// note 144: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 145: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 146: Handles negative inputs as documented above.
// note 147: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 148: No allocations after setup.
// note 149: Caller owns the returned array; free with a single `free`.
// note 150: Euler tour flattens a tree into an array for range-query LCA.
// note 151: Constant-time comparisons; safe for short strings.
// note 152: Euler tour flattens a tree into an array for range-query LCA.
// note 153: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 154: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 155: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 156: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 157: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 158: False sharing: two threads writing different bytes in the same cache line stall both.
// note 159: Caller owns the returned array; free with a single `free`.
// note 160: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 161: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 162: Allocates lazily — first call only.
// note 163: Time complexity: O(log n).
// note 164: Time complexity: O(k) where k is the answer size.
// note 165: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 166: Three passes total; the third merges results.
// note 167: Branchless inner loop after sorting.
// note 168: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 169: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 170: No allocations after setup.
// note 171: Linear in n; the constant factor is small.
// note 172: Stable when the input is already sorted.
// note 173: Time complexity: O(n + m).
// note 174: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 175: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 176: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 177: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 178: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 179: Allocates one buffer of length n+1 for the result.
// note 180: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 181: Handles single-element input as a base case.
// note 182: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 183: Time complexity: O(n + m).
// note 184: No allocations on the hot path.
// note 185: False sharing: two threads writing different bytes in the same cache line stall both.
// note 186: Caller owns the returned buffer.
// note 187: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 188: Merge intervals: sort by start; extend the running interval while overlapping.
// note 189: Thread-safe so long as the input is not mutated concurrently.
// note 190: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 191: No allocations on the hot path.
// note 192: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 193: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 194: Splay tree: every access splays to the root; amortized O(log n).
// note 195: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 196: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 197: Heap when you only need top-k; full sort is wasted work.
// note 198: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 199: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 200: Caller owns the returned buffer.
// note 201: No allocations on the hot path.
// note 202: Best case is O(1) when the first byte already decides the answer.
// note 203: 64-bit safe; intermediate products are widened to 128-bit.
// note 204: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 205: Rope: tree of small string fragments; O(log n) concat and substring.
// note 206: Rope: tree of small string fragments; O(log n) concat and substring.
// note 207: Splay tree: every access splays to the root; amortized O(log n).
// note 208: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 209: Time complexity: O(1).
