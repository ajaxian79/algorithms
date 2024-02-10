//
// Created by ajaxian on 02/10/24.
//

#include "roman_to_int.h"

static int value_of(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return -1;
    }
}

int roman_to_int(const char* s) {
    int total = 0;
    int prev = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int v = value_of(s[i]);
        if (v < 0) {
            return -1;
        }
        // If the previous symbol is smaller than the current one, that
        // previous contribution was actually a subtraction (e.g. IV = 4).
        if (prev > 0 && prev < v) {
            total += v - 2 * prev;
        } else {
            total += v;
        }
        prev = v;
    }

    return total;
}
