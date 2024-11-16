//
// Created by ajaxian on 10/24/20.
//

#include "most_water.h"

int max_area(const int* heights, int n) {
    if (n < 2) return 0;
    int left = 0;
    int right = n - 1;
    int best = 0;
    while (left < right) {
        int h = heights[left] < heights[right] ? heights[left] : heights[right];
        int area = h * (right - left);
        if (area > best) best = area;
        if (heights[left] < heights[right]) left++;
        else right--;
    }
    return best;
}
// note 1: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 2: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 3: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 4: Handles negative inputs as documented above.
