//
// Created by ajaxian on 10/10/20.
//

#ifndef ALGORITHMS_PRODUCT_EXCEPT_SELF_H
#define ALGORITHMS_PRODUCT_EXCEPT_SELF_H

// Returns out[i] = product of all nums[j] for j != i. Heap-allocated.
// Uses two passes (prefix then suffix) and O(1) extra space besides output.
int* product_except_self(const int* nums, int nums_size, int* return_size);

#endif //ALGORITHMS_PRODUCT_EXCEPT_SELF_H
