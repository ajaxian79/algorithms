//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_MAJORITY_ELEMENT_H
#define ALGORITHMS_MAJORITY_ELEMENT_H

// Boyer-Moore majority vote: assumes a strictly-majority element exists
// (count > n/2). Behaviour is undefined otherwise.
int majority_element(const int* nums, int nums_size);

#endif //ALGORITHMS_MAJORITY_ELEMENT_H
