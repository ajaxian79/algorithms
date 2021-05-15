//
// Created by ajaxian on 05/15/21.
//

#ifndef ALGORITHMS_SUBSETS_H
#define ALGORITHMS_SUBSETS_H

// All 2^n subsets of distinct nums. Returns a heap array of subsets, each
// itself a heap array; subset_sizes is heap-allocated. *return_count = 2^n.
int** subsets(const int* nums, int n, int* return_count, int** subset_sizes);

#endif //ALGORITHMS_SUBSETS_H
