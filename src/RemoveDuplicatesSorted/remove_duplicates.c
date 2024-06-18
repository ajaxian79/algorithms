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
