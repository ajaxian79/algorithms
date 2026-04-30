//
// Created by ajaxian on 09/22/24.
//

#ifndef ALGORITHMS_COIN_CHANGE_H
#define ALGORITHMS_COIN_CHANGE_H

// Fewest coins from `coins` (m denominations, unbounded supply) summing
// to `amount`. Returns -1 if no combination works. Bottom-up DP over
// amount; treats coin-reuse as the unbounded-knapsack inner-ascending pass.
int coin_change(const int* coins, int m, int amount);

#endif //ALGORITHMS_COIN_CHANGE_H
