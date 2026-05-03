#include <stdio.h>
#include <stdlib.h>

#include "infix_to_postfix.h"

int main(void) {
    const char* cases[] = {
        "a+b*c",
        "(a+b)*c",
        "a+b*c^d-e",
        "3+4*2/(1-5)^2^3",
        NULL,
    };
    for (int i = 0; cases[i]; i++) {
        char* p = infix_to_postfix(cases[i]);
        printf("%-22s -> %s\n", cases[i], p ? p : "(null)");
        free(p);
    }
    return 0;
}
