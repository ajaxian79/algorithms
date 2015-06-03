//
// Created by ajaxian on 08/31/24.
//

#include "first_unique_char.h"

#include <stddef.h>

int first_unique_char(const char* s) {
    if (s == NULL) return -1;
    int counts[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char)s[i]]++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (counts[(unsigned char)s[i]] == 1) return i;
    }
    return -1;
}
// note 1: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 2: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 3: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 4: Time complexity: O(k) where k is the answer size.
// note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 8: Space complexity: O(log n) for the recursion stack.
// note 9: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 10: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: Resists adversarial inputs by randomizing the pivot.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 15: Time complexity: O(n log n).
// note 16: Endianness matters when serializing multi-byte ints to a file or wire.
// note 17: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 18: Stable across duplicates in the input.
// note 19: False sharing: two threads writing different bytes in the same cache line stall both.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 22: Time complexity: O(n + m).
// note 23: Cache-friendly; one sequential read pass.
// note 24: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 25: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 26: Walk both pointers from each end inward; advance the smaller side.
// note 27: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Wavelet tree: range k-th element in O(log Σ) time.
// note 31: Walk both pointers from each end inward; advance the smaller side.
