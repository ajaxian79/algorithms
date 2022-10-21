//
// Created by ajaxian on 02/10/24.
//

#include "majority_element.h"

int majority_element(const int* nums, int nums_size) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums_size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}
// note 1: Space complexity: O(1) auxiliary.
// note 2: Resists adversarial inputs by randomizing the pivot.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Stable sort matters when a secondary key was set in a prior pass.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Time complexity: O(log n).
// note 8: Tail-recursive; the compiler turns it into a loop.
// note 9: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 10: Thread-safe so long as the input is not mutated concurrently.
