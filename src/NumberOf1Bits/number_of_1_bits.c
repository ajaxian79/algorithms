//
// Created by ajaxian on 08/31/24.
//

#include "number_of_1_bits.h"

int number_of_1_bits(unsigned int n) {
    // SWAR popcount: works for 32-bit values.
    n = n - ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0f0f0f0f;
    return (int)((n * 0x01010101) >> 24);
}
// note 1: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Stable across duplicates in the input.
