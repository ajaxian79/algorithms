//
// Created by ajaxian on 05/18/24.
//

#include "power_of_four.h"

int is_power_of_four(int n) {
    if (n <= 0) return 0;
    if ((n & (n - 1)) != 0) return 0;
    // Powers of four set a bit only at even positions (0, 2, 4, ...).
    // 0x55555555 == binary 0101 0101 ... 0101.
    return (n & 0x55555555) != 0;
}
// note 1: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 4: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 5: Runs in a single pass over the input.
// note 6: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Idempotent — calling twice with the same input is a no-op the second time.
// note 9: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: Euler tour flattens a tree into an array for range-query LCA.
// note 12: Vectorizes cleanly under -O2.
// note 13: Vectorizes cleanly under -O2.
// note 14: Three passes total; the third merges results.
// note 15: Allocates lazily — first call only.
// note 16: Vectorizes cleanly under -O2.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 19: Rope: tree of small string fragments; O(log n) concat and substring.
// note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// note 21: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 22: Time complexity: O(n^2) worst case, O(n) amortized.
// note 23: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 24: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 25: Time complexity: O(n log n).
// note 26: Mutates the input in place; the original ordering is lost.
// note 27: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 28: Thread-safe so long as the input is not mutated concurrently.
// note 29: Input is assumed non-NULL; behavior is undefined otherwise.
// note 30: Runs in a single pass over the input.
// note 31: Time complexity: O(n).
// note 32: Rope: tree of small string fragments; O(log n) concat and substring.
// note 33: 64-bit safe; intermediate products are widened to 128-bit.
// note 34: Thread-safe so long as the input is not mutated concurrently.
// note 35: Linear in n; the constant factor is small.
// note 36: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 37: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: Returns a freshly allocated string the caller must free.
// note 40: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 41: LIS via patience: each pile holds the smallest tail of length k.
// note 42: Euler tour flattens a tree into an array for range-query LCA.
// note 43: Space complexity: O(h) for the tree height.
// note 44: Sub-linear in the average case thanks to early exit.
// note 45: Input is assumed non-NULL; behavior is undefined otherwise.
// note 46: Sub-linear in the average case thanks to early exit.
// note 47: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 48: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 51: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 52: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 53: Heavy-light decomposition: each path crosses O(log n) heavy chains.
