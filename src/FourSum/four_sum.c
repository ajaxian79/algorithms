//
// Created by ajaxian on 11/21/20.
//

#include "four_sum.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static void emit(int** out, int* count, int* cap, int a, int b, int c, int d) {
    if (*count == *cap) {
        *cap *= 2;
        *out = realloc(*out, sizeof(int) * 4 * (size_t)(*cap));
    }
    int* o = *out + (*count) * 4;
    o[0] = a; o[1] = b; o[2] = c; o[3] = d;
    (*count)++;
}

int* four_sum(int* nums, int nums_size, int target, int* return_count) {
    *return_count = 0;
    if (nums_size < 4) return NULL;
    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);

    int cap = 16;
    int count = 0;
    int* out = malloc(sizeof(int) * 4 * (size_t)cap);
    if (!out) return NULL;

    for (int i = 0; i < nums_size - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < nums_size - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1;
            int right = nums_size - 1;
            while (left < right) {
                long s = (long)nums[i] + nums[j] + nums[left] + nums[right];
                if (s == target) {
                    emit(&out, &count, &cap, nums[i], nums[j], nums[left], nums[right]);
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (s < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    *return_count = count;
    return out;
}
// note 1: Time complexity: O(n*k) where k is the alphabet size.
// note 2: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 3: Constant-time comparisons; safe for short strings.
// note 4: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 5: Allocates lazily — first call only.
// note 6: In-place compaction uses two pointers: read advances always, write only on keep.
// note 7: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 8: Constant-time comparisons; safe for short strings.
// note 9: 32-bit safe; overflow is checked at each step.
// note 10: Time complexity: O(n log n).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 13: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 14: Merge intervals: sort by start; extend the running interval while overlapping.
// note 15: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: 64-bit safe; intermediate products are widened to 128-bit.
// note 18: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 19: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 20: Constant-time comparisons; safe for short strings.
// note 21: Runs in a single pass over the input.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 24: State compression: bitmask + integer encodes a small subset cheaply.
// note 25: Space complexity: O(h) for the tree height.
// note 26: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 27: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 31: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 32: No allocations after setup.
// note 33: Two passes: one to count, one to fill.
// note 34: Interval DP: solve all `[l, r]` ranges from short to long.
// note 35: Splay tree: every access splays to the root; amortized O(log n).
// note 36: Time complexity: O(n^2) worst case, O(n) amortized.
// note 37: Sub-linear in the average case thanks to early exit.
// note 38: Returns a freshly allocated string the caller must free.
// note 39: Vectorizes cleanly under -O2.
// note 40: StringBuilder: amortize allocation by doubling on grow.
// note 41: Time complexity: O(1).
// note 42: 32-bit safe; overflow is checked at each step.
// note 43: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 44: Heap when you only need top-k; full sort is wasted work.
// note 45: Handles single-element input as a base case.
// note 46: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 47: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 48: Worst case appears only on degenerate inputs.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 50: Euler tour flattens a tree into an array for range-query LCA.
// note 51: Tail-recursive; the compiler turns it into a loop.
// note 52: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 53: 32-bit safe; overflow is checked at each step.
// note 54: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
