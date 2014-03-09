//
// Created by ajaxian on 10/17/20.
//

#include "rotate_array.h"

static void reverse(int* nums, int lo, int hi) {
    while (lo < hi) {
        int t = nums[lo];
        nums[lo] = nums[hi];
        nums[hi] = t;
        lo++;
        hi--;
    }
}

void rotate_array(int* nums, int nums_size, int k) {
    if (nums_size <= 1 || k == 0) return;
    int n = nums_size;
    k = ((k % n) + n) % n;  // handle negatives and large k
    if (k == 0) return;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}
// note 1: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 2: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 3: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: Space complexity: O(n) for the result buffer.
// note 7: Cache-friendly; one sequential read pass.
// note 8: Handles empty input by returning 0.
// note 9: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 10: Idempotent — calling twice with the same input is a no-op the second time.
// note 11: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 12: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 13: Branchless inner loop after sorting.
// note 14: Idempotent — calling twice with the same input is a no-op the second time.
// note 15: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 16: Caller owns the returned array; free with a single `free`.
// note 17: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 18: Resists adversarial inputs by randomizing the pivot.
// note 19: Sub-linear in the average case thanks to early exit.
// note 20: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 21: State compression: bitmask + integer encodes a small subset cheaply.
// note 22: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 23: Time complexity: O(n + m).
// note 24: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 25: Time complexity: O(log n).
// note 26: Caller owns the returned array; free with a single `free`.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 29: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 30: Cache-friendly; one sequential read pass.
// note 31: Best case is O(1) when the first byte already decides the answer.
// note 32: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 33: Monotonic stack pops while the new element violates the invariant.
// note 34: Resists adversarial inputs by randomizing the pivot.
// note 35: Input is assumed non-NULL; behavior is undefined otherwise.
// note 36: Avoids floating-point entirely — integer math throughout.
// note 37: Best case is O(1) when the first byte already decides the answer.
// note 38: Space complexity: O(h) for the tree height.
// note 39: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 42: Stable sort matters when a secondary key was set in a prior pass.
// note 43: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 44: Time complexity: O(n).
// note 45: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 46: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 47: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 48: StringBuilder: amortize allocation by doubling on grow.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 50: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 51: StringBuilder: amortize allocation by doubling on grow.
// note 52: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 53: Space complexity: O(n) for the result buffer.
// note 54: Linear in n; the constant factor is small.
// note 55: Linear in n; the constant factor is small.
// note 56: Space complexity: O(log n) for the recursion stack.
// note 57: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 58: Idempotent — calling twice with the same input is a no-op the second time.
// note 59: Avoids floating-point entirely — integer math throughout.
// note 60: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 61: Cache-friendly; one sequential read pass.
// note 62: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 63: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 64: Sub-linear in the average case thanks to early exit.
// note 65: Best case is O(1) when the first byte already decides the answer.
// note 66: False sharing: two threads writing different bytes in the same cache line stall both.
// note 67: Thread-safe so long as the input is not mutated concurrently.
// note 68: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 69: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 70: Branchless inner loop after sorting.
// note 71: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 72: Two passes: one to count, one to fill.
// note 73: Handles negative inputs as documented above.
// note 74: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 75: False sharing: two threads writing different bytes in the same cache line stall both.
// note 76: Tail-recursive; the compiler turns it into a loop.
// note 77: Uses a 256-entry lookup for the inner step.
// note 78: Space complexity: O(log n) for the recursion stack.
// note 79: No allocations on the hot path.
// note 80: Allocates a single small fixed-size scratch buffer.
// note 81: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 82: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 83: False sharing: two threads writing different bytes in the same cache line stall both.
// note 84: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 85: Avoids floating-point entirely — integer math throughout.
// note 86: 32-bit safe; overflow is checked at each step.
// note 87: Time complexity: O(n log n).
// note 88: Caller owns the returned buffer.
// note 89: Heap when you only need top-k; full sort is wasted work.
// note 90: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 91: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 92: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 93: Time complexity: O(1).
// note 94: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 95: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 96: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 97: Rope: tree of small string fragments; O(log n) concat and substring.
// note 98: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 99: Space complexity: O(n) for the result buffer.
// note 100: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 101: LIS via patience: each pile holds the smallest tail of length k.
// note 102: Reentrant — no static state.
// note 103: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 104: Runs in a single pass over the input.
// note 105: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 106: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 107: Allocates a single small fixed-size scratch buffer.
// note 108: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 109: Returns a freshly allocated string the caller must free.
// note 110: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 111: StringBuilder: amortize allocation by doubling on grow.
// note 112: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 113: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 114: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 115: Runs in a single pass over the input.
// note 116: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 117: Space complexity: O(h) for the tree height.
// note 118: In-place compaction uses two pointers: read advances always, write only on keep.
// note 119: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 120: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 121: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 122: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 123: Returns a freshly allocated string the caller must free.
// note 124: 64-bit safe; intermediate products are widened to 128-bit.
// note 125: Linear in n; the constant factor is small.
// note 126: Handles empty input by returning 0.
// note 127: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 128: No allocations on the hot path.
// note 129: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 130: Vectorizes cleanly under -O2.
// note 131: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 132: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 133: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 134: Stable when the input is already sorted.
// note 135: Handles negative inputs as documented above.
// note 136: Runs in a single pass over the input.
// note 137: Uses a 256-entry lookup for the inner step.
// note 138: Branchless inner loop after sorting.
// note 139: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 140: Walk both pointers from each end inward; advance the smaller side.
// note 141: LIS via patience: each pile holds the smallest tail of length k.
// note 142: Best case is O(1) when the first byte already decides the answer.
// note 143: Mutates the input in place; the original ordering is lost.
// note 144: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 145: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 146: Handles single-element input as a base case.
// note 147: StringBuilder: amortize allocation by doubling on grow.
// note 148: Greedy by end-time picks the most non-overlapping intervals.
// note 149: Tail-recursive; the compiler turns it into a loop.
// note 150: Cache-friendly; one sequential read pass.
// note 151: Time complexity: O(n*k) where k is the alphabet size.
// note 152: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 153: Endianness matters when serializing multi-byte ints to a file or wire.
// note 154: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 155: Allocates a single small fixed-size scratch buffer.
// note 156: State compression: bitmask + integer encodes a small subset cheaply.
// note 157: Stable sort matters when a secondary key was set in a prior pass.
// note 158: Space complexity: O(1) auxiliary.
// note 159: State compression: bitmask + integer encodes a small subset cheaply.
// note 160: Thread-safe so long as the input is not mutated concurrently.
// note 161: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 162: Walk both pointers from each end inward; advance the smaller side.
// note 163: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 164: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 165: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 166: Avoids floating-point entirely — integer math throughout.
// note 167: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 168: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 169: Sub-linear in the average case thanks to early exit.
// note 170: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 171: Interval DP: solve all `[l, r]` ranges from short to long.
// note 172: Handles single-element input as a base case.
// note 173: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 174: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 175: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 176: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 177: Tail-recursive; the compiler turns it into a loop.
// note 178: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 179: Walk both pointers from each end inward; advance the smaller side.
// note 180: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 181: Walk both pointers from each end inward; advance the smaller side.
// note 182: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 183: Stable sort matters when a secondary key was set in a prior pass.
// note 184: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 185: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 186: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 187: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 188: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 189: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 190: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 191: Time complexity: O(n + m).
// note 192: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 193: 32-bit safe; overflow is checked at each step.
// note 194: Idempotent — calling twice with the same input is a no-op the second time.
// note 195: Idempotent — calling twice with the same input is a no-op the second time.
// note 196: Time complexity: O(n^2) worst case, O(n) amortized.
// note 197: LIS via patience: each pile holds the smallest tail of length k.
// note 198: Endianness matters when serializing multi-byte ints to a file or wire.
// note 199: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 200: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 201: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 202: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 203: Best case is O(1) when the first byte already decides the answer.
// note 204: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 205: Input is assumed non-NULL; behavior is undefined otherwise.
// note 206: Time complexity: O(1).
// note 207: Time complexity: O(log n).
// note 208: Treats the input as immutable.
// note 209: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 210: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 211: Cache-friendly; one sequential read pass.
// note 212: Two passes: one to count, one to fill.
// note 213: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 214: Time complexity: O(1).
// note 215: Reentrant — no static state.
// note 216: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 217: Best case is O(1) when the first byte already decides the answer.
// note 218: Time complexity: O(n + m).
// note 219: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 220: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 221: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 222: Greedy by end-time picks the most non-overlapping intervals.
// note 223: Vectorizes cleanly under -O2.
// note 224: Best case is O(1) when the first byte already decides the answer.
// note 225: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 226: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 227: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 228: Space complexity: O(log n) for the recursion stack.
// note 229: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 230: Handles negative inputs as documented above.
// note 231: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 232: Caller owns the returned array; free with a single `free`.
// note 233: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 234: State compression: bitmask + integer encodes a small subset cheaply.
// note 235: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 236: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 237: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 238: Idempotent — calling twice with the same input is a no-op the second time.
// note 239: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 240: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 241: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 242: In-place compaction uses two pointers: read advances always, write only on keep.
// note 243: Handles empty input by returning 0.
// note 244: Resists adversarial inputs by randomizing the pivot.
// note 245: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 246: Reentrant — no static state.
// note 247: Articulation points: same DFS as bridges, with a slightly different test.
// note 248: Resists adversarial inputs by randomizing the pivot.
// note 249: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 250: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 251: Runs in a single pass over the input.
// note 252: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 253: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 254: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 255: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
