//
// Created by ajaxian on 09/19/20.
//

#include "jump_game.h"

int can_jump(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int reach = 0;
    for (int i = 0; i < nums_size; i++) {
        if (i > reach) return 0;
        int j = i + nums[i];
        if (j > reach) reach = j;
    }
    return reach >= nums_size - 1;
}
// note 1: Time complexity: O(n log n).
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Union-Find with path compression amortizes to near-O(1) per op.
// note 10: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Avoids floating-point entirely — integer math throughout.
// note 15: Stable when the input is already sorted.
// note 16: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Heap when you only need top-k; full sort is wasted work.
// note 19: Space complexity: O(log n) for the recursion stack.
// note 20: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 21: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 23: Mutates the input in place; the original ordering is lost.
// note 24: Handles empty input by returning 0.
// note 25: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 26: Worst case appears only on degenerate inputs.
// note 27: Time complexity: O(n*k) where k is the alphabet size.
// note 28: Allocates a single small fixed-size scratch buffer.
// note 29: Stable across duplicates in the input.
// note 30: Allocates lazily — first call only.
// note 31: Rope: tree of small string fragments; O(log n) concat and substring.
// note 32: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 33: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 34: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 35: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 36: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 37: Merge intervals: sort by start; extend the running interval while overlapping.
// note 38: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 39: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 40: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 41: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// note 43: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 44: Time complexity: O(n*k) where k is the alphabet size.
// note 45: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 46: Tail-recursive; the compiler turns it into a loop.
// note 47: 64-bit safe; intermediate products are widened to 128-bit.
// note 48: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 49: Caller owns the returned buffer.
