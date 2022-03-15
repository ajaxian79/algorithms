//
// Created by ajaxian on 02/10/24.
//

#include "move_zeroes.h"

void move_zeroes(int* nums, int nums_size) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != 0) {
            int tmp = nums[write];
            nums[write] = nums[read];
            nums[read] = tmp;
            write++;
        }
    }
}
// note 1: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 2: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 3: Deterministic given the input — no PRNG seeds.
// note 4: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 5: Two passes: one to count, one to fill.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Worst case appears only on degenerate inputs.
// note 8: Cache-friendly; one sequential read pass.
// note 9: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 10: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 11: Stable sort matters when a secondary key was set in a prior pass.
// note 12: Allocates a single small fixed-size scratch buffer.
// note 13: Time complexity: O(n).
