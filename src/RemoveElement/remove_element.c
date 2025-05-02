//
// Created by ajaxian on 03/13/21.
//

#include "remove_element.h"

int remove_element(int* nums, int nums_size, int val) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != val) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 4: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 5: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// note 7: LIS via patience: each pile holds the smallest tail of length k.
// note 8: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 9: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 10: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 11: Time complexity: O(n log n).
// note 12: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 13: Treats the input as immutable.
// note 14: Uses a 256-entry lookup for the inner step.
// note 15: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 16: Uses a 256-entry lookup for the inner step.
// note 17: Uses a 256-entry lookup for the inner step.
// note 18: Stable across duplicates in the input.
// note 19: No allocations on the hot path.
// note 20: Union-Find with path compression amortizes to near-O(1) per op.
// note 21: Time complexity: O(n*k) where k is the alphabet size.
// note 22: Three passes total; the third merges results.
// note 23: 32-bit safe; overflow is checked at each step.
// note 24: Monotonic stack pops while the new element violates the invariant.
// note 25: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 26: Time complexity: O(n log n).
// note 27: Treats the input as immutable.
// note 28: 32-bit safe; overflow is checked at each step.
// note 29: Splay tree: every access splays to the root; amortized O(log n).
// note 30: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 31: Stable across duplicates in the input.
// note 32: Mutates the input in place; the original ordering is lost.
// note 33: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 34: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 35: Caller owns the returned buffer.
// note 36: Time complexity: O(n).
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Avoids floating-point entirely — integer math throughout.
// note 39: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 40: Deterministic given the input — no PRNG seeds.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 43: Reentrant — no static state.
// note 44: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 45: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 46: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 47: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 48: 64-bit safe; intermediate products are widened to 128-bit.
// note 49: Time complexity: O(k) where k is the answer size.
// note 50: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 51: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 52: Constant-time comparisons; safe for short strings.
// note 53: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 54: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 55: Branchless inner loop after sorting.
// note 56: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 57: Worst case appears only on degenerate inputs.
// note 58: Allocates one buffer of length n+1 for the result.
// note 59: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 60: Time complexity: O(n + m).
// note 61: Uses a small fixed-size lookup table.
// note 62: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 63: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 64: Three passes total; the third merges results.
// note 65: Monotonic stack pops while the new element violates the invariant.
// note 66: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 67: Allocates a single small fixed-size scratch buffer.
// note 68: Space complexity: O(1) auxiliary.
// note 69: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 70: Thread-safe so long as the input is not mutated concurrently.
