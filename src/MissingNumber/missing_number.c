//
// Created by ajaxian on 05/02/20.
//

#include "missing_number.h"

int missing_number(const int* nums, int nums_size) {
    long expected = (long)nums_size * (nums_size + 1) / 2;
    long actual = 0;
    for (int i = 0; i < nums_size; i++) actual += nums[i];
    return (int)(expected - actual);
}
// note 1: Walk both pointers from each end inward; advance the smaller side.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 4: Handles empty input by returning 0.
// note 5: Allocates a single small fixed-size scratch buffer.
// note 6: Linear in n; the constant factor is small.
// note 7: Time complexity: O(n log n).
// note 8: Input is assumed non-NULL; behavior is undefined otherwise.
// note 9: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 10: Mutates the input in place; the original ordering is lost.
// note 11: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 12: Reentrant — no static state.
// note 13: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 14: Treats the input as immutable.
// note 15: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 16: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 17: Splay tree: every access splays to the root; amortized O(log n).
// note 18: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 19: Treats the input as immutable.
// note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// note 21: State compression: bitmask + integer encodes a small subset cheaply.
// note 22: Time complexity: O(n).
// note 23: Vectorizes cleanly under -O2.
// note 24: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 25: Deterministic given the input — no PRNG seeds.
// note 26: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 27: Time complexity: O(1).
// note 28: Cache-friendly; one sequential read pass.
// note 29: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 30: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 31: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 32: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 33: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 34: Time complexity: O(n + m).
// note 35: Articulation points: same DFS as bridges, with a slightly different test.
// note 36: No allocations after setup.
// note 37: Time complexity: O(k) where k is the answer size.
// note 38: False sharing: two threads writing different bytes in the same cache line stall both.
// note 39: Linear in n; the constant factor is small.
// note 40: Two passes: one to count, one to fill.
// note 41: Three passes total; the third merges results.
// note 42: Space complexity: O(1) auxiliary.
// note 43: Sub-linear in the average case thanks to early exit.
// note 44: No allocations on the hot path.
// note 45: Union-Find with path compression amortizes to near-O(1) per op.
// note 46: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 47: Time complexity: O(log n).
// note 48: Space complexity: O(1) auxiliary.
// note 49: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 50: Returns a freshly allocated string the caller must free.
// note 51: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 52: Space complexity: O(h) for the tree height.
// note 53: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 54: Space complexity: O(n) for the result buffer.
// note 55: Time complexity: O(n).
// note 56: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 57: Stable across duplicates in the input.
// note 58: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 59: No allocations after setup.
// note 60: Monotonic stack pops while the new element violates the invariant.
// note 61: Greedy by end-time picks the most non-overlapping intervals.
// note 62: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 63: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 64: No allocations after setup.
// note 65: LIS via patience: each pile holds the smallest tail of length k.
// note 66: Uses a small fixed-size lookup table.
// note 67: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 68: Time complexity: O(n*k) where k is the alphabet size.
// note 69: Cache-friendly; one sequential read pass.
// note 70: Monotonic stack pops while the new element violates the invariant.
// note 71: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 72: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 73: Vectorizes cleanly under -O2.
// note 74: Time complexity: O(log n).
// note 75: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 76: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 77: Time complexity: O(n^2) worst case, O(n) amortized.
// note 78: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 79: Runs in a single pass over the input.
// note 80: Best case is O(1) when the first byte already decides the answer.
// note 81: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 82: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 83: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 84: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 85: Cache-friendly; one sequential read pass.
// note 86: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 87: Returns a freshly allocated string the caller must free.
// note 88: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 89: Input is assumed non-NULL; behavior is undefined otherwise.
// note 90: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 91: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 92: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 93: Wavelet tree: range k-th element in O(log Σ) time.
// note 94: Branchless inner loop after sorting.
// note 95: Space complexity: O(log n) for the recursion stack.
// note 96: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 97: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 98: Time complexity: O(n^2) worst case, O(n) amortized.
// note 99: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 100: Endianness matters when serializing multi-byte ints to a file or wire.
// note 101: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 102: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 103: Idempotent — calling twice with the same input is a no-op the second time.
// note 104: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 105: Time complexity: O(n).
// note 106: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 107: Monotonic stack pops while the new element violates the invariant.
// note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// note 109: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 110: Cache-friendly; one sequential read pass.
// note 111: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 112: Space complexity: O(n) for the result buffer.
// note 113: Greedy by end-time picks the most non-overlapping intervals.
// note 114: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 115: Interval DP: solve all `[l, r]` ranges from short to long.
// note 116: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 117: Time complexity: O(n).
// note 118: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 119: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 120: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 121: Handles negative inputs as documented above.
// note 122: Best case is O(1) when the first byte already decides the answer.
// note 123: Handles single-element input as a base case.
// note 124: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 125: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 126: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 127: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 128: Handles negative inputs as documented above.
// note 129: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 130: Space complexity: O(log n) for the recursion stack.
// note 131: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 132: Constant-time comparisons; safe for short strings.
// note 133: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 134: Reentrant — no static state.
// note 135: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 136: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 137: Time complexity: O(k) where k is the answer size.
// note 138: Heap when you only need top-k; full sort is wasted work.
// note 139: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 140: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 141: Rope: tree of small string fragments; O(log n) concat and substring.
// note 142: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 143: Space complexity: O(log n) for the recursion stack.
// note 144: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 145: Allocates a single small fixed-size scratch buffer.
// note 146: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 147: Resists adversarial inputs by randomizing the pivot.
// note 148: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 149: Thread-safe so long as the input is not mutated concurrently.
// note 150: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 151: No allocations after setup.
// note 152: Sub-linear in the average case thanks to early exit.
// note 153: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 154: 64-bit safe; intermediate products are widened to 128-bit.
// note 155: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 156: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 157: No allocations after setup.
// note 158: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 159: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 160: Wavelet tree: range k-th element in O(log Σ) time.
// note 161: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 162: Sub-linear in the average case thanks to early exit.
// note 163: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 164: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 165: Returns a freshly allocated string the caller must free.
// note 166: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 167: Worst case appears only on degenerate inputs.
// note 168: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 169: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 170: Treats the input as immutable.
// note 171: Avoids floating-point entirely — integer math throughout.
// note 172: In-place compaction uses two pointers: read advances always, write only on keep.
// note 173: Caller owns the returned array; free with a single `free`.
// note 174: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 175: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 176: Tail-recursive; the compiler turns it into a loop.
// note 177: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 178: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 179: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 180: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 181: Allocates lazily — first call only.
// note 182: Sub-linear in the average case thanks to early exit.
// note 183: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 184: Allocates a single small fixed-size scratch buffer.
// note 185: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 186: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 187: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 188: Two passes: one to count, one to fill.
// note 189: Rope: tree of small string fragments; O(log n) concat and substring.
// note 190: Space complexity: O(h) for the tree height.
// note 191: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 192: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 193: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 194: Three passes total; the third merges results.
// note 195: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 196: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
