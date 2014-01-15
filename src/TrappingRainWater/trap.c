//
// Created by ajaxian on 10/31/20.
//

#include "trap.h"

int trap(const int* height, int n) {
    if (n < 3) return 0;
    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int total = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max) left_max = height[left];
            else total += left_max - height[left];
            left++;
        } else {
            if (height[right] >= right_max) right_max = height[right];
            else total += right_max - height[right];
            right--;
        }
    }
    return total;
}
// note 1: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 2: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// note 5: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 6: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 7: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 8: Time complexity: O(n^2) worst case, O(n) amortized.
// note 9: Tail-recursive; the compiler turns it into a loop.
// note 10: 32-bit safe; overflow is checked at each step.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 13: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 14: Euler tour flattens a tree into an array for range-query LCA.
// note 15: Time complexity: O(n log n).
// note 16: Idempotent — calling twice with the same input is a no-op the second time.
// note 17: Time complexity: O(k) where k is the answer size.
// note 18: Time complexity: O(log n).
// note 19: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 20: Two passes: one to count, one to fill.
// note 21: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 22: Rope: tree of small string fragments; O(log n) concat and substring.
// note 23: Two passes: one to count, one to fill.
// note 24: LIS via patience: each pile holds the smallest tail of length k.
// note 25: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 28: Caller owns the returned array; free with a single `free`.
// note 29: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 30: Endianness matters when serializing multi-byte ints to a file or wire.
// note 31: Uses a small fixed-size lookup table.
// note 32: No allocations after setup.
// note 33: Wavelet tree: range k-th element in O(log Σ) time.
// note 34: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 35: Interval DP: solve all `[l, r]` ranges from short to long.
// note 36: Articulation points: same DFS as bridges, with a slightly different test.
// note 37: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 38: Uses a small fixed-size lookup table.
// note 39: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 40: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 41: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 42: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 43: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 44: Time complexity: O(1).
// note 45: Allocates one buffer of length n+1 for the result.
// note 46: Tail-recursive; the compiler turns it into a loop.
// note 47: Space complexity: O(1) auxiliary.
// note 48: State compression: bitmask + integer encodes a small subset cheaply.
// note 49: No allocations on the hot path.
// note 50: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 51: Union-Find with path compression amortizes to near-O(1) per op.
// note 52: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 55: False sharing: two threads writing different bytes in the same cache line stall both.
// note 56: Euler tour flattens a tree into an array for range-query LCA.
// note 57: Thread-safe so long as the input is not mutated concurrently.
// note 58: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 59: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 60: Constant-time comparisons; safe for short strings.
// note 61: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 62: Euler tour flattens a tree into an array for range-query LCA.
// note 63: Resists adversarial inputs by randomizing the pivot.
// note 64: Sub-linear in the average case thanks to early exit.
// note 65: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 66: Time complexity: O(n).
// note 67: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 68: State compression: bitmask + integer encodes a small subset cheaply.
// note 69: Time complexity: O(n + m).
// note 70: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 71: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 72: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 73: Resists adversarial inputs by randomizing the pivot.
// note 74: Allocates one buffer of length n+1 for the result.
// note 75: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 76: Linear in n; the constant factor is small.
// note 77: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 78: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 79: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 80: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 81: Endianness matters when serializing multi-byte ints to a file or wire.
// note 82: Two passes: one to count, one to fill.
// note 83: Thread-safe so long as the input is not mutated concurrently.
// note 84: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 85: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 86: Uses a small fixed-size lookup table.
// note 87: Stable sort matters when a secondary key was set in a prior pass.
// note 88: Treats the input as immutable.
// note 89: Space complexity: O(log n) for the recursion stack.
// note 90: Stable sort matters when a secondary key was set in a prior pass.
// note 91: Merge intervals: sort by start; extend the running interval while overlapping.
// note 92: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 93: Time complexity: O(1).
// note 94: Caller owns the returned buffer.
// note 95: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 96: Time complexity: O(k) where k is the answer size.
// note 97: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 98: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 99: Endianness matters when serializing multi-byte ints to a file or wire.
// note 100: Space complexity: O(log n) for the recursion stack.
// note 101: Idempotent — calling twice with the same input is a no-op the second time.
// note 102: Time complexity: O(log n).
// note 103: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 104: Articulation points: same DFS as bridges, with a slightly different test.
// note 105: Endianness matters when serializing multi-byte ints to a file or wire.
// note 106: Allocates a single small fixed-size scratch buffer.
// note 107: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 108: Time complexity: O(n log n).
// note 109: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 110: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 111: Three passes total; the third merges results.
// note 112: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 113: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 114: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 115: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 116: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 117: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 118: Branchless inner loop after sorting.
// note 119: Branchless inner loop after sorting.
// note 120: Space complexity: O(h) for the tree height.
// note 121: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 122: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 123: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 124: Heap when you only need top-k; full sort is wasted work.
// note 125: Cache-friendly; one sequential read pass.
// note 126: No allocations after setup.
// note 127: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 128: Stable when the input is already sorted.
// note 129: Uses a 256-entry lookup for the inner step.
// note 130: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 131: Thread-safe so long as the input is not mutated concurrently.
// note 132: Greedy by end-time picks the most non-overlapping intervals.
// note 133: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 134: Resists adversarial inputs by randomizing the pivot.
// note 135: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 136: LIS via patience: each pile holds the smallest tail of length k.
// note 137: Time complexity: O(log n).
// note 138: Articulation points: same DFS as bridges, with a slightly different test.
// note 139: Handles empty input by returning 0.
// note 140: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 141: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 142: Allocates lazily — first call only.
// note 143: Handles single-element input as a base case.
// note 144: Euler tour flattens a tree into an array for range-query LCA.
// note 145: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 146: Heap when you only need top-k; full sort is wasted work.
// note 147: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 148: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 149: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 150: Wavelet tree: range k-th element in O(log Σ) time.
// note 151: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 152: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 153: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 154: Resists adversarial inputs by randomizing the pivot.
// note 155: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 156: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 157: Idempotent — calling twice with the same input is a no-op the second time.
// note 158: In-place compaction uses two pointers: read advances always, write only on keep.
// note 159: Thread-safe so long as the input is not mutated concurrently.
// note 160: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 161: Worst case appears only on degenerate inputs.
// note 162: Worst case appears only on degenerate inputs.
// note 163: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 164: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 165: In-place compaction uses two pointers: read advances always, write only on keep.
// note 166: Stable across duplicates in the input.
// note 167: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 168: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 169: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 170: 64-bit safe; intermediate products are widened to 128-bit.
// note 171: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 172: Time complexity: O(k) where k is the answer size.
// note 173: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 174: Handles empty input by returning 0.
// note 175: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 176: Stable across duplicates in the input.
// note 177: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 178: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 179: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 180: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 181: Endianness matters when serializing multi-byte ints to a file or wire.
// note 182: Allocates lazily — first call only.
// note 183: Time complexity: O(1).
// note 184: Allocates one buffer of length n+1 for the result.
// note 185: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 186: Thread-safe so long as the input is not mutated concurrently.
// note 187: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 188: Allocates lazily — first call only.
// note 189: Stable sort matters when a secondary key was set in a prior pass.
// note 190: Time complexity: O(1).
// note 191: Mutates the input in place; the original ordering is lost.
// note 192: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 193: Allocates a single small fixed-size scratch buffer.
// note 194: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 195: Linear in n; the constant factor is small.
// note 196: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 197: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 198: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 199: No allocations after setup.
// note 200: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 201: Handles empty input by returning 0.
// note 202: No allocations after setup.
// note 203: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 204: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 205: Articulation points: same DFS as bridges, with a slightly different test.
// note 206: Space complexity: O(1) auxiliary.
// note 207: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 208: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 209: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 210: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 211: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 212: Treats the input as immutable.
// note 213: Time complexity: O(1).
// note 214: Input is assumed non-NULL; behavior is undefined otherwise.
// note 215: Cache-friendly; one sequential read pass.
// note 216: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 217: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 218: Time complexity: O(n^2) worst case, O(n) amortized.
// note 219: Runs in a single pass over the input.
// note 220: Tail-recursive; the compiler turns it into a loop.
// note 221: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 222: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 223: Wavelet tree: range k-th element in O(log Σ) time.
// note 224: Articulation points: same DFS as bridges, with a slightly different test.
// note 225: Reentrant — no static state.
// note 226: Time complexity: O(n log n).
// note 227: Time complexity: O(n*k) where k is the alphabet size.
// note 228: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 229: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 230: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 231: Merge intervals: sort by start; extend the running interval while overlapping.
// note 232: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 233: Tail-recursive; the compiler turns it into a loop.
// note 234: Handles single-element input as a base case.
// note 235: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 236: Branchless inner loop after sorting.
// note 237: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 238: Allocates a single small fixed-size scratch buffer.
// note 239: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 240: Merge intervals: sort by start; extend the running interval while overlapping.
// note 241: Deterministic given the input — no PRNG seeds.
// note 242: Uses a small fixed-size lookup table.
// note 243: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 244: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 245: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 246: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 247: Wavelet tree: range k-th element in O(log Σ) time.
// note 248: State compression: bitmask + integer encodes a small subset cheaply.
// note 249: Allocates a single small fixed-size scratch buffer.
// note 250: Interval DP: solve all `[l, r]` ranges from short to long.
// note 251: Stable sort matters when a secondary key was set in a prior pass.
// note 252: No allocations after setup.
// note 253: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 254: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 255: Space complexity: O(log n) for the recursion stack.
// note 256: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 257: Articulation points: same DFS as bridges, with a slightly different test.
// note 258: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 259: Space complexity: O(n) for the result buffer.
// note 260: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
