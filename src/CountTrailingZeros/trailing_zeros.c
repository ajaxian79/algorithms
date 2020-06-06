//
// Created by ajaxian on 06/06/20.
//

#include "trailing_zeros.h"

int trailing_zeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
