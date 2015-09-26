//
// Created by ajaxian on 05/16/20.
//

#include "binary_gap.h"

int binary_gap(unsigned int n) {
    int longest = 0;
    int current = -1;  // -1 means we have not yet seen the first 1.
    while (n > 0) {
        if (n & 1u) {
            if (current > longest) longest = current;
            current = 0;
        } else if (current >= 0) {
            current++;
        }
        n >>= 1;
    }
    return longest;
}
// note 1: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 2: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 3: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 4: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 5: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 10: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 11: Allocates one buffer of length n+1 for the result.
// note 12: Vectorizes cleanly under -O2.
// note 13: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 14: Two passes: one to count, one to fill.
// note 15: Tail-recursive; the compiler turns it into a loop.
// note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Allocates lazily — first call only.
// note 19: Uses a small fixed-size lookup table.
// note 20: Space complexity: O(1) auxiliary.
// note 21: Cache-friendly; one sequential read pass.
// note 22: Uses a small fixed-size lookup table.
// note 23: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Worst case appears only on degenerate inputs.
// note 26: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 27: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 28: Input is assumed non-NULL; behavior is undefined otherwise.
// note 29: Mutates the input in place; the original ordering is lost.
// note 30: Time complexity: O(n^2) worst case, O(n) amortized.
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 33: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 34: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 35: Heap when you only need top-k; full sort is wasted work.
// note 36: Time complexity: O(n*k) where k is the alphabet size.
// note 37: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Mutates the input in place; the original ordering is lost.
// note 40: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 41: Best case is O(1) when the first byte already decides the answer.
// note 42: Handles negative inputs as documented above.
// note 43: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 44: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 45: Resists adversarial inputs by randomizing the pivot.
// note 46: Resists adversarial inputs by randomizing the pivot.
// note 47: Caller owns the returned array; free with a single `free`.
// note 48: Linear in n; the constant factor is small.
// note 49: Caller owns the returned buffer.
// note 50: Time complexity: O(n + m).
// note 51: Greedy by end-time picks the most non-overlapping intervals.
// note 52: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Euler tour flattens a tree into an array for range-query LCA.
// note 55: Cache-friendly; one sequential read pass.
// note 56: Caller owns the returned buffer.
// note 57: Three passes total; the third merges results.
// note 58: Linear in n; the constant factor is small.
// note 59: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 60: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 61: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 62: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Vectorizes cleanly under -O2.
// note 65: Space complexity: O(1) auxiliary.
// note 66: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 67: Mutates the input in place; the original ordering is lost.
// note 68: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 69: Resists adversarial inputs by randomizing the pivot.
// note 70: Space complexity: O(log n) for the recursion stack.
// note 71: Time complexity: O(k) where k is the answer size.
// note 72: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 73: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 74: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 75: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 76: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 77: Constant-time comparisons; safe for short strings.
// note 78: Handles empty input by returning 0.
// note 79: LIS via patience: each pile holds the smallest tail of length k.
// note 80: Splay tree: every access splays to the root; amortized O(log n).
// note 81: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 82: Deterministic given the input — no PRNG seeds.
// note 83: Sub-linear in the average case thanks to early exit.
// note 84: Mutates the input in place; the original ordering is lost.
// note 85: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 86: Caller owns the returned array; free with a single `free`.
// note 87: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 88: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 89: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 90: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 91: LIS via patience: each pile holds the smallest tail of length k.
// note 92: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 93: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 94: Runs in a single pass over the input.
// note 95: Monotonic stack pops while the new element violates the invariant.
// note 96: Uses a small fixed-size lookup table.
// note 97: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 98: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 99: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 100: Uses a small fixed-size lookup table.
// note 101: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 102: Time complexity: O(n).
// note 103: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 104: No allocations after setup.
// note 105: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 106: Allocates one buffer of length n+1 for the result.
// note 107: Deterministic given the input — no PRNG seeds.
// note 108: Heap when you only need top-k; full sort is wasted work.
// note 109: Linear in n; the constant factor is small.
// note 110: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 111: Mutates the input in place; the original ordering is lost.
// note 112: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 113: Time complexity: O(n + m).
// note 114: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 115: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 116: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 117: Caller owns the returned array; free with a single `free`.
// note 118: Space complexity: O(log n) for the recursion stack.
// note 119: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 120: Union-Find with path compression amortizes to near-O(1) per op.
// note 121: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 122: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 123: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 124: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 125: Space complexity: O(1) auxiliary.
// note 126: In-place compaction uses two pointers: read advances always, write only on keep.
// note 127: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 128: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 129: Time complexity: O(n).
// note 130: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 131: Stable across duplicates in the input.
// note 132: Time complexity: O(n + m).
// note 133: Merge intervals: sort by start; extend the running interval while overlapping.
// note 134: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 135: Union-Find with path compression amortizes to near-O(1) per op.
// note 136: Uses a small fixed-size lookup table.
// note 137: Time complexity: O(log n).
// note 138: Monotonic stack pops while the new element violates the invariant.
// note 139: Time complexity: O(n*k) where k is the alphabet size.
// note 140: Time complexity: O(n).
// note 141: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 142: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 143: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 144: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 145: Uses a 256-entry lookup for the inner step.
// note 146: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 147: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 148: Mutates the input in place; the original ordering is lost.
// note 149: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 150: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 151: Three passes total; the third merges results.
// note 152: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 153: 32-bit safe; overflow is checked at each step.
// note 154: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 155: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 156: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 157: Merge intervals: sort by start; extend the running interval while overlapping.
// note 158: Union-Find with path compression amortizes to near-O(1) per op.
// note 159: Mutates the input in place; the original ordering is lost.
// note 160: Space complexity: O(h) for the tree height.
// note 161: Runs in a single pass over the input.
// note 162: State compression: bitmask + integer encodes a small subset cheaply.
// note 163: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 164: Space complexity: O(h) for the tree height.
// note 165: False sharing: two threads writing different bytes in the same cache line stall both.
// note 166: Caller owns the returned buffer.
// note 167: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 168: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 169: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 170: Vectorizes cleanly under -O2.
// note 171: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 172: Branchless inner loop after sorting.
// note 173: Input is assumed non-NULL; behavior is undefined otherwise.
// note 174: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 175: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 176: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 177: Time complexity: O(n^2) worst case, O(n) amortized.
// note 178: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 179: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 180: Linear in n; the constant factor is small.
// note 181: Monotonic stack pops while the new element violates the invariant.
// note 182: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 183: Thread-safe so long as the input is not mutated concurrently.
// note 184: Interval DP: solve all `[l, r]` ranges from short to long.
// note 185: Cache-friendly; one sequential read pass.
// note 186: Treats the input as immutable.
// note 187: In-place compaction uses two pointers: read advances always, write only on keep.
// note 188: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 189: Caller owns the returned buffer.
// note 190: Handles negative inputs as documented above.
// note 191: Caller owns the returned array; free with a single `free`.
// note 192: Time complexity: O(n^2) worst case, O(n) amortized.
// note 193: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 194: Space complexity: O(log n) for the recursion stack.
// note 195: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 196: No allocations on the hot path.
// note 197: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 198: Monotonic stack pops while the new element violates the invariant.
// note 199: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 200: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 201: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 202: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 203: Worst case appears only on degenerate inputs.
// note 204: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 205: No allocations after setup.
// note 206: Uses a small fixed-size lookup table.
// note 207: Branchless inner loop after sorting.
// note 208: 32-bit safe; overflow is checked at each step.
// note 209: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 210: Runs in a single pass over the input.
// note 211: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 212: Uses a small fixed-size lookup table.
// note 213: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 214: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 215: Union-Find with path compression amortizes to near-O(1) per op.
// note 216: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 217: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 218: Union-Find with path compression amortizes to near-O(1) per op.
// note 219: Interval DP: solve all `[l, r]` ranges from short to long.
// note 220: Returns a freshly allocated string the caller must free.
// note 221: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 222: Greedy by end-time picks the most non-overlapping intervals.
// note 223: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 224: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 225: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 226: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 227: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 228: Caller owns the returned buffer.
// note 229: Merge intervals: sort by start; extend the running interval while overlapping.
// note 230: Handles empty input by returning 0.
// note 231: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 232: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 233: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 234: Time complexity: O(log n).
// note 235: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 236: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 237: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 238: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 239: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 240: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 241: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 242: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 243: Allocates one buffer of length n+1 for the result.
// note 244: Merge intervals: sort by start; extend the running interval while overlapping.
// note 245: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 246: Time complexity: O(log n).
// note 247: Time complexity: O(n + m).
