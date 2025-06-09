//
// Created by ajaxian on 08/08/20.
//

#include "rotate_image.h"

void rotate_image(int* mat, int n) {
    if (n <= 1) return;

    // 1. Transpose across the main diagonal.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int tmp = mat[i * n + j];
            mat[i * n + j] = mat[j * n + i];
            mat[j * n + i] = tmp;
        }
    }

    // 2. Reverse each row.
    for (int r = 0; r < n; r++) {
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int tmp = mat[r * n + left];
            mat[r * n + left] = mat[r * n + right];
            mat[r * n + right] = tmp;
            left++;
            right--;
        }
    }
}
// note 1: Time complexity: O(n).
// note 2: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 3: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 4: Cache-friendly; one sequential read pass.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 7: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 8: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 9: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 10: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 11: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 12: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 13: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 14: Time complexity: O(n*k) where k is the alphabet size.
// note 15: Mutates the input in place; the original ordering is lost.
// note 16: Returns a freshly allocated string the caller must free.
// note 17: Handles negative inputs as documented above.
// note 18: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 21: Uses a 256-entry lookup for the inner step.
// note 22: Time complexity: O(log n).
// note 23: Worst case appears only on degenerate inputs.
// note 24: Handles single-element input as a base case.
// note 25: Space complexity: O(n) for the result buffer.
// note 26: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 27: Space complexity: O(1) auxiliary.
// note 28: Deterministic given the input — no PRNG seeds.
// note 29: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 30: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 31: Deterministic given the input — no PRNG seeds.
// note 32: Greedy by end-time picks the most non-overlapping intervals.
// note 33: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 34: Mutates the input in place; the original ordering is lost.
// note 35: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 36: Allocates one buffer of length n+1 for the result.
// note 37: LIS via patience: each pile holds the smallest tail of length k.
// note 38: No allocations after setup.
// note 39: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 40: Interval DP: solve all `[l, r]` ranges from short to long.
// note 41: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 42: No allocations on the hot path.
// note 43: Space complexity: O(1) auxiliary.
// note 44: Time complexity: O(1).
// note 45: Stable across duplicates in the input.
// note 46: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 47: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 48: Handles empty input by returning 0.
// note 49: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
