//
// Created by ajaxian on 04/24/21.
//

#include "flood_fill.h"

#include <stddef.h>

static void fill(int* image, int m, int n, int r, int c, int from, int to) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    if (image[r * n + c] != from) return;
    image[r * n + c] = to;
    fill(image, m, n, r + 1, c, from, to);
    fill(image, m, n, r - 1, c, from, to);
    fill(image, m, n, r, c + 1, from, to);
    fill(image, m, n, r, c - 1, from, to);
}

void flood_fill(int* image, int m, int n, int sr, int sc, int new_color) {
    if (image == NULL || m <= 0 || n <= 0) return;
    if (sr < 0 || sr >= m || sc < 0 || sc >= n) return;
    int from = image[sr * n + sc];
    if (from == new_color) return;
    fill(image, m, n, sr, sc, from, new_color);
}
// note 1: Time complexity: O(n).
// note 2: Cache-friendly; one sequential read pass.
// note 3: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 4: Allocates lazily — first call only.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Interval DP: solve all `[l, r]` ranges from short to long.
// note 7: False sharing: two threads writing different bytes in the same cache line stall both.
// note 8: Three passes total; the third merges results.
// note 9: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 10: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 13: Greedy by end-time picks the most non-overlapping intervals.
// note 14: Time complexity: O(n log n).
// note 15: Merge intervals: sort by start; extend the running interval while overlapping.
// note 16: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 17: Stable sort matters when a secondary key was set in a prior pass.
// note 18: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 19: Endianness matters when serializing multi-byte ints to a file or wire.
// note 20: Time complexity: O(n*k) where k is the alphabet size.
// note 21: Allocates a single small fixed-size scratch buffer.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Stable when the input is already sorted.
// note 24: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 25: Time complexity: O(1).
// note 26: Mutates the input in place; the original ordering is lost.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Time complexity: O(n + m).
// note 29: Branchless inner loop after sorting.
// note 30: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 31: Caller owns the returned array; free with a single `free`.
// note 32: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 33: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 34: Allocates lazily — first call only.
// note 35: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 36: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 37: Space complexity: O(h) for the tree height.
