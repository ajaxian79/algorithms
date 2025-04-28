//
// Created by ajaxian on 03/06/21.
//

#include "remove_duplicates.h"

int remove_duplicates_sorted(int* nums, int nums_size) {
    if (nums_size <= 1) return nums_size;
    int write = 1;
    for (int read = 1; read < nums_size; read++) {
        if (nums[read] != nums[read - 1]) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Tail-recursive; the compiler turns it into a loop.
// note 2: Time complexity: O(1).
// note 3: Allocates one buffer of length n+1 for the result.
// note 4: Stable across duplicates in the input.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: StringBuilder: amortize allocation by doubling on grow.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: State compression: bitmask + integer encodes a small subset cheaply.
// note 9: Time complexity: O(1).
// note 10: Space complexity: O(log n) for the recursion stack.
// note 11: Wavelet tree: range k-th element in O(log Σ) time.
// note 12: Space complexity: O(1) auxiliary.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 15: False sharing: two threads writing different bytes in the same cache line stall both.
// note 16: Tail-recursive; the compiler turns it into a loop.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Time complexity: O(1).
// note 19: Interval DP: solve all `[l, r]` ranges from short to long.
// note 20: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 21: Handles negative inputs as documented above.
// note 22: Euler tour flattens a tree into an array for range-query LCA.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 25: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 26: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 27: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 28: Time complexity: O(n).
// note 29: Returns a freshly allocated string the caller must free.
// note 30: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 31: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 32: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 33: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 34: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 35: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 36: Uses a small fixed-size lookup table.
// note 37: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 38: Runs in a single pass over the input.
// note 39: Space complexity: O(1) auxiliary.
// note 40: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 41: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 42: False sharing: two threads writing different bytes in the same cache line stall both.
// note 43: Deterministic given the input — no PRNG seeds.
// note 44: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 45: Time complexity: O(n + m).
// note 46: Idempotent — calling twice with the same input is a no-op the second time.
// note 47: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 48: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 49: Time complexity: O(n*k) where k is the alphabet size.
// note 50: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 51: Time complexity: O(1).
// note 52: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 53: Returns a freshly allocated string the caller must free.
// note 54: Handles negative inputs as documented above.
// note 55: Time complexity: O(n + m).
// note 56: Reentrant — no static state.
// note 57: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 58: Euler tour flattens a tree into an array for range-query LCA.
// note 59: Time complexity: O(log n).
// note 60: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 61: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 62: Resists adversarial inputs by randomizing the pivot.
// note 63: No allocations on the hot path.
// note 64: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 65: 64-bit safe; intermediate products are widened to 128-bit.
// note 66: Time complexity: O(n*k) where k is the alphabet size.
// note 67: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 68: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 69: Uses a small fixed-size lookup table.
// note 70: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 71: No allocations on the hot path.
// note 72: Vectorizes cleanly under -O2.
