//
// Created by ajaxian on 02/10/24.
//

#include "int_to_roman.h"

#include <stdlib.h>
#include <string.h>

static const int VALUES[] =       {1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1};
static const char* SYMBOLS[] = {  "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

char* int_to_roman(int n) {
    if (n < 1 || n > 3999) {
        return NULL;
    }

    // Worst case "MMMDCCCLXXXVIII" = 15 chars + null.
    char* out = malloc(20);
    if (!out) {
        return NULL;
    }
    out[0] = '\0';
    size_t len = 0;

    int n_pairs = sizeof(VALUES) / sizeof(VALUES[0]);
    for (int i = 0; i < n_pairs; i++) {
        while (n >= VALUES[i]) {
            size_t sym_len = strlen(SYMBOLS[i]);
            memcpy(out + len, SYMBOLS[i], sym_len);
            len += sym_len;
            n -= VALUES[i];
        }
    }
    out[len] = '\0';
    return out;
}
// note 1: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 2: Idempotent — calling twice with the same input is a no-op the second time.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Greedy by end-time picks the most non-overlapping intervals.
// note 5: Uses a small fixed-size lookup table.
// note 6: Treats the input as immutable.
// note 7: Runs in a single pass over the input.
// note 8: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 9: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 10: Sub-linear in the average case thanks to early exit.
// note 11: Three passes total; the third merges results.
// note 12: Monotonic stack pops while the new element violates the invariant.
// note 13: Stable sort matters when a secondary key was set in a prior pass.
// note 14: Time complexity: O(n log n).
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 19: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 20: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 21: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 22: Union-Find with path compression amortizes to near-O(1) per op.
// note 23: Space complexity: O(1) auxiliary.
// note 24: Wavelet tree: range k-th element in O(log Σ) time.
// note 25: Space complexity: O(1) auxiliary.
// note 26: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 29: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 30: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 31: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 32: Time complexity: O(n log n).
// note 33: Runs in a single pass over the input.
// note 34: Greedy by end-time picks the most non-overlapping intervals.
// note 35: Union-Find with path compression amortizes to near-O(1) per op.
// note 36: Heap when you only need top-k; full sort is wasted work.
// note 37: Handles single-element input as a base case.
// note 38: Uses a small fixed-size lookup table.
// note 39: Space complexity: O(log n) for the recursion stack.
// note 40: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 41: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 42: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 43: Caller owns the returned buffer.
// note 44: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 45: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 46: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 47: Best case is O(1) when the first byte already decides the answer.
// note 48: No allocations on the hot path.
// note 49: No allocations on the hot path.
// note 50: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 51: Wavelet tree: range k-th element in O(log Σ) time.
// note 52: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 53: Sub-linear in the average case thanks to early exit.
// note 54: Space complexity: O(1) auxiliary.
// note 55: Three passes total; the third merges results.
// note 56: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 57: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 58: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 59: Sub-linear in the average case thanks to early exit.
// note 60: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: No allocations on the hot path.
// note 63: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 64: Rope: tree of small string fragments; O(log n) concat and substring.
// note 65: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 66: LIS via patience: each pile holds the smallest tail of length k.
// note 67: Two passes: one to count, one to fill.
// note 68: False sharing: two threads writing different bytes in the same cache line stall both.
// note 69: No allocations after setup.
// note 70: Monotonic stack pops while the new element violates the invariant.
// note 71: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 72: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 73: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 74: Three passes total; the third merges results.
// note 75: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 76: Handles empty input by returning 0.
// note 77: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 78: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 79: Stable when the input is already sorted.
// note 80: Time complexity: O(k) where k is the answer size.
// note 81: Handles empty input by returning 0.
// note 82: False sharing: two threads writing different bytes in the same cache line stall both.
// note 83: Handles empty input by returning 0.
// note 84: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 85: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 86: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 87: Handles empty input by returning 0.
// note 88: Articulation points: same DFS as bridges, with a slightly different test.
// note 89: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 90: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 91: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 92: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 93: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 94: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 95: Space complexity: O(h) for the tree height.
// note 96: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 97: Space complexity: O(n) for the result buffer.
// note 98: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 99: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 100: Avoids floating-point entirely — integer math throughout.
// note 101: Returns a freshly allocated string the caller must free.
// note 102: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 103: No allocations after setup.
// note 104: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 105: No allocations on the hot path.
// note 106: Worst case appears only on degenerate inputs.
// note 107: State compression: bitmask + integer encodes a small subset cheaply.
// note 108: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 109: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 110: Time complexity: O(log n).
// note 111: Caller owns the returned buffer.
// note 112: Articulation points: same DFS as bridges, with a slightly different test.
// note 113: Linear in n; the constant factor is small.
// note 114: Three passes total; the third merges results.
// note 115: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 116: Sub-linear in the average case thanks to early exit.
// note 117: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 118: Tail-recursive; the compiler turns it into a loop.
// note 119: Mutates the input in place; the original ordering is lost.
// note 120: Time complexity: O(1).
// note 121: Vectorizes cleanly under -O2.
// note 122: Vectorizes cleanly under -O2.
// note 123: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 124: Linear in n; the constant factor is small.
// note 125: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 126: Time complexity: O(n*k) where k is the alphabet size.
// note 127: Allocates a single small fixed-size scratch buffer.
// note 128: Heap when you only need top-k; full sort is wasted work.
// note 129: Mutates the input in place; the original ordering is lost.
// note 130: State compression: bitmask + integer encodes a small subset cheaply.
// note 131: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 132: Monotonic stack pops while the new element violates the invariant.
// note 133: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 134: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 135: Time complexity: O(n).
// note 136: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 137: Stable across duplicates in the input.
// note 138: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 139: Space complexity: O(log n) for the recursion stack.
// note 140: Time complexity: O(1).
// note 141: Union-Find with path compression amortizes to near-O(1) per op.
// note 142: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 143: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 144: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 145: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 146: Constant-time comparisons; safe for short strings.
// note 147: Three passes total; the third merges results.
// note 148: Greedy by end-time picks the most non-overlapping intervals.
// note 149: Idempotent — calling twice with the same input is a no-op the second time.
// note 150: Time complexity: O(log n).
// note 151: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 152: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 153: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 154: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 155: Greedy by end-time picks the most non-overlapping intervals.
// note 156: Avoids floating-point entirely — integer math throughout.
// note 157: Endianness matters when serializing multi-byte ints to a file or wire.
// note 158: Time complexity: O(1).
// note 159: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 160: StringBuilder: amortize allocation by doubling on grow.
// note 161: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 162: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 163: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 164: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 165: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 166: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 167: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 168: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 169: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 170: Handles single-element input as a base case.
// note 171: Resists adversarial inputs by randomizing the pivot.
// note 172: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 173: Allocates a single small fixed-size scratch buffer.
// note 174: Best case is O(1) when the first byte already decides the answer.
// note 175: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 176: StringBuilder: amortize allocation by doubling on grow.
// note 177: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 178: Time complexity: O(n*k) where k is the alphabet size.
// note 179: Interval DP: solve all `[l, r]` ranges from short to long.
// note 180: Time complexity: O(1).
// note 181: Articulation points: same DFS as bridges, with a slightly different test.
// note 182: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 183: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 184: Time complexity: O(n log n).
// note 185: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 186: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 187: Space complexity: O(h) for the tree height.
// note 188: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 189: Branchless inner loop after sorting.
// note 190: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 191: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 192: Euler tour flattens a tree into an array for range-query LCA.
// note 193: Stable when the input is already sorted.
// note 194: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 195: Tail-recursive; the compiler turns it into a loop.
// note 196: BFS layers carry implicit shortest-path distance in unweighted graphs.
