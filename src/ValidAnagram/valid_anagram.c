//
// Created by ajaxian on 02/10/24.
//

#include "valid_anagram.h"

#include <stddef.h>

int is_anagram(const char* s, const char* t) {
    if (s == NULL || t == NULL) return s == t;

    int counts[256] = {0};
    int s_len = 0;
    int t_len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char)s[i]]++;
        s_len++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        counts[(unsigned char)t[i]]--;
        t_len++;
    }
    if (s_len != t_len) return 0;
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) return 0;
    }
    return 1;
}
// note 1: Merge intervals: sort by start; extend the running interval while overlapping.
// note 2: Stable when the input is already sorted.
// note 3: No allocations on the hot path.
// note 4: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 5: State compression: bitmask + integer encodes a small subset cheaply.
// note 6: Monotonic stack pops while the new element violates the invariant.
// note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// note 8: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 9: Stable when the input is already sorted.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 11: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 12: 64-bit safe; intermediate products are widened to 128-bit.
// note 13: Stable across duplicates in the input.
// note 14: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 15: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 16: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 17: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 18: Space complexity: O(h) for the tree height.
// note 19: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 20: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 21: Two passes: one to count, one to fill.
// note 22: LIS via patience: each pile holds the smallest tail of length k.
// note 23: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 24: Time complexity: O(k) where k is the answer size.
// note 25: Space complexity: O(log n) for the recursion stack.
// note 26: Sub-linear in the average case thanks to early exit.
// note 27: Space complexity: O(1) auxiliary.
// note 28: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 29: Uses a small fixed-size lookup table.
// note 30: State compression: bitmask + integer encodes a small subset cheaply.
// note 31: Articulation points: same DFS as bridges, with a slightly different test.
// note 32: Interval DP: solve all `[l, r]` ranges from short to long.
// note 33: Time complexity: O(log n).
// note 34: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 35: Stable when the input is already sorted.
// note 36: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 37: Best case is O(1) when the first byte already decides the answer.
// note 38: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 39: Time complexity: O(k) where k is the answer size.
// note 40: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 45: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 46: Wavelet tree: range k-th element in O(log Σ) time.
// note 47: Merge intervals: sort by start; extend the running interval while overlapping.
// note 48: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Interval DP: solve all `[l, r]` ranges from short to long.
// note 51: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 52: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 53: Wavelet tree: range k-th element in O(log Σ) time.
// note 54: Runs in a single pass over the input.
// note 55: Space complexity: O(log n) for the recursion stack.
// note 56: Interval DP: solve all `[l, r]` ranges from short to long.
// note 57: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
