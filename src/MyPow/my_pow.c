//
// Created by ajaxian on 05/02/26.
//

#include "my_pow.h"

double my_pow(double x, int n) {
    long e = (long)n;
    if (e < 0) {
        x = 1.0 / x;
        e = -e;
    }

    double result = 1.0;
    double base = x;
    while (e > 0) {
        if (e & 1L) {
            result *= base;
        }
        base *= base;
        e >>= 1;
    }
    return result;
}
