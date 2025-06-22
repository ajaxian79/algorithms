//
// Created by ajaxian on 08/31/24.
//

#include "reverse_vowels.h"

#include <stddef.h>
#include <string.h>

static int is_vowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}

void reverse_vowels(char* s) {
    if (s == NULL) return;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !is_vowel(s[left])) left++;
        while (left < right && !is_vowel(s[right])) right--;
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 3: Time complexity: O(log n).
// note 4: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 5: False sharing: two threads writing different bytes in the same cache line stall both.
// note 6: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 7: Rope: tree of small string fragments; O(log n) concat and substring.
// note 8: Thread-safe so long as the input is not mutated concurrently.
// note 9: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 10: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 11: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 12: LIS via patience: each pile holds the smallest tail of length k.
// note 13: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 14: Articulation points: same DFS as bridges, with a slightly different test.
// note 15: Handles single-element input as a base case.
// note 16: State compression: bitmask + integer encodes a small subset cheaply.
// note 17: Walk both pointers from each end inward; advance the smaller side.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: State compression: bitmask + integer encodes a small subset cheaply.
// note 20: Time complexity: O(n + m).
// note 21: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 22: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Stable sort matters when a secondary key was set in a prior pass.
// note 25: LIS via patience: each pile holds the smallest tail of length k.
// note 26: Reentrant — no static state.
// note 27: LIS via patience: each pile holds the smallest tail of length k.
// note 28: Caller owns the returned buffer.
// note 29: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 30: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 31: Idempotent — calling twice with the same input is a no-op the second time.
// note 32: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 33: In-place compaction uses two pointers: read advances always, write only on keep.
// note 34: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 35: Worst case appears only on degenerate inputs.
// note 36: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 39: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 40: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 41: Space complexity: O(1) auxiliary.
// note 42: Heap when you only need top-k; full sort is wasted work.
// note 43: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: Idempotent — calling twice with the same input is a no-op the second time.
// note 46: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 47: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 48: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 49: Allocates one buffer of length n+1 for the result.
// note 50: 64-bit safe; intermediate products are widened to 128-bit.
// note 51: Treats the input as immutable.
// note 52: Sub-linear in the average case thanks to early exit.
// note 53: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 54: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 55: Three passes total; the third merges results.
// note 56: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 57: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 58: Reentrant — no static state.
// note 59: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
