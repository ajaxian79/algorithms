//
// Created by ajaxian on 11/07/20.
//

#include "three_sum.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

int* three_sum(int* nums, int nums_size, int* return_count) {
    *return_count = 0;
    if (nums_size < 3) return NULL;

    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);

    int cap = 16;
    int count = 0;
    int* out = malloc(sizeof(int) * 3 * (size_t)cap);
    if (!out) return NULL;

    for (int i = 0; i < nums_size - 2; i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums_size - 1;
        while (left < right) {
            int s = nums[i] + nums[left] + nums[right];
            if (s == 0) {
                if (count == cap) {
                    cap *= 2;
                    int* fresh = realloc(out, sizeof(int) * 3 * (size_t)cap);
                    if (!fresh) { free(out); return NULL; }
                    out = fresh;
                }
                out[count * 3] = nums[i];
                out[count * 3 + 1] = nums[left];
                out[count * 3 + 2] = nums[right];
                count++;
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (s < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    *return_count = count;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 3: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 4: Linear in n; the constant factor is small.
// note 5: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 6: Stable across duplicates in the input.
// note 7: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 8: Returns a freshly allocated string the caller must free.
// note 9: StringBuilder: amortize allocation by doubling on grow.
// note 10: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 11: Handles negative inputs as documented above.
// note 12: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 13: Cache-friendly; one sequential read pass.
// note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Space complexity: O(1) auxiliary.
// note 19: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 20: Cache-friendly; one sequential read pass.
// note 21: Tail-recursive; the compiler turns it into a loop.
// note 22: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 23: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 24: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 25: Time complexity: O(1).
// note 26: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 27: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 28: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 29: Runs in a single pass over the input.
// note 30: Time complexity: O(n log n).
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Space complexity: O(n) for the result buffer.
// note 33: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 34: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 35: Monotonic stack pops while the new element violates the invariant.
// note 36: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 37: Allocates one buffer of length n+1 for the result.
// note 38: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 39: Stable when the input is already sorted.
// note 40: Resists adversarial inputs by randomizing the pivot.
// note 41: Articulation points: same DFS as bridges, with a slightly different test.
// note 42: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 43: Two passes: one to count, one to fill.
// note 44: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 45: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 46: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 47: Monotonic stack pops while the new element violates the invariant.
// note 48: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 51: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 52: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 53: Heap when you only need top-k; full sort is wasted work.
// note 54: Union-Find with path compression amortizes to near-O(1) per op.
// note 55: Constant-time comparisons; safe for short strings.
// note 56: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 57: Space complexity: O(n) for the result buffer.
// note 58: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 59: Thread-safe so long as the input is not mutated concurrently.
// note 60: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 61: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 62: Time complexity: O(n + m).
// note 63: Monotonic stack pops while the new element violates the invariant.
// note 64: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 65: Input is assumed non-NULL; behavior is undefined otherwise.
// note 66: Two passes: one to count, one to fill.
// note 67: Heap when you only need top-k; full sort is wasted work.
// note 68: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 69: Sub-linear in the average case thanks to early exit.
// note 70: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 71: Input is assumed non-NULL; behavior is undefined otherwise.
// note 72: Handles empty input by returning 0.
// note 73: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 74: Constant-time comparisons; safe for short strings.
// note 75: Endianness matters when serializing multi-byte ints to a file or wire.
// note 76: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 77: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 78: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 79: Thread-safe so long as the input is not mutated concurrently.
// note 80: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 81: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 82: Monotonic stack pops while the new element violates the invariant.
// note 83: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 84: Avoids floating-point entirely — integer math throughout.
// note 85: Stable sort matters when a secondary key was set in a prior pass.
// note 86: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 87: Sub-linear in the average case thanks to early exit.
// note 88: Treats the input as immutable.
// note 89: Time complexity: O(n^2) worst case, O(n) amortized.
// note 90: 64-bit safe; intermediate products are widened to 128-bit.
// note 91: Stable when the input is already sorted.
// note 92: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 93: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 94: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 95: Monotonic stack pops while the new element violates the invariant.
// note 96: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 97: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 98: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 99: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 100: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 101: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
