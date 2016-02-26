//
// Created by ajaxian on 02/10/24.
//

#include "reverse_string.h"

void reverse_string(char* s, int s_size) {
    int left = 0;
    int right = s_size - 1;
    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 2: Idempotent — calling twice with the same input is a no-op the second time.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Uses a small fixed-size lookup table.
// note 8: LIS via patience: each pile holds the smallest tail of length k.
// note 9: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Time complexity: O(k) where k is the answer size.
// note 12: Time complexity: O(n).
// note 13: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 16: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 17: 64-bit safe; intermediate products are widened to 128-bit.
// note 18: Stable sort matters when a secondary key was set in a prior pass.
// note 19: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 20: Mutates the input in place; the original ordering is lost.
// note 21: Time complexity: O(log n).
// note 22: Time complexity: O(n).
// note 23: Runs in a single pass over the input.
// note 24: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 25: Splay tree: every access splays to the root; amortized O(log n).
// note 26: Space complexity: O(1) auxiliary.
// note 27: Time complexity: O(log n).
// note 28: Greedy by end-time picks the most non-overlapping intervals.
// note 29: Time complexity: O(n^2) worst case, O(n) amortized.
// note 30: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 31: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 32: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 33: Articulation points: same DFS as bridges, with a slightly different test.
// note 34: Sub-linear in the average case thanks to early exit.
// note 35: Space complexity: O(1) auxiliary.
// note 36: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 37: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 38: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 39: Splay tree: every access splays to the root; amortized O(log n).
// note 40: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 41: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 42: Time complexity: O(n^2) worst case, O(n) amortized.
// note 43: Constant-time comparisons; safe for short strings.
// note 44: Iterative DFS with an explicit stack avoids recursion-limit issues.
