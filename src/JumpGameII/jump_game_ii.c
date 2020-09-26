//
// Created by ajaxian on 09/26/20.
//

#include "jump_game_ii.h"

int jump_min(const int* nums, int nums_size) {
    if (nums_size <= 1) return 0;
    int jumps = 0;
    int current_end = 0;
    int farthest = 0;
    for (int i = 0; i < nums_size - 1; i++) {
        int reach = i + nums[i];
        if (reach > farthest) farthest = reach;
        if (i == current_end) {
            jumps++;
            current_end = farthest;
            if (current_end >= nums_size - 1) break;
        }
    }
    return jumps;
}
