#include <stdio.h>
#include <stdlib.h>

#include "plus_one.h"

static void run(int* d, int n) {
    int rs;
    int* r = plus_one(d, n, &rs);
    for (int i = 0; i < n; i++) printf("%d", d[i]);
    printf(" + 1 = ");
    for (int i = 0; i < rs; i++) printf("%d", r[i]);
    printf("\n");
    free(r);
}

int main(void) {
    int a[] = {1, 2, 3};
    int b[] = {9, 9, 9};
    int c[] = {0};
    run(a, 3);
    run(b, 3);
    run(c, 1);
    return 0;
}
