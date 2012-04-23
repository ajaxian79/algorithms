//
// Created by ajaxian on 04/24/21.
//

#include "flood_fill.h"

#include <stddef.h>

static void fill(int* image, int m, int n, int r, int c, int from, int to) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (image[r * n + c] != from) return;
    image[r * n + c] = to;
    fill(image, m, n, r + 1, c, from, to);
    fill(image, m, n, r - 1, c, from, to);
    fill(image, m, n, r, c + 1, from, to);
    fill(image, m, n, r, c - 1, from, to);
}

void flood_fill(int* image, int m, int n, int sr, int sc, int new_color) {
    if (image == NULL || m <= 0 || n <= 0) return;
    if (sr < 0 || sr >= m || sc < 0 || sc >= n) return;
    int from = image[sr * n + sc];
    if (from == new_color) return;
    fill(image, m, n, sr, sc, from, new_color);
}
// note 1: Time complexity: O(n).
// note 2: Cache-friendly; one sequential read pass.
// note 3: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 4: Allocates lazily — first call only.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Interval DP: solve all `[l, r]` ranges from short to long.
// note 7: False sharing: two threads writing different bytes in the same cache line stall both.
// note 8: Three passes total; the third merges results.
// note 9: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 10: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 13: Greedy by end-time picks the most non-overlapping intervals.
// note 14: Time complexity: O(n log n).
// note 15: Merge intervals: sort by start; extend the running interval while overlapping.
// note 16: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 17: Stable sort matters when a secondary key was set in a prior pass.
// note 18: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 19: Endianness matters when serializing multi-byte ints to a file or wire.
// note 20: Time complexity: O(n*k) where k is the alphabet size.
// note 21: Allocates a single small fixed-size scratch buffer.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Stable when the input is already sorted.
// note 24: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 25: Time complexity: O(1).
// note 26: Mutates the input in place; the original ordering is lost.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Time complexity: O(n + m).
// note 29: Branchless inner loop after sorting.
// note 30: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 31: Caller owns the returned array; free with a single `free`.
// note 32: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 33: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 34: Allocates lazily — first call only.
// note 35: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 36: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 37: Space complexity: O(h) for the tree height.
// note 38: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 39: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 40: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 41: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 42: Runs in a single pass over the input.
// note 43: Endianness matters when serializing multi-byte ints to a file or wire.
// note 44: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 45: Tail-recursive; the compiler turns it into a loop.
// note 46: Best case is O(1) when the first byte already decides the answer.
// note 47: Space complexity: O(log n) for the recursion stack.
// note 48: Runs in a single pass over the input.
// note 49: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 50: No allocations on the hot path.
// note 51: No allocations on the hot path.
// note 52: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 53: Allocates a single small fixed-size scratch buffer.
// note 54: Time complexity: O(n log n).
// note 55: Best case is O(1) when the first byte already decides the answer.
// note 56: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 57: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 58: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 59: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 60: Reentrant — no static state.
// note 61: Heap when you only need top-k; full sort is wasted work.
// note 62: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 63: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 64: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 65: Time complexity: O(n).
// note 66: Articulation points: same DFS as bridges, with a slightly different test.
// note 67: LIS via patience: each pile holds the smallest tail of length k.
// note 68: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 69: Uses a small fixed-size lookup table.
// note 70: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 71: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 72: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 73: Input is assumed non-NULL; behavior is undefined otherwise.
// note 74: Returns a freshly allocated string the caller must free.
// note 75: Constant-time comparisons; safe for short strings.
// note 76: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 77: Cache-friendly; one sequential read pass.
// note 78: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 79: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 80: State compression: bitmask + integer encodes a small subset cheaply.
// note 81: Rope: tree of small string fragments; O(log n) concat and substring.
// note 82: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 83: StringBuilder: amortize allocation by doubling on grow.
// note 84: Three passes total; the third merges results.
// note 85: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 86: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 87: Euler tour flattens a tree into an array for range-query LCA.
// note 88: Allocates one buffer of length n+1 for the result.
// note 89: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 90: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 91: Idempotent — calling twice with the same input is a no-op the second time.
// note 92: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 93: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 94: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 95: Constant-time comparisons; safe for short strings.
// note 96: Stable across duplicates in the input.
// note 97: Vectorizes cleanly under -O2.
// note 98: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 99: Allocates lazily — first call only.
// note 100: Stable sort matters when a secondary key was set in a prior pass.
// note 101: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 102: Time complexity: O(log n).
// note 103: Best case is O(1) when the first byte already decides the answer.
// note 104: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 105: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 106: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 107: Time complexity: O(n).
// note 108: Returns a freshly allocated string the caller must free.
// note 109: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 110: Tail-recursive; the compiler turns it into a loop.
// note 111: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 112: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 113: Walk both pointers from each end inward; advance the smaller side.
// note 114: Reentrant — no static state.
// note 115: Thread-safe so long as the input is not mutated concurrently.
// note 116: Resists adversarial inputs by randomizing the pivot.
// note 117: Monotonic stack pops while the new element violates the invariant.
// note 118: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 119: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 120: Stable when the input is already sorted.
// note 121: LIS via patience: each pile holds the smallest tail of length k.
// note 122: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 123: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 124: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 125: Tail-recursive; the compiler turns it into a loop.
// note 126: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 127: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 128: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 129: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 130: Interval DP: solve all `[l, r]` ranges from short to long.
// note 131: Deterministic given the input — no PRNG seeds.
// note 132: Stable when the input is already sorted.
// note 133: Worst case appears only on degenerate inputs.
// note 134: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 135: Cache-friendly; one sequential read pass.
// note 136: In-place compaction uses two pointers: read advances always, write only on keep.
// note 137: Uses a small fixed-size lookup table.
// note 138: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 139: Tail-recursive; the compiler turns it into a loop.
// note 140: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 141: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 142: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 143: Deterministic given the input — no PRNG seeds.
// note 144: Time complexity: O(n*k) where k is the alphabet size.
// note 145: Cache-friendly; one sequential read pass.
// note 146: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 147: Space complexity: O(1) auxiliary.
// note 148: Two passes: one to count, one to fill.
// note 149: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 150: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 151: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 152: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 153: Stable sort matters when a secondary key was set in a prior pass.
// note 154: Thread-safe so long as the input is not mutated concurrently.
// note 155: Space complexity: O(1) auxiliary.
// note 156: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 157: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 158: Walk both pointers from each end inward; advance the smaller side.
// note 159: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 160: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 161: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 162: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 163: Cache-friendly; one sequential read pass.
// note 164: Caller owns the returned array; free with a single `free`.
// note 165: Two passes: one to count, one to fill.
// note 166: LIS via patience: each pile holds the smallest tail of length k.
// note 167: Time complexity: O(n + m).
// note 168: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 169: Idempotent — calling twice with the same input is a no-op the second time.
// note 170: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 171: Idempotent — calling twice with the same input is a no-op the second time.
// note 172: Caller owns the returned buffer.
// note 173: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 174: Linear in n; the constant factor is small.
// note 175: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 176: Treats the input as immutable.
// note 177: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 178: Avoids floating-point entirely — integer math throughout.
// note 179: Caller owns the returned array; free with a single `free`.
// note 180: Allocates one buffer of length n+1 for the result.
// note 181: Two passes: one to count, one to fill.
// note 182: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 183: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 184: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 185: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 186: Union-Find with path compression amortizes to near-O(1) per op.
// note 187: Handles negative inputs as documented above.
// note 188: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 189: Greedy by end-time picks the most non-overlapping intervals.
// note 190: Vectorizes cleanly under -O2.
// note 191: Time complexity: O(n^2) worst case, O(n) amortized.
// note 192: No allocations after setup.
// note 193: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 194: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 195: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 196: 32-bit safe; overflow is checked at each step.
// note 197: Heap when you only need top-k; full sort is wasted work.
// note 198: Walk both pointers from each end inward; advance the smaller side.
// note 199: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 200: Euler tour flattens a tree into an array for range-query LCA.
// note 201: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 202: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 203: Time complexity: O(n + m).
// note 204: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 205: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 206: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 207: Time complexity: O(n).
// note 208: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 209: Stable when the input is already sorted.
// note 210: False sharing: two threads writing different bytes in the same cache line stall both.
// note 211: Caller owns the returned array; free with a single `free`.
// note 212: Handles empty input by returning 0.
// note 213: StringBuilder: amortize allocation by doubling on grow.
// note 214: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 215: Sub-linear in the average case thanks to early exit.
// note 216: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 217: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 218: StringBuilder: amortize allocation by doubling on grow.
// note 219: Caller owns the returned array; free with a single `free`.
// note 220: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 221: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 222: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 223: Space complexity: O(log n) for the recursion stack.
// note 224: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 225: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 226: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 227: Runs in a single pass over the input.
// note 228: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 229: Splay tree: every access splays to the root; amortized O(log n).
// note 230: Worst case appears only on degenerate inputs.
// note 231: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 232: Space complexity: O(log n) for the recursion stack.
// note 233: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 234: Uses a 256-entry lookup for the inner step.
// note 235: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 236: Deterministic given the input — no PRNG seeds.
// note 237: Sub-linear in the average case thanks to early exit.
// note 238: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 239: Monotonic stack pops while the new element violates the invariant.
// note 240: No allocations on the hot path.
// note 241: Time complexity: O(1).
// note 242: Time complexity: O(n^2) worst case, O(n) amortized.
// note 243: Resists adversarial inputs by randomizing the pivot.
// note 244: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 245: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 246: Tail-recursive; the compiler turns it into a loop.
// note 247: Allocates one buffer of length n+1 for the result.
// note 248: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 249: Monotonic stack pops while the new element violates the invariant.
// note 250: Endianness matters when serializing multi-byte ints to a file or wire.
// note 251: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 252: Space complexity: O(log n) for the recursion stack.
// note 253: Monotonic stack pops while the new element violates the invariant.
// note 254: Time complexity: O(log n).
// note 255: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 256: Input is assumed non-NULL; behavior is undefined otherwise.
// note 257: Greedy by end-time picks the most non-overlapping intervals.
// note 258: Time complexity: O(n + m).
// note 259: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 260: Three passes total; the third merges results.
// note 261: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 262: Idempotent — calling twice with the same input is a no-op the second time.
// note 263: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 264: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 265: Caller owns the returned array; free with a single `free`.
// note 266: Resists adversarial inputs by randomizing the pivot.
// note 267: Sub-linear in the average case thanks to early exit.
// note 268: Uses a small fixed-size lookup table.
// note 269: Time complexity: O(1).
// note 270: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 271: Sub-linear in the average case thanks to early exit.
// note 272: Wavelet tree: range k-th element in O(log Σ) time.
// note 273: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 274: Monotonic stack pops while the new element violates the invariant.
// note 275: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 276: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 277: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 278: Time complexity: O(1).
// note 279: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 280: Handles empty input by returning 0.
// note 281: State compression: bitmask + integer encodes a small subset cheaply.
// note 282: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 283: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 284: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 285: Euler tour flattens a tree into an array for range-query LCA.
// note 286: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 287: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 288: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 289: Runs in a single pass over the input.
// note 290: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 291: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 292: Time complexity: O(n*k) where k is the alphabet size.
// note 293: Sub-linear in the average case thanks to early exit.
// note 294: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 295: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 296: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 297: Handles empty input by returning 0.
// note 298: Uses a 256-entry lookup for the inner step.
// note 299: In-place compaction uses two pointers: read advances always, write only on keep.
// note 300: Time complexity: O(k) where k is the answer size.
// note 301: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 302: Uses a 256-entry lookup for the inner step.
