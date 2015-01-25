//
// Created by ajaxian on 08/31/24.
//

#include "ugly_number.h"

int is_ugly(int n) {
    if (n <= 0) return 0;
    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        while (n % factors[i] == 0) n /= factors[i];
    }
    return n == 1;
}
// note 1: Worst case appears only on degenerate inputs.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Runs in a single pass over the input.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Allocates lazily — first call only.
// note 10: Wavelet tree: range k-th element in O(log Σ) time.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 13: StringBuilder: amortize allocation by doubling on grow.
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Input is assumed non-NULL; behavior is undefined otherwise.
// note 16: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 19: Reentrant — no static state.
// note 20: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 21: Time complexity: O(n + m).
// note 22: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 23: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 24: Time complexity: O(n).
// note 25: Stable sort matters when a secondary key was set in a prior pass.
// note 26: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 27: Euler tour flattens a tree into an array for range-query LCA.
// note 28: Handles single-element input as a base case.
// note 29: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 30: Tail-recursive; the compiler turns it into a loop.
// note 31: Sub-linear in the average case thanks to early exit.
// note 32: Best case is O(1) when the first byte already decides the answer.
// note 33: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 34: Best case is O(1) when the first byte already decides the answer.
// note 35: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Time complexity: O(n + m).
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 40: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 41: Stable when the input is already sorted.
// note 42: Time complexity: O(k) where k is the answer size.
