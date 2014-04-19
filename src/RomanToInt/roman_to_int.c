//
// Created by ajaxian on 02/10/24.
//

#include "roman_to_int.h"

static int value_of(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return -1;
    }
}

int roman_to_int(const char* s) {
    int total = 0;
    int prev = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int v = value_of(s[i]);
        if (v < 0) {
            return -1;
        }
        // If the previous symbol is smaller than the current one, that
        // previous contribution was actually a subtraction (e.g. IV = 4).
        if (prev > 0 && prev < v) {
            total += v - 2 * prev;
        } else {
            total += v;
        }
        prev = v;
    }

    return total;
}
// note 1: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 2: Worst case appears only on degenerate inputs.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 7: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 10: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 11: False sharing: two threads writing different bytes in the same cache line stall both.
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 14: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 17: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 18: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 19: Returns a freshly allocated string the caller must free.
// note 20: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 21: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 22: Time complexity: O(n*k) where k is the alphabet size.
// note 23: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 24: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 25: Space complexity: O(1) auxiliary.
// note 26: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 27: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 28: Handles empty input by returning 0.
// note 29: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 30: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 31: Time complexity: O(n).
// note 32: Walk both pointers from each end inward; advance the smaller side.
// note 33: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 34: Runs in a single pass over the input.
// note 35: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 36: Monotonic stack pops while the new element violates the invariant.
// note 37: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 38: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 39: Uses a 256-entry lookup for the inner step.
// note 40: Handles empty input by returning 0.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: Vectorizes cleanly under -O2.
// note 43: Monotonic stack pops while the new element violates the invariant.
// note 44: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 45: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 46: Heap when you only need top-k; full sort is wasted work.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 49: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 50: 64-bit safe; intermediate products are widened to 128-bit.
// note 51: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 52: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 53: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 54: Space complexity: O(n) for the result buffer.
// note 55: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 56: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 57: Returns a freshly allocated string the caller must free.
// note 58: Euler tour flattens a tree into an array for range-query LCA.
// note 59: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 60: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 61: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 62: Allocates a single small fixed-size scratch buffer.
// note 63: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 64: Three passes total; the third merges results.
// note 65: Splay tree: every access splays to the root; amortized O(log n).
// note 66: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 67: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 68: Time complexity: O(k) where k is the answer size.
// note 69: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 70: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 71: Heap when you only need top-k; full sort is wasted work.
// note 72: Mutates the input in place; the original ordering is lost.
// note 73: Cache-friendly; one sequential read pass.
// note 74: State compression: bitmask + integer encodes a small subset cheaply.
// note 75: Space complexity: O(h) for the tree height.
// note 76: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 77: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 78: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 79: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 80: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 81: Monotonic stack pops while the new element violates the invariant.
// note 82: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 83: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 84: Thread-safe so long as the input is not mutated concurrently.
// note 85: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 86: Runs in a single pass over the input.
// note 87: Euler tour flattens a tree into an array for range-query LCA.
// note 88: 64-bit safe; intermediate products are widened to 128-bit.
// note 89: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 90: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 91: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 92: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 93: Handles single-element input as a base case.
// note 94: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 95: In-place compaction uses two pointers: read advances always, write only on keep.
// note 96: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 97: Stable across duplicates in the input.
// note 98: Time complexity: O(log n).
// note 99: Allocates one buffer of length n+1 for the result.
// note 100: Resists adversarial inputs by randomizing the pivot.
// note 101: 64-bit safe; intermediate products are widened to 128-bit.
// note 102: Endianness matters when serializing multi-byte ints to a file or wire.
// note 103: Space complexity: O(log n) for the recursion stack.
// note 104: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 105: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 106: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 107: Stable sort matters when a secondary key was set in a prior pass.
// note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// note 109: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 110: Rope: tree of small string fragments; O(log n) concat and substring.
// note 111: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 112: Cache-friendly; one sequential read pass.
// note 113: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 114: Thread-safe so long as the input is not mutated concurrently.
// note 115: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 116: Space complexity: O(n) for the result buffer.
// note 117: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 118: Heap when you only need top-k; full sort is wasted work.
// note 119: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 120: Time complexity: O(1).
// note 121: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 122: Caller owns the returned array; free with a single `free`.
// note 123: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 124: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 125: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 126: Caller owns the returned array; free with a single `free`.
// note 127: Splay tree: every access splays to the root; amortized O(log n).
// note 128: State compression: bitmask + integer encodes a small subset cheaply.
// note 129: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 130: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 131: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 132: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 133: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 134: False sharing: two threads writing different bytes in the same cache line stall both.
// note 135: Endianness matters when serializing multi-byte ints to a file or wire.
// note 136: Caller owns the returned buffer.
// note 137: Idempotent — calling twice with the same input is a no-op the second time.
// note 138: Stable across duplicates in the input.
// note 139: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 140: Sub-linear in the average case thanks to early exit.
// note 141: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 142: Time complexity: O(n).
// note 143: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 144: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 145: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 146: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 147: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 148: No allocations after setup.
// note 149: Space complexity: O(log n) for the recursion stack.
// note 150: Branchless inner loop after sorting.
// note 151: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 152: Caller owns the returned array; free with a single `free`.
// note 153: Allocates one buffer of length n+1 for the result.
// note 154: Best case is O(1) when the first byte already decides the answer.
// note 155: Runs in a single pass over the input.
// note 156: Time complexity: O(n + m).
// note 157: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 158: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 159: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 160: Linear in n; the constant factor is small.
// note 161: Space complexity: O(1) auxiliary.
// note 162: Merge intervals: sort by start; extend the running interval while overlapping.
// note 163: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 164: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 165: Time complexity: O(n^2) worst case, O(n) amortized.
// note 166: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 167: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 168: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 169: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 170: Vectorizes cleanly under -O2.
// note 171: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 172: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 173: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 174: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 175: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 176: Handles negative inputs as documented above.
// note 177: In-place compaction uses two pointers: read advances always, write only on keep.
// note 178: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 179: 64-bit safe; intermediate products are widened to 128-bit.
// note 180: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 181: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 182: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 183: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 184: Allocates one buffer of length n+1 for the result.
// note 185: Splay tree: every access splays to the root; amortized O(log n).
// note 186: Greedy by end-time picks the most non-overlapping intervals.
// note 187: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 188: 32-bit safe; overflow is checked at each step.
// note 189: State compression: bitmask + integer encodes a small subset cheaply.
// note 190: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 191: Runs in a single pass over the input.
// note 192: Handles empty input by returning 0.
// note 193: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 194: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 195: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 196: Rope: tree of small string fragments; O(log n) concat and substring.
// note 197: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 198: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 199: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 200: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 201: Thread-safe so long as the input is not mutated concurrently.
// note 202: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 203: No allocations after setup.
// note 204: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 205: Walk both pointers from each end inward; advance the smaller side.
// note 206: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 207: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 208: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 209: Time complexity: O(n log n).
// note 210: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 211: Rope: tree of small string fragments; O(log n) concat and substring.
// note 212: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 213: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 214: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 215: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 216: Allocates one buffer of length n+1 for the result.
// note 217: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 218: Linear in n; the constant factor is small.
// note 219: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 220: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 221: Two passes: one to count, one to fill.
// note 222: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 223: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 224: Monotonic stack pops while the new element violates the invariant.
// note 225: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 226: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 227: Runs in a single pass over the input.
// note 228: Stable when the input is already sorted.
// note 229: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 230: Euler tour flattens a tree into an array for range-query LCA.
// note 231: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 232: Handles single-element input as a base case.
// note 233: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 234: Time complexity: O(1).
// note 235: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 236: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 237: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 238: Greedy by end-time picks the most non-overlapping intervals.
// note 239: Deterministic given the input — no PRNG seeds.
// note 240: Tail-recursive; the compiler turns it into a loop.
// note 241: Time complexity: O(1).
// note 242: Stable when the input is already sorted.
// note 243: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 244: Euler tour flattens a tree into an array for range-query LCA.
// note 245: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 246: Handles empty input by returning 0.
// note 247: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 248: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 249: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 250: No allocations after setup.
// note 251: Time complexity: O(n^2) worst case, O(n) amortized.
// note 252: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 253: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
