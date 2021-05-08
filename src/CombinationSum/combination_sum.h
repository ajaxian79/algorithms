//
// Created by ajaxian on 05/08/21.
//

#ifndef ALGORITHMS_COMBINATION_SUM_H
#define ALGORITHMS_COMBINATION_SUM_H

// All distinct combinations of `candidates` that sum to `target`. Each
// candidate may be used unlimited times. `candidates` should be distinct
// positive integers; sorted by caller (or sort done internally).
//
// Returns a heap array of int* (each combo own heap), and a heap int* for
// each combo's length. *return_count is the number of combos.
int** combination_sum(int* candidates, int n, int target,
                      int* return_count, int** combo_sizes);

#endif //ALGORITHMS_COMBINATION_SUM_H
