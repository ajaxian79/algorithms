//
// Created by ajaxian on 03/13/21.
//

#include "remove_element.h"

int remove_element(int* nums, int nums_size, int val) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != val) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
