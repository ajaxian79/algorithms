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
