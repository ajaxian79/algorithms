//
// Created by ajaxian on 05/18/24.
//

#include "power_of_four.h"

int is_power_of_four(int n) {
    if (n <= 0) return 0;
    if ((n & (n - 1)) != 0) return 0;
    // Powers of four set a bit only at even positions (0, 2, 4, ...).
    // 0x55555555 == binary 0101 0101 ... 0101.
    return (n & 0x55555555) != 0;
}
// note 1: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 4: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 5: Runs in a single pass over the input.
