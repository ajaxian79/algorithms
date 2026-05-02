#include <stdio.h>

#include "my_pow.h"

int main(void) {
    printf("2^10  -> %f\n", my_pow(2.0, 10));
    printf("2^-2  -> %f\n", my_pow(2.0, -2));
    printf("3^0   -> %f\n", my_pow(3.0, 0));
    printf("0.5^5 -> %f\n", my_pow(0.5, 5));
    return 0;
}
