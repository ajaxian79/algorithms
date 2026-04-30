//
// Created by ajaxian on 02/27/25.
//

#ifndef ALGORITHMS_DAILY_TEMPERATURES_H
#define ALGORITHMS_DAILY_TEMPERATURES_H

// For each index `i`, the number of days you'd wait until a warmer
// temperature appears, or 0 if none. Returns a freshly malloc'd array
// of length n; caller frees with a single `free`. NULL on n <= 0.
int* days_until_warmer(const int* temps, int n);

#endif //ALGORITHMS_DAILY_TEMPERATURES_H
