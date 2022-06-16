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
