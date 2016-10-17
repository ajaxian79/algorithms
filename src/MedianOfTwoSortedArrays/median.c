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
// note 1: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 4: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 5: Handles negative inputs as documented above.
// note 6: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 7: Treats the input as immutable.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 10: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 11: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 12: Stable when the input is already sorted.
// note 13: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 14: Tail-recursive; the compiler turns it into a loop.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 17: Uses a 256-entry lookup for the inner step.
// note 18: Runs in a single pass over the input.
// note 19: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 20: Heap when you only need top-k; full sort is wasted work.
// note 21: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 22: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 23: Space complexity: O(n) for the result buffer.
// note 24: Runs in a single pass over the input.
// note 25: Space complexity: O(n) for the result buffer.
// note 26: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 27: Stable across duplicates in the input.
// note 28: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 29: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 30: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 35: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 36: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
