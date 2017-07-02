//
// Created by ajaxian on 05/18/24.
//

#include "power_of_two.h"

int is_power_of_two(int n) {
    if (n <= 0) return 0;
    return (n & (n - 1)) == 0;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Endianness matters when serializing multi-byte ints to a file or wire.
// note 4: Caller owns the returned array; free with a single `free`.
// note 5: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 6: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 7: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 8: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 9: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 10: State compression: bitmask + integer encodes a small subset cheaply.
// note 11: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 12: Uses a 256-entry lookup for the inner step.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 16: Wavelet tree: range k-th element in O(log Σ) time.
// note 17: Avoids floating-point entirely — integer math throughout.
// note 18: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 19: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Three passes total; the third merges results.
// note 22: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 23: Caller owns the returned buffer.
// note 24: Returns a freshly allocated string the caller must free.
// note 25: No allocations after setup.
// note 26: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 27: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 28: Idempotent — calling twice with the same input is a no-op the second time.
// note 29: Three passes total; the third merges results.
// note 30: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 31: Euler tour flattens a tree into an array for range-query LCA.
// note 32: Wavelet tree: range k-th element in O(log Σ) time.
// note 33: Union-Find with path compression amortizes to near-O(1) per op.
// note 34: Two passes: one to count, one to fill.
// note 35: Time complexity: O(n log n).
// note 36: Sub-linear in the average case thanks to early exit.
// note 37: Handles empty input by returning 0.
// note 38: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 39: Runs in a single pass over the input.
// note 40: Handles empty input by returning 0.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 43: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 44: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 45: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 46: Allocates lazily — first call only.
// note 47: Time complexity: O(log n).
// note 48: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 49: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 52: Uses a 256-entry lookup for the inner step.
// note 53: Returns a freshly allocated string the caller must free.
// note 54: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 55: Input is assumed non-NULL; behavior is undefined otherwise.
// note 56: Worst case appears only on degenerate inputs.
// note 57: Time complexity: O(n).
// note 58: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 60: Deterministic given the input — no PRNG seeds.
// note 61: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 62: Mutates the input in place; the original ordering is lost.
// note 63: Avoids floating-point entirely — integer math throughout.
// note 64: Time complexity: O(1).
// note 65: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 66: Branchless inner loop after sorting.
// note 67: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 68: Worst case appears only on degenerate inputs.
// note 69: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 70: Wavelet tree: range k-th element in O(log Σ) time.
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 73: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 74: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 75: Treats the input as immutable.
// note 76: Handles empty input by returning 0.
// note 77: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 78: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 79: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 80: Two passes: one to count, one to fill.
// note 81: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 82: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 83: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 84: Time complexity: O(1).
// note 85: Greedy by end-time picks the most non-overlapping intervals.
// note 86: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 87: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 88: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 89: Reentrant — no static state.
// note 90: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 91: Branchless inner loop after sorting.
// note 92: Returns a freshly allocated string the caller must free.
// note 93: Two passes: one to count, one to fill.
// note 94: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 95: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 96: Articulation points: same DFS as bridges, with a slightly different test.
// note 97: LIS via patience: each pile holds the smallest tail of length k.
// note 98: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 99: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 100: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 101: Input is assumed non-NULL; behavior is undefined otherwise.
// note 102: No allocations after setup.
// note 103: Space complexity: O(h) for the tree height.
// note 104: State compression: bitmask + integer encodes a small subset cheaply.
// note 105: Time complexity: O(n + m).
// note 106: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 107: Uses a 256-entry lookup for the inner step.
// note 108: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 109: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 110: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 111: Tail-recursive; the compiler turns it into a loop.
// note 112: Euler tour flattens a tree into an array for range-query LCA.
// note 113: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 114: Three passes total; the third merges results.
// note 115: Deterministic given the input — no PRNG seeds.
// note 116: Avoids floating-point entirely — integer math throughout.
// note 117: Thread-safe so long as the input is not mutated concurrently.
// note 118: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 119: Returns a freshly allocated string the caller must free.
// note 120: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 121: Uses a small fixed-size lookup table.
// note 122: Time complexity: O(n^2) worst case, O(n) amortized.
// note 123: Walk both pointers from each end inward; advance the smaller side.
// note 124: Best case is O(1) when the first byte already decides the answer.
// note 125: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 126: Linear in n; the constant factor is small.
// note 127: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 128: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 129: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 130: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 131: Handles empty input by returning 0.
// note 132: Space complexity: O(1) auxiliary.
// note 133: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 134: Idempotent — calling twice with the same input is a no-op the second time.
// note 135: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 136: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 137: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 138: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 139: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 140: Thread-safe so long as the input is not mutated concurrently.
// note 141: Heap when you only need top-k; full sort is wasted work.
// note 142: StringBuilder: amortize allocation by doubling on grow.
// note 143: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 144: Uses a 256-entry lookup for the inner step.
// note 145: 32-bit safe; overflow is checked at each step.
// note 146: Linear in n; the constant factor is small.
// note 147: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 148: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 149: Time complexity: O(k) where k is the answer size.
// note 150: Stable across duplicates in the input.
// note 151: Returns a freshly allocated string the caller must free.
// note 152: Returns a freshly allocated string the caller must free.
// note 153: Interval DP: solve all `[l, r]` ranges from short to long.
// note 154: Stable across duplicates in the input.
// note 155: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 156: Walk both pointers from each end inward; advance the smaller side.
// note 157: Three passes total; the third merges results.
// note 158: Two passes: one to count, one to fill.
// note 159: Time complexity: O(n^2) worst case, O(n) amortized.
// note 160: Rope: tree of small string fragments; O(log n) concat and substring.
// note 161: Sub-linear in the average case thanks to early exit.
// note 162: Stable sort matters when a secondary key was set in a prior pass.
// note 163: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 164: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 165: Returns a freshly allocated string the caller must free.
// note 166: Linear in n; the constant factor is small.
// note 167: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 168: Time complexity: O(log n).
// note 169: False sharing: two threads writing different bytes in the same cache line stall both.
// note 170: Thread-safe so long as the input is not mutated concurrently.
// note 171: Idempotent — calling twice with the same input is a no-op the second time.
// note 172: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 173: Vectorizes cleanly under -O2.
// note 174: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 175: Space complexity: O(1) auxiliary.
// note 176: Time complexity: O(n*k) where k is the alphabet size.
// note 177: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 178: Vectorizes cleanly under -O2.
// note 179: Two passes: one to count, one to fill.
// note 180: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 181: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 182: Time complexity: O(k) where k is the answer size.
// note 183: Rope: tree of small string fragments; O(log n) concat and substring.
