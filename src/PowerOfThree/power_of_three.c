//
// Created by ajaxian on 05/18/24.
//

#include "power_of_three.h"

int is_power_of_three(int n) {
    if (n < 1) return 0;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}
