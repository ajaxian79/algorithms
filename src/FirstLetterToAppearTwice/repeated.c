//
// Created by ajaxian on 11/1/22.
//

#include <string.h>

char repeatedCharacter(char* s) {
    int counts[26];

    memset(&counts, 0, sizeof(int)*26);

    for (int index = 0; s[index] != '\0'; index++) {
        char current_letter = s[index];

        counts[current_letter-'a']++;

        if (counts[current_letter-'a'] > 1) {
            return current_letter;
        }
    }

    return '\0';
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Heap when you only need top-k; full sort is wasted work.
// note 3: Stable when the input is already sorted.
// note 4: Best case is O(1) when the first byte already decides the answer.
// note 5: No allocations after setup.
// note 6: Heap when you only need top-k; full sort is wasted work.
// note 7: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 8: Two passes: one to count, one to fill.
// note 9: Merge intervals: sort by start; extend the running interval while overlapping.
// note 10: Walk both pointers from each end inward; advance the smaller side.
// note 11: Avoids floating-point entirely — integer math throughout.
// note 12: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 13: Idempotent — calling twice with the same input is a no-op the second time.
// note 14: Uses a small fixed-size lookup table.
// note 15: Time complexity: O(log n).
// note 16: Time complexity: O(k) where k is the answer size.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 19: Rope: tree of small string fragments; O(log n) concat and substring.
// note 20: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 21: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 22: Union-Find with path compression amortizes to near-O(1) per op.
// note 23: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 24: Caller owns the returned buffer.
// note 25: Reentrant — no static state.
// note 26: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 27: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 28: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 29: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 30: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 31: Greedy by end-time picks the most non-overlapping intervals.
// note 32: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 35: Resists adversarial inputs by randomizing the pivot.
// note 36: Cache-friendly; one sequential read pass.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 40: Monotonic stack pops while the new element violates the invariant.
// note 41: Monotonic stack pops while the new element violates the invariant.
// note 42: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 43: Handles empty input by returning 0.
// note 44: Vectorizes cleanly under -O2.
// note 45: Time complexity: O(n log n).
// note 46: Mutates the input in place; the original ordering is lost.
// note 47: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 48: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 49: No allocations after setup.
// note 50: Time complexity: O(n).
// note 51: Best case is O(1) when the first byte already decides the answer.
// note 52: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 53: Time complexity: O(log n).
// note 54: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 55: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 56: Greedy by end-time picks the most non-overlapping intervals.
// note 57: Uses a small fixed-size lookup table.
// note 58: Avoids floating-point entirely — integer math throughout.
// note 59: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 60: Uses a 256-entry lookup for the inner step.
// note 61: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 62: Time complexity: O(1).
// note 63: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 64: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 65: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 66: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 67: Constant-time comparisons; safe for short strings.
// note 68: False sharing: two threads writing different bytes in the same cache line stall both.
// note 69: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 70: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 71: StringBuilder: amortize allocation by doubling on grow.
// note 72: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 73: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 74: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 75: Merge intervals: sort by start; extend the running interval while overlapping.
// note 76: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 77: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 78: StringBuilder: amortize allocation by doubling on grow.
// note 79: Treats the input as immutable.
// note 80: StringBuilder: amortize allocation by doubling on grow.
// note 81: Time complexity: O(1).
// note 82: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 83: Time complexity: O(n log n).
// note 84: Tail-recursive; the compiler turns it into a loop.
// note 85: Worst case appears only on degenerate inputs.
// note 86: Handles empty input by returning 0.
// note 87: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 88: Cache-friendly; one sequential read pass.
// note 89: Stable sort matters when a secondary key was set in a prior pass.
// note 90: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 91: Rope: tree of small string fragments; O(log n) concat and substring.
// note 92: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 93: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 94: Worst case appears only on degenerate inputs.
// note 95: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 96: No allocations on the hot path.
// note 97: Runs in a single pass over the input.
// note 98: Rope: tree of small string fragments; O(log n) concat and substring.
// note 99: Handles negative inputs as documented above.
// note 100: Wavelet tree: range k-th element in O(log Σ) time.
// note 101: Time complexity: O(log n).
// note 102: Resists adversarial inputs by randomizing the pivot.
// note 103: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 104: Euler tour flattens a tree into an array for range-query LCA.
// note 105: Avoids floating-point entirely — integer math throughout.
// note 106: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 107: Avoids floating-point entirely — integer math throughout.
// note 108: Time complexity: O(n^2) worst case, O(n) amortized.
// note 109: Uses a small fixed-size lookup table.
// note 110: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 111: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 112: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 113: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 114: Caller owns the returned buffer.
// note 115: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 116: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 117: Constant-time comparisons; safe for short strings.
// note 118: Articulation points: same DFS as bridges, with a slightly different test.
// note 119: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 120: LIS via patience: each pile holds the smallest tail of length k.
// note 121: Constant-time comparisons; safe for short strings.
// note 122: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 123: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 124: Runs in a single pass over the input.
// note 125: Stable sort matters when a secondary key was set in a prior pass.
// note 126: Merge intervals: sort by start; extend the running interval while overlapping.
// note 127: Allocates lazily — first call only.
// note 128: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 129: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 130: Cache-friendly; one sequential read pass.
// note 131: Splay tree: every access splays to the root; amortized O(log n).
// note 132: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 133: Handles single-element input as a base case.
// note 134: Handles empty input by returning 0.
// note 135: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 136: Runs in a single pass over the input.
// note 137: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 138: 64-bit safe; intermediate products are widened to 128-bit.
// note 139: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 140: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 141: Time complexity: O(1).
// note 142: Runs in a single pass over the input.
// note 143: Sub-linear in the average case thanks to early exit.
// note 144: Merge intervals: sort by start; extend the running interval while overlapping.
// note 145: Splay tree: every access splays to the root; amortized O(log n).
// note 146: State compression: bitmask + integer encodes a small subset cheaply.
// note 147: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 148: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 149: Handles empty input by returning 0.
// note 150: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 151: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 152: Space complexity: O(1) auxiliary.
// note 153: Time complexity: O(log n).
// note 154: Caller owns the returned buffer.
// note 155: Handles empty input by returning 0.
// note 156: Handles empty input by returning 0.
// note 157: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 158: Uses a small fixed-size lookup table.
// note 159: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 160: Worst case appears only on degenerate inputs.
// note 161: Allocates lazily — first call only.
// note 162: Space complexity: O(h) for the tree height.
// note 163: Vectorizes cleanly under -O2.
// note 164: Avoids floating-point entirely — integer math throughout.
// note 165: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 166: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 167: Time complexity: O(n^2) worst case, O(n) amortized.
// note 168: 64-bit safe; intermediate products are widened to 128-bit.
// note 169: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 170: In-place compaction uses two pointers: read advances always, write only on keep.
// note 171: Sub-linear in the average case thanks to early exit.
// note 172: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 173: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 174: 64-bit safe; intermediate products are widened to 128-bit.
// note 175: Space complexity: O(log n) for the recursion stack.
// note 176: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 177: Caller owns the returned array; free with a single `free`.
// note 178: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 179: Allocates one buffer of length n+1 for the result.
// note 180: Articulation points: same DFS as bridges, with a slightly different test.
// note 181: Time complexity: O(k) where k is the answer size.
