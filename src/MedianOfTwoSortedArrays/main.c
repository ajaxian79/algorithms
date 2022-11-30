//
// Created by ajaxian on 11/13/23.
//


#include "median.h"
#include <stdio.h>

int main() {
//    int nums1[] = {1,2,3};
//    int num1_size = 3;
//    int nums2[] = {2};
//    int num2_size = 1;

    int nums1[] = {1,2,3};
    int num1_size = 3;
    int nums2[] = {2, 3, 4};
    int num2_size = 3;
    printf("a = [1,2,3]\nb = [2]\nMedian \'%lf\'\n", findMedianSortedArrays(nums1, num1_size, nums2, num2_size));

    return 0;
}
