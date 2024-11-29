//
// Created by ajaxian on 11/13/23.
//

#include "median.h"
#ifdef __APPLE__
#include <stdlib.h>
#else
#include <malloc.h>
#endif

double findMedianSortedArrays(int* nums1, int nums1_size, int* nums2, int nums2_size) {

    int* stitch = malloc(sizeof(int)*(nums1_size+nums2_size));

    int** left = &nums1;
    int len_left = nums1_size;
    int** right = &nums2;
    int len_right = nums2_size;

    if ((*left)[0] > (*right)[0]) {
        left = &nums2;
        len_left = nums2_size;
        right = &nums1;
        len_right = nums1_size;
    }

    int left_index = len_left / 2;

    int new_length = 0;

    // Find the left stitch point;
    while(left_index >= 0 && left_index < len_left && (*left)[left_index] < (*right)[0]) {
        left_index--;
    }

    new_length += left_index;

    if (left_index > 0) {
        int excess_left_padding = left_index;

        // Find the right stitch point
        int right_index = 0;
        int len_stitch = 0;
        int right_padding_from_left = 0;

        while(right_index < len_right || (left_index-excess_left_padding) < len_left) {
            if (((left_index-excess_left_padding) < len_left && right_index >= len_right) || (*left)[(left_index-excess_left_padding)] < (*right)[right_index]) {
                stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                len_stitch++;
                left_index++;
                new_length++;
            } else if ((right_index < len_right && (left_index-excess_left_padding) >= len_left) || (*left)[(left_index-excess_left_padding)] > (*right)[right_index]) {
                stitch[len_stitch] = (*right)[right_index];
                len_stitch++;
                right_index++;

                if (right_index >= len_right) {
                    while((left_index-excess_left_padding) < len_left) {
                        stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                        len_stitch++;
                        left_index++;
                    }
                }
            } else {
                stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                len_stitch++;

                if ((left_index-excess_left_padding) < len_left) {
                    left_index++;
                }

                if (right_index < len_right) {
                    right_index++;
                    right_padding_from_left--;
                }
            }

            new_length++;
        }

        int excess_right_padding = len_right - right_index;

        new_length += excess_right_padding-1;

        int new_mid_index = (new_length-1)/2;
        int has_remainder = (new_length-1)%2 > 0 ? 1 : 0;

        double median;

        if (new_mid_index < excess_left_padding) {
            // Median is in left array
            median = (*left)[new_mid_index];

            if (has_remainder == 1) {
                if (new_mid_index+1 < excess_left_padding) {
                    median += (*left)[new_mid_index+1];
                } else {
                    median += stitch[0];
                }
                median /= 2.0;
            }
        } else if (new_mid_index < excess_left_padding + len_stitch) {
            // Median is in stitch array
            new_mid_index -= excess_left_padding;

            median = stitch[new_mid_index];

            if (has_remainder == 1) {
                if (new_mid_index+1 < len_stitch) {
                    median += stitch[new_mid_index+1];
                } else {
                    median += (*right)[len_right-excess_right_padding];
                }
                median /= 2.0;
            }
        } else {
            // Median is in right array
            new_mid_index -= excess_left_padding + len_stitch;
            new_mid_index = len_right - new_mid_index;

            median = (*right)[new_mid_index];

            if (has_remainder == 1) {
                median += *right[new_mid_index+1];
                median /= 2.0;
            }
        }

        free(stitch);
        return median;
    } else {
        free(stitch);
        return -1.0;
    }
}
