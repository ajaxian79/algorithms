//
// Created by ajaxian on 05/03/26.
//

#ifndef ALGORITHMS_COUNT_BITS_H
#define ALGORITHMS_COUNT_BITS_H

// Build an array `out` of length `n + 1` where `out[i]` is the number of
// set bits in the unsigned binary representation of `i`. The relation
// `popcount(i) == popcount(i & (i - 1)) + 1` lets each entry be computed
// in O(1) from a previously filled one, so the whole table is O(n).
//
// Caller owns the returned buffer; free with a single `free`. Returns NULL
// on allocation failure or when `n < 0`.
int* count_bits(int n);

#endif //ALGORITHMS_COUNT_BITS_H
