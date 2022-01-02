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
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 9: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 10: Input is assumed non-NULL; behavior is undefined otherwise.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 13: Branchless inner loop after sorting.
// note 14: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 15: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 16: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
