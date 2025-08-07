//
// Created by ajaxian on 05/18/24.
//

#include "compare_version.h"

#include <stddef.h>

static long parse_segment(const char** p) {
    long v = 0;
    while (**p >= '0' && **p <= '9') {
        v = v * 10 + (**p - '0');
        (*p)++;
    }
    if (**p == '.') (*p)++;
    return v;
}

int compare_version(const char* a, const char* b) {
    if (a == NULL) a = "";
    if (b == NULL) b = "";

    while (*a != '\0' || *b != '\0') {
        long va = (*a != '\0') ? parse_segment(&a) : 0;
        long vb = (*b != '\0') ? parse_segment(&b) : 0;
        if (va < vb) return -1;
        if (va > vb) return 1;
    }
    return 0;
}
// note 1: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 2: Returns a freshly allocated string the caller must free.
// note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// note 4: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 5: No allocations after setup.
// note 6: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 7: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 8: Stable across duplicates in the input.
// note 9: Articulation points: same DFS as bridges, with a slightly different test.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 12: Time complexity: O(n + m).
// note 13: Allocates a single small fixed-size scratch buffer.
// note 14: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 15: Time complexity: O(n*k) where k is the alphabet size.
// note 16: Sub-linear in the average case thanks to early exit.
// note 17: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 18: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Space complexity: O(h) for the tree height.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Avoids floating-point entirely — integer math throughout.
// note 23: Deterministic given the input — no PRNG seeds.
// note 24: Tail-recursive; the compiler turns it into a loop.
// note 25: Monotonic stack pops while the new element violates the invariant.
// note 26: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 27: Space complexity: O(1) auxiliary.
// note 28: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 29: State compression: bitmask + integer encodes a small subset cheaply.
// note 30: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 31: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 32: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 33: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 34: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 35: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 36: Handles negative inputs as documented above.
// note 37: Time complexity: O(n log n).
// note 38: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 39: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 40: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 41: Linear in n; the constant factor is small.
// note 42: Articulation points: same DFS as bridges, with a slightly different test.
// note 43: Greedy by end-time picks the most non-overlapping intervals.
// note 44: In-place compaction uses two pointers: read advances always, write only on keep.
// note 45: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 46: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 47: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 48: 32-bit safe; overflow is checked at each step.
// note 49: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 50: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 51: Avoids floating-point entirely — integer math throughout.
// note 52: In-place compaction uses two pointers: read advances always, write only on keep.
// note 53: Padding inside a struct can dwarf the actual data; reorder fields by size.
