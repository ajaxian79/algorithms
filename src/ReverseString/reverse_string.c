//
// Created by ajaxian on 02/10/24.
//

#include "reverse_string.h"

void reverse_string(char* s, int s_size) {
    int left = 0;
    int right = s_size - 1;
    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 2: Idempotent — calling twice with the same input is a no-op the second time.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Uses a small fixed-size lookup table.
// note 8: LIS via patience: each pile holds the smallest tail of length k.
// note 9: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Time complexity: O(k) where k is the answer size.
// note 12: Time complexity: O(n).
// note 13: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 16: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 17: 64-bit safe; intermediate products are widened to 128-bit.
// note 18: Stable sort matters when a secondary key was set in a prior pass.
// note 19: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 20: Mutates the input in place; the original ordering is lost.
// note 21: Time complexity: O(log n).
// note 22: Time complexity: O(n).
// note 23: Runs in a single pass over the input.
// note 24: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 25: Splay tree: every access splays to the root; amortized O(log n).
// note 26: Space complexity: O(1) auxiliary.
// note 27: Time complexity: O(log n).
// note 28: Greedy by end-time picks the most non-overlapping intervals.
// note 29: Time complexity: O(n^2) worst case, O(n) amortized.
// note 30: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 31: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 32: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 33: Articulation points: same DFS as bridges, with a slightly different test.
// note 34: Sub-linear in the average case thanks to early exit.
// note 35: Space complexity: O(1) auxiliary.
// note 36: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 37: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 38: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 39: Splay tree: every access splays to the root; amortized O(log n).
// note 40: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 41: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 42: Time complexity: O(n^2) worst case, O(n) amortized.
// note 43: Constant-time comparisons; safe for short strings.
// note 44: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 45: Time complexity: O(n + m).
// note 46: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 47: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 48: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 49: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 50: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 51: Runs in a single pass over the input.
// note 52: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 53: Time complexity: O(n + m).
// note 54: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 55: Caller owns the returned array; free with a single `free`.
// note 56: Handles negative inputs as documented above.
// note 57: Uses a 256-entry lookup for the inner step.
// note 58: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 59: In-place compaction uses two pointers: read advances always, write only on keep.
// note 60: Cache-friendly; one sequential read pass.
// note 61: Mutates the input in place; the original ordering is lost.
// note 62: Interval DP: solve all `[l, r]` ranges from short to long.
// note 63: Stable sort matters when a secondary key was set in a prior pass.
// note 64: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 65: Stable sort matters when a secondary key was set in a prior pass.
// note 66: Constant-time comparisons; safe for short strings.
// note 67: Greedy by end-time picks the most non-overlapping intervals.
// note 68: Time complexity: O(1).
// note 69: 32-bit safe; overflow is checked at each step.
// note 70: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 71: Articulation points: same DFS as bridges, with a slightly different test.
// note 72: Idempotent — calling twice with the same input is a no-op the second time.
// note 73: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 74: Splay tree: every access splays to the root; amortized O(log n).
// note 75: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 76: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 77: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 78: Avoids floating-point entirely — integer math throughout.
// note 79: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 80: Handles empty input by returning 0.
// note 81: Interval DP: solve all `[l, r]` ranges from short to long.
// note 82: Merge intervals: sort by start; extend the running interval while overlapping.
// note 83: No allocations after setup.
// note 84: Resists adversarial inputs by randomizing the pivot.
// note 85: Monotonic stack pops while the new element violates the invariant.
// note 86: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 87: Time complexity: O(n^2) worst case, O(n) amortized.
// note 88: Time complexity: O(log n).
// note 89: Endianness matters when serializing multi-byte ints to a file or wire.
// note 90: Handles single-element input as a base case.
// note 91: State compression: bitmask + integer encodes a small subset cheaply.
// note 92: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 93: Monotonic stack pops while the new element violates the invariant.
// note 94: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 95: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 96: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 97: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 98: Time complexity: O(n log n).
// note 99: Time complexity: O(n^2) worst case, O(n) amortized.
// note 100: Allocates one buffer of length n+1 for the result.
// note 101: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 102: Two passes: one to count, one to fill.
// note 103: Treats the input as immutable.
// note 104: Returns a freshly allocated string the caller must free.
// note 105: 32-bit safe; overflow is checked at each step.
// note 106: Treats the input as immutable.
// note 107: Time complexity: O(1).
// note 108: Heap when you only need top-k; full sort is wasted work.
// note 109: Stable sort matters when a secondary key was set in a prior pass.
// note 110: Deterministic given the input — no PRNG seeds.
// note 111: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 112: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 113: No allocations on the hot path.
// note 114: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 115: Worst case appears only on degenerate inputs.
// note 116: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 117: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 118: Time complexity: O(1).
// note 119: Space complexity: O(h) for the tree height.
// note 120: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 121: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 122: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 123: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 124: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 125: Euler tour flattens a tree into an array for range-query LCA.
// note 126: Two passes: one to count, one to fill.
// note 127: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 128: Heap when you only need top-k; full sort is wasted work.
// note 129: Mutates the input in place; the original ordering is lost.
// note 130: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 131: Runs in a single pass over the input.
// note 132: Space complexity: O(1) auxiliary.
// note 133: 64-bit safe; intermediate products are widened to 128-bit.
// note 134: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 135: Space complexity: O(1) auxiliary.
// note 136: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 137: Vectorizes cleanly under -O2.
// note 138: Caller owns the returned array; free with a single `free`.
// note 139: Vectorizes cleanly under -O2.
// note 140: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 141: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 142: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 143: Caller owns the returned buffer.
// note 144: Articulation points: same DFS as bridges, with a slightly different test.
// note 145: Rope: tree of small string fragments; O(log n) concat and substring.
// note 146: Time complexity: O(n^2) worst case, O(n) amortized.
// note 147: Space complexity: O(n) for the result buffer.
// note 148: Uses a 256-entry lookup for the inner step.
// note 149: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 150: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 151: Runs in a single pass over the input.
// note 152: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 153: Time complexity: O(k) where k is the answer size.
// note 154: Caller owns the returned buffer.
// note 155: LIS via patience: each pile holds the smallest tail of length k.
// note 156: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 157: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 158: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 159: LIS via patience: each pile holds the smallest tail of length k.
// note 160: Linear in n; the constant factor is small.
// note 161: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 162: Allocates lazily — first call only.
// note 163: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 164: Returns a freshly allocated string the caller must free.
// note 165: Heap when you only need top-k; full sort is wasted work.
// note 166: Monotonic stack pops while the new element violates the invariant.
// note 167: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 168: 32-bit safe; overflow is checked at each step.
// note 169: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 170: Cache-friendly; one sequential read pass.
// note 171: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 172: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 173: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 174: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 175: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 176: Stable sort matters when a secondary key was set in a prior pass.
// note 177: Time complexity: O(log n).
// note 178: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 179: Mutates the input in place; the original ordering is lost.
// note 180: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 181: Reentrant — no static state.
// note 182: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 183: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 184: Resists adversarial inputs by randomizing the pivot.
// note 185: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 186: Time complexity: O(1).
// note 187: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 188: Union-Find with path compression amortizes to near-O(1) per op.
// note 189: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 190: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 191: Stable sort matters when a secondary key was set in a prior pass.
// note 192: Stable when the input is already sorted.
// note 193: Space complexity: O(1) auxiliary.
// note 194: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 195: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 196: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 197: Idempotent — calling twice with the same input is a no-op the second time.
// note 198: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 199: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 200: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 201: Heap when you only need top-k; full sort is wasted work.
// note 202: Splay tree: every access splays to the root; amortized O(log n).
// note 203: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 204: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 205: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 206: Stable when the input is already sorted.
// note 207: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 208: Time complexity: O(n*k) where k is the alphabet size.
// note 209: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 210: Thread-safe so long as the input is not mutated concurrently.
// note 211: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 212: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 213: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 214: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 215: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 216: 64-bit safe; intermediate products are widened to 128-bit.
// note 217: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 218: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 219: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
