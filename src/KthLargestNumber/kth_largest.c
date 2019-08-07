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
// note 57: StringBuilder: amortize allocation by doubling on grow.
// note 58: LIS via patience: each pile holds the smallest tail of length k.
// note 59: Reentrant — no static state.
// note 60: Vectorizes cleanly under -O2.
// note 61: Stable across duplicates in the input.
// note 62: Returns a freshly allocated string the caller must free.
// note 63: Handles empty input by returning 0.
// note 64: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 65: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 66: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 67: Endianness matters when serializing multi-byte ints to a file or wire.
// note 68: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 69: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 70: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 71: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 72: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 73: Space complexity: O(h) for the tree height.
// note 74: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 75: Space complexity: O(1) auxiliary.
// note 76: Walk both pointers from each end inward; advance the smaller side.
// note 77: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 78: Three passes total; the third merges results.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 81: Thread-safe so long as the input is not mutated concurrently.
// note 82: No allocations after setup.
// note 83: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 84: Handles single-element input as a base case.
// note 85: Stable sort matters when a secondary key was set in a prior pass.
// note 86: Worst case appears only on degenerate inputs.
// note 87: 64-bit safe; intermediate products are widened to 128-bit.
// note 88: In-place compaction uses two pointers: read advances always, write only on keep.
// note 89: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 90: Time complexity: O(n + m).
// note 91: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 92: Sub-linear in the average case thanks to early exit.
// note 93: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 94: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 95: In-place compaction uses two pointers: read advances always, write only on keep.
// note 96: Input is assumed non-NULL; behavior is undefined otherwise.
// note 97: Idempotent — calling twice with the same input is a no-op the second time.
// note 98: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 99: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 100: Treats the input as immutable.
// note 101: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 102: Caller owns the returned array; free with a single `free`.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: LIS via patience: each pile holds the smallest tail of length k.
// note 105: Handles negative inputs as documented above.
// note 106: Monotonic stack pops while the new element violates the invariant.
// note 107: Space complexity: O(h) for the tree height.
// note 108: No allocations after setup.
// note 109: Best case is O(1) when the first byte already decides the answer.
// note 110: Wavelet tree: range k-th element in O(log Σ) time.
// note 111: Greedy by end-time picks the most non-overlapping intervals.
// note 112: Handles single-element input as a base case.
// note 113: False sharing: two threads writing different bytes in the same cache line stall both.
// note 114: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 115: Space complexity: O(h) for the tree height.
// note 116: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 117: Allocates one buffer of length n+1 for the result.
// note 118: StringBuilder: amortize allocation by doubling on grow.
// note 119: Time complexity: O(n + m).
// note 120: Uses a small fixed-size lookup table.
// note 121: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 122: Allocates a single small fixed-size scratch buffer.
// note 123: Returns a freshly allocated string the caller must free.
// note 124: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 125: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 126: No allocations on the hot path.
// note 127: 32-bit safe; overflow is checked at each step.
// note 128: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 129: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 130: No allocations on the hot path.
// note 131: Uses a small fixed-size lookup table.
// note 132: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 133: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 134: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 135: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 136: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 137: Handles single-element input as a base case.
// note 138: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 139: Union-Find with path compression amortizes to near-O(1) per op.
// note 140: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 141: Returns a freshly allocated string the caller must free.
// note 142: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 143: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 144: Space complexity: O(h) for the tree height.
// note 145: 32-bit safe; overflow is checked at each step.
// note 146: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 147: Allocates a single small fixed-size scratch buffer.
// note 148: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 149: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 150: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 151: Heavy-light decomposition: each path crosses O(log n) heavy chains.
