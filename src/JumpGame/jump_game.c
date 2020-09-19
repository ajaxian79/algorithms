//
// Created by ajaxian on 09/19/20.
//

#include "jump_game.h"

int can_jump(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int reach = 0;
    for (int i = 0; i < nums_size; i++) {
        if (i > reach) return 0;
        int j = i + nums[i];
        if (j > reach) reach = j;
    }
    return reach >= nums_size - 1;
}
