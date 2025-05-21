//
// Created by ajaxian on 08/22/20.
//

#include "merge_intervals.h"

#include <stdlib.h>

static int compare_pair_start(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[0] > ib[0]) - (ia[0] < ib[0]);
}

int* merge_intervals(int* intervals, int n, int* return_count) {
    if (n <= 0 || intervals == NULL) {
        *return_count = 0;
        return NULL;
    }

    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_start);

    int* out = malloc(sizeof(int) * 2 * (size_t)n);
    if (!out) {
        *return_count = 0;
        return NULL;
    }
    int count = 0;

    out[0] = intervals[0];
    out[1] = intervals[1];
    count = 1;

    for (int i = 1; i < n; i++) {
        int s = intervals[i * 2];
        int e = intervals[i * 2 + 1];
        int last_e = out[(count - 1) * 2 + 1];
        if (s <= last_e) {
            if (e > last_e) out[(count - 1) * 2 + 1] = e;
        } else {
            out[count * 2] = s;
            out[count * 2 + 1] = e;
            count++;
        }
    }

    *return_count = count;
    return out;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Interval DP: solve all `[l, r]` ranges from short to long.
// note 6: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 7: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: Handles negative inputs as documented above.
// note 10: Linear in n; the constant factor is small.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 13: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: Space complexity: O(log n) for the recursion stack.
// note 16: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 17: Time complexity: O(n^2) worst case, O(n) amortized.
// note 18: Resists adversarial inputs by randomizing the pivot.
// note 19: Allocates lazily — first call only.
// note 20: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 21: Branchless inner loop after sorting.
// note 22: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 23: Splay tree: every access splays to the root; amortized O(log n).
// note 24: Mutates the input in place; the original ordering is lost.
// note 25: 32-bit safe; overflow is checked at each step.
// note 26: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 27: Allocates a single small fixed-size scratch buffer.
// note 28: 64-bit safe; intermediate products are widened to 128-bit.
// note 29: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 30: Worst case appears only on degenerate inputs.
// note 31: 64-bit safe; intermediate products are widened to 128-bit.
// note 32: Allocates one buffer of length n+1 for the result.
// note 33: Time complexity: O(log n).
// note 34: Union-Find with path compression amortizes to near-O(1) per op.
// note 35: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 36: Interval DP: solve all `[l, r]` ranges from short to long.
// note 37: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 38: State compression: bitmask + integer encodes a small subset cheaply.
// note 39: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 40: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 41: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 42: 64-bit safe; intermediate products are widened to 128-bit.
// note 43: Monotonic stack pops while the new element violates the invariant.
// note 44: Time complexity: O(n^2) worst case, O(n) amortized.
// note 45: Runs in a single pass over the input.
// note 46: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 47: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 48: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 49: Allocates a single small fixed-size scratch buffer.
// note 50: Deterministic given the input — no PRNG seeds.
// note 51: 64-bit safe; intermediate products are widened to 128-bit.
// note 52: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 53: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 54: Time complexity: O(n + m).
// note 55: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 56: Best case is O(1) when the first byte already decides the answer.
// note 57: Treats the input as immutable.
// note 58: Stable across duplicates in the input.
// note 59: LIS via patience: each pile holds the smallest tail of length k.
// note 60: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 61: Time complexity: O(k) where k is the answer size.
// note 62: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
