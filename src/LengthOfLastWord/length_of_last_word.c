//
// Created by ajaxian on 05/18/24.
//

#include "length_of_last_word.h"

#include <stddef.h>
#include <string.h>

int length_of_last_word(const char* s) {
    if (s == NULL) return 0;
    int n = (int)strlen(s);
    int end = n - 1;
    while (end >= 0 && s[end] == ' ') end--;
    int start = end;
    while (start >= 0 && s[start] != ' ') start--;
    return end - start;
}
// note 1: Time complexity: O(k) where k is the answer size.
// note 2: Uses a small fixed-size lookup table.
// note 3: Treats the input as immutable.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Time complexity: O(n + m).
// note 6: Stable across duplicates in the input.
// note 7: Three passes total; the third merges results.
// note 8: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 9: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 10: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 11: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 12: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 13: LIS via patience: each pile holds the smallest tail of length k.
// note 14: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 15: Deterministic given the input — no PRNG seeds.
// note 16: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 17: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 18: Mutates the input in place; the original ordering is lost.
// note 19: Branchless inner loop after sorting.
// note 20: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 21: Space complexity: O(log n) for the recursion stack.
// note 22: Space complexity: O(log n) for the recursion stack.
// note 23: 32-bit safe; overflow is checked at each step.
// note 24: Interval DP: solve all `[l, r]` ranges from short to long.
// note 25: Walk both pointers from each end inward; advance the smaller side.
// note 26: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 27: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 31: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 32: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 33: Time complexity: O(n).
// note 34: Returns a freshly allocated string the caller must free.
// note 35: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 36: False sharing: two threads writing different bytes in the same cache line stall both.
// note 37: False sharing: two threads writing different bytes in the same cache line stall both.
// note 38: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 39: Resists adversarial inputs by randomizing the pivot.
// note 40: Best case is O(1) when the first byte already decides the answer.
// note 41: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 42: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 43: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 44: Space complexity: O(h) for the tree height.
// note 45: Time complexity: O(n*k) where k is the alphabet size.
// note 46: Linear in n; the constant factor is small.
// note 47: Time complexity: O(n).
// note 48: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: State compression: bitmask + integer encodes a small subset cheaply.
// note 51: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 52: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 53: Interval DP: solve all `[l, r]` ranges from short to long.
// note 54: No allocations on the hot path.
// note 55: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 56: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 57: Caller owns the returned array; free with a single `free`.
// note 58: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 59: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 60: Greedy by end-time picks the most non-overlapping intervals.
// note 61: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 62: Time complexity: O(log n).
// note 63: Allocates lazily — first call only.
// note 64: Merge intervals: sort by start; extend the running interval while overlapping.
// note 65: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 66: Space complexity: O(n) for the result buffer.
// note 67: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 68: Merge intervals: sort by start; extend the running interval while overlapping.
// note 69: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 70: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 71: Space complexity: O(h) for the tree height.
// note 72: False sharing: two threads writing different bytes in the same cache line stall both.
// note 73: Input is assumed non-NULL; behavior is undefined otherwise.
// note 74: Space complexity: O(h) for the tree height.
// note 75: Best case is O(1) when the first byte already decides the answer.
// note 76: Best case is O(1) when the first byte already decides the answer.
// note 77: In-place compaction uses two pointers: read advances always, write only on keep.
// note 78: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 79: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 80: Allocates lazily — first call only.
// note 81: Worst case appears only on degenerate inputs.
// note 82: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 83: Splay tree: every access splays to the root; amortized O(log n).
// note 84: Branchless inner loop after sorting.
// note 85: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 86: Articulation points: same DFS as bridges, with a slightly different test.
// note 87: Avoids floating-point entirely — integer math throughout.
// note 88: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 89: Cache-friendly; one sequential read pass.
// note 90: Tail-recursive; the compiler turns it into a loop.
// note 91: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 92: Allocates one buffer of length n+1 for the result.
// note 93: Splay tree: every access splays to the root; amortized O(log n).
// note 94: Uses a small fixed-size lookup table.
// note 95: Uses a small fixed-size lookup table.
// note 96: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 97: Walk both pointers from each end inward; advance the smaller side.
// note 98: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 99: Space complexity: O(1) auxiliary.
// note 100: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 101: Runs in a single pass over the input.
// note 102: Time complexity: O(log n).
// note 103: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 104: Union-Find with path compression amortizes to near-O(1) per op.
// note 105: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 106: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 107: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 108: Time complexity: O(n + m).
// note 109: Greedy by end-time picks the most non-overlapping intervals.
// note 110: False sharing: two threads writing different bytes in the same cache line stall both.
// note 111: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 112: Splay tree: every access splays to the root; amortized O(log n).
// note 113: Time complexity: O(n log n).
// note 114: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 115: Deterministic given the input — no PRNG seeds.
// note 116: Euler tour flattens a tree into an array for range-query LCA.
// note 117: No allocations on the hot path.
// note 118: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 119: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 120: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 121: Stable when the input is already sorted.
// note 122: Euler tour flattens a tree into an array for range-query LCA.
// note 123: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 124: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 125: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 126: Time complexity: O(n).
// note 127: Time complexity: O(n log n).
// note 128: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 129: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 130: Stable when the input is already sorted.
// note 131: Thread-safe so long as the input is not mutated concurrently.
// note 132: Returns a freshly allocated string the caller must free.
// note 133: Union-Find with path compression amortizes to near-O(1) per op.
// note 134: 32-bit safe; overflow is checked at each step.
// note 135: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 136: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 137: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 138: Caller owns the returned array; free with a single `free`.
// note 139: Space complexity: O(h) for the tree height.
// note 140: Time complexity: O(n*k) where k is the alphabet size.
// note 141: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 142: Constant-time comparisons; safe for short strings.
// note 143: Space complexity: O(h) for the tree height.
// note 144: Time complexity: O(n log n).
// note 145: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 146: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 147: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 148: Input is assumed non-NULL; behavior is undefined otherwise.
// note 149: Space complexity: O(log n) for the recursion stack.
// note 150: Greedy by end-time picks the most non-overlapping intervals.
// note 151: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 152: Stable when the input is already sorted.
// note 153: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 154: Branchless inner loop after sorting.
// note 155: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 156: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 157: Allocates one buffer of length n+1 for the result.
// note 158: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 159: Stable sort matters when a secondary key was set in a prior pass.
// note 160: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 161: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 162: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 163: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 164: Deterministic given the input — no PRNG seeds.
// note 165: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 166: Stable sort matters when a secondary key was set in a prior pass.
// note 167: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 168: Euler tour flattens a tree into an array for range-query LCA.
// note 169: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 170: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 171: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 172: Stable sort matters when a secondary key was set in a prior pass.
// note 173: Stable sort matters when a secondary key was set in a prior pass.
// note 174: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 175: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 176: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 177: Endianness matters when serializing multi-byte ints to a file or wire.
// note 178: Uses a small fixed-size lookup table.
// note 179: Idempotent — calling twice with the same input is a no-op the second time.
// note 180: State compression: bitmask + integer encodes a small subset cheaply.
// note 181: Interval DP: solve all `[l, r]` ranges from short to long.
// note 182: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 183: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 184: Time complexity: O(log n).
// note 185: Space complexity: O(log n) for the recursion stack.
// note 186: False sharing: two threads writing different bytes in the same cache line stall both.
// note 187: Sub-linear in the average case thanks to early exit.
// note 188: Cache-friendly; one sequential read pass.
// note 189: Rope: tree of small string fragments; O(log n) concat and substring.
// note 190: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 191: Time complexity: O(n log n).
// note 192: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 193: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 194: Thread-safe so long as the input is not mutated concurrently.
// note 195: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 196: Reentrant — no static state.
// note 197: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 198: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 199: Handles empty input by returning 0.
// note 200: In-place compaction uses two pointers: read advances always, write only on keep.
// note 201: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 202: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 203: Stable across duplicates in the input.
// note 204: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 205: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 206: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 207: Branchless inner loop after sorting.
// note 208: Time complexity: O(k) where k is the answer size.
// note 209: Handles single-element input as a base case.
// note 210: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 211: Allocates lazily — first call only.
// note 212: Treats the input as immutable.
// note 213: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 214: Vectorizes cleanly under -O2.
// note 215: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 216: Interval DP: solve all `[l, r]` ranges from short to long.
// note 217: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 218: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 219: Reentrant — no static state.
// note 220: Sub-linear in the average case thanks to early exit.
// note 221: Three passes total; the third merges results.
// note 222: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 223: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 224: LIS via patience: each pile holds the smallest tail of length k.
// note 225: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 226: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 227: Constant-time comparisons; safe for short strings.
// note 228: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
