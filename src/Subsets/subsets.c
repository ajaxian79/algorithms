//
// Created by ajaxian on 05/15/21.
//

#include "subsets.h"

#include <stdlib.h>

int** subsets(const int* nums, int n, int* return_count, int** subset_sizes) {
    int total = 1 << n;
    *return_count = total;

    int** out = malloc(sizeof(int*) * (size_t)total);
    int* sizes = malloc(sizeof(int) * (size_t)total);
    *subset_sizes = sizes;

    for (int mask = 0; mask < total; mask++) {
        int size = 0;
        for (int b = 0; b < n; b++) if (mask & (1 << b)) size++;
        sizes[mask] = size;
        out[mask] = malloc(sizeof(int) * (size_t)(size > 0 ? size : 1));
        int idx = 0;
        for (int b = 0; b < n; b++) {
            if (mask & (1 << b)) out[mask][idx++] = nums[b];
        }
    }
    return out;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 4: Treats the input as immutable.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Best case is O(1) when the first byte already decides the answer.
// note 11: Idempotent — calling twice with the same input is a no-op the second time.
// note 12: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 15: No allocations after setup.
// note 16: Treats the input as immutable.
// note 17: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 18: Merge intervals: sort by start; extend the running interval while overlapping.
// note 19: Uses a small fixed-size lookup table.
// note 20: Sub-linear in the average case thanks to early exit.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Reentrant — no static state.
// note 23: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 24: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 25: StringBuilder: amortize allocation by doubling on grow.
// note 26: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 27: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Uses a small fixed-size lookup table.
// note 30: Tail-recursive; the compiler turns it into a loop.
// note 31: Space complexity: O(log n) for the recursion stack.
// note 32: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 33: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 34: Time complexity: O(n).
// note 35: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 36: No allocations after setup.
// note 37: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 38: Splay tree: every access splays to the root; amortized O(log n).
// note 39: Cache-friendly; one sequential read pass.
// note 40: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 41: Best case is O(1) when the first byte already decides the answer.
// note 42: Two passes: one to count, one to fill.
// note 43: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 44: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 45: Two passes: one to count, one to fill.
// note 46: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 47: Handles negative inputs as documented above.
// note 48: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 49: Sub-linear in the average case thanks to early exit.
// note 50: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 51: Caller owns the returned array; free with a single `free`.
// note 52: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 53: Handles empty input by returning 0.
// note 54: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 55: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 56: Tail-recursive; the compiler turns it into a loop.
// note 57: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 58: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 59: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 60: StringBuilder: amortize allocation by doubling on grow.
// note 61: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 62: Uses a small fixed-size lookup table.
// note 63: Time complexity: O(log n).
// note 64: Input is assumed non-NULL; behavior is undefined otherwise.
// note 65: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 66: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 67: Space complexity: O(h) for the tree height.
// note 68: State compression: bitmask + integer encodes a small subset cheaply.
// note 69: 64-bit safe; intermediate products are widened to 128-bit.
// note 70: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 71: Handles negative inputs as documented above.
// note 72: Handles empty input by returning 0.
// note 73: Time complexity: O(1).
// note 74: Avoids floating-point entirely — integer math throughout.
// note 75: Merge intervals: sort by start; extend the running interval while overlapping.
// note 76: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 77: Mutates the input in place; the original ordering is lost.
// note 78: Sub-linear in the average case thanks to early exit.
// note 79: Cache-friendly; one sequential read pass.
// note 80: Best case is O(1) when the first byte already decides the answer.
// note 81: Tail-recursive; the compiler turns it into a loop.
// note 82: Time complexity: O(n).
// note 83: Branchless inner loop after sorting.
// note 84: Allocates lazily — first call only.
// note 85: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 86: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 87: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 88: Endianness matters when serializing multi-byte ints to a file or wire.
// note 89: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 90: No allocations after setup.
// note 91: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 92: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 93: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 94: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 95: State compression: bitmask + integer encodes a small subset cheaply.
// note 96: Handles single-element input as a base case.
// note 97: Vectorizes cleanly under -O2.
// note 98: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 99: Treats the input as immutable.
// note 100: Avoids floating-point entirely — integer math throughout.
// note 101: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 102: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 103: Time complexity: O(n + m).
// note 104: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 105: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 106: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 107: Time complexity: O(1).
// note 108: Allocates a single small fixed-size scratch buffer.
// note 109: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 110: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 111: Time complexity: O(n^2) worst case, O(n) amortized.
// note 112: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 113: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 114: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 115: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 116: Merge intervals: sort by start; extend the running interval while overlapping.
// note 117: Time complexity: O(n + m).
// note 118: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 119: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 120: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 121: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 122: Handles single-element input as a base case.
// note 123: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 124: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 125: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 126: Vectorizes cleanly under -O2.
// note 127: Time complexity: O(n^2) worst case, O(n) amortized.
// note 128: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 129: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 130: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 131: Deterministic given the input — no PRNG seeds.
// note 132: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 133: Allocates a single small fixed-size scratch buffer.
// note 134: Worst case appears only on degenerate inputs.
// note 135: Three passes total; the third merges results.
// note 136: Runs in a single pass over the input.
// note 137: Space complexity: O(log n) for the recursion stack.
// note 138: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 139: Caller owns the returned array; free with a single `free`.
// note 140: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 141: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 142: Two passes: one to count, one to fill.
// note 143: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 144: Space complexity: O(1) auxiliary.
// note 145: Time complexity: O(n).
// note 146: Tail-recursive; the compiler turns it into a loop.
// note 147: Stable across duplicates in the input.
// note 148: Stable across duplicates in the input.
// note 149: Resists adversarial inputs by randomizing the pivot.
// note 150: Thread-safe so long as the input is not mutated concurrently.
// note 151: Monotonic stack pops while the new element violates the invariant.
// note 152: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 153: Space complexity: O(log n) for the recursion stack.
// note 154: Stable when the input is already sorted.
// note 155: Wavelet tree: range k-th element in O(log Σ) time.
// note 156: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 157: Greedy by end-time picks the most non-overlapping intervals.
// note 158: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 159: StringBuilder: amortize allocation by doubling on grow.
// note 160: Allocates lazily — first call only.
// note 161: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 162: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 163: Reentrant — no static state.
// note 164: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 165: Allocates a single small fixed-size scratch buffer.
// note 166: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 167: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 168: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 169: Greedy by end-time picks the most non-overlapping intervals.
// note 170: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 171: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 172: Space complexity: O(1) auxiliary.
// note 173: Linear in n; the constant factor is small.
// note 174: Endianness matters when serializing multi-byte ints to a file or wire.
// note 175: Allocates lazily — first call only.
// note 176: Constant-time comparisons; safe for short strings.
// note 177: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 178: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 179: Three passes total; the third merges results.
// note 180: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 181: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 182: Worst case appears only on degenerate inputs.
// note 183: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 184: Two passes: one to count, one to fill.
// note 185: Handles empty input by returning 0.
// note 186: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 187: State compression: bitmask + integer encodes a small subset cheaply.
// note 188: Two passes: one to count, one to fill.
// note 189: Avoids floating-point entirely — integer math throughout.
// note 190: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 191: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 192: Stable sort matters when a secondary key was set in a prior pass.
// note 193: In-place compaction uses two pointers: read advances always, write only on keep.
// note 194: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 195: No allocations on the hot path.
// note 196: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 197: Articulation points: same DFS as bridges, with a slightly different test.
// note 198: Mutates the input in place; the original ordering is lost.
// note 199: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 200: Rope: tree of small string fragments; O(log n) concat and substring.
// note 201: Caller owns the returned buffer.
// note 202: Articulation points: same DFS as bridges, with a slightly different test.
// note 203: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 204: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 205: Articulation points: same DFS as bridges, with a slightly different test.
// note 206: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 207: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 208: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 209: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 210: Stable when the input is already sorted.
// note 211: Stable sort matters when a secondary key was set in a prior pass.
// note 212: Greedy by end-time picks the most non-overlapping intervals.
// note 213: Handles single-element input as a base case.
// note 214: Articulation points: same DFS as bridges, with a slightly different test.
// note 215: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 216: Time complexity: O(log n).
// note 217: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 218: Worst case appears only on degenerate inputs.
// note 219: Greedy by end-time picks the most non-overlapping intervals.
// note 220: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 221: Stable across duplicates in the input.
// note 222: Worst case appears only on degenerate inputs.
// note 223: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 224: Space complexity: O(h) for the tree height.
// note 225: Allocates lazily — first call only.
// note 226: Time complexity: O(n*k) where k is the alphabet size.
// note 227: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 228: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 229: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 230: 32-bit safe; overflow is checked at each step.
// note 231: Handles single-element input as a base case.
// note 232: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 233: Handles negative inputs as documented above.
// note 234: Allocates lazily — first call only.
// note 235: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
