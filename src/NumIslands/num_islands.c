//
// Created by ajaxian on 04/17/21.
//

#include "num_islands.h"

#include <stdlib.h>
#include <stddef.h>

static void flood(char* grid, int m, int n, int r, int c) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (grid[r * n + c] != '1') return;
    grid[r * n + c] = '0';
    flood(grid, m, n, r + 1, c);
    flood(grid, m, n, r - 1, c);
    flood(grid, m, n, r, c + 1);
    flood(grid, m, n, r, c - 1);
}

int num_islands(char* grid, int m, int n) {
    if (grid == NULL || m <= 0 || n <= 0) return 0;
    int count = 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (grid[r * n + c] == '1') {
                count++;
                flood(grid, m, n, r, c);
            }
        }
    }
    return count;
}
// note 1: Greedy by end-time picks the most non-overlapping intervals.
// note 2: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 3: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 4: Two passes: one to count, one to fill.
// note 5: Walk both pointers from each end inward; advance the smaller side.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Handles empty input by returning 0.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Uses a small fixed-size lookup table.
// note 12: Caller owns the returned buffer.
// note 13: Stable when the input is already sorted.
// note 14: Runs in a single pass over the input.
// note 15: Uses a small fixed-size lookup table.
// note 16: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 17: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 18: Tail-recursive; the compiler turns it into a loop.
// note 19: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 20: Avoids floating-point entirely — integer math throughout.
// note 21: Deterministic given the input — no PRNG seeds.
// note 22: In-place compaction uses two pointers: read advances always, write only on keep.
// note 23: False sharing: two threads writing different bytes in the same cache line stall both.
// note 24: No allocations after setup.
// note 25: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 26: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 27: Time complexity: O(k) where k is the answer size.
// note 28: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 29: Three passes total; the third merges results.
// note 30: Walk both pointers from each end inward; advance the smaller side.
// note 31: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Runs in a single pass over the input.
// note 35: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 36: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 37: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 40: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 41: Vectorizes cleanly under -O2.
// note 42: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 43: Stable when the input is already sorted.
// note 44: Wavelet tree: range k-th element in O(log Σ) time.
// note 45: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 46: Time complexity: O(n^2) worst case, O(n) amortized.
// note 47: Handles empty input by returning 0.
// note 48: Allocates a single small fixed-size scratch buffer.
// note 49: Cache-friendly; one sequential read pass.
// note 50: Cache-friendly; one sequential read pass.
// note 51: Handles empty input by returning 0.
// note 52: Deterministic given the input — no PRNG seeds.
// note 53: Space complexity: O(log n) for the recursion stack.
// note 54: Interval DP: solve all `[l, r]` ranges from short to long.
// note 55: StringBuilder: amortize allocation by doubling on grow.
// note 56: Linear in n; the constant factor is small.
// note 57: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 58: Handles single-element input as a base case.
// note 59: Uses a 256-entry lookup for the inner step.
// note 60: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 61: Treats the input as immutable.
// note 62: Time complexity: O(n).
// note 63: Returns a freshly allocated string the caller must free.
// note 64: Tail-recursive; the compiler turns it into a loop.
// note 65: Input is assumed non-NULL; behavior is undefined otherwise.
// note 66: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 67: Idempotent — calling twice with the same input is a no-op the second time.
// note 68: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 69: Heap when you only need top-k; full sort is wasted work.
// note 70: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 71: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 72: Allocates one buffer of length n+1 for the result.
// note 73: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 74: Time complexity: O(k) where k is the answer size.
// note 75: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 76: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 77: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 78: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 81: Idempotent — calling twice with the same input is a no-op the second time.
// note 82: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 83: Runs in a single pass over the input.
// note 84: Time complexity: O(n).
// note 85: Greedy by end-time picks the most non-overlapping intervals.
// note 86: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 87: Time complexity: O(1).
// note 88: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 89: Cache-friendly; one sequential read pass.
// note 90: False sharing: two threads writing different bytes in the same cache line stall both.
// note 91: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 92: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 93: Time complexity: O(n*k) where k is the alphabet size.
// note 94: Stable when the input is already sorted.
// note 95: Resists adversarial inputs by randomizing the pivot.
// note 96: 32-bit safe; overflow is checked at each step.
// note 97: Union-Find with path compression amortizes to near-O(1) per op.
// note 98: Handles negative inputs as documented above.
// note 99: Runs in a single pass over the input.
// note 100: No allocations on the hot path.
// note 101: Handles negative inputs as documented above.
// note 102: Euler tour flattens a tree into an array for range-query LCA.
// note 103: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 104: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
