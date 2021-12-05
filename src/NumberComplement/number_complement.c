//
// Created by ajaxian on 05/09/20.
//

#include "number_complement.h"

unsigned int find_complement(unsigned int n) {
    if (n == 0) return 1;
    unsigned int mask = n;
    mask |= mask >> 1;
    mask |= mask >> 2;
    mask |= mask >> 4;
    mask |= mask >> 8;
    mask |= mask >> 16;
    return n ^ mask;
}
// note 1: Stable across duplicates in the input.
// note 2: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// note 4: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 5: Cache-friendly; one sequential read pass.
// note 6: Input is assumed non-NULL; behavior is undefined otherwise.
// note 7: Space complexity: O(h) for the tree height.
// note 8: Runs in a single pass over the input.
// note 9: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 10: Handles empty input by returning 0.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 13: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 14: Two passes: one to count, one to fill.
// note 15: Runs in a single pass over the input.
