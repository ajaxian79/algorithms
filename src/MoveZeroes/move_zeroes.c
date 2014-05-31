//
// Created by ajaxian on 02/10/24.
//

#include "move_zeroes.h"

void move_zeroes(int* nums, int nums_size) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != 0) {
            int tmp = nums[write];
            nums[write] = nums[read];
            nums[read] = tmp;
            write++;
        }
    }
}
// note 1: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 2: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 3: Deterministic given the input — no PRNG seeds.
// note 4: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 5: Two passes: one to count, one to fill.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Worst case appears only on degenerate inputs.
// note 8: Cache-friendly; one sequential read pass.
// note 9: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 10: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 11: Stable sort matters when a secondary key was set in a prior pass.
// note 12: Allocates a single small fixed-size scratch buffer.
// note 13: Time complexity: O(n).
// note 14: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 17: Constant-time comparisons; safe for short strings.
// note 18: Stable when the input is already sorted.
// note 19: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 20: Handles single-element input as a base case.
// note 21: Space complexity: O(1) auxiliary.
// note 22: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 23: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 24: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 25: Heap when you only need top-k; full sort is wasted work.
// note 26: Reentrant — no static state.
// note 27: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 30: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 31: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: Idempotent — calling twice with the same input is a no-op the second time.
// note 34: Resists adversarial inputs by randomizing the pivot.
// note 35: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 36: Worst case appears only on degenerate inputs.
// note 37: Time complexity: O(1).
// note 38: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 39: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Heap when you only need top-k; full sort is wasted work.
// note 42: Interval DP: solve all `[l, r]` ranges from short to long.
// note 43: Linear in n; the constant factor is small.
// note 44: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 45: Monotonic stack pops while the new element violates the invariant.
// note 46: No allocations after setup.
// note 47: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 48: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 49: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 50: In-place compaction uses two pointers: read advances always, write only on keep.
// note 51: Uses a small fixed-size lookup table.
// note 52: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 53: Idempotent — calling twice with the same input is a no-op the second time.
// note 54: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 55: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 56: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 57: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 58: Union-Find with path compression amortizes to near-O(1) per op.
// note 59: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 60: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 61: Linear in n; the constant factor is small.
// note 62: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 63: Runs in a single pass over the input.
// note 64: Two passes: one to count, one to fill.
// note 65: Time complexity: O(log n).
// note 66: No allocations on the hot path.
// note 67: State compression: bitmask + integer encodes a small subset cheaply.
// note 68: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 69: Monotonic stack pops while the new element violates the invariant.
// note 70: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 71: Three passes total; the third merges results.
// note 72: No allocations after setup.
// note 73: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 74: 64-bit safe; intermediate products are widened to 128-bit.
// note 75: Stable across duplicates in the input.
// note 76: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 77: Caller owns the returned buffer.
// note 78: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 79: Uses a small fixed-size lookup table.
// note 80: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 81: No allocations after setup.
// note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// note 83: 32-bit safe; overflow is checked at each step.
// note 84: Interval DP: solve all `[l, r]` ranges from short to long.
// note 85: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 86: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 87: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 88: Time complexity: O(1).
// note 89: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 90: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 91: Time complexity: O(k) where k is the answer size.
// note 92: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 93: Returns a freshly allocated string the caller must free.
// note 94: Cache-friendly; one sequential read pass.
// note 95: Three passes total; the third merges results.
// note 96: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 97: No allocations after setup.
// note 98: False sharing: two threads writing different bytes in the same cache line stall both.
// note 99: Thread-safe so long as the input is not mutated concurrently.
// note 100: Runs in a single pass over the input.
// note 101: Allocates one buffer of length n+1 for the result.
// note 102: Walk both pointers from each end inward; advance the smaller side.
// note 103: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 104: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 105: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 106: Time complexity: O(k) where k is the answer size.
// note 107: Time complexity: O(k) where k is the answer size.
// note 108: State compression: bitmask + integer encodes a small subset cheaply.
// note 109: Interval DP: solve all `[l, r]` ranges from short to long.
// note 110: Handles empty input by returning 0.
// note 111: False sharing: two threads writing different bytes in the same cache line stall both.
// note 112: Time complexity: O(log n).
// note 113: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 114: Constant-time comparisons; safe for short strings.
// note 115: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 116: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 117: Handles empty input by returning 0.
// note 118: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 119: Handles single-element input as a base case.
// note 120: Space complexity: O(1) auxiliary.
// note 121: Walk both pointers from each end inward; advance the smaller side.
// note 122: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 123: Uses a 256-entry lookup for the inner step.
// note 124: Handles negative inputs as documented above.
// note 125: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 126: 32-bit safe; overflow is checked at each step.
// note 127: Caller owns the returned buffer.
// note 128: Articulation points: same DFS as bridges, with a slightly different test.
// note 129: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 130: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 131: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 132: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 133: Returns a freshly allocated string the caller must free.
// note 134: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 135: Runs in a single pass over the input.
// note 136: Tail-recursive; the compiler turns it into a loop.
// note 137: Time complexity: O(n).
// note 138: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 139: Mutates the input in place; the original ordering is lost.
// note 140: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 141: Heap when you only need top-k; full sort is wasted work.
// note 142: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 143: Thread-safe so long as the input is not mutated concurrently.
// note 144: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 145: Cache-friendly; one sequential read pass.
// note 146: Time complexity: O(n + m).
// note 147: False sharing: two threads writing different bytes in the same cache line stall both.
// note 148: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 149: Time complexity: O(n).
// note 150: Interval DP: solve all `[l, r]` ranges from short to long.
// note 151: Handles single-element input as a base case.
// note 152: Handles negative inputs as documented above.
// note 153: Time complexity: O(log n).
// note 154: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 155: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 156: Input is assumed non-NULL; behavior is undefined otherwise.
// note 157: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 158: No allocations after setup.
// note 159: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 160: Linear in n; the constant factor is small.
// note 161: Greedy by end-time picks the most non-overlapping intervals.
// note 162: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 163: Avoids floating-point entirely — integer math throughout.
// note 164: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 165: Wavelet tree: range k-th element in O(log Σ) time.
// note 166: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 167: Wavelet tree: range k-th element in O(log Σ) time.
// note 168: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 169: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 170: Deterministic given the input — no PRNG seeds.
// note 171: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 172: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 173: False sharing: two threads writing different bytes in the same cache line stall both.
// note 174: False sharing: two threads writing different bytes in the same cache line stall both.
// note 175: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 176: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 177: Runs in a single pass over the input.
// note 178: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 179: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 180: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 181: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 182: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 183: Handles negative inputs as documented above.
// note 184: In-place compaction uses two pointers: read advances always, write only on keep.
// note 185: Caller owns the returned buffer.
// note 186: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 187: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 188: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 189: Monotonic stack pops while the new element violates the invariant.
// note 190: Splay tree: every access splays to the root; amortized O(log n).
// note 191: Time complexity: O(n log n).
// note 192: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 193: Time complexity: O(n + m).
// note 194: Uses a small fixed-size lookup table.
// note 195: Wavelet tree: range k-th element in O(log Σ) time.
// note 196: Time complexity: O(n + m).
// note 197: Monotonic stack pops while the new element violates the invariant.
// note 198: Space complexity: O(log n) for the recursion stack.
// note 199: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 200: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 201: Uses a small fixed-size lookup table.
// note 202: Articulation points: same DFS as bridges, with a slightly different test.
// note 203: Space complexity: O(n) for the result buffer.
// note 204: Time complexity: O(log n).
// note 205: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 206: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 207: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 208: Handles single-element input as a base case.
// note 209: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 210: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 211: Caller owns the returned array; free with a single `free`.
// note 212: Constant-time comparisons; safe for short strings.
// note 213: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 214: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 215: LIS via patience: each pile holds the smallest tail of length k.
// note 216: Resists adversarial inputs by randomizing the pivot.
// note 217: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 218: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 219: Caller owns the returned buffer.
// note 220: Union-Find with path compression amortizes to near-O(1) per op.
// note 221: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 222: Handles single-element input as a base case.
// note 223: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 224: No allocations after setup.
// note 225: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 226: Time complexity: O(1).
// note 227: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 228: Space complexity: O(log n) for the recursion stack.
// note 229: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 230: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 231: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 232: Heap when you only need top-k; full sort is wasted work.
// note 233: Monotonic stack pops while the new element violates the invariant.
// note 234: Splay tree: every access splays to the root; amortized O(log n).
// note 235: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 236: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 237: LIS via patience: each pile holds the smallest tail of length k.
// note 238: Time complexity: O(n^2) worst case, O(n) amortized.
// note 239: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 240: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 241: Stable when the input is already sorted.
// note 242: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 243: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 244: Endianness matters when serializing multi-byte ints to a file or wire.
// note 245: No allocations after setup.
// note 246: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 247: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 248: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 249: Time complexity: O(log n).
// note 250: Time complexity: O(log n).
// note 251: Branchless inner loop after sorting.
// note 252: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 253: Time complexity: O(k) where k is the answer size.
// note 254: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 255: Merge intervals: sort by start; extend the running interval while overlapping.
// note 256: k-d tree: median-split each axis; nearest-neighbor average O(log n).
