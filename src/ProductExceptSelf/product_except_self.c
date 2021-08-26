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
