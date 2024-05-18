#include <stdio.h>
#include <stdlib.h>

#include "multiply_strings.h"

int main(void) {
    char* r;
    r = multiply_strings("2", "3");                                printf("%s\n", r); free(r);
    r = multiply_strings("123", "456");                            printf("%s\n", r); free(r);
    r = multiply_strings("0", "12345");                            printf("%s\n", r); free(r);
    r = multiply_strings("498828660196", "840477629533");          printf("%s\n", r); free(r);
    return 0;
}
