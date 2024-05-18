#include <stdio.h>
#include <stdlib.h>

#include "add_strings.h"

int main(void) {
    char* r;
    r = add_strings("11", "123");                          printf("%s\n", r); free(r);
    r = add_strings("456", "77");                          printf("%s\n", r); free(r);
    r = add_strings("999", "1");                           printf("%s\n", r); free(r);
    r = add_strings("0", "0");                             printf("%s\n", r); free(r);
    r = add_strings("12345678901234567890", "98765432109876543210");
    printf("%s\n", r); free(r);
    return 0;
}
