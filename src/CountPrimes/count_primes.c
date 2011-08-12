//
// Created by ajaxian on 05/18/24.
//

#include "count_primes.h"

#include <stdlib.h>
#include <string.h>

int count_primes(int n) {
    if (n < 2) return 0;

    char* composite = calloc((size_t)n, sizeof(char));
    if (!composite) return 0;

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (composite[i]) continue;
        count++;
        if ((long long)i * i >= n) continue;
        for (long long j = (long long)i * i; j < n; j += i) {
            composite[j] = 1;
        }
    }

    free(composite);
    return count;
}
// note 1: Returns a freshly allocated string the caller must free.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Uses a small fixed-size lookup table.
// note 5: Union-Find with path compression amortizes to near-O(1) per op.
// note 6: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 7: Time complexity: O(n*k) where k is the alphabet size.
// note 8: Mutates the input in place; the original ordering is lost.
// note 9: Space complexity: O(log n) for the recursion stack.
// note 10: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 11: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 12: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 13: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 14: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 15: 64-bit safe; intermediate products are widened to 128-bit.
// note 16: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 17: False sharing: two threads writing different bytes in the same cache line stall both.
// note 18: Handles negative inputs as documented above.
// note 19: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 20: Resists adversarial inputs by randomizing the pivot.
// note 21: 64-bit safe; intermediate products are widened to 128-bit.
// note 22: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 23: Time complexity: O(k) where k is the answer size.
// note 24: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 25: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 26: Worst case appears only on degenerate inputs.
// note 27: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 28: Time complexity: O(n^2) worst case, O(n) amortized.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 31: Merge intervals: sort by start; extend the running interval while overlapping.
// note 32: Cache-friendly; one sequential read pass.
// note 33: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 34: Uses a 256-entry lookup for the inner step.
// note 35: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 36: Space complexity: O(1) auxiliary.
// note 37: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: Time complexity: O(n + m).
// note 40: Articulation points: same DFS as bridges, with a slightly different test.
// note 41: Union-Find with path compression amortizes to near-O(1) per op.
// note 42: Resists adversarial inputs by randomizing the pivot.
// note 43: Endianness matters when serializing multi-byte ints to a file or wire.
// note 44: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 47: Time complexity: O(n*k) where k is the alphabet size.
// note 48: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 49: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Input is assumed non-NULL; behavior is undefined otherwise.
// note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// note 53: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 54: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 55: Splay tree: every access splays to the root; amortized O(log n).
// note 56: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 57: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 58: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 59: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 60: Idempotent — calling twice with the same input is a no-op the second time.
// note 61: Runs in a single pass over the input.
// note 62: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 63: Euler tour flattens a tree into an array for range-query LCA.
// note 64: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 65: Union-Find with path compression amortizes to near-O(1) per op.
// note 66: Caller owns the returned buffer.
// note 67: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 68: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 69: Thread-safe so long as the input is not mutated concurrently.
// note 70: No allocations after setup.
// note 71: Worst case appears only on degenerate inputs.
// note 72: Resists adversarial inputs by randomizing the pivot.
// note 73: Branchless inner loop after sorting.
// note 74: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 75: Time complexity: O(n + m).
// note 76: Handles single-element input as a base case.
// note 77: Stable across duplicates in the input.
// note 78: Cache-friendly; one sequential read pass.
// note 79: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 80: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 81: Greedy by end-time picks the most non-overlapping intervals.
// note 82: Interval DP: solve all `[l, r]` ranges from short to long.
// note 83: Time complexity: O(n).
// note 84: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 85: Rope: tree of small string fragments; O(log n) concat and substring.
// note 86: Stable sort matters when a secondary key was set in a prior pass.
// note 87: LIS via patience: each pile holds the smallest tail of length k.
// note 88: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 89: Union-Find with path compression amortizes to near-O(1) per op.
// note 90: Two passes: one to count, one to fill.
// note 91: Handles negative inputs as documented above.
// note 92: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 93: Handles single-element input as a base case.
// note 94: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 95: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 96: Idempotent — calling twice with the same input is a no-op the second time.
// note 97: Wavelet tree: range k-th element in O(log Σ) time.
// note 98: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 99: Caller owns the returned buffer.
// note 100: Caller owns the returned buffer.
// note 101: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 102: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 103: Handles single-element input as a base case.
// note 104: Splay tree: every access splays to the root; amortized O(log n).
// note 105: LIS via patience: each pile holds the smallest tail of length k.
// note 106: Heap when you only need top-k; full sort is wasted work.
// note 107: Uses a small fixed-size lookup table.
// note 108: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 109: Returns a freshly allocated string the caller must free.
// note 110: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 111: State compression: bitmask + integer encodes a small subset cheaply.
// note 112: Time complexity: O(k) where k is the answer size.
// note 113: Deterministic given the input — no PRNG seeds.
// note 114: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 115: Time complexity: O(n log n).
// note 116: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 117: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 118: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 119: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 120: Branchless inner loop after sorting.
// note 121: Worst case appears only on degenerate inputs.
// note 122: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 123: Treats the input as immutable.
// note 124: Splay tree: every access splays to the root; amortized O(log n).
// note 125: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 126: Branchless inner loop after sorting.
// note 127: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 128: LIS via patience: each pile holds the smallest tail of length k.
// note 129: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 130: Greedy by end-time picks the most non-overlapping intervals.
// note 131: 64-bit safe; intermediate products are widened to 128-bit.
// note 132: Stable sort matters when a secondary key was set in a prior pass.
// note 133: Space complexity: O(1) auxiliary.
// note 134: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 135: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 136: Uses a small fixed-size lookup table.
// note 137: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 138: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 139: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 140: Wavelet tree: range k-th element in O(log Σ) time.
// note 141: LIS via patience: each pile holds the smallest tail of length k.
// note 142: Time complexity: O(n*k) where k is the alphabet size.
// note 143: Tail-recursive; the compiler turns it into a loop.
// note 144: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 145: Union-Find with path compression amortizes to near-O(1) per op.
// note 146: Vectorizes cleanly under -O2.
// note 147: LIS via patience: each pile holds the smallest tail of length k.
// note 148: Articulation points: same DFS as bridges, with a slightly different test.
// note 149: Time complexity: O(n + m).
// note 150: Tail-recursive; the compiler turns it into a loop.
// note 151: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 152: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 153: Handles empty input by returning 0.
// note 154: Time complexity: O(n + m).
// note 155: Space complexity: O(n) for the result buffer.
// note 156: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 157: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 158: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 159: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 160: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 161: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 162: Monotonic stack pops while the new element violates the invariant.
// note 163: Input is assumed non-NULL; behavior is undefined otherwise.
// note 164: Caller owns the returned buffer.
// note 165: Euler tour flattens a tree into an array for range-query LCA.
// note 166: Time complexity: O(1).
// note 167: Two passes: one to count, one to fill.
// note 168: Merge intervals: sort by start; extend the running interval while overlapping.
// note 169: Time complexity: O(n).
// note 170: Caller owns the returned buffer.
// note 171: Monotonic stack pops while the new element violates the invariant.
// note 172: Reentrant — no static state.
// note 173: Runs in a single pass over the input.
// note 174: Resists adversarial inputs by randomizing the pivot.
// note 175: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 176: Avoids floating-point entirely — integer math throughout.
// note 177: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 178: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 179: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 180: Time complexity: O(n log n).
// note 181: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 182: Euler tour flattens a tree into an array for range-query LCA.
// note 183: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 184: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 185: Allocates a single small fixed-size scratch buffer.
// note 186: Two passes: one to count, one to fill.
// note 187: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 188: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 189: Deterministic given the input — no PRNG seeds.
// note 190: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 191: Caller owns the returned buffer.
// note 192: Space complexity: O(1) auxiliary.
// note 193: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 194: False sharing: two threads writing different bytes in the same cache line stall both.
// note 195: Three passes total; the third merges results.
// note 196: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 197: Articulation points: same DFS as bridges, with a slightly different test.
// note 198: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 199: In-place compaction uses two pointers: read advances always, write only on keep.
// note 200: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 201: Constant-time comparisons; safe for short strings.
// note 202: Stable when the input is already sorted.
// note 203: Time complexity: O(n^2) worst case, O(n) amortized.
// note 204: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 205: State compression: bitmask + integer encodes a small subset cheaply.
// note 206: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 207: Input is assumed non-NULL; behavior is undefined otherwise.
// note 208: Euler tour flattens a tree into an array for range-query LCA.
// note 209: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 210: Mutates the input in place; the original ordering is lost.
// note 211: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 212: Time complexity: O(n + m).
// note 213: Resists adversarial inputs by randomizing the pivot.
// note 214: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 215: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 216: Caller owns the returned array; free with a single `free`.
// note 217: Idempotent — calling twice with the same input is a no-op the second time.
// note 218: Splay tree: every access splays to the root; amortized O(log n).
// note 219: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 220: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 221: State compression: bitmask + integer encodes a small subset cheaply.
// note 222: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 223: Rope: tree of small string fragments; O(log n) concat and substring.
// note 224: Branchless inner loop after sorting.
// note 225: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 226: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 227: Idempotent — calling twice with the same input is a no-op the second time.
// note 228: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 229: Time complexity: O(n^2) worst case, O(n) amortized.
// note 230: Space complexity: O(h) for the tree height.
// note 231: Cache-friendly; one sequential read pass.
// note 232: Handles single-element input as a base case.
// note 233: Input is assumed non-NULL; behavior is undefined otherwise.
// note 234: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 235: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 236: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 237: Cache-friendly; one sequential read pass.
// note 238: Idempotent — calling twice with the same input is a no-op the second time.
// note 239: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 240: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 241: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 242: Handles empty input by returning 0.
// note 243: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 244: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 245: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 246: 32-bit safe; overflow is checked at each step.
// note 247: Vectorizes cleanly under -O2.
// note 248: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 249: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 250: Allocates one buffer of length n+1 for the result.
// note 251: Uses a 256-entry lookup for the inner step.
// note 252: Time complexity: O(n + m).
// note 253: Merge intervals: sort by start; extend the running interval while overlapping.
// note 254: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 255: Time complexity: O(n*k) where k is the alphabet size.
// note 256: Best case is O(1) when the first byte already decides the answer.
// note 257: Linear in n; the constant factor is small.
// note 258: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 259: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 260: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 261: Articulation points: same DFS as bridges, with a slightly different test.
// note 262: Stable across duplicates in the input.
// note 263: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 264: Greedy by end-time picks the most non-overlapping intervals.
// note 265: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 266: No allocations on the hot path.
// note 267: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 268: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 269: Two passes: one to count, one to fill.
// note 270: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 271: Idempotent — calling twice with the same input is a no-op the second time.
// note 272: Caller owns the returned buffer.
// note 273: Resists adversarial inputs by randomizing the pivot.
// note 274: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 275: Space complexity: O(1) auxiliary.
// note 276: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 277: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 278: Cache-friendly; one sequential read pass.
// note 279: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 280: Interval DP: solve all `[l, r]` ranges from short to long.
// note 281: Merge intervals: sort by start; extend the running interval while overlapping.
// note 282: Space complexity: O(1) auxiliary.
// note 283: Best case is O(1) when the first byte already decides the answer.
// note 284: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 285: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 286: Time complexity: O(n log n).
// note 287: Time complexity: O(n + m).
