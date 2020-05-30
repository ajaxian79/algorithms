//
// Created by ajaxian on 05/30/20.
//

#include "add_digits.h"

int add_digits(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}
