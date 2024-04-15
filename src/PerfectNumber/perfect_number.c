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
// note 1: Linear in n; the constant factor is small.
// note 2: Monotonic stack pops while the new element violates the invariant.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
