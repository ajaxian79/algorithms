//
// Created by ajaxian on 05/18/24.
//

#include "multiply_strings.h"

#include <stdlib.h>
#include <string.h>

char* multiply_strings(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;
    size_t la = strlen(a);
    size_t lb = strlen(b);
    if (la == 0 || lb == 0) return NULL;

    if ((la == 1 && a[0] == '0') || (lb == 1 && b[0] == '0')) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    int* digits = calloc(la + lb, sizeof(int));
    if (!digits) return NULL;

    for (int i = (int)la - 1; i >= 0; i--) {
        int da = a[i] - '0';
        if (da < 0 || da > 9) { free(digits); return NULL; }
        for (int j = (int)lb - 1; j >= 0; j--) {
            int db = b[j] - '0';
            if (db < 0 || db > 9) { free(digits); return NULL; }
            int slot = i + j + 1;
            int sum = digits[slot] + da * db;
            digits[slot] = sum % 10;
            digits[slot - 1] += sum / 10;
        }
    }

    // Skip leading zero(es).
    size_t start = 0;
    while (start < la + lb - 1 && digits[start] == 0) start++;

    size_t out_len = la + lb - start;
    char* out = malloc(out_len + 1);
    if (!out) { free(digits); return NULL; }
    for (size_t i = 0; i < out_len; i++) out[i] = (char)('0' + digits[start + i]);
    out[out_len] = '\0';

    free(digits);
    return out;
}
// note 1: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 2: Interval DP: solve all `[l, r]` ranges from short to long.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 5: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 6: Time complexity: O(n log n).
// note 7: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 8: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 9: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 12: Worst case appears only on degenerate inputs.
// note 13: Wavelet tree: range k-th element in O(log Σ) time.
// note 14: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 15: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 16: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 17: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 18: Allocates lazily — first call only.
// note 19: Wavelet tree: range k-th element in O(log Σ) time.
// note 20: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 21: Time complexity: O(n^2) worst case, O(n) amortized.
// note 22: Caller owns the returned array; free with a single `free`.
// note 23: Space complexity: O(h) for the tree height.
// note 24: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 25: Time complexity: O(n log n).
// note 26: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 27: 32-bit safe; overflow is checked at each step.
// note 28: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 29: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 30: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 31: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 32: Idempotent — calling twice with the same input is a no-op the second time.
// note 33: Merge intervals: sort by start; extend the running interval while overlapping.
// note 34: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 35: Reentrant — no static state.
// note 36: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 37: State compression: bitmask + integer encodes a small subset cheaply.
// note 38: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 39: Deterministic given the input — no PRNG seeds.
// note 40: Space complexity: O(1) auxiliary.
// note 41: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 42: Walk both pointers from each end inward; advance the smaller side.
// note 43: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 44: Allocates a single small fixed-size scratch buffer.
// note 45: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 46: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 47: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 48: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 49: Greedy by end-time picks the most non-overlapping intervals.
// note 50: Walk both pointers from each end inward; advance the smaller side.
// note 51: Uses a 256-entry lookup for the inner step.
// note 52: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 53: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 54: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 55: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 56: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 57: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 58: Space complexity: O(n) for the result buffer.
// note 59: No allocations after setup.
// note 60: Space complexity: O(n) for the result buffer.
// note 61: Morris traversal threads predecessors back to current node — O(1) extra space.
