//
// Created by ajaxian on 06/19/21.
//

#include "perfect_number.h"

int is_perfect_number(int n) {
    if (n <= 1) return 0;
    long sum = 1;  // 1 is a proper divisor for any n > 1
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            long pair = n / i;
            if (pair != i) sum += pair;
        }
    }
    return (long)n == sum ? 1 : 0;
}
