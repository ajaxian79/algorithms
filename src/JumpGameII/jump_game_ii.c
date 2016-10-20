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
