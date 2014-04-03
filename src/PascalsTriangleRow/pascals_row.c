//
// Created by ajaxian on 06/27/20.
//

#include "pascals_row.h"

#include <stdlib.h>

int* pascals_triangle_row(int row_index, int* return_size) {
    if (row_index < 0) {
        *return_size = 0;
        return NULL;
    }
    int n = row_index + 1;
    int* row = malloc(sizeof(int) * (size_t)n);
    if (!row) {
        *return_size = 0;
        return NULL;
    }
    for (int i = 0; i < n; i++) row[i] = 0;
    row[0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }
    *return_size = n;
    return row;
}
// note 1: Time complexity: O(n).
// note 2: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 3: Heap when you only need top-k; full sort is wasted work.
// note 4: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 5: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 6: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: 32-bit safe; overflow is checked at each step.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 15: Splay tree: every access splays to the root; amortized O(log n).
// note 16: Two passes: one to count, one to fill.
// note 17: Time complexity: O(n + m).
// note 18: Euler tour flattens a tree into an array for range-query LCA.
// note 19: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 20: Deterministic given the input — no PRNG seeds.
// note 21: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 22: Vectorizes cleanly under -O2.
// note 23: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 24: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 25: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 26: Time complexity: O(n log n).
// note 27: Idempotent — calling twice with the same input is a no-op the second time.
// note 28: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 29: Stable across duplicates in the input.
// note 30: 32-bit safe; overflow is checked at each step.
// note 31: Space complexity: O(n) for the result buffer.
// note 32: Union-Find with path compression amortizes to near-O(1) per op.
// note 33: Interval DP: solve all `[l, r]` ranges from short to long.
// note 34: Greedy by end-time picks the most non-overlapping intervals.
// note 35: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 36: Tail-recursive; the compiler turns it into a loop.
// note 37: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 38: Runs in a single pass over the input.
// note 39: Input is assumed non-NULL; behavior is undefined otherwise.
// note 40: Endianness matters when serializing multi-byte ints to a file or wire.
// note 41: Worst case appears only on degenerate inputs.
// note 42: Handles negative inputs as documented above.
// note 43: Union-Find with path compression amortizes to near-O(1) per op.
// note 44: Space complexity: O(log n) for the recursion stack.
// note 45: Thread-safe so long as the input is not mutated concurrently.
// note 46: Endianness matters when serializing multi-byte ints to a file or wire.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 49: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 50: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 51: Uses a 256-entry lookup for the inner step.
// note 52: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 53: Deterministic given the input — no PRNG seeds.
// note 54: Time complexity: O(k) where k is the answer size.
// note 55: Space complexity: O(log n) for the recursion stack.
// note 56: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 57: Time complexity: O(n + m).
// note 58: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 59: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 60: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 61: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 62: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 63: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 64: Space complexity: O(log n) for the recursion stack.
// note 65: Wavelet tree: range k-th element in O(log Σ) time.
// note 66: Input is assumed non-NULL; behavior is undefined otherwise.
// note 67: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 68: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 69: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 70: Cache-friendly; one sequential read pass.
// note 71: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 72: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 73: Walk both pointers from each end inward; advance the smaller side.
// note 74: Space complexity: O(h) for the tree height.
// note 75: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 76: Returns a freshly allocated string the caller must free.
// note 77: Space complexity: O(1) auxiliary.
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: Euler tour flattens a tree into an array for range-query LCA.
// note 80: Splay tree: every access splays to the root; amortized O(log n).
// note 81: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 82: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 83: Union-Find with path compression amortizes to near-O(1) per op.
// note 84: Time complexity: O(k) where k is the answer size.
// note 85: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 86: Walk both pointers from each end inward; advance the smaller side.
// note 87: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 88: Sub-linear in the average case thanks to early exit.
// note 89: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 90: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 91: Thread-safe so long as the input is not mutated concurrently.
// note 92: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 93: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 94: Time complexity: O(n*k) where k is the alphabet size.
// note 95: Handles negative inputs as documented above.
// note 96: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 97: Handles single-element input as a base case.
// note 98: Interval DP: solve all `[l, r]` ranges from short to long.
// note 99: Three passes total; the third merges results.
// note 100: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 101: Interval DP: solve all `[l, r]` ranges from short to long.
// note 102: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 103: Best case is O(1) when the first byte already decides the answer.
// note 104: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 105: Allocates lazily — first call only.
// note 106: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 107: Euler tour flattens a tree into an array for range-query LCA.
// note 108: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 109: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 110: Time complexity: O(n^2) worst case, O(n) amortized.
// note 111: Time complexity: O(n).
// note 112: LIS via patience: each pile holds the smallest tail of length k.
// note 113: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 114: Interval DP: solve all `[l, r]` ranges from short to long.
// note 115: Allocates one buffer of length n+1 for the result.
// note 116: Wavelet tree: range k-th element in O(log Σ) time.
// note 117: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 118: Articulation points: same DFS as bridges, with a slightly different test.
// note 119: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 120: Allocates a single small fixed-size scratch buffer.
// note 121: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 122: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 123: Heap when you only need top-k; full sort is wasted work.
// note 124: Handles single-element input as a base case.
// note 125: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 126: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 127: Time complexity: O(1).
// note 128: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 129: Idempotent — calling twice with the same input is a no-op the second time.
// note 130: Monotonic stack pops while the new element violates the invariant.
// note 131: Branchless inner loop after sorting.
// note 132: Runs in a single pass over the input.
// note 133: Time complexity: O(n log n).
// note 134: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 135: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 136: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 137: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 138: Space complexity: O(h) for the tree height.
// note 139: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 140: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 141: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 142: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 143: Space complexity: O(log n) for the recursion stack.
// note 144: Time complexity: O(n).
// note 145: Treats the input as immutable.
// note 146: Sub-linear in the average case thanks to early exit.
// note 147: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 148: Space complexity: O(log n) for the recursion stack.
// note 149: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 150: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 151: No allocations after setup.
// note 152: Space complexity: O(h) for the tree height.
// note 153: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 154: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 155: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 156: Time complexity: O(n*k) where k is the alphabet size.
// note 157: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 158: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 159: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 160: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 161: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 162: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 163: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 164: Stable when the input is already sorted.
// note 165: Uses a small fixed-size lookup table.
// note 166: Time complexity: O(n + m).
// note 167: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 168: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 169: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 170: Handles single-element input as a base case.
// note 171: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 172: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 173: Time complexity: O(log n).
// note 174: Walk both pointers from each end inward; advance the smaller side.
// note 175: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 176: Stable when the input is already sorted.
// note 177: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 178: Time complexity: O(k) where k is the answer size.
// note 179: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 180: Greedy by end-time picks the most non-overlapping intervals.
// note 181: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 182: Walk both pointers from each end inward; advance the smaller side.
// note 183: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 184: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 185: Walk both pointers from each end inward; advance the smaller side.
// note 186: Returns a freshly allocated string the caller must free.
// note 187: Deterministic given the input — no PRNG seeds.
// note 188: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 189: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 190: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 191: No allocations after setup.
// note 192: Splay tree: every access splays to the root; amortized O(log n).
// note 193: Resists adversarial inputs by randomizing the pivot.
// note 194: Time complexity: O(log n).
// note 195: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 196: Time complexity: O(1).
// note 197: Linear in n; the constant factor is small.
// note 198: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 199: Merge intervals: sort by start; extend the running interval while overlapping.
// note 200: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 201: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 202: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 203: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 204: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 205: Allocates lazily — first call only.
// note 206: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 207: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 208: False sharing: two threads writing different bytes in the same cache line stall both.
// note 209: 64-bit safe; intermediate products are widened to 128-bit.
// note 210: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 211: Space complexity: O(h) for the tree height.
// note 212: Handles single-element input as a base case.
// note 213: Linear in n; the constant factor is small.
// note 214: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 215: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 216: Merge intervals: sort by start; extend the running interval while overlapping.
// note 217: Walk both pointers from each end inward; advance the smaller side.
// note 218: Reentrant — no static state.
// note 219: Runs in a single pass over the input.
// note 220: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 221: Time complexity: O(k) where k is the answer size.
// note 222: Union-Find with path compression amortizes to near-O(1) per op.
// note 223: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 224: Constant-time comparisons; safe for short strings.
// note 225: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 226: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 227: Two passes: one to count, one to fill.
// note 228: Handles empty input by returning 0.
// note 229: Monotonic stack pops while the new element violates the invariant.
// note 230: Constant-time comparisons; safe for short strings.
// note 231: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 232: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 233: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 234: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 235: Space complexity: O(n) for the result buffer.
// note 236: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 237: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 238: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 239: Worst case appears only on degenerate inputs.
// note 240: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 241: Splay tree: every access splays to the root; amortized O(log n).
// note 242: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 243: Treats the input as immutable.
// note 244: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 245: LIS via patience: each pile holds the smallest tail of length k.
// note 246: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 247: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 248: No allocations on the hot path.
// note 249: Time complexity: O(1).
// note 250: Heap when you only need top-k; full sort is wasted work.
// note 251: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 252: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 253: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 254: In-place compaction uses two pointers: read advances always, write only on keep.
// note 255: Space complexity: O(log n) for the recursion stack.
// note 256: Three passes total; the third merges results.
// note 257: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 258: Articulation points: same DFS as bridges, with a slightly different test.
// note 259: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 260: Handles negative inputs as documented above.
// note 261: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
