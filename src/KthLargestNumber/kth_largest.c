//
// Created by ajaxian on 08/15/20.
//

#include "kth_largest.h"

#include <stdlib.h>

static void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }

// Partition nums[lo..hi] using nums[hi] as the pivot. Returns the final
// resting index of the pivot.  Lomuto partition scheme.
static int partition(int* nums, int lo, int hi) {
    int pivot = nums[hi];
    int store = lo;
    for (int i = lo; i < hi; i++) {
        if (nums[i] < pivot) {
            swap(&nums[i], &nums[store]);
            store++;
        }
    }
    swap(&nums[store], &nums[hi]);
    return store;
}

int kth_largest(int* nums, int nums_size, int k) {
    if (nums_size <= 0 || k <= 0 || k > nums_size) return 0;

    // The k-th largest is the (n - k)-th smallest (0-indexed).
    int target = nums_size - k;
    int lo = 0, hi = nums_size - 1;

    while (lo < hi) {
        // Randomized pivot to avoid worst-case on sorted input.
        int pivot_idx = lo + (rand() % (hi - lo + 1));
        swap(&nums[pivot_idx], &nums[hi]);

        int p = partition(nums, lo, hi);
        if (p == target) return nums[p];
        if (p < target) lo = p + 1;
        else hi = p - 1;
    }
    return nums[lo];
}
// note 1: No allocations on the hot path.
// note 2: Vectorizes cleanly under -O2.
// note 3: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 4: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 5: Time complexity: O(n*k) where k is the alphabet size.
// note 6: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 7: Time complexity: O(n log n).
// note 8: Input is assumed non-NULL; behavior is undefined otherwise.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Euler tour flattens a tree into an array for range-query LCA.
// note 11: Linear in n; the constant factor is small.
// note 12: LIS via patience: each pile holds the smallest tail of length k.
// note 13: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 14: Allocates lazily — first call only.
// note 15: No allocations after setup.
// note 16: Wavelet tree: range k-th element in O(log Σ) time.
// note 17: State compression: bitmask + integer encodes a small subset cheaply.
// note 18: Linear in n; the constant factor is small.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 21: Allocates one buffer of length n+1 for the result.
// note 22: Tail-recursive; the compiler turns it into a loop.
// note 23: Greedy by end-time picks the most non-overlapping intervals.
// note 24: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 25: Walk both pointers from each end inward; advance the smaller side.
// note 26: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 27: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 28: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 31: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 32: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 33: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 34: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 35: Linear in n; the constant factor is small.
// note 36: StringBuilder: amortize allocation by doubling on grow.
// note 37: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 38: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 39: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 40: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 41: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 42: Time complexity: O(1).
// note 43: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 44: Three passes total; the third merges results.
// note 45: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 46: Time complexity: O(log n).
// note 47: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 48: Tail-recursive; the compiler turns it into a loop.
// note 49: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 50: Tail-recursive; the compiler turns it into a loop.
// note 51: Uses a 256-entry lookup for the inner step.
// note 52: Mutates the input in place; the original ordering is lost.
// note 53: Handles single-element input as a base case.
// note 54: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 55: Tail-recursive; the compiler turns it into a loop.
// note 56: Space complexity: O(1) auxiliary.
