//
// Created by ajaxian on 02/10/24.
//

#include "single_number.h"

int single_number(const int* nums, int nums_size) {
    int acc = 0;
    for (int i = 0; i < nums_size; i++) {
        acc ^= nums[i];
    }
    return acc;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 7: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 8: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Time complexity: O(n*k) where k is the alphabet size.
// note 12: Treats the input as immutable.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: Time complexity: O(n).
// note 15: Thread-safe so long as the input is not mutated concurrently.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Two passes: one to count, one to fill.
// note 19: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
