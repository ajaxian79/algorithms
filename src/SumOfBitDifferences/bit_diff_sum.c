//
// Created by ajaxian on 03/20/21.
//

#include "bit_diff_sum.h"

long total_hamming_distance(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;
    long total = 0;
    for (int b = 0; b < 32; b++) {
        long ones = 0;
        for (int i = 0; i < nums_size; i++) {
            ones += ((unsigned int)nums[i] >> b) & 1u;
        }
        total += ones * (nums_size - ones);
    }
    return total;
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 3: Time complexity: O(log n).
// note 4: Allocates lazily — first call only.
// note 5: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 6: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 7: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 10: Stable across duplicates in the input.
// note 11: Space complexity: O(n) for the result buffer.
// note 12: Time complexity: O(log n).
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Handles single-element input as a base case.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 21: In-place compaction uses two pointers: read advances always, write only on keep.
// note 22: Tail-recursive; the compiler turns it into a loop.
// note 23: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 24: Resists adversarial inputs by randomizing the pivot.
// note 25: Constant-time comparisons; safe for short strings.
// note 26: Linear in n; the constant factor is small.
// note 27: Space complexity: O(n) for the result buffer.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Time complexity: O(n).
// note 30: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Deterministic given the input — no PRNG seeds.
// note 33: Space complexity: O(log n) for the recursion stack.
// note 34: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 35: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 36: Walk both pointers from each end inward; advance the smaller side.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: 64-bit safe; intermediate products are widened to 128-bit.
// note 39: Reentrant — no static state.
// note 40: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 41: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 42: Stable across duplicates in the input.
// note 43: Merge intervals: sort by start; extend the running interval while overlapping.
// note 44: 64-bit safe; intermediate products are widened to 128-bit.
// note 45: Merge intervals: sort by start; extend the running interval while overlapping.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Runs in a single pass over the input.
// note 48: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 49: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 50: No allocations on the hot path.
// note 51: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 52: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 53: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 54: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 55: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 56: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 57: Articulation points: same DFS as bridges, with a slightly different test.
// note 58: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 59: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 60: Stable across duplicates in the input.
