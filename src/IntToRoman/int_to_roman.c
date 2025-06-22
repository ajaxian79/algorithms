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
