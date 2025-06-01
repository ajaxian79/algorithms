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
