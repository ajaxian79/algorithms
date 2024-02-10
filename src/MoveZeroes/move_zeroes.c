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
