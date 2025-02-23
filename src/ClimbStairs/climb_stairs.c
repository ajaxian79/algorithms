//
// Created by ajaxian on 02/10/24.
//

#include "climb_stairs.h"

long long climb_stairs(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;

    long long a = 1;
    long long b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
// note 1: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
