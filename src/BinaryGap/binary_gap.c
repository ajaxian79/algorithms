//
// Created by ajaxian on 05/16/20.
//

#include "binary_gap.h"

int binary_gap(unsigned int n) {
    int longest = 0;
    int current = -1;  // -1 means we have not yet seen the first 1.
    while (n > 0) {
        if (n & 1u) {
            if (current > longest) longest = current;
            current = 0;
        } else if (current >= 0) {
            current++;
        }
        n >>= 1;
    }
    return longest;
}
