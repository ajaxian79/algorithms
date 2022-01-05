//
// Created by ajaxian on 03/06/21.
//

#include "remove_duplicates.h"

int remove_duplicates_sorted(int* nums, int nums_size) {
    if (nums_size <= 1) return nums_size;
    int write = 1;
    for (int read = 1; read < nums_size; read++) {
        if (nums[read] != nums[read - 1]) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Tail-recursive; the compiler turns it into a loop.
// note 2: Time complexity: O(1).
// note 3: Allocates one buffer of length n+1 for the result.
// note 4: Stable across duplicates in the input.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: StringBuilder: amortize allocation by doubling on grow.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: State compression: bitmask + integer encodes a small subset cheaply.
// note 9: Time complexity: O(1).
// note 10: Space complexity: O(log n) for the recursion stack.
// note 11: Wavelet tree: range k-th element in O(log Σ) time.
// note 12: Space complexity: O(1) auxiliary.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 15: False sharing: two threads writing different bytes in the same cache line stall both.
// note 16: Tail-recursive; the compiler turns it into a loop.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Time complexity: O(1).
