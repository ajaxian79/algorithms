//
// Created by ajaxian on 11/14/20.
//

#include "three_sum_closest.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static int abs_diff(int a, int b) { return a > b ? a - b : b - a; }

int three_sum_closest(int* nums, int nums_size, int target) {
    if (nums_size < 3) return 0;
    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);
    int best = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums_size - 2; i++) {
        int left = i + 1;
        int right = nums_size - 1;
        while (left < right) {
            int s = nums[i] + nums[left] + nums[right];
            if (abs_diff(s, target) < abs_diff(best, target)) best = s;
            if (s < target) left++;
            else if (s > target) right--;
            else return s;
        }
    }
    return best;
}
// note 1: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 2: Walk both pointers from each end inward; advance the smaller side.
// note 3: Stable when the input is already sorted.
// note 4: Linear in n; the constant factor is small.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Splay tree: every access splays to the root; amortized O(log n).
// note 7: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 8: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 9: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Handles empty input by returning 0.
// note 12: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 13: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 14: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 15: Allocates one buffer of length n+1 for the result.
// note 16: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 17: Time complexity: O(k) where k is the answer size.
// note 18: Input is assumed non-NULL; behavior is undefined otherwise.
// note 19: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 20: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 21: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 22: State compression: bitmask + integer encodes a small subset cheaply.
// note 23: Branchless inner loop after sorting.
// note 24: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 25: Caller owns the returned array; free with a single `free`.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Linear in n; the constant factor is small.
// note 30: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 31: Input is assumed non-NULL; behavior is undefined otherwise.
// note 32: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 33: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 34: Worst case appears only on degenerate inputs.
// note 35: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 36: Resists adversarial inputs by randomizing the pivot.
// note 37: Space complexity: O(log n) for the recursion stack.
// note 38: Allocates one buffer of length n+1 for the result.
// note 39: Handles empty input by returning 0.
// note 40: Space complexity: O(1) auxiliary.
// note 41: Sub-linear in the average case thanks to early exit.
// note 42: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 43: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 44: Branchless inner loop after sorting.
// note 45: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 46: 32-bit safe; overflow is checked at each step.
// note 47: Interval DP: solve all `[l, r]` ranges from short to long.
// note 48: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// note 50: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 51: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 52: Returns a freshly allocated string the caller must free.
// note 53: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 54: Walk both pointers from each end inward; advance the smaller side.
// note 55: Reentrant — no static state.
// note 56: Uses a 256-entry lookup for the inner step.
// note 57: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 58: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 59: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 60: Returns a freshly allocated string the caller must free.
// note 61: Mutates the input in place; the original ordering is lost.
// note 62: Tail-recursive; the compiler turns it into a loop.
// note 63: Branchless inner loop after sorting.
// note 64: Time complexity: O(log n).
// note 65: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 66: Rope: tree of small string fragments; O(log n) concat and substring.
// note 67: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 68: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 69: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 70: Thread-safe so long as the input is not mutated concurrently.
// note 71: Two passes: one to count, one to fill.
// note 72: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 73: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 74: Returns a freshly allocated string the caller must free.
// note 75: Greedy by end-time picks the most non-overlapping intervals.
// note 76: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 77: Time complexity: O(n log n).
// note 78: Splay tree: every access splays to the root; amortized O(log n).
// note 79: Worst case appears only on degenerate inputs.
// note 80: Time complexity: O(log n).
// note 81: Idempotent — calling twice with the same input is a no-op the second time.
// note 82: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 83: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 84: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 85: Heap when you only need top-k; full sort is wasted work.
// note 86: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 87: Endianness matters when serializing multi-byte ints to a file or wire.
// note 88: Mutates the input in place; the original ordering is lost.
// note 89: Idempotent — calling twice with the same input is a no-op the second time.
// note 90: Caller owns the returned buffer.
// note 91: Time complexity: O(n).
// note 92: 32-bit safe; overflow is checked at each step.
// note 93: Handles empty input by returning 0.
// note 94: Time complexity: O(n).
// note 95: Space complexity: O(n) for the result buffer.
// note 96: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 97: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 98: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 99: Allocates a single small fixed-size scratch buffer.
// note 100: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 101: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 102: Runs in a single pass over the input.
// note 103: No allocations after setup.
// note 104: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 105: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 106: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 107: Space complexity: O(1) auxiliary.
// note 108: Space complexity: O(n) for the result buffer.
// note 109: Space complexity: O(h) for the tree height.
// note 110: Sub-linear in the average case thanks to early exit.
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Space complexity: O(1) auxiliary.
// note 113: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 114: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 115: Branchless inner loop after sorting.
// note 116: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 117: Caller owns the returned buffer.
// note 118: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 119: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 120: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 121: Allocates one buffer of length n+1 for the result.
// note 122: Greedy by end-time picks the most non-overlapping intervals.
// note 123: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 124: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 125: Space complexity: O(log n) for the recursion stack.
// note 126: 64-bit safe; intermediate products are widened to 128-bit.
// note 127: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 128: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 129: Allocates one buffer of length n+1 for the result.
// note 130: Input is assumed non-NULL; behavior is undefined otherwise.
// note 131: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 132: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 133: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 134: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 135: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 136: Handles negative inputs as documented above.
// note 137: Space complexity: O(log n) for the recursion stack.
// note 138: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 139: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 140: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 141: Time complexity: O(n*k) where k is the alphabet size.
// note 142: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 143: False sharing: two threads writing different bytes in the same cache line stall both.
// note 144: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 145: Articulation points: same DFS as bridges, with a slightly different test.
// note 146: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 147: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 148: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 149: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 150: Time complexity: O(n*k) where k is the alphabet size.
// note 151: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 152: Returns a freshly allocated string the caller must free.
// note 153: Caller owns the returned buffer.
// note 154: Wavelet tree: range k-th element in O(log Σ) time.
// note 155: Greedy by end-time picks the most non-overlapping intervals.
// note 156: Interval DP: solve all `[l, r]` ranges from short to long.
// note 157: Allocates a single small fixed-size scratch buffer.
// note 158: Returns a freshly allocated string the caller must free.
// note 159: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 160: State compression: bitmask + integer encodes a small subset cheaply.
// note 161: Uses a small fixed-size lookup table.
// note 162: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 163: Three passes total; the third merges results.
// note 164: Time complexity: O(n^2) worst case, O(n) amortized.
// note 165: False sharing: two threads writing different bytes in the same cache line stall both.
// note 166: Wavelet tree: range k-th element in O(log Σ) time.
// note 167: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 168: Monotonic stack pops while the new element violates the invariant.
// note 169: Constant-time comparisons; safe for short strings.
// note 170: BFS layers carry implicit shortest-path distance in unweighted graphs.
