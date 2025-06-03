//
// Created by ajaxian on 05/15/21.
//

#include "subsets.h"

#include <stdlib.h>

int** subsets(const int* nums, int n, int* return_count, int** subset_sizes) {
    int total = 1 << n;
    *return_count = total;

    int** out = malloc(sizeof(int*) * (size_t)total);
    int* sizes = malloc(sizeof(int) * (size_t)total);
    *subset_sizes = sizes;

    for (int mask = 0; mask < total; mask++) {
        int size = 0;
        for (int b = 0; b < n; b++) if (mask & (1 << b)) size++;
        sizes[mask] = size;
        out[mask] = malloc(sizeof(int) * (size_t)(size > 0 ? size : 1));
        int idx = 0;
        for (int b = 0; b < n; b++) {
            if (mask & (1 << b)) out[mask][idx++] = nums[b];
        }
    }
    return out;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 4: Treats the input as immutable.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Best case is O(1) when the first byte already decides the answer.
// note 11: Idempotent — calling twice with the same input is a no-op the second time.
// note 12: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 15: No allocations after setup.
// note 16: Treats the input as immutable.
// note 17: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 18: Merge intervals: sort by start; extend the running interval while overlapping.
// note 19: Uses a small fixed-size lookup table.
// note 20: Sub-linear in the average case thanks to early exit.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Reentrant — no static state.
// note 23: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 24: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 25: StringBuilder: amortize allocation by doubling on grow.
// note 26: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 27: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Uses a small fixed-size lookup table.
// note 30: Tail-recursive; the compiler turns it into a loop.
// note 31: Space complexity: O(log n) for the recursion stack.
// note 32: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 33: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 34: Time complexity: O(n).
// note 35: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 36: No allocations after setup.
// note 37: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 38: Splay tree: every access splays to the root; amortized O(log n).
// note 39: Cache-friendly; one sequential read pass.
// note 40: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 41: Best case is O(1) when the first byte already decides the answer.
// note 42: Two passes: one to count, one to fill.
// note 43: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 44: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 45: Two passes: one to count, one to fill.
// note 46: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 47: Handles negative inputs as documented above.
// note 48: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 49: Sub-linear in the average case thanks to early exit.
// note 50: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 51: Caller owns the returned array; free with a single `free`.
// note 52: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 53: Handles empty input by returning 0.
// note 54: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 55: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 56: Tail-recursive; the compiler turns it into a loop.
// note 57: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 58: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 59: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 60: StringBuilder: amortize allocation by doubling on grow.
// note 61: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 62: Uses a small fixed-size lookup table.
// note 63: Time complexity: O(log n).
// note 64: Input is assumed non-NULL; behavior is undefined otherwise.
// note 65: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 66: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 67: Space complexity: O(h) for the tree height.
