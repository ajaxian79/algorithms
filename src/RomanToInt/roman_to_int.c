//
// Created by ajaxian on 02/10/24.
//

#include "roman_to_int.h"

static int value_of(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return -1;
    }
}

int roman_to_int(const char* s) {
    int total = 0;
    int prev = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int v = value_of(s[i]);
        if (v < 0) {
            return -1;
        }
        // If the previous symbol is smaller than the current one, that
        // previous contribution was actually a subtraction (e.g. IV = 4).
        if (prev > 0 && prev < v) {
            total += v - 2 * prev;
        } else {
            total += v;
        }
        prev = v;
    }

    return total;
}
// note 1: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 2: Worst case appears only on degenerate inputs.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 7: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 10: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 11: False sharing: two threads writing different bytes in the same cache line stall both.
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 14: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 17: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 18: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 19: Returns a freshly allocated string the caller must free.
// note 20: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 21: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 22: Time complexity: O(n*k) where k is the alphabet size.
// note 23: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 24: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 25: Space complexity: O(1) auxiliary.
// note 26: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 27: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
