#include <stdio.h>
#include <stdlib.h>

#include "add_binary.h"

int main(void) {
    char* r;
    r = add_binary("11", "1");           printf("%s\n", r); free(r);
    r = add_binary("1010", "1011");      printf("%s\n", r); free(r);
    r = add_binary("0", "0");            printf("%s\n", r); free(r);
    r = add_binary("1111", "1");         printf("%s\n", r); free(r);
    return 0;
}
