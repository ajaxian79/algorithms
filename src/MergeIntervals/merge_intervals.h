//
// Created by ajaxian on 08/22/20.
//

#ifndef ALGORITHMS_MERGE_INTERVALS_H
#define ALGORITHMS_MERGE_INTERVALS_H

// Merge a set of [start, end] intervals so no two in the result overlap.
// `intervals` is laid out flat as [s0,e0,s1,e1,...] of length 2*n. Returns
// a heap buffer of the same flat shape, *return_count is set to the number
// of merged intervals.
int* merge_intervals(int* intervals, int n, int* return_count);

#endif //ALGORITHMS_MERGE_INTERVALS_H
