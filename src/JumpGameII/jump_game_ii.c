//
// Created by ajaxian on 09/26/20.
//

#include "jump_game_ii.h"

int jump_min(const int* nums, int nums_size) {
    if (nums_size <= 1) return 0;
    int jumps = 0;
    int current_end = 0;
    int farthest = 0;
    for (int i = 0; i < nums_size - 1; i++) {
        int reach = i + nums[i];
        if (reach > farthest) farthest = reach;
        if (i == current_end) {
            jumps++;
            current_end = farthest;
            if (current_end >= nums_size - 1) break;
        }
    }
    return jumps;
}
// note 1: Stable sort matters when a secondary key was set in a prior pass.
// note 2: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 3: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 4: No allocations after setup.
// note 5: Sub-linear in the average case thanks to early exit.
// note 6: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 7: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 8: Branchless inner loop after sorting.
// note 9: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: StringBuilder: amortize allocation by doubling on grow.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Space complexity: O(1) auxiliary.
// note 15: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 16: Sub-linear in the average case thanks to early exit.
// note 17: Stable when the input is already sorted.
// note 18: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 19: Branchless inner loop after sorting.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: 32-bit safe; overflow is checked at each step.
// note 22: Sub-linear in the average case thanks to early exit.
// note 23: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 25: Heap when you only need top-k; full sort is wasted work.
// note 26: Stable when the input is already sorted.
// note 27: Space complexity: O(log n) for the recursion stack.
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// note 30: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 31: Time complexity: O(n).
// note 32: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 33: Allocates lazily — first call only.
// note 34: Allocates lazily — first call only.
// note 35: Handles empty input by returning 0.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 40: Resists adversarial inputs by randomizing the pivot.
// note 41: Linear in n; the constant factor is small.
// note 42: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 43: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 44: StringBuilder: amortize allocation by doubling on grow.
// note 45: Input is assumed non-NULL; behavior is undefined otherwise.
// note 46: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 47: Three passes total; the third merges results.
// note 48: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 49: Branchless inner loop after sorting.
// note 50: Best case is O(1) when the first byte already decides the answer.
// note 51: Euler tour flattens a tree into an array for range-query LCA.
// note 52: Articulation points: same DFS as bridges, with a slightly different test.
// note 53: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 54: LIS via patience: each pile holds the smallest tail of length k.
// note 55: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 56: False sharing: two threads writing different bytes in the same cache line stall both.
// note 57: In-place compaction uses two pointers: read advances always, write only on keep.
// note 58: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 59: Time complexity: O(n log n).
// note 60: Time complexity: O(n^2) worst case, O(n) amortized.
// note 61: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 62: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 63: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 64: 32-bit safe; overflow is checked at each step.
// note 65: Rope: tree of small string fragments; O(log n) concat and substring.
// note 66: Two passes: one to count, one to fill.
// note 67: Articulation points: same DFS as bridges, with a slightly different test.
// note 68: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 69: Allocates one buffer of length n+1 for the result.
// note 70: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 71: Merge intervals: sort by start; extend the running interval while overlapping.
// note 72: Time complexity: O(n + m).
// note 73: Stable when the input is already sorted.
// note 74: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 75: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 76: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 77: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 78: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 79: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 80: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 81: Splay tree: every access splays to the root; amortized O(log n).
// note 82: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 83: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 84: Monotonic stack pops while the new element violates the invariant.
// note 85: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 86: Tail-recursive; the compiler turns it into a loop.
// note 87: Uses a 256-entry lookup for the inner step.
// note 88: StringBuilder: amortize allocation by doubling on grow.
// note 89: Time complexity: O(n log n).
// note 90: Treats the input as immutable.
// note 91: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 92: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 93: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 94: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 95: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 96: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 97: Time complexity: O(n).
// note 98: Worst case appears only on degenerate inputs.
// note 99: Linear in n; the constant factor is small.
// note 100: Mutates the input in place; the original ordering is lost.
// note 101: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 102: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 103: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
