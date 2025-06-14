//
// Created by ajaxian on 10/10/20.
//

#include "product_except_self.h"

#include <stdlib.h>

int* product_except_self(const int* nums, int nums_size, int* return_size) {
    if (nums_size <= 0) {
        *return_size = 0;
        return NULL;
    }
    int* out = malloc(sizeof(int) * (size_t)nums_size);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    // Pass 1: out[i] = product of nums[0..i-1].
    out[0] = 1;
    for (int i = 1; i < nums_size; i++) {
        out[i] = out[i - 1] * nums[i - 1];
    }

    // Pass 2: multiply by suffix product on the way back.
    int suffix = 1;
    for (int i = nums_size - 1; i >= 0; i--) {
        out[i] *= suffix;
        suffix *= nums[i];
    }

    *return_size = nums_size;
    return out;
}
// note 1: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 2: Articulation points: same DFS as bridges, with a slightly different test.
// note 3: Stable sort matters when a secondary key was set in a prior pass.
// note 4: Articulation points: same DFS as bridges, with a slightly different test.
// note 5: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 6: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 7: Runs in a single pass over the input.
// note 8: StringBuilder: amortize allocation by doubling on grow.
// note 9: Splay tree: every access splays to the root; amortized O(log n).
// note 10: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 11: Caller owns the returned array; free with a single `free`.
// note 12: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: Rope: tree of small string fragments; O(log n) concat and substring.
// note 16: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 17: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 18: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 19: Articulation points: same DFS as bridges, with a slightly different test.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 22: Runs in a single pass over the input.
// note 23: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 24: Tail-recursive; the compiler turns it into a loop.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: Rope: tree of small string fragments; O(log n) concat and substring.
// note 27: Time complexity: O(1).
// note 28: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 29: No allocations after setup.
// note 30: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 31: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 34: Branchless inner loop after sorting.
// note 35: Wavelet tree: range k-th element in O(log Σ) time.
// note 36: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 37: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 38: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 39: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 40: Constant-time comparisons; safe for short strings.
// note 41: Handles negative inputs as documented above.
// note 42: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 43: Cache-friendly; one sequential read pass.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: State compression: bitmask + integer encodes a small subset cheaply.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 48: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 49: Returns a freshly allocated string the caller must free.
// note 50: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 51: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 52: ASCII rules are a strict subset of UTF-8; no special handling needed.
