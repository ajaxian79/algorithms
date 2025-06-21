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
