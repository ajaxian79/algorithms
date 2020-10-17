//
// Created by ajaxian on 10/17/20.
//

#ifndef ALGORITHMS_ROTATE_ARRAY_H
#define ALGORITHMS_ROTATE_ARRAY_H

// Rotate the array right by k steps in place. Triple-reverse trick:
// reverse the whole array, then the first k, then the last n-k.
void rotate_array(int* nums, int nums_size, int k);

#endif //ALGORITHMS_ROTATE_ARRAY_H
