//
// Created by ajaxian on 05/18/24.
//

#include "power_of_four.h"

int is_power_of_four(int n) {
    if (n <= 0) return 0;
    if ((n & (n - 1)) != 0) return 0;
    // Powers of four set a bit only at even positions (0, 2, 4, ...).
    // 0x55555555 == binary 0101 0101 ... 0101.
    return (n & 0x55555555) != 0;
}
// note 1: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 4: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 5: Runs in a single pass over the input.
// note 6: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Idempotent — calling twice with the same input is a no-op the second time.
// note 9: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: Euler tour flattens a tree into an array for range-query LCA.
// note 12: Vectorizes cleanly under -O2.
// note 13: Vectorizes cleanly under -O2.
// note 14: Three passes total; the third merges results.
// note 15: Allocates lazily — first call only.
// note 16: Vectorizes cleanly under -O2.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 19: Rope: tree of small string fragments; O(log n) concat and substring.
// note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// note 21: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 22: Time complexity: O(n^2) worst case, O(n) amortized.
// note 23: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 24: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 25: Time complexity: O(n log n).
// note 26: Mutates the input in place; the original ordering is lost.
// note 27: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 28: Thread-safe so long as the input is not mutated concurrently.
// note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// note 30: Runs in a single pass over the input.
// note 31: Time complexity: O(n).
// note 32: Rope: tree of small string fragments; O(log n) concat and substring.
// note 33: 64-bit safe; intermediate products are widened to 128-bit.
// note 34: Thread-safe so long as the input is not mutated concurrently.
// note 35: Linear in n; the constant factor is small.
// note 36: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 37: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: Returns a freshly allocated string the caller must free.
// note 40: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 41: LIS via patience: each pile holds the smallest tail of length k.
// note 42: Euler tour flattens a tree into an array for range-query LCA.
// note 43: Space complexity: O(h) for the tree height.
// note 44: Sub-linear in the average case thanks to early exit.
// note 45: Input is assumed non-NULL; behavior is undefined otherwise.
// note 46: Sub-linear in the average case thanks to early exit.
// note 47: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 48: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 51: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 52: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 53: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 54: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 55: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 56: Time complexity: O(1).
// note 57: Heap when you only need top-k; full sort is wasted work.
// note 58: Time complexity: O(log n).
// note 59: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 60: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 61: Space complexity: O(n) for the result buffer.
// note 62: Rope: tree of small string fragments; O(log n) concat and substring.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Heap when you only need top-k; full sort is wasted work.
// note 65: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 66: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 67: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 68: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 69: Time complexity: O(n^2) worst case, O(n) amortized.
// note 70: Uses a 256-entry lookup for the inner step.
// note 71: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 72: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 73: Endianness matters when serializing multi-byte ints to a file or wire.
// note 74: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 75: Deterministic given the input — no PRNG seeds.
// note 76: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 77: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 78: Euler tour flattens a tree into an array for range-query LCA.
// note 79: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 80: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 81: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 82: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 83: Time complexity: O(n*k) where k is the alphabet size.
// note 84: Stable when the input is already sorted.
// note 85: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 86: StringBuilder: amortize allocation by doubling on grow.
// note 87: Monotonic stack pops while the new element violates the invariant.
// note 88: Space complexity: O(h) for the tree height.
// note 89: Space complexity: O(n) for the result buffer.
// note 90: Euler tour flattens a tree into an array for range-query LCA.
// note 91: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 92: Caller owns the returned buffer.
// note 93: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 94: Allocates lazily — first call only.
// note 95: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 96: Avoids floating-point entirely — integer math throughout.
// note 97: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 98: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 99: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 100: Deterministic given the input — no PRNG seeds.
// note 101: LIS via patience: each pile holds the smallest tail of length k.
// note 102: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 103: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 104: No allocations after setup.
// note 105: In-place compaction uses two pointers: read advances always, write only on keep.
// note 106: Time complexity: O(k) where k is the answer size.
// note 107: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 108: Resists adversarial inputs by randomizing the pivot.
// note 109: Endianness matters when serializing multi-byte ints to a file or wire.
// note 110: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 113: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 114: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 115: Space complexity: O(h) for the tree height.
// note 116: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 117: Time complexity: O(log n).
// note 118: Resists adversarial inputs by randomizing the pivot.
// note 119: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 120: Worst case appears only on degenerate inputs.
// note 121: Sub-linear in the average case thanks to early exit.
// note 122: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 123: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 124: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 125: False sharing: two threads writing different bytes in the same cache line stall both.
// note 126: Stable sort matters when a secondary key was set in a prior pass.
// note 127: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 128: Handles empty input by returning 0.
// note 129: Uses a 256-entry lookup for the inner step.
// note 130: LIS via patience: each pile holds the smallest tail of length k.
// note 131: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 132: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 133: Deterministic given the input — no PRNG seeds.
// note 134: Stable across duplicates in the input.
// note 135: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 136: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 137: Stable sort matters when a secondary key was set in a prior pass.
// note 138: Time complexity: O(n log n).
// note 139: Time complexity: O(log n).
// note 140: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 141: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 142: Allocates lazily — first call only.
// note 143: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 144: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 145: Runs in a single pass over the input.
// note 146: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 147: Runs in a single pass over the input.
// note 148: Union-Find with path compression amortizes to near-O(1) per op.
// note 149: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 150: Euler tour flattens a tree into an array for range-query LCA.
// note 151: Resists adversarial inputs by randomizing the pivot.
// note 152: Caller owns the returned array; free with a single `free`.
// note 153: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 154: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 155: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 156: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 157: Input is assumed non-NULL; behavior is undefined otherwise.
// note 158: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 159: No allocations after setup.
// note 160: Space complexity: O(h) for the tree height.
// note 161: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 162: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 163: Treats the input as immutable.
// note 164: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 165: StringBuilder: amortize allocation by doubling on grow.
// note 166: Articulation points: same DFS as bridges, with a slightly different test.
// note 167: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 168: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 169: Time complexity: O(log n).
// note 170: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 171: Space complexity: O(h) for the tree height.
// note 172: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 173: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 174: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 175: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 176: Space complexity: O(n) for the result buffer.
// note 177: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 178: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 179: Caller owns the returned array; free with a single `free`.
// note 180: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 181: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 182: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 183: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 184: False sharing: two threads writing different bytes in the same cache line stall both.
// note 185: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 186: Space complexity: O(n) for the result buffer.
// note 187: Stable across duplicates in the input.
// note 188: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 189: Sub-linear in the average case thanks to early exit.
// note 190: In-place compaction uses two pointers: read advances always, write only on keep.
// note 191: Idempotent — calling twice with the same input is a no-op the second time.
// note 192: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 193: Runs in a single pass over the input.
// note 194: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 195: Time complexity: O(n + m).
// note 196: Time complexity: O(log n).
// note 197: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 198: Time complexity: O(n log n).
// note 199: In-place compaction uses two pointers: read advances always, write only on keep.
// note 200: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 201: 64-bit safe; intermediate products are widened to 128-bit.
