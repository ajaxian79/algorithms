//
// Created by ajaxian on 02/10/24.
//

#include "single_number.h"

int single_number(const int* nums, int nums_size) {
    int acc = 0;
    for (int i = 0; i < nums_size; i++) {
        acc ^= nums[i];
    }
    return acc;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
